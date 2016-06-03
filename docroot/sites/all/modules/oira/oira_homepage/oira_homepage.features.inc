<?php
/**
 * @file
 * oira_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oira_homepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function oira_homepage_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function oira_homepage_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: slideshow
  $nodequeues['slideshow'] = array(
    'name' => 'slideshow',
    'title' => 'Slideshow',
    'subqueue_title' => '',
    'size' => 6,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'slide',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_node_info().
 */
function oira_homepage_node_info() {
  $items = array(
    'slide' => array(
      'name' => 'Slide',
      'base' => 'node_content',
      'description' => 'Custom content type used for slideshow.',
      'has_title' => '1',
      'title_label' => 'Title',
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
