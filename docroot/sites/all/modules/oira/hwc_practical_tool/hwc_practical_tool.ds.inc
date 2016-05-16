<?php
/**
 * @file
 * hwc_practical_tool.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function hwc_practical_tool_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|practical_tool|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'practical_tool';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'exclude node title settings' => '1',
        'field_formatter_class' => '',
      ),
    ),
  );
  $export['node|practical_tool|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function hwc_practical_tool_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|practical_tool|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'practical_tool';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image',
      ),
      'right' => array(
        1 => 'title_field',
        2 => 'body',
        3 => 'field_sector',
        4 => 'field_language',
        5 => 'field_country',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'title_field' => 'right',
      'body' => 'right',
      'field_sector' => 'right',
      'field_language' => 'right',
      'field_country' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        'col-md-12' => 'col-md-12',
        'row' => 'row',
      ),
      'left' => array(
        'col-sm-3' => 'col-sm-3',
      ),
      'right' => array(
        'col-sm-9' => 'col-sm-9',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 1,
  );
  $export['node|practical_tool|teaser'] = $ds_layout;

  return $export;
}
