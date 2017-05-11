<?php

function oira_collaboration_items_form($form, $form_state) {
  global $user;
  $variables['form_state'] = $form_state;
  $variables['facet_callback'] = 'oira_collaboration_items_get_facets_def';
  $variables['search_callback'] = 'oira_collaboration_items_search';
  $variables['language_field'] = 'field_languages:value';
  $variables['action'] = '/private-zone/collaboration-area/eu-osha-documents';
  module_load_include('inc', 'oira_strategic_documentation', 'oira_strategic_documentation.pages');
  return _oira_strategic_documentation_get_generic_faceted_form($variables);
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function oira_collaboration_items_form_oira_collaboration_items_form_alter(&$form, $form_state) {
  // Unset the form_id and build_id in order not to have nasty urls.
  unset($form['form_id']);
  unset($form['form_build_id']);
}

function oira_collaboration_items_form_submit($form, &$form_state) {
  $form_state['rebuild'] = TRUE;
  $form_state['redirect'] = FALSE;
}

function oira_collaboration_items_search($form_state, $per_page = 10) {
  global $user;
  $nids = [];

  module_load_include('inc', 'oira_strategic_documentation', 'oira_strategic_documentation.pages');
  $facets_def = oira_collaboration_items_get_facets_def();

  $page = _oira_strategic_documentation_get_req_param($form_state, 'page', 0);
  $text = _oira_strategic_documentation_get_req_param($form_state, 'text');
  $sort = _oira_strategic_documentation_get_req_param($form_state, 'sort', 'alphabetically');

  list($server, $query) = oira_strategic_documentation_menu_tools_get_query();
  $query->condition('status', 1);
  $query->condition('type', 'collaboration_document');
  $query->condition('language', 'en');

  $filter = $query->createFilter('or', ['facet:nid']);
  foreach ($nids as $value) {
    $filter->condition('nid', $value);
    $query->filter($filter);
  }

  $query->keys($text);

  $query->fields(array(
    'title_field',
    'body:value',
    'attachments_field_col_item_files',
  ));

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
      $query->sort('changed', 'DESC');
      break;
  }
  $query->range($page * $per_page, $per_page);

  $response = $server->search($query);
  return $response;
}

function oira_collaboration_items_get_facets_def() {
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
    'field_languages:value' => array(
      'label' => t('Language'),
      'field' => 'field_languages:value',
      'limit' => 50,
      'operator' => 'or',
      'min_count' => 1,
      'missing' => 0,
      'options_callback' => 'oira_language_list_options',
      'options_callback_args' => array(TRUE, TRUE),
    ),
    'field_strategic_type' => array(
      'label' => t('Type'),
      'field' => 'field_strategic_type',
      'limit' => 150,
      'operator' => 'or',
      'min_count' => 1,
      'missing' => 0,
      'options_callback' => '_oira_strategic_documentation_filter_list_values',
      'options_callback_args' => 'field_strategic_type',
    ),
    'field_multiple_sector' => array(
      'label' => t('Sector'),
      'field' => 'field_multiple_sector',
      'limit' => 150,
      'operator' => 'or',
      'min_count' => 1,
      'missing' => 0,
      'options_callback' => '_oira_strategic_documentation_filter_options_list',
      'options_callback_args' => array('sector'),
    ),
  );
}
