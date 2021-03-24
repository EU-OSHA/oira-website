<?php
/**
 * @file
 * hwc_practical_tool.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function hwc_practical_tool_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_alternative_language|node|practical_tool|form';
  $field_group->group_name = 'group_alternative_language';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'practical_tool';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Alternative language',
    'weight' => '2',
    'children' => array(
      0 => 'field_alternative_body',
      1 => 'field_alternative_title',
      2 => 'field_language',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Alternative language',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-alternative-language field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_third_language|node|practical_tool|form';
  $field_group->group_name = 'group_third_language';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'practical_tool';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Third language',
    'weight' => '3',
    'children' => array(
      0 => 'field_third_title',
      1 => 'field_third_description',
      2 => 'field_third_language',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Third language',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-third-language field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Alternative language');
  t('Third language');

  return $field_groups;
}
