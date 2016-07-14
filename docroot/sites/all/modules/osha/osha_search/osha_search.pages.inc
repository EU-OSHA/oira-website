<?php

function osha_search_search_form($form, $form_state) {
  global $language;

  module_load_include('inc', 'hwc_practical_tool', 'hwc_practical_tool.pages');

  $action = 'search-site';
  $facet_callback = '_osha_search_form_get_facets';
  $search_callback = 'osha_search_callback_search';

  $text = _hwc_practical_tool_get_req_param($form_state, 'search_block_form');
  if (empty($text)) {
    $_GET['sort'] = 'alphabetically';
  }
  $sort = _hwc_practical_tool_get_req_param($form_state, 'sort', 'score');

  $form = array(
    '#action' => $action,
    '#method' => 'GET',
    '#token' => FALSE,
    '#attributes' => array('class' => array('row', 'oira-custom-faceted-search-form')),
    '#prefix' => '<div class="oira-search-form-container"><div class="container">',
    '#suffix' => '</div></div>',
    'left-column' => array(
      '#type' => 'container',
      '#attributes' => array('class' => array('col-md-3')),
    ),
    'content' => array(
      '#type' => 'container',
      '#attributes' => array('class' => array('col-md-9')),
    ),
  );
  $form['left-column']['search']['search_block_form'] = array(
    '#type' => 'textfield',
    '#size' => 30,
    '#title' => t('Search'),
    '#maxlength' => 200,
    '#default_value' => $text,
    '#title_display' => 'invisible',
    '#attributes' => array('placeholder' => t('Search')),
  );
  $form['left-column']['search']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Search'),
  );

  if (!empty($text)) {
    $form['content']['search_phrase'] = array(
      '#type' => 'markup',
      '#markup' => t('Results for !text', array('!text' => '<span class="searched-text"> ' . check_plain($text) .'</span>')),
    );
  }

  $form['content']['sort_fieldset'] = array(
    /* Needed so that the page passes Web Accessibility test */
    '#type' => 'fieldset',
  );
  $form['content']['sort_fieldset']['sort'] = array(
    '#type' => 'select',
    '#title' => t('Order'),
    '#default_value' => $sort,
    '#prefix' => '<div class="sort-container col-xs-3">',
    '#suffix' => '</div>',
    '#options' => array('alphabetically' => t('Alphabetically'), 'score' => t('Relevance')),
  );

  $per_page = variable_get('hwc_tools_per_page', 10);
  $facets_def = call_user_func($facet_callback);

  $response = call_user_func($search_callback, $form_state, $per_page);

  $facets = array();
  if (!empty($response['search_api_facets'])) {
    $facets = $response['search_api_facets'];
    _hwc_practical_tool_facet_value_clear($facets);
  }
  $query_params = drupal_get_query_parameters();

  foreach ($facets_def as $field_name => $facet_def) {
    if (!empty($facets[$field_name])) {
      $values_list = call_user_func($facet_def['options_callback'], $facet_def['options_callback_args']);
      $options = array();
      foreach ($facets[$field_name] as $facet_value) {
        if (!empty($values_list[$facet_value['filter']])) {
          $options[$facet_value['filter']] = $values_list[$facet_value['filter']] . ' ' . strtr('(@no)', array('@no' => $facet_value['count']));
          $form['left-column'][$field_name] = array(
            '#type' => 'checkboxes',
            '#options' => $options,
            '#default_value' => _hwc_practical_tool_get_req_param($form_state, $field_name, array()),
            '#title' => $facet_def['label'],
            '#attributes' => array('class' => array('search-facet-field')),
          );
        }
      }
      if (!empty($form['left-column'][$field_name]['#default_value'])) {
        foreach ($form['left-column'][$field_name]['#default_value'] as $val) {
          if (!empty($options[$val])) {
            $filter_label = '<span class="glyphicon glyphicon-remove"></span>' . $options[$val];
            $query = _hwc_practical_tool_strip_param_value($query_params, $field_name, $val) ?: ['text' => ''];
            $form['left-column']['search']['filters'][] = array(
              '#type' => 'markup',
              '#markup' => l($filter_label, $action, array('query' => $query, 'html' => TRUE)),
            );
          }
        }
      }
    }
  }

  $nids = array();
  if (!empty($response['results'])) {
    foreach ($response['results'] as $row) {
      list($lng, $nid) = explode('_', $row['id'], 2);
      $nids[] = $nid;
    }

    $nodes = node_load_multiple($nids);

    pager_default_initialize($response['result count'], $per_page);
    $pager_params = $_GET;
    $page_no = isset($pager_params['page']) ? (int) $pager_params['page'] : 0;
    unset($pager_params['page']);
    $form['content']['results'] = array(
      '#nids' => $nids,
      'nodes' => array(
        '#type' => 'container',
        '#attributes' => array('class' => array('search-page-results-wrapper')),
        'results-native' => node_view_multiple($nodes, 'teaser', 0, $language->language),
      ),
      '#suffix' => theme('pager', array(
        'tags' => array('<', '<', '', '>', '>'),
        'quantity' => 9,
        'parameters' => $pager_params,
      )),
    );

    $start = $page_no * $per_page;
    $form['content']['sort_fieldset']['search_summary'] = array(
      '#prefix' => '<span class="count-container pull-right">',
      '#suffix' => '</span>',
      '#type' => 'markup',
      '#markup' => t('Showing @start - @limit from @total', array('@start' => $start + 1, '@limit' => $start + count($nids), '@total' => $response['result count'])),
    );
  }
  else {
    $form['content']['results']['#markup'] = '<p class="no-results">' . t('No results found to match your search.') . '</p>';
  }

  $form['#attached']['js'] = array(
    drupal_get_path('module', 'hwc_practical_tool') . '/js/form.js',
  );

  return $form;
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function oira_promotional_material_form_oira_promotional_material_search_form_alter(&$form, $form_state) {
  // Unset the form_id and build_id in order not to have nasty urls.
  unset($form['form_id']);
  unset($form['form_build_id']);
}

function _osha_search_form_get_facets() {
  return [
    'type' => array(
      'label' => t('Type'),
      'field' => 'type',
      'limit' => 50,
      'operator' => 'or',
      'min_count' => 1,
      'missing' => 0,
      'options_callback' => '_osha_search_get_bundles_filters',
      'options_callback_args' => array(),
    ),
    'field_country' => array(
      'label' => t('Country'),
      'field' => 'field_country',
      'limit' => 50,
      'operator' => 'or',
      'min_count' => 1,
      'missing' => 0,
      'options_callback' => '_hwc_taxonomy_filter_options_list',
      'options_callback_args' => array('country'),
    ),
    'field_sector' => array(
      'label' => t('Category'),
      'field' => 'field_promotional_material_type',
      'limit' => 50,
      'operator' => 'or',
      'min_count' => 1,
      'missing' => 0,
      'options_callback' => '_hwc_taxonomy_filter_options_list',
      'options_callback_args' => array('promotional_material_type'),
    ),
  ];
}

function osha_search_callback_search($form_state, $per_page = 10) {
  $facets_def =_osha_search_form_get_facets();
  $page = _hwc_practical_tool_get_req_param($form_state, 'page', 0);
  $text = _hwc_practical_tool_get_req_param($form_state, 'search_block_form');
  $sort = _hwc_practical_tool_get_req_param($form_state, 'sort', 'date');
  /** @var SearchApiQuery $query */
  /** @var SearchApiSolrService $server */
  list($server, $query) = hwc_practical_tool_menu_tools_get_query();
  $query->condition('status', 1);
  $types_options = _osha_search_get_bundles_filters();

  // Bundle filter.
  $type_filter = $query->createFilter('or');
  foreach (array_keys($types_options) as $type_name) {
    $type_filter->condition('type', $type_name);
    $query->filter($type_filter);
  }

  $query->condition('language', 'en');
  $query->keys($text);
  $query->fields(array('title_field', 'body:value', 'attachments_field_file'));
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
      $query->sort('search_api_relevance', 'DESC');
      break;
  }
  $query->range($page * $per_page, $per_page);

  $response = $server->search($query);
  return $response;
}

function _osha_search_get_bundles_filters() {
  $options = array();
  $allowed = array('article', 'news', 'practical_tool', 'partner', 'promotional_material', 'wiki_page', 'faq');
  $types = node_type_get_types();
  foreach ($allowed as $type) {
    if (!empty($types[$type])) {
      $options[$type] = $types[$type]->name;
    }
  }

  return $options;
}
