<?php
/**
 * @file
 * oira_strategic_documentation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oira_strategic_documentation_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function oira_strategic_documentation_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function oira_strategic_documentation_node_info() {
  $items = array(
    'strategic_documentation' => array(
      'name' => 'Strategic documentation',
      'base' => 'node_content',
      'description' => 'Strategic Documentation',
      'has_title' => '1',
      'title_label' => 'Title',
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function oira_strategic_documentation_default_search_api_index() {
  $items = array();
  $items['private_multilingual_node_index'] = entity_import('search_api_index', '{
    "name" : "private_multilingual_node_index",
    "machine_name" : "private_multilingual_node_index",
    "description" : null,
    "server" : "private_apache_solr_server",
    "item_type" : "search_api_et_node",
    "options" : {
      "datasource" : { "bundles" : [ "collaboration_document", "strategic_documentation" ] },
      "index_directly" : 1,
      "cron_limit" : "10",
      "search_api_et" : { "include" : "incomplete", "fallback language" : "en" },
      "fields" : {
        "attachments_field_col_item_files" : { "type" : "text" },
        "attachments_field_private_file" : { "type" : "text" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_alternative_body:value" : { "type" : "text" },
        "field_alternative_title" : { "type" : "text" },
        "field_collaboration_items:field_col_item_desc" : { "type" : "list\\u003Ctext\\u003E", "boost" : "5.0" },
        "field_collaboration_items:field_col_item_label" : { "type" : "list\\u003Ctext\\u003E", "boost" : "5.0" },
        "field_country" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_language:value" : { "type" : "string" },
        "field_languages:value" : { "type" : "list\\u003Cstring\\u003E" },
        "field_multiple_sector" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_partner_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_revised_date" : { "type" : "date" },
        "field_strategic_type" : { "type" : "string" },
        "language" : { "type" : "string" },
        "nid" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "title" : { "type" : "text" },
        "title_field" : { "type" : "text" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : {
              "collaboration_document" : "collaboration_document",
              "strategic_documentation" : "strategic_documentation"
            }
          }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_attachments_field_collections_alter_settings" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv webm mp4 wmv zip rar swf fla flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1
          }
        },
        "search_api_alter_language_control" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_attachments_alter_settings" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv webm mp4 wmv zip rar swf fla flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 0
          }
        },
        "search_api_alter_add_hierarchy" : { "status" : 1, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_metatag_alter_callback" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_et_remove_language" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_case_ignore" : { "status" : 1, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "title_field" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "title_field" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
