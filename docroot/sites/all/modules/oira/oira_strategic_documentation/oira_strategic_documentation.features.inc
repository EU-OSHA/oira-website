<?php
/**
 * @file
 * oira_strategic_documentation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oira_strategic_documentation_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function oira_strategic_documentation_node_info() {
  $items = array(
    'strategic_documentation' => array(
      'name' => 'Strategic documentation',
      'base' => 'node_content',
      'description' => 'Strategic Documentation',
      'has_title' => '1',
      'title_label' => 'Title',
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}