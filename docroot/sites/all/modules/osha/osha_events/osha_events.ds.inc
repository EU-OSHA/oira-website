<?php
/**
 * @file
 * osha_events.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function osha_events_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|events|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'events';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'event_location' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|events|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function osha_events_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'event_location';
  $ds_field->label = 'event_location';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'events|*';
  $ds_field->properties = array();
  $export['event_location'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function osha_events_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|events|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'events';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'hwc_2col_stacked_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title_field',
        1 => 'share_widget',
        2 => 'event_location',
        3 => 'field_start_date',
        4 => 'body',
        5 => 'field_organizer',
        6 => 'field_website_of_event',
        7 => 'field_gallery',
        8 => 'field_speaker',
        9 => 'field_schedule',
      ),
      'footer' => array(
        10 => 'field_contact_name',
        11 => 'field_contact_email',
        12 => 'field_contact_phone',
        13 => 'field_related_documents',
      ),
    ),
    'fields' => array(
      'title_field' => 'header',
      'share_widget' => 'header',
      'event_location' => 'header',
      'field_start_date' => 'header',
      'body' => 'header',
      'field_organizer' => 'header',
      'field_website_of_event' => 'header',
      'field_gallery' => 'header',
      'field_speaker' => 'header',
      'field_schedule' => 'header',
      'field_contact_name' => 'footer',
      'field_contact_email' => 'footer',
      'field_contact_phone' => 'footer',
      'field_related_documents' => 'footer',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'center' => 'div',
      'left2' => 'div',
      'right2' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|events|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|events|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'events';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'field_organizer',
        2 => 'field_start_date',
        3 => 'field_country',
        4 => 'field_location',
        5 => 'field_city',
        6 => 'body',
        7 => 'field_related_documents',
        8 => 'field_schedule',
        9 => 'field_speaker',
        10 => 'field_partner_id',
        11 => 'metatags',
        12 => 'path',
        13 => 'redirect',
        14 => 'workbench_access',
        15 => 'field_contact_name',
        16 => 'field_contact_phone',
        17 => 'field_contact_email',
        18 => 'field_website_of_event',
        19 => 'group_contact',
        20 => 'field_tags',
        21 => 'xmlsitemap',
      ),
      'hidden' => array(
        22 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'field_organizer' => 'ds_content',
      'field_start_date' => 'ds_content',
      'field_country' => 'ds_content',
      'field_location' => 'ds_content',
      'field_city' => 'ds_content',
      'body' => 'ds_content',
      'field_related_documents' => 'ds_content',
      'field_schedule' => 'ds_content',
      'field_speaker' => 'ds_content',
      'field_partner_id' => 'ds_content',
      'metatags' => 'ds_content',
      'path' => 'ds_content',
      'redirect' => 'ds_content',
      'workbench_access' => 'ds_content',
      'field_contact_name' => 'ds_content',
      'field_contact_phone' => 'ds_content',
      'field_contact_email' => 'ds_content',
      'field_website_of_event' => 'ds_content',
      'group_contact' => 'ds_content',
      'field_tags' => 'ds_content',
      'xmlsitemap' => 'ds_content',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|events|form'] = $ds_layout;

  return $export;
}
