<?php

define('PRIVATE_SOLR_SEARCH_SERVER', 'private_apache_solr_server');
define('PRIVATE_SOLR_SEARCH_INDEX', 'private_multilingual_node_index');

function _oira_strategic_documentation_filter_options_list($vocabulary, $default = array()) {
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
function _oira_strategic_documentation_get_req_param($form_state, $name, $default = NULL) {
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

function _oira_strategic_documentation_facet_value_clear(&$facets) {
  if (!empty($facets)) {
    foreach ($facets as &$facet_field) {
      foreach ($facet_field as &$facet_value) {
        // The filters come wrapped in ".
        $facet_value['filter'] = trim($facet_value['filter'], '"');
      }
    }
  }
}

function _oira_strategic_documentation_strip_param_value($params, $name, $value = NULL) {
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

function oira_strategic_documentation_partners_form($form, $form_state) {
  global $user;
  $partner_id = osha_workflow_user_partner_id($user->uid);
  $variables['form_state'] = $form_state;
  $variables['action'] = url( '/node/' . $partner_id . '/collaboration-area/partners-documents', array('absolute' => false, 'alias' => false ));
  $variables['facet_callback'] = 'oira_strategic_documentation_get_facets_def';
  $variables['search_callback'] = 'oira_strategic_documentation_search_partners';
  $variables['language_field'] = 'field_language:value';

  return _oira_strategic_documentation_get_generic_faceted_form($variables);
}

function oira_strategic_documentation_eu_osha_form($form, $form_state) {
  global $user;
  $partner_id = osha_workflow_user_partner_id($user->uid);
  $variables['form_state'] = $form_state;
  $variables['action'] = url( '/node/' . $partner_id . '/collaboration-area/eu-osha-documents', array('absolute' => false, 'alias' => false ));
  $variables['facet_callback'] = 'oira_strategic_documentation_get_facets_def';
  $variables['search_callback'] = 'oira_strategic_documentation_search_eu_osha';
  $variables['language_field'] = 'field_language:value';

  return _oira_strategic_documentation_get_generic_faceted_form($variables);
}

/**
 * @param $variables
 * form_state
 * action
 *
 */
function _oira_strategic_documentation_get_generic_faceted_form($variables) {
  global $language;
  $form_state = $variables['form_state'];
  $action = $variables['action'];
  $facet_callback = $variables['facet_callback'];
  $search_callback = $variables['search_callback'];
  $lang_field = $variables['language_field'];

  $text = _oira_strategic_documentation_get_req_param($form_state, 'text');
  $sort = _oira_strategic_documentation_get_req_param($form_state, 'sort', 'alphabetically');

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
      '#markup' => '<div class="results-for">' . t('Results for !text', array('!text' => '<span class="searched-text">' . check_plain($text) .'</span>')) . '</div>',
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
    '#options' => array('alphabetically' => t('Alphabetically'),'date' => t('Latest first')),
  );

  $per_page = variable_get('hwc_tools_per_page', 10);
  $facets_def = call_user_func($facet_callback);

  $response = call_user_func($search_callback, $form_state, $per_page);

  $facets = array();
  if (!empty($response['search_api_facets'])) {
    $facets = $response['search_api_facets'];
    _oira_strategic_documentation_facet_value_clear($facets);
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
            '#default_value' => _oira_strategic_documentation_get_req_param($form_state, $field_name, array()),
            '#title' => $facet_def['label'],
            '#attributes' => array('class' => array('search-facet-field')),
          );
        }
      }
      if (!empty($form['left-column'][$field_name]['#default_value'])) {
        foreach ($form['left-column'][$field_name]['#default_value'] as $val) {
          if (!empty($options[$val])) {
            $filter_label = '<span class="glyphicon glyphicon-remove"></span>' . $options[$val];
            $query = _oira_strategic_documentation_strip_param_value($query_params, $field_name, $val) ?: ['text' => ''];
            $form['left-column']['search']['filters'][] = array(
              '#type' => 'markup',
              '#markup' => l($filter_label, $action, array('query' => $query, 'html' => TRUE)),
            );
          }
        }
      }
    }
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
      '#markup' => t('Showing @start - @limit from @total', array('@start' => $start + 1, '@limit' => $start + count($nids), '@total' => $response['result count'])),
    );
  }
  else {
    $form['content']['results']['#markup'] = '<p class="no-results">' . t('No results found to match your search.') . '</p>';
  }

  $form['#attached']['js'] = array(
    drupal_get_path('module', 'oira_strategic_documentation') . '/js/form.js',
  );

  return $form;
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function oira_strategic_documentation_form_oira_strategic_documentation_partners_form_alter(&$form, $form_state) {
  // Unset the form_id and build_id in order not to have nasty urls.
  unset($form['form_id']);
  unset($form['form_build_id']);
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function oira_strategic_documentation_form_oira_strategic_documentation_eu_osha_form_alter(&$form, $form_state) {
  // Unset the form_id and build_id in order not to have nasty urls.
  unset($form['form_id']);
  unset($form['form_build_id']);
}

function oira_strategic_documentation_partners_form_submit($form, &$form_state) {
  $form_state['rebuild'] = TRUE;
  $form_state['redirect'] = FALSE;
}

function oira_strategic_documentation_eu_osha_form_submit($form, &$form_state) {
  $form_state['rebuild'] = TRUE;
  $form_state['redirect'] = FALSE;
}

function oira_strategic_documentation_search_eu_osha($form_state, $per_page = 10) {
  return oira_strategic_documentation_search(FALSE, $form_state, $per_page);
}
function oira_strategic_documentation_search_partners($form_state, $per_page = 10) {
  return oira_strategic_documentation_search(TRUE, $form_state, $per_page);
}

function oira_strategic_documentation_search($is_partners, $form_state, $per_page = 10) {
  global $user;

  if ($is_partners) {
    workbench_access_user_load_data($user);
    $tids = array_keys($user->workbench_access);
  }
  else {
    $tids = ['section' => 'section'];
  }

  $nids = [];
  if ($tids) {
    $q = db_select('workbench_access_node', 'w');
    $q->innerJoin('node', 'n', 'w.nid = n.nid');
    $q->fields('n', ['nid'])
      ->condition('n.type', 'strategic_documentation', '=')
      ->condition('w.access_id', $tids, 'in');
    $nids = $q->execute()->fetchAllKeyed(0, 0);
  }

  if (!$nids) {
    return [];
  }

  $facets_def = oira_strategic_documentation_get_facets_def();

  $page = _oira_strategic_documentation_get_req_param($form_state, 'page', 0);
  $text = _oira_strategic_documentation_get_req_param($form_state, 'text');
  $sort = _oira_strategic_documentation_get_req_param($form_state, 'sort', 'alphabetically');

  list($server, $query) = oira_strategic_documentation_menu_tools_get_query();
  $query->condition('status', 1);
  $query->condition('type', 'strategic_documentation');
  $query->condition('language', 'en');

  $filter = $query->createFilter('or', ['facet:' . 'nid']);
  foreach ($nids as $value) {
    $filter->condition('nid', $value);
    $query->filter($filter);
  }

  $query->keys($text);

  $query->fields(array('title_field', 'body:value', 'attachments_field_private_file', 'field_alternative_title', 'field_alternative_body:value'));

  $query->setOption('search_api_facets', $facets_def);
  foreach ($facets_def as $field_name => $facet_def) {
    $selected_values = _oira_strategic_documentation_get_req_param($form_state, $field_name, array());
    if (!empty($selected_values) && is_array($selected_values)) {
      $filter = $query->createFilter($facet_def['operator'], ['facet:' . $field_name]);
      foreach ($selected_values as $value) {
        $filter->condition($field_name, $value);
        $query->filter($filter);
      }
    }
  }
  switch ($sort) {
    case 'date':
      $query->sort('field_revised_date', 'DESC');
      break;
  }
  $query->range($page * $per_page, $per_page);

  $response = $server->search($query);
  return $response;
}

function oira_strategic_documentation_get_facets_def() {
  return array(
    'field_country' => array(
      'label' => t('Country'),
      'field' => 'field_country',
      'limit' => 50,
      'operator' => 'or',
      'min_count' => 1,
      'missing' => 0,
      'options_callback' => '_oira_strategic_documentation_filter_options_list',
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
    'field_sector' => array(
      'label' => t('Sector'),
      'field' => 'field_sector',
      'limit' => 150,
      'operator' => 'or',
      'min_count' => 1,
      'missing' => 0,
      'options_callback' => '_oira_strategic_documentation_filter_options_list',
      'options_callback_args' => array('sector'),
    ),
  );
}

function oira_strategic_documentation_menu_tools_get_query() {
  $server = search_api_server_load(PRIVATE_SOLR_SEARCH_SERVER);
  $index = search_api_index_load(PRIVATE_SOLR_SEARCH_INDEX);
  $query = new SearchApiQuery($index);
  $query->fields(array()); // Avoid PHP notice
  // If the return data option on server it's not set, highlight doesn't work.
  // So we force highlight without having to return field data.
  $server->options['highlight_data'] = TRUE;
  $solr = new SearchApiSolrService($server);
  return array($solr, $query);
}
