<?php
/**
 * @file
 * hwc_practical_tool.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hwc_practical_tool_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hwc_practical_tool_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function hwc_practical_tool_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: tool_of_the_month
  $nodequeues['tool_of_the_month'] = array(
    'name' => 'tool_of_the_month',
    'title' => 'Tool of the month',
    'subqueue_title' => '',
    'size' => 1,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'insert_at_front' => 0,
    'unique_entries' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'practical_tool',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function hwc_practical_tool_image_default_styles() {
  $styles = array();

  // Exported image style: crop_and_scale_600x350__background_dfd8e4.
  $styles['crop_and_scale_600x350__background_dfd8e4'] = array(
    'label' => 'Crop and scale 600x350 (background #ffffff)',
    'effects' => array(
      1 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#ffffff',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 600,
            'height' => 350,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 1,
      ),
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => 350,
          'upscale' => 0,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: generic_thumb_image__auto_crop_-_600x300_.
  $styles['generic_thumb_image__auto_crop_-_600x300_'] = array(
    'label' => 'Generic thumb image (auto crop - 600X300)',
    'effects' => array(
      3 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#FFFFFF',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 600,
            'height' => 200,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 1,
      ),
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => 200,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: new_tools_600x350__background__ffffff_.
  $styles['new_tools_600x350__background__ffffff_'] = array(
    'label' => 'New tools 600x350 (background #ffffff)',
    'effects' => array(
      15 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'generic_detail_thumbnail',
          'apply_all_effects' => 0,
        ),
        'weight' => 1,
      ),
      17 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 350,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function hwc_practical_tool_node_info() {
  $items = array(
    'practical_tool' => array(
      'name' => 'OiRA Tools',
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => 'Title',
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
