<?php
/**
 * @file
 * oira_strategic_documentation.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function oira_strategic_documentation_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'add_strategic';
  $path_breadcrumb->name = 'Add strategic';
  $path_breadcrumb->path = 'node/add/strategic-documentation';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Private Zone',
      1 => 'My Strategic Documentation',
      2 => 'Upload Strategic Documentation',
    ),
    'paths' => array(
      0 => 'private-zone',
      1 => 'private-zone/my-content?type=strategic_documentation',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['add_strategic'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'edit_strategic';
  $path_breadcrumb->name = 'Edit strategic';
  $path_breadcrumb->path = 'node/%node/edit';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Private Zone',
      1 => 'My Strategic Documentation',
      2 => 'Update Strategic Documentation',
    ),
    'paths' => array(
      0 => 'private-zone',
      1 => 'private-zone/my-content?type=strategic_documentation',
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
              'strategic_documentation' => 'strategic_documentation',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['edit_strategic'] = $path_breadcrumb;

  return $export;
}
