<?php
/**
 * @file
 * oira_collaboration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function oira_collaboration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_collaboration_doc';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_collaboration_doc';
  $strongarm->value = '0';
  $export['comment_anonymous_collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_collaboration_doc';
  $strongarm->value = '0';
  $export['comment_collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_collaboration_doc';
  $strongarm->value = 0;
  $export['comment_default_mode_collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_collaboration_doc';
  $strongarm->value = '50';
  $export['comment_default_per_page_collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_collaboration_doc';
  $strongarm->value = 1;
  $export['comment_form_location_collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_collaboration_doc';
  $strongarm->value = '0';
  $export['comment_preview_collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_collaboration_doc';
  $strongarm->value = 1;
  $export['comment_subject_field_collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_collaboration_doc';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
    2 => 'body',
    3 => 'osha_slideshow',
    4 => 'osha_resources',
    5 => 'osha_wiki',
  );
  $export['ds_extras_view_modes_collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_comment_filter_collaboration_doc';
  $strongarm->value = 0;
  $export['entity_translation_comment_filter_collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_collaboration_doc';
  $strongarm->value = 1;
  $export['entity_translation_hide_translation_links_collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_collaboration_doc';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_node__collaboration_doc';
  $strongarm->value = array(
    'default_language' => 'xx-et-default',
    'hide_language_selector' => 1,
    'exclude_language_none' => 1,
    'lock_language' => 1,
    'shared_fields_original_only' => 1,
  );
  $export['entity_translation_settings_node__collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__collaboration_doc';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '12',
        ),
        'path' => array(
          'weight' => '11',
        ),
        'redirect' => array(
          'weight' => '9',
        ),
        'workbench_access' => array(
          'weight' => '0',
        ),
        'xmlsitemap' => array(
          'weight' => '10',
        ),
        'language' => array(
          'weight' => '10',
        ),
      ),
      'display' => array(
        'node_type' => array(
          'default' => array(
            'weight' => '17',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'teaser' => array(
            'weight' => '16',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'body' => array(
            'weight' => '4',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'related_partners' => array(
          'teaser' => array(
            'weight' => '6',
            'label' => 'hidden',
            'type' => 'related_partners',
            'visible' => TRUE,
            'settings' => array(),
          ),
        ),
        'tools_see_more' => array(
          'teaser' => array(
            'weight' => '7',
            'label' => 'hidden',
            'type' => 'tools_see_more',
            'visible' => TRUE,
            'settings' => array(
              'slice_point' => '250',
              'parent_selector' => '.view-mode-teaser',
            ),
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_collaboration_doc';
  $strongarm->value = '4';
  $export['language_content_type_collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_collaboration_doc';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_collaborator';
  $strongarm->value = array();
  $export['menu_options_collaborator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_collaboration_doc';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_collaborator';
  $strongarm->value = 'main-menu:240';
  $export['menu_parent_collaborator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__collaboration_doc';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_collaboration_doc';
  $strongarm->value = '0';
  $export['nodeblock_collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_collaborator';
  $strongarm->value = '0';
  $export['nodeblock_collaborator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_collaboration_doc';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_collaborator';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_collaborator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_collaboration_doc';
  $strongarm->value = '0';
  $export['node_preview_collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_collaboration_doc';
  $strongarm->value = 1;
  $export['node_submitted_collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_collaboration_doc';
  $strongarm->value = 1;
  $export['workbench_access_node_type_collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_collaborator';
  $strongarm->value = 1;
  $export['workbench_access_node_type_collaborator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_collaboration_doc';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_collaboration_doc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_collaborator';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_collaborator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_collaboration_doc';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_collaboration_doc'] = $strongarm;

  return $export;
}
