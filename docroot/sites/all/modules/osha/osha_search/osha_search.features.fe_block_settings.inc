<?php
/**
 * @file
 * osha_search.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function osha_search_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['facetapi-bhmRHTzU2n0ejKZP9wDI0S1oi2DgbSDm'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'bhmRHTzU2n0ejKZP9wDI0S1oi2DgbSDm',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
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

  $export['menu-menu-search'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-search',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'search/site
search/wiki',
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
    'visibility' => 1,
  );

  $export['osha_search-osha_search_clear_filters'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'osha_search_clear_filters',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'osha_search',
    'node_types' => array(),
    'pages' => 'search/*
tools-and-publications/publications
tools-and-publications/seminars
legislation/directives/*
safety-and-health-legislation/european-directives
node/2544
legislation/guidelines/*',
    'roles' => array(),
    'themes' => array(
      'oira_frontend' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oira_frontend',
        'weight' => 0,
      ),
      'osha_admin' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'osha_admin',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'oira_frontend' => array(
        'region' => 'header_block',
        'status' => 1,
        'theme' => 'oira_frontend',
        'weight' => -47,
      ),
      'osha_admin' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'osha_admin',
        'weight' => -10,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views--exp-search-site'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-search-site',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'search',
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
    'visibility' => 1,
  );

  return $export;
}
