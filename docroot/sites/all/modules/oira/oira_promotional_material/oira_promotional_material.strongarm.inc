<?php
/**
 * @file
 * oira_promotional_material.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function oira_promotional_material_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_promotional_material';
  $strongarm->value = '0';
  $export['comment_anonymous_promotional_material'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_promotional_material';
  $strongarm->value = 0;
  $export['comment_default_mode_promotional_material'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_promotional_material';
  $strongarm->value = '50';
  $export['comment_default_per_page_promotional_material'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_promotional_material';
  $strongarm->value = 0;
  $export['comment_form_location_promotional_material'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_promotional_material';
  $strongarm->value = '0';
  $export['comment_preview_promotional_material'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_promotional_material';
  $strongarm->value = '0';
  $export['comment_promotional_material'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_promotional_material';
  $strongarm->value = 0;
  $export['comment_subject_field_promotional_material'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_comment_filter_promotional_material';
  $strongarm->value = 0;
  $export['entity_translation_comment_filter_promotional_material'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_promotional_material';
  $strongarm->value = 1;
  $export['entity_translation_hide_translation_links_promotional_material'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_promotional_material';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_promotional_material'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_node__promotional_material';
  $strongarm->value = array(
    'default_language' => 'en',
    'hide_language_selector' => 1,
    'exclude_language_none' => 1,
    'lock_language' => 1,
    'shared_fields_original_only' => 1,
  );
  $export['entity_translation_settings_node__promotional_material'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_taxonomy_term__promotional_material_type';
  $strongarm->value = array(
    'default_language' => 'xx-et-default',
    'hide_language_selector' => 1,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  );
  $export['entity_translation_settings_taxonomy_term__promotional_material_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'exclude_node_title_content_type_modes_promotional_material';
  $strongarm->value = array(
    'teaser' => 'teaser',
    'country_partner_content' => 'country_partner_content',
    'full' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'diff_standard' => 0,
    'body' => 0,
    'osha_slideshow' => 0,
    'osha_resources' => 0,
    'osha_wiki' => 0,
    'print' => 0,
    'token' => 0,
    'revision' => 0,
    'nodeform' => 0,
  );
  $export['exclude_node_title_content_type_modes_promotional_material'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__promotional_material';
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
        'custom_settings' => TRUE,
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
      'country_partner_content' => array(
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
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '13',
        ),
        'path' => array(
          'weight' => '12',
        ),
        'redirect' => array(
          'weight' => '11',
        ),
        'workbench_access' => array(
          'weight' => '1',
        ),
        'xmlsitemap' => array(
          'weight' => '10',
        ),
      ),
      'display' => array(
        'materials_see_more' => array(
          'teaser' => array(
            'weight' => '6',
            'label' => 'hidden',
            'type' => 'materials_see_more',
            'visible' => TRUE,
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
          'search_result' => array(
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
          'search_result' => array(
            'weight' => '8',
            'label' => 'hidden',
            'type' => 'tools_see_more',
            'visible' => TRUE,
            'settings' => array(
              'slice_point' => '250',
              'parent_selector' => '.view-mode-search_result',
            ),
          ),
        ),
        'node_type' => array(
          'search_result' => array(
            'weight' => '3',
            'label' => 'hidden',
            'type' => 'visible',
            'visible' => TRUE,
            'settings' => array(),
          ),
          'teaser' => array(
            'weight' => '15',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__promotional_material'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_promotional_material';
  $strongarm->value = '4';
  $export['language_content_type_promotional_material'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_promotional_material';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_promotional_material'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_promotional_material';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_promotional_material'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_promotional_material';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_promotional_material'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_promotional_material';
  $strongarm->value = '0';
  $export['node_preview_promotional_material'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_promotional_material';
  $strongarm->value = 0;
  $export['node_submitted_promotional_material'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_promotional_material';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_promotional_material'] = $strongarm;

  return $export;
}
