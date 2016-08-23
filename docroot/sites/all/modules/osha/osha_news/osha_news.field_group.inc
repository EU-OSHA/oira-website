<?php
/**
 * @file
 * osha_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function osha_news_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_wrapper|node|news|default';
  $field_group->group_name = 'group_content_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_image',
      2 => 'field_summary',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-content-wrapper news-field-group',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_content_wrapper|node|news|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content wrapper');

  return $field_groups;
}
