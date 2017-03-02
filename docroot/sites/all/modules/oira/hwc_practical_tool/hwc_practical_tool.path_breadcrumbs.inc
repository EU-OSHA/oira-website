<?php
/**
 * @file
 * hwc_practical_tool.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function hwc_practical_tool_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'add_tools';
  $path_breadcrumb->name = 'Add tools';
  $path_breadcrumb->path = 'node/add/practical-tool';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Private Zone',
      1 => 'Upload Tools',
    ),
    'paths' => array(
      0 => 'private-zone',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -91;
  $export['add_tools'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'edit_news_clone';
  $path_breadcrumb->name = 'Edit tools';
  $path_breadcrumb->path = 'node/%node/edit';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Private Zone',
      1 => 'My Tools',
      2 => 'Update Tool',
    ),
    'paths' => array(
      0 => 'private-zone',
      1 => 'private-zone/my-content?type=practical_tool',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Content: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'practical_tool' => 'practical_tool',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -95;
  $export['edit_news_clone'] = $path_breadcrumb;

  return $export;
}
