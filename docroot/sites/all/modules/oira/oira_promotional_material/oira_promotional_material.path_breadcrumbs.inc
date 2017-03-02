<?php
/**
 * @file
 * oira_promotional_material.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function oira_promotional_material_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'add_promotional';
  $path_breadcrumb->name = 'Add promotional material';
  $path_breadcrumb->path = 'node/add/promotional-material';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Private Zone',
      1 => 'Upload Promotional Resources',
    ),
    'paths' => array(
      0 => 'private-zone',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -86;
  $export['add_promotional'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'edit_promotional';
  $path_breadcrumb->name = 'Edit promotional';
  $path_breadcrumb->path = 'node/%node/edit';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Private Zone',
      1 => 'My Promotional Resources',
      2 => 'Update Promotional Resource',
    ),
    'paths' => array(
      0 => 'private-zone',
      1 => 'private-zone/my-content?type=promotional_material',
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
              'promotional_material' => 'promotional_material',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -94;
  $export['edit_promotional'] = $path_breadcrumb;

  return $export;
}
