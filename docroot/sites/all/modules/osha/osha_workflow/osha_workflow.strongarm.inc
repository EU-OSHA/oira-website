<?php
/**
 * @file
 * osha_workflow.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function osha_workflow_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_per_node_type';
  $strongarm->value = 1;
  $export['workbench_moderation_per_node_type'] = $strongarm;

  return $export;
}
