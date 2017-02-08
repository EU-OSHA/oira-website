<?php
/**
 * @file
 * osha_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function osha_news_ctools_plugin_api($module = NULL, $api = NULL) {
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
function osha_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function osha_news_image_default_styles() {
  $styles = array();

  // Exported image style: scale_600x350__background__dfd8e4__align_to_left_.
  $styles['scale_600x350__background__dfd8e4__align_to_left_'] = array(
    'label' => 'Scale 600x350 (background #dfd8e4, align to left)',
    'effects' => array(
      14 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#dfd8e4',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 600,
            'height' => 350,
            'xpos' => 'left',
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
      15 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => 350,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: scale_600x350__background__ffffff__align_to_left_.
  $styles['scale_600x350__background__ffffff__align_to_left_'] = array(
    'label' => 'Scale 600x350 (background #ffffff, align to left)',
    'effects' => array(
      10 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#ffffff',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 600,
            'height' => 350,
            'xpos' => 'left',
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
      11 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => 350,
          'upscale' => 0,
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
function osha_news_node_info() {
  $items = array(
    'news' => array(
      'name' => 'News',
      'base' => 'node_content',
      'description' => 'OSH news',
      'has_title' => '1',
      'title_label' => 'Title',
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
