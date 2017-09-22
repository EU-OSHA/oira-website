<?php
/**
 * @file
 * oira_private_image.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oira_private_image_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
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
function oira_private_image_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function oira_private_image_image_default_styles() {
  $styles = array();

  // Exported image style: gallery_cover_image.
  $styles['gallery_cover_image'] = array(
    'label' => 'gallery_cover_image',
    'effects' => array(
      12 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1170,
          'height' => 350,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'gallery_cover_image',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: medium_thumbnail_mc.
  $styles['medium_thumbnail_mc'] = array(
    'label' => 'Medium thumbnail MC (525 X 350)',
    'effects' => array(
      13 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 525,
          'height' => 350,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'medium_thumbnail_mc',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: xl_image.
  $styles['xl_image'] = array(
    'label' => 'XL image (1200 wide)',
    'effects' => array(
      15 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function oira_private_image_node_info() {
  $items = array(
    'private_album' => array(
      'name' => 'Private album',
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
