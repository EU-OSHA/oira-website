<?php
/**
 * @file
 * oira_collaboration.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function oira_collaboration_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_collab_doc_type'.
  $field_bases['field_collab_doc_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_collab_doc_type',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'collaboration_document_type',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
