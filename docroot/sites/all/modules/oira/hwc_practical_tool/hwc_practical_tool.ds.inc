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
  $ds_fieldsetting->id = 'node|practical_tool|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'practical_tool';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'See more',
        'link class' => 'more-llink',
        'wrapper' => '',
        'class' => '',
        'field_formatter_class' => '',
      ),
    ),
  );
  $export['node|practical_tool|search_result'] = $ds_fieldsetting;

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
  $ds_layout->id = 'node|practical_tool|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'practical_tool';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'hwc_2col_stacked_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'center' => array(
        0 => 'title_field',
        1 => 'field_alternative_title',
        2 => 'field_image',
        3 => 'body',
        4 => 'field_alternative_body',
        5 => 'field_language',
        6 => 'field_publication_date',
        7 => 'field_revised_date',
        8 => 'field_co_author',
        9 => 'field_tool_link',
        10 => 'field_tool_type',
        11 => 'field_country',
        12 => 'field_sector',
        13 => 'field_wf_notification',
        14 => 'workbench_access',
        15 => 'redirect',
        16 => 'path',
        17 => 'metatags',
        18 => 'xmlsitemap',
      ),
      'hidden' => array(
        19 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title_field' => 'center',
      'field_alternative_title' => 'center',
      'field_image' => 'center',
      'body' => 'center',
      'field_alternative_body' => 'center',
      'field_language' => 'center',
      'field_publication_date' => 'center',
      'field_revised_date' => 'center',
      'field_co_author' => 'center',
      'field_tool_link' => 'center',
      'field_tool_type' => 'center',
      'field_country' => 'center',
      'field_sector' => 'center',
      'field_wf_notification' => 'center',
      'workbench_access' => 'center',
      'redirect' => 'center',
      'path' => 'center',
      'metatags' => 'center',
      'xmlsitemap' => 'center',
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
  $export['node|practical_tool|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|practical_tool|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'practical_tool';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_revised_date',
        1 => 'field_country',
        2 => 'field_sector',
        3 => 'title_field',
        4 => 'node_type',
        5 => 'body',
        6 => 'field_tool_link',
        7 => 'related_partners',
        8 => 'tools_see_more',
      ),
    ),
    'fields' => array(
      'field_revised_date' => 'ds_content',
      'field_country' => 'ds_content',
      'field_sector' => 'ds_content',
      'title_field' => 'ds_content',
      'node_type' => 'ds_content',
      'body' => 'ds_content',
      'field_tool_link' => 'ds_content',
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
  $export['node|practical_tool|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|practical_tool|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'practical_tool';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'hwc_2col_stacked_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image',
      ),
      'right' => array(
        1 => 'field_revised_date',
        2 => 'field_sector',
        3 => 'field_country',
        4 => 'field_language',
        5 => 'title_field',
        6 => 'body',
      ),
      'center' => array(
        7 => 'field_tool_link',
        8 => 'related_partners',
        9 => 'tools_see_more',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'field_revised_date' => 'right',
      'field_sector' => 'right',
      'field_country' => 'right',
      'field_language' => 'right',
      'title_field' => 'right',
      'body' => 'right',
      'field_tool_link' => 'center',
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
  $export['node|practical_tool|teaser'] = $ds_layout;

  return $export;
}
