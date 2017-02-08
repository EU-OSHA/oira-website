<?php
/**
 * @file
 * oira_partner.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function oira_partner_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_partner';
  $strongarm->value = '0';
  $export['comment_anonymous_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_partner';
  $strongarm->value = 1;
  $export['comment_default_mode_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_partner';
  $strongarm->value = '50';
  $export['comment_default_per_page_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_partner';
  $strongarm->value = 1;
  $export['comment_form_location_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_partner';
  $strongarm->value = '1';
  $export['comment_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_partner';
  $strongarm->value = '1';
  $export['comment_preview_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_partner';
  $strongarm->value = 1;
  $export['comment_subject_field_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_comment_filter_partner';
  $strongarm->value = 0;
  $export['entity_translation_comment_filter_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_partner';
  $strongarm->value = 1;
  $export['entity_translation_hide_translation_links_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_partner';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_node__partner';
  $strongarm->value = array(
    'default_language' => 'en',
    'hide_language_selector' => 1,
    'exclude_language_none' => 1,
    'lock_language' => 1,
    'shared_fields_original_only' => 1,
  );
  $export['entity_translation_settings_node__partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__partner';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'osha_slideshow' => array(
        'custom_settings' => FALSE,
      ),
      'highlights_item' => array(
        'custom_settings' => FALSE,
      ),
      'newsletter_item' => array(
        'custom_settings' => FALSE,
      ),
      'pub_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'osha_resources' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'title_body' => array(
        'custom_settings' => FALSE,
      ),
      'body' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'osha_wiki' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '13',
        ),
        'path' => array(
          'weight' => '11',
        ),
        'redirect' => array(
          'weight' => '12',
        ),
        'workbench_access' => array(
          'weight' => '10',
        ),
        'xmlsitemap' => array(
          'weight' => '23',
        ),
      ),
      'display' => array(
        'profile_update_link' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'partner_content_count' => array(
          'teaser' => array(
            'weight' => '8',
            'label' => 'hidden',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'default' => array(
            'weight' => '19',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'country_partner' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'search_result' => array(
            'weight' => '16',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'node_type' => array(
          'search_result' => array(
            'weight' => '1',
            'label' => 'hidden',
            'type' => 'visible',
            'visible' => TRUE,
            'settings' => array(),
          ),
          'teaser' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'default' => array(
            'weight' => '18',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__organisation_type';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '5',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'redirect' => array(
          'weight' => '3',
        ),
        'name' => array(
          'weight' => '0',
        ),
        'description' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__organisation_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_partner';
  $strongarm->value = '4';
  $export['language_content_type_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_partner';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_partner';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_partner';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_partner';
  $strongarm->value = '1';
  $export['node_preview_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_partner';
  $strongarm->value = 0;
  $export['node_submitted_partner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_partner_pattern';
  $strongarm->value = 'oira-community/[node:title]';
  $export['pathauto_node_partner_pattern'] = $strongarm;

  return $export;
}
