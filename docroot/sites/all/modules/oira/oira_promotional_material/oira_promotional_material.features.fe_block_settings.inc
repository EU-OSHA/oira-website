<?php
/**
 * @file
 * oira_promotional_material.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function oira_promotional_material_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-promotional_materials-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'promotional_materials-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'oira_frontend' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oira_frontend',
        'weight' => 11,
      ),
      'osha_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osha_admin',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
