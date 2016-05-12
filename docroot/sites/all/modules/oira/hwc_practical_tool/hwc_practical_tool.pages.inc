<?php

function _hwc_taxonomy_filter_options_list($vocabulary, $default = array()) {
  $vocabulary = taxonomy_vocabulary_machine_name_load($vocabulary);
  if (!empty($vocabulary)) {
    $terms = taxonomy_term_load_multiple(array(), array('vid' => $vocabulary->vid));
    foreach($terms as $key => $term) {
      $default[$term->tid] = $term->name;
    }
  }
  return $default;
}


// We need this function because it is used within modules from hwc website.
function _hwc_practical_tool_get_req_param($form_state, $name, $default = NULL) {
  if (!empty($form_state['values'][$name])) {
    $ret = $form_state['values'][$name];
  }
  if (!empty($_GET[$name])) {
    if (is_array($_GET[$name])) {
      $ret = array();
      foreach($_GET[$name] as $v) {
        $ret[] = check_plain($v);
      }
    }
    else {
      $ret = check_plain($_GET[$name]);
    }
  }
  if (!empty($ret)) {
    if (is_array($ret)) {
      $ret = array_filter($ret);
    }
    return $ret;
  }
  return $default;
}

function _hwc_practical_tool_facet_value_clear(&$facets) {
  if (!empty($facets)) {
    foreach ($facets as &$facet_field) {
      foreach ($facet_field as &$facet_value) {
        // The filters come wrapped in ".
        $facet_value['filter'] = trim($facet_value['filter'], '"');
      }
    }
  }
}

function hwc_practical_tool_menu_tools_form($form, $form_state) {
  drupal_set_title(t('Practical tools'));
  global $language;

  $text = _hwc_practical_tool_get_req_param($form_state, 'text');
  $selected_languages = _hwc_practical_tool_get_req_param($form_state, 'field_language:value', array($language->language));
  $sort = _hwc_practical_tool_get_req_param($form_state, 'sort', 'date');
  $selected_sectors = _hwc_practical_tool_get_req_param($form_state, 'field_sector', array(0));
  $selected_countries = _hwc_practical_tool_get_req_param($form_state, 'field_country', array(0));



  $form = array(
    '#action' => 'oira-tools',
    '#method' => 'GET',
    '#token' => FALSE,
    'top' => array(
      '#type' => 'container',
      '#attributes' => array('class' => array('col-md-12')),
    ),
    'left-column' => array(
      '#type' => 'container',
      '#attributes' => array('class' => array('col-md-3')),
    ),
    'content' => array(
      '#type' => 'container',
      '#attributes' => array('class' => array('col-md-9')),
    ),
  );
  $form['content']['text'] = array(
    '#type' => 'textfield',
    '#size' => 30,
    '#title' => t('Search'),
    '#maxlength' => 200,
    '#default_value' => $text,
    '#title_display' => 'invisible',
    '#attributes' => array('placeholder' => t('Search OiRA tools')),
    '#prefix' => '<div id="search" class="col-sm-6">',
  );
  $form['content']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Search'),
    '#suffix' => '</div>',
  );
  $form['content']['sort_fieldset'] = array(
    /* Needed so that the page passes Web Accessibility test */
    '#type' => 'fieldset',
    '#attributes' => array('class' => array('col-sm-6')),
  );
  $form['content']['sort_fieldset']['sort'] = array(
    '#type' => 'radios',
    '#title' => t('Sort by'),
    '#default_value' => $sort,
    '#options' => array('date' => t('Date'), 'alphabetically' => t('Alphabetically')),
  );

  $per_page = variable_get('hwc_tools_per_page', 10);
  $response = hwc_practical_tool_search($form_state, $per_page);
  $facets = array();
  if (!empty($response['search_api_facets'])) {
    $facets = $response['search_api_facets'];
    _hwc_practical_tool_facet_value_clear($facets);
  }
  if (!empty($facets['field_language:value'])) {
    $languages = osha_language_list_options(TRUE);
    $lang_options = array();
    foreach ($facets['field_language:value'] as $facet_value) {
      if (!empty($languages[$facet_value['filter']])) {
        $lang_options[$facet_value['filter']] = $languages[$facet_value['filter']] . ' ' . strtr('(@no)', array('@no' => $facet_value['count']));
      }
    }
    $form['left-column']['field_language:value'] = array(
      '#type' => 'checkboxes',
      '#options' => $lang_options,
      '#default_value' => $selected_languages ,
      '#title' => t('Tools are available in several languages'),
    );
  }

  if (!empty($facets['field_country'])) {
    $countries = _hwc_taxonomy_filter_options_list('country');
    $countries_options = array();
    foreach ($facets['field_country'] as $facet_value) {
      if (!empty($countries[$facet_value['filter']])) {
        $countries_options[$facet_value['filter']] = $countries[$facet_value['filter']] . ' ' . strtr('(@no)', array('@no' => $facet_value['count']));
      }
    }
    $form['left-column']['field_country'] = array(
      '#type' => 'checkboxes',
      '#options' => $countries_options,
      '#default_value' => $selected_countries ,
      '#title' => t('Country'),
    );
  }

  $nids = array();
  if (!empty($response['results'])) {
    foreach ($response['results'] as $row) {
      $nids[] = $row['fields']['nid'];
    }

    $nodes = node_load_multiple($nids);

    pager_default_initialize($response['result count'], $per_page);
    $pager_params = $_GET;
    unset($pager_params['page']);
    $form['content']['results'] = array(
      '#nids' => $nids,
      'results-native' => node_view_multiple($nodes, 'teaser', 0, $language->language),
      '#suffix' => theme('pager', array(
        'tags' => array('<', '<', '', '>', '>'),
        'quantity' => 9,
        'parameters' => $pager_params,
      )),
    );
  }
  else {
    $form['content']['results']['#markup'] = '<p class="no-results">' . t('No results found to match your search.') . '</p>';
  }

  $form['#attached']['js'] = array(
    drupal_get_path('module', 'hwc_practical_tool') . '/js/checkbox-submit.js',
  );

  return $form;
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function hwc_practical_tool_form_hwc_practical_tool_menu_tools_form_alter(&$form, $form_state) {
  // Unset the form_id and build_id in order not to have nasty urls.
  unset($form['form_id']);
  unset($form['form_build_id']);
}

function hwc_practical_tool_menu_tools_form_submit($form, &$form_state) {
  $form_state['rebuild'] = TRUE;
  $form_state['redirect'] = FALSE;
}

function hwc_practical_tool_search($form_state, $per_page = 10) {
  $facets_def = hwc_practical_tool_get_facets_def();

  $page = _hwc_practical_tool_get_req_param($form_state, 'page', 0);
  $text = _hwc_practical_tool_get_req_param($form_state, 'text');
  $sort = _hwc_practical_tool_get_req_param($form_state, 'sort', 'date');
  list($server, $query) = hwc_practical_tool_menu_tools_get_query();
  $query->condition('status', 1);
  $query->condition('type', 'practical_tool');
  $query->condition('language', 'en');
  $query->keys($text);
  $query->fields(array('title_field', 'body:value',
    'field_alternative_title', 'field_alternative_body:value'));
  $query->setOption('search_api_facets', $facets_def);
  foreach ($facets_def as $field_name => $facet_def) {
    $selected_values = _hwc_practical_tool_get_req_param($form_state, $field_name, array());
    if (!empty($selected_values) && is_array($selected_values)) {
      $filter = $query->createFilter($facet_def['operator'], ['facet:' . $field_name]);
      foreach ($selected_values as $value) {
        $filter->condition($field_name, $value);
        $query->filter($filter);
      }
    }
  }
  switch ($sort) {
    case 'alphabetically':
      $query->sort('title2', 'ASC');
      break;

    default:
      $query->sort('field_revised_date', 'DESC');
      break;
  }
  $query->range($page * $per_page, $per_page);

  $response = $server->search($query);
  return $response;
}

function hwc_practical_tool_get_facets_def() {
  return array(
    'field_language:value' => array(
      'field' => 'field_language:value',
      'limit' => 50,
      'operator' => 'or',
      'min_count' => 1,
      'missing' => 0,
    ),
    'field_nace_codes' => array(
      'field' => 'field_nace_codes',
      'limit' => 50,
      'operator' => 'or',
      'min_count' => 1,
      'missing' => 0,
    ),
    'field_country' => array(
      'field' => 'field_country',
      'limit' => 50,
      'operator' => 'or',
      'min_count' => 1,
      'missing' => 0,
    ),
  );
}

function hwc_practical_tool_menu_tools_get_query() {
  $server = search_api_server_load('solr_server');
  $index = search_api_index_load(SOLR_SEARCH_INDEX);
  $query = new SearchApiQuery($index);
  $query->fields(array()); // Avoid PHP notice
  $solr = new SearchApiSolrService($server);
  return array($solr, $query);
}
