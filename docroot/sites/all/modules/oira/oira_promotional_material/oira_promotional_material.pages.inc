<?php

function oira_promotional_material_search_form($form, $form_state) {
  $variables['form_state'] = $form_state;
  $variables['action'] = 'promotional-resources-search';
  $variables['facet_callback'] = '_oira_promotional_material_search_form_get_facets';
  $variables['search_callback'] = 'oira_promotional_material_search';
  $variables['language_field'] = 'field_resource_fc:field_language:value';

  return _hwc_practical_tool_get_generic_faceted_form($variables);
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function oira_promotional_material_form_oira_promotional_material_search_form_alter(&$form, $form_state) {
  // Unset the form_id and build_id in order not to have nasty urls.
  unset($form['form_id']);
  unset($form['form_build_id']);
}

function _oira_promotional_material_search_form_get_facets() {
  return [
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
    'field_resource_fc:field_language:value' => array(
      'label' => t('Language'),
      'field' => 'field_resource_fc:field_language:value',
      'limit' => 50,
      'operator' => 'or',
      'min_count' => 1,
      'missing' => 0,
      'options_callback' => 'oira_language_list_options',
      'options_callback_args' => array(TRUE, TRUE),
    ),
    'field_promotional_material_type' => array(
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

function oira_promotional_material_search($form_state, $per_page = 10) {
  $facets_def =_oira_promotional_material_search_form_get_facets();

  $page = _hwc_practical_tool_get_req_param($form_state, 'page', 0);
  $text = _hwc_practical_tool_get_req_param($form_state, 'text');
  $sort = _hwc_practical_tool_get_req_param($form_state, 'sort', 'alphabetically');
  /** @var SearchApiQuery $query */
  /** @var SearchApiSolrService $server */
  list($server, $query) = hwc_practical_tool_menu_tools_get_query();
  $query->condition('status', 1);
  $query->condition('type', 'promotional_material');
  $query->condition('language', 'en');
  $query->condition('field_revised_date', time(), '<=');
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
    case 'date':
      $query->sort('field_revised_date', 'DESC');
      break;

    default:
      $query->sort('title2', 'ASC');
      break;
  }
  $query->range($page * $per_page, $per_page);

  $response = $server->search($query);
  return $response;
}
