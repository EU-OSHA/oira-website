<?php
/**
 * @file
 * oira_collaboration_items.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function oira_collaboration_items_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_collaboration_document';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_collaboration_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_collaboration_document';
  $strongarm->value = '0';
  $export['comment_anonymous_collaboration_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_collaboration_document';
  $strongarm->value = '0';
  $export['comment_collaboration_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_collaboration_document';
  $strongarm->value = 1;
  $export['comment_default_mode_collaboration_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_collaboration_document';
  $strongarm->value = '50';
  $export['comment_default_per_page_collaboration_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_collaboration_document';
  $strongarm->value = 0;
  $export['comment_form_location_collaboration_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_collaboration_document';
  $strongarm->value = '0';
  $export['comment_preview_collaboration_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_collaboration_document';
  $strongarm->value = 0;
  $export['comment_subject_field_collaboration_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_collaboration_document';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_collaboration_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_comment_filter_collaboration_document';
  $strongarm->value = 0;
  $export['entity_translation_comment_filter_collaboration_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_collaboration_document';
  $strongarm->value = 1;
  $export['entity_translation_hide_translation_links_collaboration_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_collaboration_document';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_collaboration_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_node__collaboration_document';
  $strongarm->value = array(
    'default_language' => 'xx-et-default',
    'hide_language_selector' => 1,
    'exclude_language_none' => 1,
    'lock_language' => 1,
    'shared_fields_original_only' => 1,
  );
  $export['entity_translation_settings_node__collaboration_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__collaboration_document';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '6',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
        'xmlsitemap' => array(
          'weight' => '3',
        ),
        'language' => array(
          'weight' => '2',
        ),
        'workbench_access' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'node_type' => array(
          'teaser' => array(
            'weight' => '13',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'default' => array(
            'weight' => '5',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__collaboration_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_collaboration_document';
  $strongarm->value = '4';
  $export['language_content_type_collaboration_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_collaboration_document';
  $strongarm->value = array();
  $export['menu_options_collaboration_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_collaborator';
  $strongarm->value = array();
  $export['menu_options_collaborator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_collaboration_document';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_collaboration_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_collaborator';
  $strongarm->value = 'main-menu:240';
  $export['menu_parent_collaborator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__collaboration_document';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__collaboration_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_collaboration_document';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_collaboration_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_collaboration_document';
  $strongarm->value = '0';
  $export['node_preview_collaboration_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_collaboration_document';
  $strongarm->value = 0;
  $export['node_submitted_collaboration_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_collaboration_document';
  $strongarm->value = 0;
  $export['workbench_access_node_type_collaboration_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_collaboration_document';
  $strongarm->value = 'published';
  $export['workbench_moderation_default_state_collaboration_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_collaboration_document';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_collaboration_document'] = $strongarm;

  return $export;
}
