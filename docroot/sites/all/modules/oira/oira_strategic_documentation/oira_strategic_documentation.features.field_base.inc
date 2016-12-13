<?php
/**
 * @file
 * oira_strategic_documentation.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function oira_strategic_documentation_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_resource_sdoc'.
  $field_bases['field_resource_sdoc'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_resource_sdoc',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  return $field_bases;
}
