<?php
/**
 * @file
 * hwc_practical_tool.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hwc_practical_tool_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_practical_tool';
  $strongarm->value = '0';
  $export['comment_anonymous_practical_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_practical_tool';
  $strongarm->value = 1;
  $export['comment_default_mode_practical_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_practical_tool';
  $strongarm->value = '50';
  $export['comment_default_per_page_practical_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_practical_tool';
  $strongarm->value = 1;
  $export['comment_form_location_practical_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_practical_tool';
  $strongarm->value = '1';
  $export['comment_practical_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_practical_tool';
  $strongarm->value = '1';
  $export['comment_preview_practical_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_practical_tool';
  $strongarm->value = 1;
  $export['comment_subject_field_practical_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_practical_tool';
  $strongarm->value = 1;
  $export['entity_translation_hide_translation_links_practical_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_node__practical_tool';
  $strongarm->value = array(
    'default_language' => 'xx-et-default',
    'hide_language_selector' => 1,
    'exclude_language_none' => 1,
    'lock_language' => 1,
    'shared_fields_original_only' => 1,
  );
  $export['entity_translation_settings_node__practical_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_taxonomy_term__practical_tool_types';
  $strongarm->value = array(
    'default_language' => 'xx-et-default',
    'hide_language_selector' => 1,
    'exclude_language_none' => 1,
    'lock_language' => 0,
    'shared_fields_original_only' => 1,
  );
  $export['entity_translation_settings_taxonomy_term__practical_tool_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_taxonomy_term__segment';
  $strongarm->value = array(
    'default_language' => 'xx-et-default',
    'hide_language_selector' => 1,
    'exclude_language_none' => 1,
    'lock_language' => 0,
    'shared_fields_original_only' => 1,
  );
  $export['entity_translation_settings_taxonomy_term__segment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__practical_tool';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'osha_slideshow' => array(
        'custom_settings' => FALSE,
      ),
      'highlights_item' => array(
        'custom_settings' => TRUE,
      ),
      'newsletter_item' => array(
        'custom_settings' => TRUE,
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
        'custom_settings' => TRUE,
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
          'weight' => '22',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '21',
        ),
        'redirect' => array(
          'weight' => '20',
        ),
        'workbench_access' => array(
          'weight' => '19',
        ),
        'language' => array(
          'weight' => '5',
        ),
        'xmlsitemap' => array(
          'weight' => '23',
        ),
      ),
      'display' => array(
        'share_widget' => array(
          'teaser' => array(
            'weight' => '19',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'default' => array(
            'weight' => '1',
            'label' => 'above',
            'type' => 'visible',
            'visible' => TRUE,
            'settings' => array(),
          ),
          'search_result' => array(
            'weight' => '19',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'title_field' => array(
          'teaser' => array(
            'weight' => '2',
            'label' => 'hidden',
            'type' => 'visible',
            'visible' => TRUE,
            'settings' => array(),
          ),
          'default' => array(
            'weight' => '15',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'related_partners' => array(
          'default' => array(
            'weight' => '15',
            'label' => 'hidden',
            'type' => 'related_partners',
            'visible' => TRUE,
            'settings' => array(),
          ),
          'teaser' => array(
            'weight' => '9',
            'label' => 'hidden',
            'type' => 'related_partners',
            'visible' => TRUE,
            'settings' => array(),
          ),
          'search_result' => array(
            'weight' => '8',
            'label' => 'hidden',
            'type' => 'related_partners',
            'visible' => TRUE,
            'settings' => array(),
          ),
        ),
        'tools_see_more' => array(
          'default' => array(
            'weight' => '13',
            'label' => 'above',
            'type' => 'tools_see_more',
            'visible' => TRUE,
            'settings' => array(
              'slice_point' => '100',
              'parent_selector' => '.views-row',
            ),
          ),
          'teaser' => array(
            'weight' => '10',
            'label' => 'hidden',
            'type' => 'tools_see_more',
            'visible' => TRUE,
            'settings' => array(
              'slice_point' => '250',
              'parent_selector' => '.view-mode-teaser',
            ),
          ),
          'search_result' => array(
            'weight' => '9',
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
            'weight' => '5',
            'label' => 'hidden',
            'type' => 'visible',
            'visible' => TRUE,
            'settings' => array(),
          ),
          'teaser' => array(
            'weight' => '17',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'default' => array(
            'weight' => '17',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__practical_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_practical_tool';
  $strongarm->value = '4';
  $export['language_content_type_practical_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_practical_tool';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_practical_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_practical_tool';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_practical_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_practical_tool';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_practical_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_practical_tool';
  $strongarm->value = '0';
  $export['node_preview_practical_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_practical_tool';
  $strongarm->value = 0;
  $export['node_submitted_practical_tool'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_practical_tool_pattern';
  $strongarm->value = 'oira-tools/[node:title]';
  $export['pathauto_node_practical_tool_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_practical_tool';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_practical_tool'] = $strongarm;

  return $export;
}
