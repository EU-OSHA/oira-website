<?php
/**
 * @file
 * osha_news.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function osha_news_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'back_to_news' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'share_widget_footer' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|news|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'See more',
        'link class' => 'more-link',
        'wrapper' => '',
        'class' => '',
        'field_formatter_class' => '',
      ),
    ),
  );
  $export['node|news|search_result'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function osha_news_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'back_to_news';
  $ds_field->label = 'Back';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'news|default';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['back_to_news'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'share_widget_footer';
  $ds_field->label = 'Share widget footer';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'news|default';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['share_widget_footer'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function osha_news_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_publication_date',
        1 => 'back_to_news',
        2 => 'title_field',
        3 => 'share_widget',
        4 => 'group_content_wrapper',
        5 => 'field_summary',
        6 => 'share_widget_footer',
        7 => 'field_image',
        8 => 'body',
      ),
    ),
    'fields' => array(
      'field_publication_date' => 'ds_content',
      'back_to_news' => 'ds_content',
      'title_field' => 'ds_content',
      'share_widget' => 'ds_content',
      'group_content_wrapper' => 'ds_content',
      'field_summary' => 'ds_content',
      'share_widget_footer' => 'ds_content',
      'field_image' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        'container' => 'container',
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
  $export['node|news|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'hwc_2col_stacked_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'workbench_access',
        7 => 'path',
        8 => 'redirect',
        9 => 'metatags',
      ),
      'center' => array(
        1 => 'title_field',
        2 => 'field_summary',
        3 => 'field_image',
        4 => 'field_publication_date',
        5 => 'body',
        12 => 'field_aditional_resources',
      ),
      'footer' => array(
        6 => 'field_tags',
        10 => 'field_character_count',
        11 => 'field_page_count',
      ),
      'hidden' => array(
        13 => 'xmlsitemap',
        14 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'workbench_access' => 'header',
      'title_field' => 'center',
      'field_summary' => 'center',
      'field_image' => 'center',
      'field_publication_date' => 'center',
      'body' => 'center',
      'field_tags' => 'footer',
      'path' => 'header',
      'redirect' => 'header',
      'metatags' => 'header',
      'field_character_count' => 'footer',
      'field_page_count' => 'footer',
      'field_aditional_resources' => 'center',
      'xmlsitemap' => 'hidden',
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
  $export['node|news|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|osha_resources';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'osha_resources';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image',
      ),
      'right' => array(
        1 => 'field_publication_date',
        2 => 'title_field',
        3 => 'field_summary',
        4 => 'body',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'field_publication_date' => 'right',
      'title_field' => 'right',
      'field_summary' => 'right',
      'body' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        'row' => 'row',
      ),
      'left' => array(
        'col-sm-2' => 'col-sm-2',
      ),
      'right' => array(
        'col-sm-10' => 'col-sm-10',
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
  $export['node|news|osha_resources'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_publication_date',
        1 => 'title_field',
        2 => 'node_type',
        3 => 'body',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_publication_date' => 'ds_content',
      'title_field' => 'ds_content',
      'node_type' => 'ds_content',
      'body' => 'ds_content',
      'node_link' => 'ds_content',
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
  $export['node|news|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image',
      ),
      'right' => array(
        1 => 'field_publication_date',
        2 => 'title_field',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'field_publication_date' => 'right',
      'title_field' => 'right',
      'body' => 'right',
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
  $export['node|news|teaser'] = $ds_layout;

  return $export;
}
