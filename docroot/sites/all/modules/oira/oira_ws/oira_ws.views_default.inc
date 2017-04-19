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
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Country (field_country) */
  $handler->display->display_options['relationships']['field_country_tid']['id'] = 'field_country_tid';
  $handler->display->display_options['relationships']['field_country_tid']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_tid']['field'] = 'field_country_tid';
  /* Relationship: Content: Sector (field_sector) */
  $handler->display->display_options['relationships']['field_sector_tid']['id'] = 'field_sector_tid';
  $handler->display->display_options['relationships']['field_sector_tid']['table'] = 'field_data_field_sector';
  $handler->display->display_options['relationships']['field_sector_tid']['field'] = 'field_sector_tid';
  /* Relationship: Content: Type (field_tool_type) */
  $handler->display->display_options['relationships']['field_tool_type_tid']['id'] = 'field_tool_type_tid';
  $handler->display->display_options['relationships']['field_tool_type_tid']['table'] = 'field_data_field_tool_type';
  $handler->display->display_options['relationships']['field_tool_type_tid']['field'] = 'field_tool_type_tid';
  /* Relationship: Content: Co-author (field_co_author) */
  $handler->display->display_options['relationships']['field_co_author_tid']['id'] = 'field_co_author_tid';
  $handler->display->display_options['relationships']['field_co_author_tid']['table'] = 'field_data_field_co_author';
  $handler->display->display_options['relationships']['field_co_author_tid']['field'] = 'field_co_author_tid';
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
  $handler->display->display_options['fields']['field_alternative_title']['hide_empty'] = TRUE;
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
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
    'field_formatter_class' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_field_1']['id'] = 'name_field_1';
  $handler->display->display_options['fields']['name_field_1']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field_1']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field_1']['relationship'] = 'field_tool_type_tid';
  $handler->display->display_options['fields']['name_field_1']['label'] = 'tool_type';
  $handler->display->display_options['fields']['name_field_1']['type'] = 'text_plain';
  $handler->display->display_options['fields']['name_field_1']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['name_field_1']['link_to_entity'] = 0;
  /* Field: Content: Alternative description */
  $handler->display->display_options['fields']['field_alternative_body']['id'] = 'field_alternative_body';
  $handler->display->display_options['fields']['field_alternative_body']['table'] = 'field_data_field_alternative_body';
  $handler->display->display_options['fields']['field_alternative_body']['field'] = 'field_alternative_body';
  $handler->display->display_options['fields']['field_alternative_body']['label'] = 'body_alt';
  $handler->display->display_options['fields']['field_alternative_body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_alternative_body']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Taxonomy term: ISO2 */
  $handler->display->display_options['fields']['field_iso2']['id'] = 'field_iso2';
  $handler->display->display_options['fields']['field_iso2']['table'] = 'field_data_field_iso2';
  $handler->display->display_options['fields']['field_iso2']['field'] = 'field_iso2';
  $handler->display->display_options['fields']['field_iso2']['relationship'] = 'field_country_tid';
  $handler->display->display_options['fields']['field_iso2']['label'] = 'country_code';
  $handler->display->display_options['fields']['field_iso2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iso2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_iso2']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_iso2']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_field_3']['id'] = 'name_field_3';
  $handler->display->display_options['fields']['name_field_3']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field_3']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field_3']['relationship'] = 'field_country_tid';
  $handler->display->display_options['fields']['name_field_3']['label'] = 'country_name';
  $handler->display->display_options['fields']['name_field_3']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['name_field_3']['link_to_entity'] = 0;
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
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_field']['id'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['relationship'] = 'field_sector_tid';
  $handler->display->display_options['fields']['name_field']['label'] = 'sector_name';
  $handler->display->display_options['fields']['name_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['name_field']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['name_field']['link_to_entity'] = 0;
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
  /* Field: Workbench Access: Partner */
  $handler->display->display_options['fields']['section']['id'] = 'section';
  $handler->display->display_options['fields']['section']['table'] = 'workbench_access';
  $handler->display->display_options['fields']['section']['field'] = 'section';
  $handler->display->display_options['fields']['section']['label'] = 'author_name';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_field_2']['id'] = 'name_field_2';
  $handler->display->display_options['fields']['name_field_2']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field_2']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field_2']['relationship'] = 'field_co_author_tid';
  $handler->display->display_options['fields']['name_field_2']['label'] = 'co_authors';
  $handler->display->display_options['fields']['name_field_2']['type'] = 'text_plain';
  $handler->display->display_options['fields']['name_field_2']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['name_field_2']['link_to_entity'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Sort criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['sorts']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['sorts']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'practical_tool' => 'practical_tool',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['filters']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['filters']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_publication_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_publication_date_value']['default_date'] = 'now';

  /* Display: Tools WS */
  $handler = $view->new_display('services', 'Tools WS', 'tools_ws');
  $handler->display->display_options['path'] = 'tools';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['oira_ws'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_country'),
    t('term from field_sector'),
    t('term from field_tool_type'),
    t('term from field_co_author'),
    t('tool_id'),
    t('tool_url'),
    t('title'),
    t('title_alt'),
    t('revised_date'),
    t('image'),
    t('body'),
    t('tool_type'),
    t('body_alt'),
    t('country_code'),
    t('country_name'),
    t('language_code'),
    t('language_name'),
    t('sector_name'),
    t('tool_link'),
    t('author_name'),
    t('co_authors'),
    t('nid'),
    t('Tools WS'),
    t('Block'),
  );
  $export['oira_ws'] = $view;

  return $export;
}
