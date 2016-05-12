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
    'delta' => 'promotional_materials-block',
    'i18n_block_language' => array(),
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
  );

  return $export;
}
