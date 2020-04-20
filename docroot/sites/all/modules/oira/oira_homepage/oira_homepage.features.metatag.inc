<?php
/**
 * @file
 * oira_homepage.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function oira_homepage_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[site:name] | [current-page:pager][site:slogan]',
      ),
      'description' => array(
        'value' => 'OiRA is a web platform that enables the creation of sectoral risk assessment tools in any language in an easy and standardised way',
      ),
      'keywords' => array(
        'value' => 'risk assesment, web platform, sectoral risk, tool',
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'dcterms.title' => array(
        'value' => '[site:name]',
      ),
      'dcterms.description' => array(
        'value' => '[site:slogan]',
      ),
      'dcterms.identifier' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  return $config;
}
