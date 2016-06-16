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
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '17',
        ),
        'path' => array(
          'weight' => '16',
        ),
        'redirect' => array(
          'weight' => '15',
        ),
        'workbench_access' => array(
          'weight' => '1',
        ),
        'xmlsitemap' => array(
          'weight' => '14',
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
      ),
    ),
  );
  $export['field_bundle_settings_node__promotional_material'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_promotional_material';
  $strongarm->value = '0';
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
