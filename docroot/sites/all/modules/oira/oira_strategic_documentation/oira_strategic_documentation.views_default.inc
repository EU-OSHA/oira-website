<?php
/**
 * @file
 * oira_strategic_documentation.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function oira_strategic_documentation_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'strategic_documentation_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Strategic documentation admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Strategic documentation';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_strategic_type']['id'] = 'field_strategic_type';
  $handler->display->display_options['fields']['field_strategic_type']['table'] = 'field_data_field_strategic_type';
  $handler->display->display_options['fields']['field_strategic_type']['field'] = 'field_strategic_type';
  $handler->display->display_options['fields']['field_strategic_type']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_country']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Publication date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'osha_date_theme' => '',
    'field_formatter_class' => '',
  );
  /* Field: Field: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['relationship'] = 'field_resource_fc_value';
  $handler->display->display_options['fields']['field_language']['settings'] = array(
    'format' => array(
      'name' => 'name',
      'iso' => 0,
      'name_native' => 0,
    ),
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
    'show_remaining_days' => 0,
    'osha_date_theme' => '',
    'field_formatter_class' => '',
  );
  /* Field: Workbench Access: Partner */
  $handler->display->display_options['fields']['section']['id'] = 'section';
  $handler->display->display_options['fields']['section']['table'] = 'workbench_access';
  $handler->display->display_options['fields']['section']['field'] = 'section';
  $handler->display->display_options['fields']['section']['label'] = 'Partner (Author/Partner)';
  /* Field: Content: Sector */
  $handler->display->display_options['fields']['field_multiple_sector']['id'] = 'field_multiple_sector';
  $handler->display->display_options['fields']['field_multiple_sector']['table'] = 'field_data_field_multiple_sector';
  $handler->display->display_options['fields']['field_multiple_sector']['field'] = 'field_multiple_sector';
  $handler->display->display_options['fields']['field_multiple_sector']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_multiple_sector']['delta_offset'] = '0';
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
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'strategic_documentation' => 'strategic_documentation',
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
  /* Filter criterion: Content: Country (field_country) */
  $handler->display->display_options['filters']['field_country_tid']['id'] = 'field_country_tid';
  $handler->display->display_options['filters']['field_country_tid']['table'] = 'field_data_field_country';
  $handler->display->display_options['filters']['field_country_tid']['field'] = 'field_country_tid';
  $handler->display->display_options['filters']['field_country_tid']['value'] = '';
  $handler->display->display_options['filters']['field_country_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_country_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_tid']['expose']['operator_id'] = 'field_country_tid_op';
  $handler->display->display_options['filters']['field_country_tid']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_country_tid']['expose']['operator'] = 'field_country_tid_op';
  $handler->display->display_options['filters']['field_country_tid']['expose']['identifier'] = 'field_country_tid';
  $handler->display->display_options['filters']['field_country_tid']['expose']['remember'] = TRUE;
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
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['field_country_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_country_tid']['vocabulary'] = 'country';
  /* Filter criterion: promo_resource_language */
  $handler->display->display_options['filters']['field_language_value']['id'] = 'field_language_value';
  $handler->display->display_options['filters']['field_language_value']['table'] = 'field_data_field_language';
  $handler->display->display_options['filters']['field_language_value']['field'] = 'field_language_value';
  $handler->display->display_options['filters']['field_language_value']['relationship'] = 'field_resource_fc_value';
  $handler->display->display_options['filters']['field_language_value']['ui_name'] = 'promo_resource_language';
  $handler->display->display_options['filters']['field_language_value']['operator'] = 'contains';
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
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['field_language_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_language_value']['group_info']['label'] = 'Language';
  $handler->display->display_options['filters']['field_language_value']['group_info']['identifier'] = 'field_language_value';
  $handler->display->display_options['filters']['field_language_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'English',
      'operator' => '=',
      'value' => 'en',
    ),
    2 => array(
      'title' => 'Bulgarian',
      'operator' => '=',
      'value' => 'bg',
    ),
    3 => array(
      'title' => 'Czech',
      'operator' => '=',
      'value' => 'cs',
    ),
    4 => array(
      'title' => 'Danish',
      'operator' => '=',
      'value' => 'da',
    ),
    5 => array(
      'title' => 'German',
      'operator' => '=',
      'value' => 'de',
    ),
    6 => array(
      'title' => 'Greek',
      'operator' => '=',
      'value' => 'el',
    ),
    7 => array(
      'title' => 'Spanish',
      'operator' => '=',
      'value' => 'es',
    ),
    8 => array(
      'title' => 'Estonian',
      'operator' => '=',
      'value' => 'et',
    ),
    9 => array(
      'title' => 'Finnish',
      'operator' => '=',
      'value' => 'fi',
    ),
    10 => array(
      'title' => 'Croatian',
      'operator' => '=',
      'value' => 'hr',
    ),
    11 => array(
      'title' => 'French',
      'operator' => '=',
      'value' => 'fr',
    ),
    12 => array(
      'title' => 'Hungarian',
      'operator' => '=',
      'value' => 'hu',
    ),
    13 => array(
      'title' => 'Icelandic',
      'operator' => '=',
      'value' => 'is',
    ),
    14 => array(
      'title' => 'Italian',
      'operator' => '=',
      'value' => 'it',
    ),
    15 => array(
      'title' => 'Latvian',
      'operator' => '=',
      'value' => 'lv',
    ),
    16 => array(
      'title' => 'Lithuanian',
      'operator' => '=',
      'value' => 'lt',
    ),
    17 => array(
      'title' => 'Dutch',
      'operator' => '=',
      'value' => 'nl',
    ),
    18 => array(
      'title' => 'Maltese',
      'operator' => '=',
      'value' => 'mt',
    ),
    19 => array(
      'title' => 'Norwegian',
      'operator' => '=',
      'value' => 'no',
    ),
    20 => array(
      'title' => 'Polish',
      'operator' => '=',
      'value' => 'pl',
    ),
    21 => array(
      'title' => 'Portuguese',
      'operator' => '=',
      'value' => 'pt',
    ),
    22 => array(
      'title' => 'Romanian',
      'operator' => '=',
      'value' => 'ro',
    ),
    23 => array(
      'title' => 'Slovenian',
      'operator' => '=',
      'value' => 'sl',
    ),
    24 => array(
      'title' => 'Slovak',
      'operator' => '=',
      'value' => 'sk',
    ),
    25 => array(
      'title' => 'Swedish',
      'operator' => '=',
      'value' => 'sv',
    ),
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
  $handler->display->display_options['filters']['field_publication_date_value']['expose']['remember'] = TRUE;
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
    11 => 0,
    12 => 0,
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
  $handler->display->display_options['filters']['field_revised_date_value']['expose']['label'] = 'Revised date (field_revised_date)';
  $handler->display->display_options['filters']['field_revised_date_value']['expose']['operator'] = 'field_revised_date_value_op';
  $handler->display->display_options['filters']['field_revised_date_value']['expose']['identifier'] = 'field_revised_date_value';
  $handler->display->display_options['filters']['field_revised_date_value']['expose']['remember'] = TRUE;
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
    11 => 0,
    12 => 0,
    14 => 0,
    13 => 0,
    15 => 0,
  );
  $handler->display->display_options['filters']['field_revised_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_revised_date_value']['year_range'] = '-15:+3';
  /* Filter criterion: Workbench Access: Access filter */
  $handler->display->display_options['filters']['access_id']['id'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['filters']['access_id']['field'] = 'access_id';
  $handler->display->display_options['filters']['access_id']['group'] = 1;
  $handler->display->display_options['filters']['access_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['access_id']['expose']['operator_id'] = 'access_id_op';
  $handler->display->display_options['filters']['access_id']['expose']['label'] = 'Partner (Author/Partner)';
  $handler->display->display_options['filters']['access_id']['expose']['operator'] = 'access_id_op';
  $handler->display->display_options['filters']['access_id']['expose']['identifier'] = 'access_id';
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
    11 => 0,
    12 => 0,
    14 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['access_id']['access_id'] = array();
  $handler->display->display_options['filters']['access_id']['size'] = '5';
  /* Filter criterion: Content: Type (field_strategic_type) */
  $handler->display->display_options['filters']['field_strategic_type_value_1']['id'] = 'field_strategic_type_value_1';
  $handler->display->display_options['filters']['field_strategic_type_value_1']['table'] = 'field_data_field_strategic_type';
  $handler->display->display_options['filters']['field_strategic_type_value_1']['field'] = 'field_strategic_type_value';
  $handler->display->display_options['filters']['field_strategic_type_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_strategic_type_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_strategic_type_value_1']['expose']['operator_id'] = 'field_strategic_type_value_1_op';
  $handler->display->display_options['filters']['field_strategic_type_value_1']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_strategic_type_value_1']['expose']['operator'] = 'field_strategic_type_value_1_op';
  $handler->display->display_options['filters']['field_strategic_type_value_1']['expose']['identifier'] = 'field_strategic_type_value_1';
  $handler->display->display_options['filters']['field_strategic_type_value_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_strategic_type_value_1']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_strategic_type_value_1']['group_info']['label'] = 'Type (field_strategic_type)';
  $handler->display->display_options['filters']['field_strategic_type_value_1']['group_info']['identifier'] = 'field_strategic_type_value_1';
  $handler->display->display_options['filters']['field_strategic_type_value_1']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_strategic_type_value_1']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_strategic_type_value_1']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Sector (field_multiple_sector) */
  $handler->display->display_options['filters']['field_multiple_sector_tid']['id'] = 'field_multiple_sector_tid';
  $handler->display->display_options['filters']['field_multiple_sector_tid']['table'] = 'field_data_field_multiple_sector';
  $handler->display->display_options['filters']['field_multiple_sector_tid']['field'] = 'field_multiple_sector_tid';
  $handler->display->display_options['filters']['field_multiple_sector_tid']['value'] = '';
  $handler->display->display_options['filters']['field_multiple_sector_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_multiple_sector_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_multiple_sector_tid']['expose']['operator_id'] = 'field_multiple_sector_tid_op';
  $handler->display->display_options['filters']['field_multiple_sector_tid']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_multiple_sector_tid']['expose']['operator'] = 'field_multiple_sector_tid_op';
  $handler->display->display_options['filters']['field_multiple_sector_tid']['expose']['identifier'] = 'field_multiple_sector_tid';
  $handler->display->display_options['filters']['field_multiple_sector_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_multiple_sector_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_multiple_sector_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_multiple_sector_tid']['vocabulary'] = 'sector';
  /* Filter criterion: Content: Co-author (field_co_author) */
  $handler->display->display_options['filters']['field_co_author_tid']['id'] = 'field_co_author_tid';
  $handler->display->display_options['filters']['field_co_author_tid']['table'] = 'field_data_field_co_author';
  $handler->display->display_options['filters']['field_co_author_tid']['field'] = 'field_co_author_tid';
  $handler->display->display_options['filters']['field_co_author_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_co_author_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_co_author_tid']['expose']['operator_id'] = 'field_co_author_tid_op';
  $handler->display->display_options['filters']['field_co_author_tid']['expose']['label'] = 'Co-author (field_co_author)';
  $handler->display->display_options['filters']['field_co_author_tid']['expose']['operator'] = 'field_co_author_tid_op';
  $handler->display->display_options['filters']['field_co_author_tid']['expose']['identifier'] = 'field_co_author_tid';
  $handler->display->display_options['filters']['field_co_author_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_co_author_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_co_author_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_co_author_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_co_author_tid']['vocabulary'] = 'section';
  $handler->display->display_options['filters']['field_co_author_tid']['error_message'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/strategic-documentation';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Strategic Documentation';
  $handler->display->display_options['menu']['description'] = 'Administrate Strategic documentation';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['strategic_documentation_admin'] = array(
    t('Master'),
    t('Strategic documentation'),
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
    t('Type'),
    t('Country'),
    t('Publication date'),
    t('Language'),
    t('Revised date'),
    t('Partner (Author/Partner)'),
    t('Sector'),
    t('Edit'),
    t('Operations'),
    t('[edit_node] [delete_node]'),
    t('Revised date (field_revised_date)'),
    t('Type (field_strategic_type)'),
    t('Co-author (field_co_author)'),
    t('Page'),
  );
  $export['strategic_documentation_admin'] = $view;

  return $export;
}
