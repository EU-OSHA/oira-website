<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Focal point text'),
  'description' => t('Focal point text'),
  'category' => t('Custom Panes'),
//  'edit form' => 'mymodule_taxonomy_root_term',
  'render callback' => 'oira_country_focal_point_pane_render',
//  'admin info' => 'mymodule_taxonomy_root_term_info',
  'defaults' => array(),
  'all contexts' => TRUE,
);

function oira_country_focal_point_pane_render($subtype = NULL, $conf = NULL, $args = NULL, $contexts = NULL) {
  global $language;
  $term = menu_get_object('taxonomy_term', 2);
  if (empty($term)) {
    $node = menu_get_object();
    if (empty($node->field_country)) {
      return;
    }
    $wrapper = entity_metadata_wrapper('node', $node);
    $term = $wrapper->field_country->value();
  }

  if (empty($term)) {
    return;
  }
  // Render as a block.
  $block = new stdClass();
  $block->content = '';
  $term_wrapper = entity_metadata_wrapper('taxonomy_term', $term, ['langcode' => $language->language]);
  // For some reason it doesn't get the correct translations.
  $link = $term_wrapper->language($language->language)->field_ncw_fp_link->value();
  if (!empty($link)) {
    $text = variable_get('oira_config_focal_point_text', 'Focal point');
    $link['url'] = str_replace('osha.europa.eu/en/','osha.europa.eu/' . $language->language . '/', $link['url']);
    $block->content = '<div class="focal-poin-partner-text col-md-12">' . t($text, array('@link' => $link['url'])) . '</div>';
  }
  return $block;
}
