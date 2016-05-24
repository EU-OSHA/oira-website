<?php
/**
 * @file
 * osha_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function osha_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'osha_search_ac_categ_limit';
  $strongarm->value = '3';
  $export['osha_search_ac_categ_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'osha_search_ac_fields';
  $strongarm->value = array(
    'attachments_field_file' => 'attachments_field_file',
    'body:summary' => 'body:summary',
    'body:value' => 'body:value',
    'title_field' => 'title_field',
  );
  $export['osha_search_ac_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'osha_search_ac_index';
  $strongarm->value = 'default_multilingual_node_index';
  $export['osha_search_ac_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'osha_search_ac_items_limit';
  $strongarm->value = '3';
  $export['osha_search_ac_items_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'osha_search_bundles';
  $strongarm->value = array(
    'article' => 'article',
    'collaborator' => 'collaborator',
    'faq' => 'faq',
    'news' => 'news',
    'practical_tool' => 'practical_tool',
    'partner' => 'partner',
    'press_contact' => 'press_contact',
    'press_release' => 'press_release',
    'promotional_material' => 'promotional_material',
    'wiki_page' => 'wiki_page',
    'external_url' => 0,
    'file' => 0,
    'flickr' => 0,
    'internal_url' => 0,
    'slideshare' => 0,
    'webform' => 0,
    'youtube' => 0,
  );
  $export['osha_search_bundles'] = $strongarm;

  return $export;
}
