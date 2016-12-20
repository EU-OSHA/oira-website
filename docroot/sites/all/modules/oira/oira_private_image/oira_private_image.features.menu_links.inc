<?php
/**
 * @file
 * oira_private_image.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function oira_private_image_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_private-image:node/add/oira-private-image.
  $menu_links['navigation_private-image:node/add/oira-private-image'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/oira-private-image',
    'router_path' => 'node/add/oira-private-image',
    'link_title' => 'Private image',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'navigation_private-image:node/add/oira-private-image',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Private image');

  return $menu_links;
}
