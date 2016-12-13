<?php
/**
 * @file
 * osha.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function osha_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_form|node|webform|default';
  $field_group->group_name = 'group_contact_form';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'contact form',
    'weight' => '4',
    'children' => array(
      0 => 'webform',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'contact form',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-contact-form field-group-div container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_contact_form|node|webform|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('contact form');

  return $field_groups;
}
