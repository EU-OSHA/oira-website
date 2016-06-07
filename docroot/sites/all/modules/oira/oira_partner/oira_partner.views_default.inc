<?php
/**
 * @file
 * oira_partner.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function oira_partner_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'country_partner_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Country partner content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Country partner content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'oira_quicktabs';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['tab_title_field'] = 'type';
  $handler->display->display_options['style_options']['row_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
    'news' => 'news',
    'practical_tool' => 'practical_tool',
    'promotional_material' => 'promotional_material',
  );
  /* Filter criterion: Oira partner: Node has section of country partner */
  $handler->display->display_options['filters']['country_partner_access']['id'] = 'country_partner_access';
  $handler->display->display_options['filters']['country_partner_access']['table'] = 'oira_partner';
  $handler->display->display_options['filters']['country_partner_access']['field'] = 'country_partner_access';
  $handler->display->display_options['filters']['country_partner_access']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['country_partner_content'] = array(
    t('Master'),
    t('Country partner content'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['country_partner_content'] = $view;

  $view = new view();
  $view->name = 'partners_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Partners list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'EU/National social partners list';
  $handler->display->display_options['css_class'] = 'hwc-alpha-pager-view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'hwc_quicktabs';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_orgtype',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['tab_title_field'] = 'field_orgtype';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Country (field_country) */
  $handler->display->display_options['relationships']['field_country_tid']['id'] = 'field_country_tid';
  $handler->display->display_options['relationships']['field_country_tid']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_tid']['field'] = 'field_country_tid';
  /* Field: Content: Organisation Type */
  $handler->display->display_options['fields']['field_orgtype']['id'] = 'field_orgtype';
  $handler->display->display_options['fields']['field_orgtype']['table'] = 'field_data_field_orgtype';
  $handler->display->display_options['fields']['field_orgtype']['field'] = 'field_orgtype';
  $handler->display->display_options['fields']['field_orgtype']['label'] = '';
  $handler->display->display_options['fields']['field_orgtype']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_orgtype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_orgtype']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_orgtype']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['alter']['text'] = '<img src="[field_logo-fid]" title="[title_field]" alt="[title_field]" />';
  $handler->display->display_options['fields']['field_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_logo']['alter']['alt'] = '[title_field]';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['element_wrapper_class'] = 'hwc-alpha-pager-view-title-field';
  $handler->display->display_options['fields']['field_country']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Organization (field_press_contact_organization) */
  $handler->display->display_options['sorts']['field_press_contact_organization_value']['id'] = 'field_press_contact_organization_value';
  $handler->display->display_options['sorts']['field_press_contact_organization_value']['table'] = 'field_data_field_press_contact_organization';
  $handler->display->display_options['sorts']['field_press_contact_organization_value']['field'] = 'field_press_contact_organization_value';
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
    'partner' => 'partner',
  );
  /* Filter criterion: Content: Type (field_partner_type) */
  $handler->display->display_options['filters']['field_partner_type_tid']['id'] = 'field_partner_type_tid';
  $handler->display->display_options['filters']['field_partner_type_tid']['table'] = 'field_data_field_partner_type';
  $handler->display->display_options['filters']['field_partner_type_tid']['field'] = 'field_partner_type_tid';
  $handler->display->display_options['filters']['field_partner_type_tid']['value'] = array(
    0 => '284',
  );
  $handler->display->display_options['filters']['field_partner_type_tid']['vocabulary'] = 'partner_types';

  /* Display: EU/National social partners */
  $handler = $view->new_display('block', 'EU/National social partners', 'block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Organisation Type (field_orgtype) */
  $handler->display->display_options['relationships']['field_orgtype_tid']['id'] = 'field_orgtype_tid';
  $handler->display->display_options['relationships']['field_orgtype_tid']['table'] = 'field_data_field_orgtype';
  $handler->display->display_options['relationships']['field_orgtype_tid']['field'] = 'field_orgtype_tid';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_orgtype_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $translatables['partners_list'] = array(
    t('Master'),
    t('EU/National social partners list'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_country'),
    t('<img src="[field_logo-fid]" title="[title_field]" alt="[title_field]" />'),
    t('[title_field]'),
    t('EU/National social partners'),
    t('term from field_orgtype'),
  );
  $export['partners_list'] = $view;

  $view = new view();
  $view->name = 'related_partner';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related Partner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related Partner';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
  /* Contextual filter: Workbench Access: Access filter */
  $handler->display->display_options['arguments']['access_id']['id'] = 'access_id';
  $handler->display->display_options['arguments']['access_id']['table'] = 'workbench_access';
  $handler->display->display_options['arguments']['access_id']['field'] = 'access_id';
  $handler->display->display_options['arguments']['access_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['access_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['access_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['access_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['access_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['access_id']['reduce_duplicates'] = TRUE;
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
    'partner' => 'partner',
  );

  /* Display: Partner */
  $handler = $view->new_display('block', 'Partner', 'block');

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'partner' => 'partner',
  );
  /* Filter criterion: Oira partner: Node is co author of current node. */
  $handler->display->display_options['filters']['is_co_author']['id'] = 'is_co_author';
  $handler->display->display_options['filters']['is_co_author']['table'] = 'oira_partner';
  $handler->display->display_options['filters']['is_co_author']['field'] = 'is_co_author';
  $handler->display->display_options['filters']['is_co_author']['value'] = '1';
  $translatables['related_partner'] = array(
    t('Master'),
    t('Related Partner'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Partner'),
    t('Block'),
  );
  $export['related_partner'] = $view;

  return $export;
}
