<?php
/**
 * @file
 * oira_promotional_material.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oira_promotional_material_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function oira_promotional_material_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function oira_promotional_material_node_info() {
  $items = array(
    'promotional_material' => array(
      'name' => 'Promotional material',
      'base' => 'node_content',
      'description' => 'Leaflet, poster, presentations, link to videos, etc...',
      'has_title' => '1',
      'title_label' => 'Title',
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
