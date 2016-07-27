<?php
/**
 * @file
 * oira.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function oira_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'what_s_new_article';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'What\'s new article';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'What\'s new article';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => 'h2',
    'title_link' => 'content',
    'title_class' => '',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['field_summary']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '1000',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '1',
    'more_text' => 'See more',
    'trim_options' => array(
      'text' => 'text',
      'use_field_summary' => 0,
    ),
    'trim_preserve_tags' => '',
    'field_formatter_class' => '',
    'tools_show_full' => 0,
  );
  /* Sort criterion: Content: Updated (field_updated) */
  $handler->display->display_options['sorts']['field_updated_value']['id'] = 'field_updated_value';
  $handler->display->display_options['sorts']['field_updated_value']['table'] = 'field_data_field_updated';
  $handler->display->display_options['sorts']['field_updated_value']['field'] = 'field_updated_value';
  $handler->display->display_options['sorts']['field_updated_value']['order'] = 'DESC';
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
    'wiki_page' => 'wiki_page',
  );
  /* Filter criterion: Content: Wiki categories (field_wiki_categories) */
  $handler->display->display_options['filters']['field_wiki_categories_tid']['id'] = 'field_wiki_categories_tid';
  $handler->display->display_options['filters']['field_wiki_categories_tid']['table'] = 'field_data_field_wiki_categories';
  $handler->display->display_options['filters']['field_wiki_categories_tid']['field'] = 'field_wiki_categories_tid';
  $handler->display->display_options['filters']['field_wiki_categories_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_wiki_categories_tid']['value'] = array(
    0 => '112',
  );
  $handler->display->display_options['filters']['field_wiki_categories_tid']['vocabulary'] = 'wiki_categories';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['what_s_new_article'] = array(
    t('Master'),
    t('What\'s new article'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['what_s_new_article'] = $view;

  return $export;
}
