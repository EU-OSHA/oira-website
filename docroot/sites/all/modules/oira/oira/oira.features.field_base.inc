<?php
/**
 * @file
 * oira.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function oira_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_migration_source'.
  $field_bases['field_migration_source'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_migration_source',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'ncw' => 'NCW',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
