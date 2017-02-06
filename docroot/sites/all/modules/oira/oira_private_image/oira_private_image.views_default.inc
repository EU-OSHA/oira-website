<?php
/**
 * @file
 * oira_private_image.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function oira_private_image_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'private_images';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Private images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Private images';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    11 => '11',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-2 col-sm-4 col-xs-6';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'private-images';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p class="text-muted text-center">No results</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_oira_private_image']['id'] = 'field_oira_private_image';
  $handler->display->display_options['fields']['field_oira_private_image']['table'] = 'field_data_field_oira_private_image';
  $handler->display->display_options['fields']['field_oira_private_image']['field'] = 'field_oira_private_image';
  $handler->display->display_options['fields']['field_oira_private_image']['label'] = '';
  $handler->display->display_options['fields']['field_oira_private_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oira_private_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_oira_private_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
    'field_formatter_class' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_oira_private_image_1']['id'] = 'field_oira_private_image_1';
  $handler->display->display_options['fields']['field_oira_private_image_1']['table'] = 'field_data_field_oira_private_image';
  $handler->display->display_options['fields']['field_oira_private_image_1']['field'] = 'field_oira_private_image';
  $handler->display->display_options['fields']['field_oira_private_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_oira_private_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_oira_private_image_1']['alter']['text'] = 'Download';
  $handler->display->display_options['fields']['field_oira_private_image_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_oira_private_image_1']['alter']['path'] = '[field_oira_private_image_1]';
  $handler->display->display_options['fields']['field_oira_private_image_1']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_oira_private_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oira_private_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_oira_private_image_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_oira_private_image_1']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => 'content',
    'field_formatter_class' => '',
  );
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
    'oira_private_image' => 'oira_private_image',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'private-images';
  $handler->display->display_options['menu']['title'] = 'Private Images';
  $handler->display->display_options['menu']['description'] = 'Administrate Private Images';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['private_images'] = array(
    t('Master'),
    t('Private images'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No results'),
    t('<p class="text-muted text-center">No results</p>'),
    t('Download'),
    t('Page'),
  );
  $export['private_images'] = $view;

  $view = new view();
  $view->name = 'private_images_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Private images admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Private images';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Delete',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_oira_private_image']['id'] = 'field_oira_private_image';
  $handler->display->display_options['fields']['field_oira_private_image']['table'] = 'field_data_field_oira_private_image';
  $handler->display->display_options['fields']['field_oira_private_image']['field'] = 'field_oira_private_image';
  $handler->display->display_options['fields']['field_oira_private_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_oira_private_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
    'field_formatter_class' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Sector */
  $handler->display->display_options['fields']['field_sector']['id'] = 'field_sector';
  $handler->display->display_options['fields']['field_sector']['table'] = 'field_data_field_sector';
  $handler->display->display_options['fields']['field_sector']['field'] = 'field_sector';
  $handler->display->display_options['fields']['field_sector']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[edit_node] [delete_node]';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_oira_private_image_1']['id'] = 'field_oira_private_image_1';
  $handler->display->display_options['fields']['field_oira_private_image_1']['table'] = 'field_data_field_oira_private_image';
  $handler->display->display_options['fields']['field_oira_private_image_1']['field'] = 'field_oira_private_image';
  $handler->display->display_options['fields']['field_oira_private_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_oira_private_image_1']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_oira_private_image_1']['settings'] = array(
    'text' => 'Download [file:name]',
    'field_formatter_class' => '',
  );
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
    'oira_private_image' => 'oira_private_image',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  /* Filter criterion: Content: Sector (field_sector) */
  $handler->display->display_options['filters']['field_sector_tid']['id'] = 'field_sector_tid';
  $handler->display->display_options['filters']['field_sector_tid']['table'] = 'field_data_field_sector';
  $handler->display->display_options['filters']['field_sector_tid']['field'] = 'field_sector_tid';
  $handler->display->display_options['filters']['field_sector_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_sector_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sector_tid']['expose']['operator_id'] = 'field_sector_tid_op';
  $handler->display->display_options['filters']['field_sector_tid']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_sector_tid']['expose']['operator'] = 'field_sector_tid_op';
  $handler->display->display_options['filters']['field_sector_tid']['expose']['identifier'] = 'field_sector_tid';
  $handler->display->display_options['filters']['field_sector_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_sector_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    14 => 0,
    13 => 0,
    15 => 0,
  );
  $handler->display->display_options['filters']['field_sector_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sector_tid']['vocabulary'] = 'sector';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/private-images';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Private Images';
  $handler->display->display_options['menu']['description'] = 'Administrate Private Images';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['private_images_admin'] = array(
    t('Master'),
    t('Private images'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('- Choose an operation -'),
    t('Delete'),
    t('Image'),
    t('Title'),
    t('Sector'),
    t('Edit'),
    t('Operations'),
    t('[edit_node] [delete_node]'),
    t('Page'),
  );
  $export['private_images_admin'] = $view;

  return $export;
}
