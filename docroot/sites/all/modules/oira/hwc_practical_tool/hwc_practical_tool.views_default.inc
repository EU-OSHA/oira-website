<?php
/**
 * @file
 * hwc_practical_tool.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hwc_practical_tool_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'administrate_oira_tools';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Administrate OIRA Tools';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Administrate OIRA Tools';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Workbench Access: Section */
  $handler->display->display_options['fields']['section']['id'] = 'section';
  $handler->display->display_options['fields']['section']['table'] = 'workbench_access';
  $handler->display->display_options['fields']['section']['field'] = 'section';
  $handler->display->display_options['fields']['section']['label'] = 'Author/Partner';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Sector */
  $handler->display->display_options['fields']['field_sector']['id'] = 'field_sector';
  $handler->display->display_options['fields']['field_sector']['table'] = 'field_data_field_sector';
  $handler->display->display_options['fields']['field_sector']['field'] = 'field_sector';
  $handler->display->display_options['fields']['field_sector']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sector']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Revised date */
  $handler->display->display_options['fields']['field_revised_date']['id'] = 'field_revised_date';
  $handler->display->display_options['fields']['field_revised_date']['table'] = 'field_data_field_revised_date';
  $handler->display->display_options['fields']['field_revised_date']['field'] = 'field_revised_date';
  $handler->display->display_options['fields']['field_revised_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'osha_date_theme' => '',
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
  $handler->display->display_options['fields']['delete_node']['alter']['text'] = '[edit_node] [delete_node]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[edit_node] [delete_node]';
  /* Field: Content: Alternative title */
  $handler->display->display_options['fields']['field_alternative_title']['id'] = 'field_alternative_title';
  $handler->display->display_options['fields']['field_alternative_title']['table'] = 'field_data_field_alternative_title';
  $handler->display->display_options['fields']['field_alternative_title']['field'] = 'field_alternative_title';
  $handler->display->display_options['fields']['field_alternative_title']['label'] = '';
  $handler->display->display_options['fields']['field_alternative_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_alternative_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_alternative_title']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Sort criterion: Content: Revised date (field_revised_date) */
  $handler->display->display_options['sorts']['field_revised_date_value']['id'] = 'field_revised_date_value';
  $handler->display->display_options['sorts']['field_revised_date_value']['table'] = 'field_data_field_revised_date';
  $handler->display->display_options['sorts']['field_revised_date_value']['field'] = 'field_revised_date_value';
  $handler->display->display_options['sorts']['field_revised_date_value']['order'] = 'DESC';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'allwords';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
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
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_alternative_title' => 'field_alternative_title',
  );
  /* Filter criterion: Content: Country (field_country) */
  $handler->display->display_options['filters']['field_country_tid']['id'] = 'field_country_tid';
  $handler->display->display_options['filters']['field_country_tid']['table'] = 'field_data_field_country';
  $handler->display->display_options['filters']['field_country_tid']['field'] = 'field_country_tid';
  $handler->display->display_options['filters']['field_country_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_country_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_tid']['expose']['operator_id'] = 'field_country_tid_op';
  $handler->display->display_options['filters']['field_country_tid']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_country_tid']['expose']['operator'] = 'field_country_tid_op';
  $handler->display->display_options['filters']['field_country_tid']['expose']['identifier'] = 'field_country_tid';
  $handler->display->display_options['filters']['field_country_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_country_tid']['expose']['remember_roles'] = array(
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
  );
  $handler->display->display_options['filters']['field_country_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_country_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_country_tid']['vocabulary'] = 'country';
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
  );
  $handler->display->display_options['filters']['field_sector_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_sector_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sector_tid']['vocabulary'] = 'sector';
  /* Filter criterion: Field: Language (field_language) */
  $handler->display->display_options['filters']['field_language_value']['id'] = 'field_language_value';
  $handler->display->display_options['filters']['field_language_value']['table'] = 'field_data_field_language';
  $handler->display->display_options['filters']['field_language_value']['field'] = 'field_language_value';
  $handler->display->display_options['filters']['field_language_value']['group'] = 1;
  $handler->display->display_options['filters']['field_language_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_language_value']['expose']['operator_id'] = 'field_language_value_op';
  $handler->display->display_options['filters']['field_language_value']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['field_language_value']['expose']['operator'] = 'field_language_value_op';
  $handler->display->display_options['filters']['field_language_value']['expose']['identifier'] = 'field_language_value';
  $handler->display->display_options['filters']['field_language_value']['expose']['remember_roles'] = array(
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
  );
  /* Filter criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['filters']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['filters']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_publication_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_publication_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publication_date_value']['expose']['operator_id'] = 'field_publication_date_value_op';
  $handler->display->display_options['filters']['field_publication_date_value']['expose']['label'] = 'Publication date';
  $handler->display->display_options['filters']['field_publication_date_value']['expose']['operator'] = 'field_publication_date_value_op';
  $handler->display->display_options['filters']['field_publication_date_value']['expose']['identifier'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['expose']['remember_roles'] = array(
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
  );
  $handler->display->display_options['filters']['field_publication_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_publication_date_value']['year_range'] = '-10:+3';
  /* Filter criterion: Content: Revised date (field_revised_date) */
  $handler->display->display_options['filters']['field_revised_date_value']['id'] = 'field_revised_date_value';
  $handler->display->display_options['filters']['field_revised_date_value']['table'] = 'field_data_field_revised_date';
  $handler->display->display_options['filters']['field_revised_date_value']['field'] = 'field_revised_date_value';
  $handler->display->display_options['filters']['field_revised_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_revised_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_revised_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_revised_date_value']['expose']['operator_id'] = 'field_revised_date_value_op';
  $handler->display->display_options['filters']['field_revised_date_value']['expose']['label'] = 'Revised date';
  $handler->display->display_options['filters']['field_revised_date_value']['expose']['operator'] = 'field_revised_date_value_op';
  $handler->display->display_options['filters']['field_revised_date_value']['expose']['identifier'] = 'field_revised_date_value';
  $handler->display->display_options['filters']['field_revised_date_value']['expose']['remember_roles'] = array(
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
  );
  $handler->display->display_options['filters']['field_revised_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_revised_date_value']['year_range'] = '-10:+3';
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['group'] = 1;
  $handler->display->display_options['filters']['access_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['access_id']['expose']['operator_id'] = 'access_id_op';
  $handler->display->display_options['filters']['access_id']['expose']['label'] = 'Author/Partner';
  $handler->display->display_options['filters']['access_id']['expose']['operator'] = 'access_id_op';
  $handler->display->display_options['filters']['access_id']['expose']['identifier'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['access_id']['expose']['remember_roles'] = array(
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
  );
  $handler->display->display_options['filters']['access_id']['access_id'] = array();
  $handler->display->display_options['filters']['access_id']['size'] = '5';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/oira-tools';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'OIRA Tools';
  $handler->display->display_options['menu']['description'] = 'Administrate OIRA Tools';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['administrate_oira_tools'] = array(
    t('Master'),
    t('Administrate OIRA Tools'),
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
    t('Title'),
    t('Author/Partner'),
    t('Country'),
    t('Sector'),
    t('Revised date'),
    t('Edit'),
    t('[edit_node] [delete_node]'),
    t('Operations'),
    t('Language'),
    t('Publication date'),
    t('Page'),
  );
  $export['administrate_oira_tools'] = $view;

  $view = new view();
  $view->name = 'tools';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tools';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'OiRA tools';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => 'h4',
    'title_link' => 'content',
    'title_class' => '',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Field: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['label'] = '';
  $handler->display->display_options['fields']['field_language']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_language']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_language']['settings'] = array(
    'format' => array(
      'name' => 'name',
      'iso' => 0,
      'name_native' => 0,
    ),
    'field_formatter_class' => '',
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'generic_detail_thumbnail',
    'image_link' => 'content',
    'field_formatter_class' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '150',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'ignore',
    'trim_options' => array(
      'text' => 'text',
    ),
    'trim_preserve_tags' => '',
    'field_formatter_class' => '',
  );
  /* Field: Content: Tool link */
  $handler->display->display_options['fields']['field_tool_link']['id'] = 'field_tool_link';
  $handler->display->display_options['fields']['field_tool_link']['table'] = 'field_data_field_tool_link';
  $handler->display->display_options['fields']['field_tool_link']['field'] = 'field_tool_link';
  $handler->display->display_options['fields']['field_tool_link']['label'] = '';
  $handler->display->display_options['fields']['field_tool_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tool_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tool_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tool_link']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_tool_link']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-md-4">
[field_image]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="col-md-8">[title_field]
[body]
[field_country]
[field_language]
[field_tool_link]
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Revised date (field_revised_date) */
  $handler->display->display_options['sorts']['field_revised_date_value']['id'] = 'field_revised_date_value';
  $handler->display->display_options['sorts']['field_revised_date_value']['table'] = 'field_data_field_revised_date';
  $handler->display->display_options['sorts']['field_revised_date_value']['field'] = 'field_revised_date_value';
  $handler->display->display_options['sorts']['field_revised_date_value']['order'] = 'DESC';
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
  /* Filter criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['filters']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['filters']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_publication_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_publication_date_value']['default_date'] = 'now';

  /* Display: Tool of the week */
  $handler = $view->new_display('block', 'Tool of the week', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tool of the week';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'row';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'tool_of_the_month' => 'tool_of_the_month',
    'featured_press_release' => 0,
    'press_contacts_queue' => 0,
    'whats_new_article' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => 'h4',
    'title_link' => 'content',
    'title_class' => '',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_country']['field_api_classes'] = TRUE;
  /* Field: Field: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['label'] = '';
  $handler->display->display_options['fields']['field_language']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_language']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_language']['settings'] = array(
    'format' => array(
      'name' => 'name',
      'iso' => 0,
      'name_native' => 0,
    ),
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_language']['field_api_classes'] = TRUE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'generic_detail_thumbnail',
    'image_link' => 'content',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Extrafield Related partners */
  $handler->display->display_options['fields']['related_partners']['id'] = 'related_partners';
  $handler->display->display_options['fields']['related_partners']['table'] = 'node';
  $handler->display->display_options['fields']['related_partners']['field'] = 'related_partners';
  $handler->display->display_options['fields']['related_partners']['label'] = '';
  $handler->display->display_options['fields']['related_partners']['exclude'] = TRUE;
  $handler->display->display_options['fields']['related_partners']['element_label_colon'] = FALSE;
  /* Field: Content: Extrafield See more link */
  $handler->display->display_options['fields']['tools_see_more']['id'] = 'tools_see_more';
  $handler->display->display_options['fields']['tools_see_more']['table'] = 'node';
  $handler->display->display_options['fields']['tools_see_more']['field'] = 'tools_see_more';
  $handler->display->display_options['fields']['tools_see_more']['label'] = '';
  $handler->display->display_options['fields']['tools_see_more']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tools_see_more']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="pane-title tool-of-the-week-label">Tool of the week</div>';
  $handler->display->display_options['fields']['nothing_2']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-sm-6">
[field_image]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="col-sm-6">
[nothing_2]
[title_field]
[body]
[field_country]
[field_language]
[related_partners]
[tools_see_more]
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_caching'] = '4';

  /* Display: Latest tools */
  $handler = $view->new_display('block', 'Latest tools', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest tools';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'tool_of_the_month' => 'tool_of_the_month',
    'featured_press_release' => 0,
    'press_contacts_queue' => 0,
    'whats_new_article' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => 'h4',
    'title_link' => 'content',
    'title_class' => '',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_country']['field_api_classes'] = TRUE;
  /* Field: Field: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['label'] = '';
  $handler->display->display_options['fields']['field_language']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_language']['settings'] = array(
    'format' => array(
      'name' => 'name',
      'iso' => 0,
      'name_native' => 0,
    ),
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_language']['field_api_classes'] = TRUE;
  /* Field: Content: Tool link */
  $handler->display->display_options['fields']['field_tool_link']['id'] = 'field_tool_link';
  $handler->display->display_options['fields']['field_tool_link']['table'] = 'field_data_field_tool_link';
  $handler->display->display_options['fields']['field_tool_link']['field'] = 'field_tool_link';
  $handler->display->display_options['fields']['field_tool_link']['label'] = '';
  $handler->display->display_options['fields']['field_tool_link']['alter']['text'] = 'See more';
  $handler->display->display_options['fields']['field_tool_link']['alter']['path'] = '[field_tool_link-url]';
  $handler->display->display_options['fields']['field_tool_link']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_tool_link']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_tool_link']['alter']['link_class'] = 'more-link';
  $handler->display->display_options['fields']['field_tool_link']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_tool_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tool_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tool_link']['type'] = 'external_tool_link';
  $handler->display->display_options['fields']['field_tool_link']['settings'] = array(
    'text' => 'Access the tool',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_tool_link']['field_api_classes'] = TRUE;
  /* Field: Content: Extrafield Related partners */
  $handler->display->display_options['fields']['related_partners']['id'] = 'related_partners';
  $handler->display->display_options['fields']['related_partners']['table'] = 'node';
  $handler->display->display_options['fields']['related_partners']['field'] = 'related_partners';
  $handler->display->display_options['fields']['related_partners']['label'] = '';
  $handler->display->display_options['fields']['related_partners']['element_label_colon'] = FALSE;
  /* Field: Content: Extrafield See more link */
  $handler->display->display_options['fields']['tools_see_more']['id'] = 'tools_see_more';
  $handler->display->display_options['fields']['tools_see_more']['table'] = 'node';
  $handler->display->display_options['fields']['tools_see_more']['field'] = 'tools_see_more';
  $handler->display->display_options['fields']['tools_see_more']['label'] = '';
  $handler->display->display_options['fields']['tools_see_more']['element_label_colon'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_wiki_page_url']['id'] = 'field_wiki_page_url';
  $handler->display->display_options['fields']['field_wiki_page_url']['table'] = 'field_data_field_wiki_page_url';
  $handler->display->display_options['fields']['field_wiki_page_url']['field'] = 'field_wiki_page_url';
  $handler->display->display_options['fields']['field_wiki_page_url']['label'] = '';
  $handler->display->display_options['fields']['field_wiki_page_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_wiki_page_url']['alter']['text'] = 'See more';
  $handler->display->display_options['fields']['field_wiki_page_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_wiki_page_url']['alter']['path'] = '[field_wiki_page_url-url]';
  $handler->display->display_options['fields']['field_wiki_page_url']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_wiki_page_url']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_wiki_page_url']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_wiki_page_url']['alter']['link_class'] = 'more-link';
  $handler->display->display_options['fields']['field_wiki_page_url']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_wiki_page_url']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_wiki_page_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_wiki_page_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_wiki_page_url']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_wiki_page_url']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Revised date (field_revised_date) */
  $handler->display->display_options['sorts']['field_revised_date_value']['id'] = 'field_revised_date_value';
  $handler->display->display_options['sorts']['field_revised_date_value']['table'] = 'field_data_field_revised_date';
  $handler->display->display_options['sorts']['field_revised_date_value']['field'] = 'field_revised_date_value';
  $handler->display->display_options['sorts']['field_revised_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '0';
  $handler->display->display_options['filters']['in_queue']['group'] = 1;
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
  $handler->display->display_options['filters']['field_publication_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Wiki categories (field_wiki_categories) */
  $handler->display->display_options['filters']['field_wiki_categories_tid_1']['id'] = 'field_wiki_categories_tid_1';
  $handler->display->display_options['filters']['field_wiki_categories_tid_1']['table'] = 'field_data_field_wiki_categories';
  $handler->display->display_options['filters']['field_wiki_categories_tid_1']['field'] = 'field_wiki_categories_tid';
  $handler->display->display_options['filters']['field_wiki_categories_tid_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_wiki_categories_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_wiki_categories_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_wiki_categories_tid_1']['vocabulary'] = 'wiki_categories';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue_1']['id'] = 'in_queue_1';
  $handler->display->display_options['filters']['in_queue_1']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue_1']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue_1']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue_1']['value'] = '0';
  $handler->display->display_options['filters']['in_queue_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'wiki_page' => 'wiki_page',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Wiki categories (field_wiki_categories) */
  $handler->display->display_options['filters']['field_wiki_categories_tid']['id'] = 'field_wiki_categories_tid';
  $handler->display->display_options['filters']['field_wiki_categories_tid']['table'] = 'field_data_field_wiki_categories';
  $handler->display->display_options['filters']['field_wiki_categories_tid']['field'] = 'field_wiki_categories_tid';
  $handler->display->display_options['filters']['field_wiki_categories_tid']['value'] = array(
    112 => '112',
  );
  $handler->display->display_options['filters']['field_wiki_categories_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_wiki_categories_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_wiki_categories_tid']['vocabulary'] = 'wiki_categories';
  $handler->display->display_options['block_caching'] = '4';

  /* Display: New tools */
  $handler = $view->new_display('block', 'New tools', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New tools';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See more tools';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
    'field_formatter_class' => '',
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_type'] = 'div';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => 'h4',
    'title_link' => 'content',
    'title_class' => '',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '250',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '1',
    'more_text' => 'See more',
    'summary_handler' => 'ignore',
    'trim_options' => array(
      'text' => 'text',
      'use_field_summary' => 0,
    ),
    'trim_preserve_tags' => '',
    'field_formatter_class' => '',
    'tools_show_full' => 1,
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Field: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['label'] = '';
  $handler->display->display_options['fields']['field_language']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_language']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_language']['settings'] = array(
    'format' => array(
      'name' => 'name',
      'iso' => 0,
      'name_native' => 0,
    ),
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_language']['field_api_classes'] = TRUE;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_country']['field_api_classes'] = TRUE;
  /* Field: Content: Extrafield Related partners */
  $handler->display->display_options['fields']['related_partners']['id'] = 'related_partners';
  $handler->display->display_options['fields']['related_partners']['table'] = 'node';
  $handler->display->display_options['fields']['related_partners']['field'] = 'related_partners';
  $handler->display->display_options['fields']['related_partners']['label'] = '';
  $handler->display->display_options['fields']['related_partners']['exclude'] = TRUE;
  $handler->display->display_options['fields']['related_partners']['element_label_colon'] = FALSE;
  /* Field: Content: Extrafield See more link */
  $handler->display->display_options['fields']['tools_see_more']['id'] = 'tools_see_more';
  $handler->display->display_options['fields']['tools_see_more']['table'] = 'node';
  $handler->display->display_options['fields']['tools_see_more']['field'] = 'tools_see_more';
  $handler->display->display_options['fields']['tools_see_more']['label'] = '';
  $handler->display->display_options['fields']['tools_see_more']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tools_see_more']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="tool-teaser-content-wrapper">
[type]
[title_field]
[body]
[field_language] 
[field_country]
[related_partners]
[tools_see_more]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'wiki_page' => 'wiki_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: HWC practical tool: If node is within latest tools. (OiRA tools or E-tools) */
  $handler->display->display_options['filters']['latest_tools']['id'] = 'latest_tools';
  $handler->display->display_options['filters']['latest_tools']['table'] = 'hwc_practical_tool';
  $handler->display->display_options['filters']['latest_tools']['field'] = 'latest_tools';
  $handler->display->display_options['filters']['latest_tools']['value'] = '1';
  $handler->display->display_options['filters']['latest_tools']['group'] = 1;
  /* Filter criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['filters']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['filters']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_publication_date_value']['group'] = 2;
  $handler->display->display_options['filters']['field_publication_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['filters']['field_publication_date_value_1']['id'] = 'field_publication_date_value_1';
  $handler->display->display_options['filters']['field_publication_date_value_1']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['filters']['field_publication_date_value_1']['field'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_publication_date_value_1']['group'] = 2;
  $translatables['tools'] = array(
    t('Master'),
    t('OiRA tools'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="col-md-4">
[field_image]
</div>'),
    t('<div class="col-md-8">[title_field]
[body]
[field_country]
[field_language]
[field_tool_link]
</div>'),
    t('Tool of the week'),
    t('queue'),
    t('<div class="pane-title tool-of-the-week-label">Tool of the week</div>'),
    t('<div class="col-sm-6">
[field_image]
</div>'),
    t('<div class="col-sm-6">
[nothing_2]
[title_field]
[body]
[field_country]
[field_language]
[related_partners]
[tools_see_more]
</div>'),
    t('Latest tools'),
    t('See more'),
    t('New tools'),
    t('See more tools'),
    t('<div class="tool-teaser-content-wrapper">
[type]
[title_field]
[body]
[field_language] 
[field_country]
[related_partners]
[tools_see_more]
</div>'),
  );
  $export['tools'] = $view;

  return $export;
}
