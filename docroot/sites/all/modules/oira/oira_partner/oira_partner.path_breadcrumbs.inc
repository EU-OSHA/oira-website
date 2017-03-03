<?php
/**
 * @file
 * oira_partner.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function oira_partner_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'add_news';
  $path_breadcrumb->name = 'Add news';
  $path_breadcrumb->path = 'node/add/news';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Private Zone',
      1 => 'Create news',
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
  $path_breadcrumb->weight = 0;
  $export['add_news'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'edit_news';
  $path_breadcrumb->name = 'Edit news';
  $path_breadcrumb->path = 'node/%node/edit';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Private Zone',
      1 => 'Update news',
    ),
    'paths' => array(
      0 => 'private-zone',
      1 => '<none>',
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
              'news' => 'news',
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
  $export['edit_news'] = $path_breadcrumb;

  return $export;
}
