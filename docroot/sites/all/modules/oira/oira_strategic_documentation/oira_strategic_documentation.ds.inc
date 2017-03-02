<?php
/**
 * @file
 * oira_strategic_documentation.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function oira_strategic_documentation_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|strategic_documentation|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'strategic_documentation';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'hwc_2col_stacked_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_private_image',
      ),
      'right' => array(
        1 => 'field_publication_date',
        2 => 'field_country',
        3 => 'field_strategic_type',
        4 => 'field_language',
        5 => 'title_field',
        6 => 'body',
        7 => 'field_multiple_sector',
        8 => 'field_private_file',
        9 => 'field_link',
      ),
    ),
    'fields' => array(
      'field_private_image' => 'left',
      'field_publication_date' => 'right',
      'field_country' => 'right',
      'field_strategic_type' => 'right',
      'field_language' => 'right',
      'title_field' => 'right',
      'body' => 'right',
      'field_multiple_sector' => 'right',
      'field_private_file' => 'right',
      'field_link' => 'right',
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
      'left2' => array(
        'col-sm-6' => 'col-sm-6',
      ),
      'right2' => array(
        'col-sm-6' => 'col-sm-6',
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
    'layout_attributes' => 'class="container"',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|strategic_documentation|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|strategic_documentation|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'strategic_documentation';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'hwc_2col_stacked_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'workbench_access',
        1 => 'title_field',
        2 => 'field_oira',
        3 => 'field_multiple_sector',
        4 => 'field_country',
        5 => 'field_strategic_type',
        6 => 'field_publication_date',
        7 => 'body',
        8 => 'field_language',
        9 => 'field_private_image',
        10 => 'field_private_file',
        11 => 'field_link',
        12 => 'field_wf_notification',
        13 => 'redirect',
        14 => 'xmlsitemap',
        15 => 'path',
        16 => 'metatags',
        17 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'workbench_access' => 'header',
      'title_field' => 'header',
      'field_oira' => 'header',
      'field_multiple_sector' => 'header',
      'field_country' => 'header',
      'field_strategic_type' => 'header',
      'field_publication_date' => 'header',
      'body' => 'header',
      'field_language' => 'header',
      'field_private_image' => 'header',
      'field_private_file' => 'header',
      'field_link' => 'header',
      'field_wf_notification' => 'header',
      'redirect' => 'header',
      'xmlsitemap' => 'header',
      'path' => 'header',
      'metatags' => 'header',
      '_add_existing_field' => 'header',
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
        'col-sm-6' => 'col-sm-6',
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
  $export['node|strategic_documentation|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|strategic_documentation|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'strategic_documentation';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'hwc_2col_stacked_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_private_image',
      ),
      'right' => array(
        1 => 'field_publication_date',
        2 => 'field_strategic_type',
        3 => 'field_multiple_sector',
        4 => 'field_language',
        5 => 'field_country',
        6 => 'title_field',
        7 => 'body',
        8 => 'field_private_file',
        9 => 'field_link',
      ),
    ),
    'fields' => array(
      'field_private_image' => 'left',
      'field_publication_date' => 'right',
      'field_strategic_type' => 'right',
      'field_multiple_sector' => 'right',
      'field_language' => 'right',
      'field_country' => 'right',
      'title_field' => 'right',
      'body' => 'right',
      'field_private_file' => 'right',
      'field_link' => 'right',
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
        'row' => 'row',
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
  $export['node|strategic_documentation|teaser'] = $ds_layout;

  return $export;
}
