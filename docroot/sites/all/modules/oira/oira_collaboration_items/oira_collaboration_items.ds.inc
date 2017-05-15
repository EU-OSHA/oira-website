<?php
/**
 * @file
 * oira_collaboration_items.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function oira_collaboration_items_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|collaboration_document|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'collaboration_document';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
        'exclude node title settings' => '1',
        'field_formatter_class' => '',
      ),
    ),
  );
  $export['node|collaboration_document|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function oira_collaboration_items_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|collaboration_document|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'collaboration_document';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_collaboration_doc_type',
        1 => 'field_sector',
        2 => 'field_language',
        3 => 'title',
        4 => 'body',
        5 => 'field_collaboration_items',
      ),
    ),
    'fields' => array(
      'field_collaboration_doc_type' => 'ds_content',
      'field_sector' => 'ds_content',
      'field_language' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
      'field_collaboration_items' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|collaboration_document|teaser'] = $ds_layout;

  return $export;
}
