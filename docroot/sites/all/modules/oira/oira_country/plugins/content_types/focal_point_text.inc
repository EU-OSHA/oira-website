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

function oira_country_focal_point_pane_render($subtype, $conf, $args, $contexts) {
  $term = menu_get_object('taxonomy_term', 2);
  if (empty($term)) {
    return;
  }
  // Render as a block.
  $block = new stdClass();
  $block->content = '';
  $term_wrapper = entity_metadata_wrapper('taxonomy_term', $term);
  if (!empty($term_wrapper->field_ncw_fp_link->value()['url'])) {
    $link = $term_wrapper->field_ncw_fp_link->value()['url'];
    if (!empty($link)) {
      $text = variable_get('oira_config_focal_point_text', 'Focal point');
      $block->content = t($text, array('@link' => $link));
    }
  }
  return $block;
}
