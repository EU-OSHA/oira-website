<?php
/**
 * @file
 * oira_partner.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function oira_partner_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-06587e89a458996ec30f6ad8bd679392'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '06587e89a458996ec30f6ad8bd679392',
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
        'weight' => 0,
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

  $export['views-related_partner-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'related_partner-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(
      0 => 'practical_tool',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'oira_frontend' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oira_frontend',
        'weight' => -40,
      ),
      'osha_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osha_admin',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-related_partner-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'related_partner-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(
      0 => 'practical_tool',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'oira_frontend' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oira_frontend',
        'weight' => 0,
      ),
      'osha_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'osha_admin',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
