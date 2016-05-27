<?php
/**
 * @file
 * oira_ws.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function oira_ws_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'oira_ws';
  $view->description = 'Web Services for OIRA content';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OIRA ws';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: File Usage: File */
  $handler->display->display_options['relationships']['node_to_file']['id'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['node_to_file']['field'] = 'node_to_file';
  /* Field: Content: Content UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'tool_id';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'tool_url';
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Alternative title */
  $handler->display->display_options['fields']['field_alternative_title']['id'] = 'field_alternative_title';
  $handler->display->display_options['fields']['field_alternative_title']['table'] = 'field_data_field_alternative_title';
  $handler->display->display_options['fields']['field_alternative_title']['field'] = 'field_alternative_title';
  $handler->display->display_options['fields']['field_alternative_title']['label'] = 'title_alt';
  $handler->display->display_options['fields']['field_alternative_title']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_alternative_title']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Revised date */
  $handler->display->display_options['fields']['field_revised_date']['id'] = 'field_revised_date';
  $handler->display->display_options['fields']['field_revised_date']['table'] = 'field_data_field_revised_date';
  $handler->display->display_options['fields']['field_revised_date']['field'] = 'field_revised_date';
  $handler->display->display_options['fields']['field_revised_date']['label'] = 'revised_date';
  $handler->display->display_options['fields']['field_revised_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_revised_date']['settings'] = array(
    'format_type' => 'short_date_eu',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'field_formatter_class' => '',
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_tool_type']['id'] = 'field_tool_type';
  $handler->display->display_options['fields']['field_tool_type']['table'] = 'field_data_field_tool_type';
  $handler->display->display_options['fields']['field_tool_type']['field'] = 'field_tool_type';
  $handler->display->display_options['fields']['field_tool_type']['label'] = 'tool_type';
  $handler->display->display_options['fields']['field_tool_type']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tool_type']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['uri']['label'] = 'image';
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Alternative description */
  $handler->display->display_options['fields']['field_alternative_body']['id'] = 'field_alternative_body';
  $handler->display->display_options['fields']['field_alternative_body']['table'] = 'field_data_field_alternative_body';
  $handler->display->display_options['fields']['field_alternative_body']['field'] = 'field_alternative_body';
  $handler->display->display_options['fields']['field_alternative_body']['label'] = 'body_alt';
  $handler->display->display_options['fields']['field_alternative_body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_alternative_body']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = 'country_name';
  $handler->display->display_options['fields']['field_country']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Field: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['label'] = 'language_code';
  $handler->display->display_options['fields']['field_language']['settings'] = array(
    'format' => array(
      'iso' => 'iso',
      'name' => 0,
      'name_native' => 0,
    ),
    'field_formatter_class' => '',
  );
  /* Field: Field: Language */
  $handler->display->display_options['fields']['field_language_1']['id'] = 'field_language_1';
  $handler->display->display_options['fields']['field_language_1']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language_1']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language_1']['label'] = 'language_name';
  $handler->display->display_options['fields']['field_language_1']['settings'] = array(
    'format' => array(
      'name' => 'name',
      'iso' => 0,
      'name_native' => 0,
    ),
    'field_formatter_class' => '',
  );
  /* Field: Content: Sector */
  $handler->display->display_options['fields']['field_sector']['id'] = 'field_sector';
  $handler->display->display_options['fields']['field_sector']['table'] = 'field_data_field_sector';
  $handler->display->display_options['fields']['field_sector']['field'] = 'field_sector';
  $handler->display->display_options['fields']['field_sector']['label'] = 'sector_name';
  $handler->display->display_options['fields']['field_sector']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sector']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Tool link */
  $handler->display->display_options['fields']['field_tool_link']['id'] = 'field_tool_link';
  $handler->display->display_options['fields']['field_tool_link']['table'] = 'field_data_field_tool_link';
  $handler->display->display_options['fields']['field_tool_link']['field'] = 'field_tool_link';
  $handler->display->display_options['fields']['field_tool_link']['label'] = 'tool_link';
  $handler->display->display_options['fields']['field_tool_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tool_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_tool_link']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Workbench Access: Section */
  $handler->display->display_options['fields']['section']['id'] = 'section';
  $handler->display->display_options['fields']['section']['table'] = 'workbench_access';
  $handler->display->display_options['fields']['section']['field'] = 'section';
  $handler->display->display_options['fields']['section']['label'] = 'author_name';
  /* Field: Content: Co-author */
  $handler->display->display_options['fields']['field_co_author']['id'] = 'field_co_author';
  $handler->display->display_options['fields']['field_co_author']['table'] = 'field_data_field_co_author';
  $handler->display->display_options['fields']['field_co_author']['field'] = 'field_co_author';
  $handler->display->display_options['fields']['field_co_author']['label'] = 'co_authors';
  $handler->display->display_options['fields']['field_co_author']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_co_author']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_co_author']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'practical_tool' => 'practical_tool',
  );

  /* Display: Tools */
  $handler = $view->new_display('page', 'Tools', 'page');
  $handler->display->display_options['path'] = 'oira-ws/tools';
  $translatables['oira_ws'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('File'),
    t('tool_id'),
    t('tool_url'),
    t('title'),
    t('title_alt'),
    t('revised_date'),
    t('tool_type'),
    t('image'),
    t('body'),
    t('body_alt'),
    t('country_name'),
    t('language_code'),
    t('language_name'),
    t('sector_name'),
    t('tool_link'),
    t('author_name'),
    t('co_authors'),
    t('Tools'),
  );
  $export['oira_ws'] = $view;

  return $export;
}
