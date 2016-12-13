<?php
/**
 * @file
 * oira_collaboration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oira_collaboration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function oira_collaboration_node_info() {
  $items = array(
    'collaboration_doc' => array(
      'name' => 'Collaboration documentation',
      'base' => 'node_content',
      'description' => 'Collaboration Documentation',
      'has_title' => '1',
      'title_label' => 'Title',
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
