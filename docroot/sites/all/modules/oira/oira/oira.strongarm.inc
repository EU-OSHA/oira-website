<?php
/**
 * @file
 * oira.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function oira_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_classes_regions';
  $strongarm->value = 'col-sm-3
col-sm-4
col-sm-6
col-sm-8
col-sm-9
col-md-12
row';
  $export['ds_classes_regions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'text_resize_scope';
  $strongarm->value = 'body';
  $export['text_resize_scope'] = $strongarm;

  return $export;
}
