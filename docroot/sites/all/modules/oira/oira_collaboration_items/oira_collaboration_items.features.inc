<?php
/**
 * @file
 * oira_collaboration_items.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oira_collaboration_items_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function oira_collaboration_items_node_info() {
  $items = array(
    'collaboration_document' => array(
      'name' => 'Collaboration document',
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
