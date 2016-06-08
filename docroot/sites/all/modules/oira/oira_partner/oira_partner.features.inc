<?php
/**
 * @file
 * oira_partner.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oira_partner_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
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
function oira_partner_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function oira_partner_node_info() {
  $items = array(
    'collaborator' => array(
      'name' => 'Collaborator',
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => 'Title',
      'help' => '',
    ),
    'partner' => array(
      'name' => 'Partner',
      'base' => 'node_content',
      'description' => 'Content type to store info about OiRA partners',
      'has_title' => '1',
      'title_label' => 'Title',
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
