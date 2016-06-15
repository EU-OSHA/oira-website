<?php
/**
 * @file
 * oira_country.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function oira_country_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'countries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Countries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Countries';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Content using Country */
  $handler->display->display_options['relationships']['reverse_field_country_node']['id'] = 'reverse_field_country_node';
  $handler->display->display_options['relationships']['reverse_field_country_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_country_node']['field'] = 'reverse_field_country_node';
  $handler->display->display_options['relationships']['reverse_field_country_node']['required'] = TRUE;
  /* Field: Taxonomy term: Flag */
  $handler->display->display_options['fields']['field_flag']['id'] = 'field_flag';
  $handler->display->display_options['fields']['field_flag']['table'] = 'field_data_field_flag';
  $handler->display->display_options['fields']['field_flag']['field'] = 'field_flag';
  $handler->display->display_options['fields']['field_flag']['label'] = '';
  $handler->display->display_options['fields']['field_flag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_flag']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_flag']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
    'field_formatter_class' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_field']['id'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['label'] = '';
  $handler->display->display_options['fields']['name_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['name_field']['settings'] = array(
    'title_style' => 'h2',
    'title_link' => 'content',
    'title_class' => '',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['name_field']['link_to_entity'] = 1;
  /* Field: Taxonomy term: Extrafield Content count */
  $handler->display->display_options['fields']['country_content_count']['id'] = 'country_content_count';
  $handler->display->display_options['fields']['country_content_count']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['country_content_count']['field'] = 'country_content_count';
  $handler->display->display_options['fields']['country_content_count']['label'] = '';
  $handler->display->display_options['fields']['country_content_count']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    11 => '11',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_country_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'practical_tool' => 'practical_tool',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['countries'] = array(
    t('Master'),
    t('Countries'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_country'),
    t('Block'),
  );
  $export['countries'] = $view;

  return $export;
}
