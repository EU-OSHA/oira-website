<?php

function _hwc_taxonomy_filter_options_list($vocabulary, $default = array()) {
  $vocabulary = taxonomy_vocabulary_machine_name_load($vocabulary);
  if (!empty($vocabulary)) {
    $terms = taxonomy_term_load_multiple(array(), array('vid' => $vocabulary->vid));
    foreach ($terms as $key => $term) {
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
      foreach ($_GET[$name] as $v) {
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

function _hwc_practical_tool_strip_param_value($params, $name, $value = NULL) {
  if (!empty($params[$name])) {
    if (!is_array($params[$name])) {
      unset($params[$name]);
    }
    else {
      $flipped = array_flip($params[$name]);
      if (array_key_exists($value, $flipped)) {
        unset($params[$name][$flipped[$value]]);
        if (empty($params[$name])) {
          unset($params[$name]);
        }
      }
    }
  }
  return $params;
}

function hwc_practical_tool_menu_tools_form($form, $form_state) {
  $variables['form_state'] = $form_state;
  $variables['action'] = 'oira-tools';
  $variables['facet_callback'] = 'hwc_practical_tool_get_facets_def';
  $variables['search_callback'] = 'hwc_practical_tool_search';
  $variables['language_field'] = 'field_language:value';

  return _hwc_practical_tool_get_generic_faceted_form($variables);
}

/**
 * @param $variables
 * form_state
 * action
 *
 */
function _hwc_practical_tool_get_generic_faceted_form($variables) {
  global $language;
  $form_state = $variables['form_state'];
  $action = $variables['action'];
  $facet_callback = $variables['facet_callback'];
  $search_callback = $variables['search_callback'];
  $lang_field = $variables['language_field'];

  $text = _hwc_practical_tool_get_req_param($form_state, 'text');
  $sort = _hwc_practical_tool_get_req_param($form_state, 'sort', 'date');

  $form = array(
    '#action' => $action,
    '#method' => 'GET',
    '#token' => FALSE,
    '#attributes' => array('class' => array('row', 'oira-custom-faceted-search-form')),
    'left-column' => array(
      '#type' => 'container',
      '#attributes' => array('class' => array('col-md-3')),
    ),
    'content' => array(
      '#type' => 'container',
      '#attributes' => array('class' => array('col-md-9')),
    ),
  );
  $form['left-column']['search']['text'] = array(
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
      '#markup' => '<div class="results-for">' . t('Results for !text', array('!text' => '<span class="searched-text">' . check_plain($text) . '</span>')) . '</div>',
    );
  }

  $form['content']['sort_fieldset'] = array(
    /* Needed so that the page passes Web Accessibility test */
    '#type' => 'fieldset',
  );
  $form['content']['sort_fieldset']['toggle_filter'] = array(
    '#type' => 'markup',
    '#markup' => '<div class="toggle-search-sidebar visible-sm-inline visible-xs-inline"><span>' . t('Toggle search') . '</span></div>',
  );
  $form['content']['sort_fieldset']['sort'] = array(
    '#type' => 'select',
    '#title' => t('Order'),
    '#default_value' => $sort,
    '#prefix' => '<div class="sort-container col-xs-3">',
    '#suffix' => '</div>',
    '#options' => array(
      'alphabetically' => t('Alphabetically'),
      'date' => t('Latest first'),
    ),
  );

  $per_page = variable_get('hwc_tools_per_page', 10);
  $facets_def = call_user_func($facet_callback);

  $response = call_user_func($search_callback, $form_state, $per_page);

  $facets = array();
  if (!empty($response['search_api_facets'])) {
    $facets = $response['search_api_facets'];
    _hwc_practical_tool_facet_value_clear($facets);
  }

  $country_map = _hwc_practical_tool_country_map();
  foreach ($facets_def as $field_name => $facet_def) {
    if (!empty($facets[$field_name])) {
      $values_list = call_user_func($facet_def['options_callback'], $facet_def['options_callback_args']);
      $options = array();
      foreach ($facets[$field_name] as $facet_value) {
        $value = $facet_value['filter'];
        $key = $value;
        if ('field_country' == $field_name) {
          $key = $country_map[$value];
        }
        if (!empty($values_list[$value])) {
          $options[$key] = $values_list[$value] . ' ' . strtr('(@no)', array('@no' => $facet_value['count']));
          $form['left-column'][$field_name] = array(
            '#type' => 'checkboxes',
            '#options' => $options,
            '#default_value' => _hwc_practical_tool_get_req_param($form_state, $field_name, array()),
            '#title' => $facet_def['label'],
            '#attributes' => array('class' => array('search-facet-field')),
          );
        }
      }
    }
    if (isset($form['left-column'][$field_name]['#options'])) {
      asort($form['left-column'][$field_name]['#options']);
    }
  }

  $query_params = drupal_get_query_parameters();
  if (!empty($query_params)) {
    $form['left-column']['search']['filters'] = array(
      '#type' => 'markup',
      '#markup' => l(t('Clear filter'), current_path()),
    );
  }

  $form['left-column']['toggle_filter'] = $form['content']['sort_fieldset']['toggle_filter'];

  $nids = array();
  $excerpts = array();
  $title_excerpts = array();
  if (!empty($response['results'])) {
    foreach ($response['results'] as $row) {
      list($lng, $nid) = explode('_', $row['id'], 2);
      $nids[] = $nid;
      if (!empty($row['fields']['body:value'])) {
        $excerpt = $row['fields']['body:value'][0];
        $regexstr = "'<strong>(.*?)</strong>'si";
        $current_hits = preg_match_all($regexstr, $excerpt, $matches, PREG_SET_ORDER | PREG_OFFSET_CAPTURE);
        $snippet_offset = 150;
        if ($current_hits > 0) {
          $match = $matches[0][0];
          $word_length = strlen($match[0]);
          // Calculate offsets before and after for substr.
          $pos = $match[1];
          $start = $pos - $snippet_offset >= 0 ? $pos - $snippet_offset : 0;
          $length = $pos + $word_length + $snippet_offset - $start;
          if (isset($matches[1][0][1]) && $start + $length > $matches[1][0][1]) {
            $length = $matches[1][0][1] - $start;
          }
          $snippet = substr($excerpt, $start, $length);
          $excerpts[$nid] = '...' . $snippet . '...';
        }
      }
      if (!empty($row['fields']['title_field'][0])) {
        $matches = array();
        $regexstr = "'<strong>(.*?)</strong>'si";
        $current_hits = preg_match($regexstr, $row['fields']['title_field'][0], $matches);
        if ($current_hits > 0) {
          $title_excerpts[$nid] = $matches[1];
        }
      }
    }

    $nodes = node_load_multiple($nids);

    pager_default_initialize($response['result count'], $per_page);
    $pager_params = drupal_get_query_parameters();

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

    foreach ($form['content']['results']['nodes']['results-native']['nodes'] as $nid => &$renderable_node) {
      if (!empty($excerpts[$nid]) && !empty($renderable_node['body'][0]['#markup'])) {
        $renderable_node['body'][0]['#markup'] = $excerpts[$nid];
      }
      if (!empty($title_excerpts[$nid]) && !empty($renderable_node['title_field'][0]['#markup'])) {
        $renderable_node['title_field'][0]['#markup'] = _osha_search_string_replace_highlight($renderable_node['title_field'][0]['#markup'], $title_excerpts[$nid]);
      }
    }

    $start = $page_no * $per_page;
    $form['content']['sort_fieldset']['search_summary'] = array(
      '#prefix' => '<span class="count-container pull-right">',
      '#suffix' => '</span>',
      '#type' => 'markup',
      '#markup' => t('Showing @start - @limit from @total',
        array(
          '@start' => $start + 1,
          '@limit' => $start + count($nids),
          '@total' => $response['result count'],
        )
      ),
    );
  }
  else {
    hide($form['content']['sort_fieldset']);
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
  global $language;

  $facets_def = hwc_practical_tool_get_facets_def();

  $page = _hwc_practical_tool_get_req_param($form_state, 'page', 0);
  $text = _hwc_practical_tool_get_req_param($form_state, 'text');
  $sort = _hwc_practical_tool_get_req_param($form_state, 'sort', 'date');
  list($server, $query) = hwc_practical_tool_menu_tools_get_query();
  $query->condition('status', 1);
  $query->condition('type', 'practical_tool');
  $query->condition('language', 'en');
  $query->condition('field_publication_date', time(), '<=');
  $query->keys($text);
  $query->fields(
    array(
      'title_field',
      'body:value',
      'field_alternative_title',
      'field_alternative_body:value',
      'field_third_title',
      'field_third_description:value',
    )
  );
  $query->setOption('search_api_facets', $facets_def);
  $country_map = _hwc_practical_tool_country_map();
  $country_map = array_flip($country_map);
  foreach ($facets_def as $field_name => $facet_def) {
    $selected_values = _hwc_practical_tool_get_req_param($form_state, $field_name, array());
    if (!empty($selected_values) && is_array($selected_values)) {
      $filter = $query->createFilter($facet_def['operator'], ['facet:' . $field_name]);
      foreach ($selected_values as $value) {
        if ('field_country' == $field_name && !empty($country_map[$value])) {
          $value = $country_map[$value];
        }
        $filter->condition($field_name, $value);
        $query->filter($filter);
      }
    }
  }
  switch ($sort) {
    case 'date':
      $query->sort('field_revised_date', 'DESC');
      break;

    default:
      $title_field = 'title2';
      if (function_exists('hwc_practical_tool_node_get_sort_sector_' . $language->language)) {
        $title_field = 'practical_tool_sort_sector_' . $language->language;
      }
      $query->sort($title_field, 'ASC');

      $title_field = 'title2';
      if (function_exists('hwc_practical_tool_node_get_sort_title_' . $language->language)) {
        $title_field = 'practical_tool_sort_title_' . $language->language;
      }
      $query->sort($title_field, 'ASC');
      break;
  }
  $query->range($page * $per_page, $per_page);

  $response = $server->search($query);
  return $response;
}

function hwc_practical_tool_get_facets_def() {
  return array(
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
    'field_language:value' => array(
      'label' => t('Language'),
      'field' => 'field_language:value',
      'limit' => 50,
      'operator' => 'or',
      'min_count' => 1,
      'missing' => 0,
      'options_callback' => 'oira_language_list_options',
      'options_callback_args' => array(TRUE, TRUE),
    ),
    'field_sector_category' => array(
      'label' => t('Sector'),
      'field' => 'field_sector_category',
      'limit' => 150,
      'operator' => 'or',
      'min_count' => 1,
      'missing' => 0,
      'options_callback' => '_hwc_taxonomy_filter_options_list',
      'options_callback_args' => array('sector_category'),
    ),
  );
}

function hwc_practical_tool_menu_tools_get_query() {
  $server = search_api_server_load('solr_server');
  $index = search_api_index_load(SOLR_SEARCH_INDEX);
  $query = new SearchApiQuery($index);
  // Avoid PHP notice.
  $query->fields(array());
  // If the return data option on server it's not set, highlight doesn't work.
  // So we force highlight without having to return field data.
  $server->options['highlight_data'] = TRUE;
  $solr = new SearchApiSolrService($server);
  return array($solr, $query);
}

function _hwc_practical_tool_country_map() {
  $default = array();
  $vocabulary = taxonomy_vocabulary_machine_name_load('country');
  if (!empty($vocabulary)) {
    $terms = taxonomy_term_load_multiple(array(), array('vid' => $vocabulary->vid));
    foreach ($terms as $key => $term) {
      $code = strtolower(str_replace([' ', '/'], ['-', '-'], $term->field_iso2[LANGUAGE_NONE][0]['safe_value']));
      $default[$term->tid] = $code;
    }
  }
  return $default;
}
