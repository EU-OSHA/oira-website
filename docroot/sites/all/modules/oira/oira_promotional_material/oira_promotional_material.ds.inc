<?php
/**
 * @file
 * oira_promotional_material.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function oira_promotional_material_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|promotional_material|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'promotional_material';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image',
      ),
      'right' => array(
        1 => 'field_revised_date',
        2 => 'title_field',
        3 => 'node_type',
        4 => 'body',
        5 => 'field_country',
        6 => 'field_resource_fc',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'field_revised_date' => 'right',
      'title_field' => 'right',
      'node_type' => 'right',
      'body' => 'right',
      'field_country' => 'right',
      'field_resource_fc' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
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
  $export['node|promotional_material|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|promotional_material|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'promotional_material';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image',
      ),
      'right' => array(
        1 => 'field_revised_date',
        2 => 'title_field',
        3 => 'body',
        4 => 'field_country',
        5 => 'related_partners',
        6 => 'field_resource_fc',
        7 => 'tools_see_more',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'field_revised_date' => 'right',
      'title_field' => 'right',
      'body' => 'right',
      'field_country' => 'right',
      'related_partners' => 'right',
      'field_resource_fc' => 'right',
      'tools_see_more' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
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
  $export['node|promotional_material|teaser'] = $ds_layout;

  return $export;
}
