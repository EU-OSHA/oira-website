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
  $ds_layout->id = 'node|promotional_material|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'promotional_material';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'hwc_2col_stacked_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title_field',
      ),
      'right' => array(
        1 => 'field_oira',
        2 => 'field_publication_date',
      ),
      'center' => array(
        3 => 'field_promotional_material_type',
        4 => 'body',
        5 => 'field_image',
        7 => 'field_co_author',
        9 => 'field_revised_date',
        10 => 'field_resource_fc',
      ),
      'footer' => array(
        6 => 'workbench_access',
        8 => 'field_country',
        11 => 'xmlsitemap',
        12 => 'redirect',
        13 => 'path',
        14 => 'metatags',
        15 => 'field_wf_notification',
      ),
      'hidden' => array(
        16 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title_field' => 'left',
      'field_oira' => 'right',
      'field_publication_date' => 'right',
      'field_promotional_material_type' => 'center',
      'body' => 'center',
      'field_image' => 'center',
      'workbench_access' => 'footer',
      'field_co_author' => 'center',
      'field_country' => 'footer',
      'field_revised_date' => 'center',
      'field_resource_fc' => 'center',
      'xmlsitemap' => 'footer',
      'redirect' => 'footer',
      'path' => 'footer',
      'metatags' => 'footer',
      'field_wf_notification' => 'footer',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        'container' => 'container',
      ),
      'header' => array(
        'col-md-12' => 'col-md-12',
      ),
      'left' => array(
        'col-sm-6' => 'col-sm-6',
      ),
      'right' => array(
        'col-sm-6' => 'col-sm-6',
      ),
      'center' => array(
        'col-md-12' => 'col-md-12',
      ),
      'left2' => array(
        'col-sm-6' => 'col-sm-6',
      ),
      'right2' => array(
        'col-sm-8' => 'col-sm-8',
      ),
      'footer' => array(
        'col-md-12' => 'col-md-12',
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
    'layout_disable_css' => FALSE,
  );
  $export['node|promotional_material|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|promotional_material|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'promotional_material';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_revised_date',
        1 => 'field_country',
        2 => 'pr_language',
        3 => 'title_field',
        4 => 'node_type',
        5 => 'body',
        6 => 'field_resource_fc',
        7 => 'related_partners',
        8 => 'tools_see_more',
      ),
    ),
    'fields' => array(
      'field_revised_date' => 'ds_content',
      'field_country' => 'ds_content',
      'pr_language' => 'ds_content',
      'title_field' => 'ds_content',
      'node_type' => 'ds_content',
      'body' => 'ds_content',
      'field_resource_fc' => 'ds_content',
      'related_partners' => 'ds_content',
      'tools_see_more' => 'ds_content',
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
  $export['node|promotional_material|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|promotional_material|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'promotional_material';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'hwc_2col_stacked_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image',
      ),
      'right' => array(
        1 => 'field_revised_date',
        2 => 'field_country',
        3 => 'field_promotional_material_type',
        4 => 'pr_language',
        5 => 'title_field',
        6 => 'body',
        7 => 'field_resource_fc',
      ),
      'center' => array(
        8 => 'related_partners',
        9 => 'tools_see_more',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'field_revised_date' => 'right',
      'field_country' => 'right',
      'field_promotional_material_type' => 'right',
      'pr_language' => 'right',
      'title_field' => 'right',
      'body' => 'right',
      'field_resource_fc' => 'right',
      'related_partners' => 'center',
      'tools_see_more' => 'center',
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
      'center' => array(
        'col-md-12' => 'col-md-12',
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
    'layout_disable_css' => FALSE,
  );
  $export['node|promotional_material|teaser'] = $ds_layout;

  return $export;
}
