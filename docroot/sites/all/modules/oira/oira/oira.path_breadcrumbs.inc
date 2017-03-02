<?php
/**
 * @file
 * oira.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function oira_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'my_content';
  $path_breadcrumb->name = 'My content';
  $path_breadcrumb->path = 'private-zone/my-content';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Private Zone',
      1 => 'My content',
    ),
    'paths' => array(
      0 => 'private-zone',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['my_content'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'sitemap';
  $path_breadcrumb->name = 'Sitemap';
  $path_breadcrumb->path = 'sitemap';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '!page_title',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -85;
  $export['sitemap'] = $path_breadcrumb;

  return $export;
}
