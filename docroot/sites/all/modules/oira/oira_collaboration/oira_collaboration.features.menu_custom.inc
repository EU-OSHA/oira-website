<?php
/**
 * @file
 * oira_collaboration.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function oira_collaboration_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-collaboration.
  $menus['menu-collaboration'] = array(
    'menu_name' => 'menu-collaboration',
    'title' => 'Collaboration',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Collaboration');

  return $menus;
}
