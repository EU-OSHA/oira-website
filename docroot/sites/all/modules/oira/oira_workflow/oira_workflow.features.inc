<?php
/**
 * @file
 * oira_workflow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oira_workflow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
