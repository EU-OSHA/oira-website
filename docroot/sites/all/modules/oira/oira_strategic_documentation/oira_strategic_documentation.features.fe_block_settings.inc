<?php
/**
 * @file
 * oira_strategic_documentation.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function oira_strategic_documentation_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-collaboration'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-collaboration',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
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

  $export['menu_block-7'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 7,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
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
    'title' => 'Collaboration',
    'visibility' => 0,
  );

  $export['oira_strategic_documentation-oira_strategic_docs_eu_osha'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'oira_strategic_docs_eu_osha',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'oira_strategic_documentation',
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

  $export['oira_strategic_documentation-oira_strategic_docs_partners'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'oira_strategic_docs_partners',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'oira_strategic_documentation',
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

  return $export;
}
