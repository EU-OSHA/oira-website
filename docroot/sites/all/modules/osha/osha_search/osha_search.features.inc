<?php
/**
 * @file
 * osha_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function osha_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
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
function osha_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function osha_search_default_search_api_index() {
  $items = array();
  $items['default_multilingual_node_index'] = entity_import('search_api_index', '{
    "name" : "Default multilingual node index",
    "machine_name" : "default_multilingual_node_index",
    "description" : "An automatically created search index for indexing multilingual node data. Might be configured to specific needs.",
    "server" : "solr_server",
    "item_type" : "search_api_et_node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "10",
      "search_api_et" : { "include" : "incomplete", "fallback language" : "" },
      "fields" : {
        "attachments_field_file" : { "type" : "text" },
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:summary" : { "type" : "text" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "edit_url" : { "type" : "uri" },
        "field_abbreviation_name" : { "type" : "text" },
        "field_activity" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_aditional_resources" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_aditional_resources:body:summary" : { "type" : "list\\u003Ctext\\u003E" },
        "field_aditional_resources:body:value" : { "type" : "list\\u003Ctext\\u003E" },
        "field_aditional_resources:field_article_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_aditional_resources:field_summary" : { "type" : "list\\u003Ctext\\u003E" },
        "field_aditional_resources:field_tags" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_aditional_resources:title" : { "type" : "list\\u003Ctext\\u003E" },
        "field_aditional_resources:title_field" : { "type" : "list\\u003Ctext\\u003E" },
        "field_alternative_body:value" : { "type" : "text" },
        "field_alternative_title" : { "type" : "text" },
        "field_appform_status" : { "type" : "text" },
        "field_archived" : { "type" : "boolean" },
        "field_article_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_character_count" : { "type" : "integer" },
        "field_contact_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_country" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_expiration_date" : { "type" : "date" },
        "field_file:file" : { "type" : "integer", "entity_type" : "file" },
        "field_general_email" : { "type" : "text" },
        "field_general_phone" : { "type" : "text" },
        "field_guid_main_contact" : { "type" : "text" },
        "field_language:safe_value" : { "type" : "text" },
        "field_language:value" : { "type" : "string" },
        "field_main_contact" : { "type" : "text" },
        "field_main_contact_email" : { "type" : "text" },
        "field_mission_statement" : { "type" : "text" },
        "field_nace_codes" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_orgtype" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_page_count" : { "type" : "decimal" },
        "field_partner_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_personal_title" : { "type" : "text" },
        "field_ph_address" : { "type" : "text" },
        "field_ph_cp" : { "type" : "text" },
        "field_ph_town" : { "type" : "text" },
        "field_pr_embargo_date" : { "type" : "date" },
        "field_pr_notes_to_editor" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_press_contact_job_title" : { "type" : "text" },
        "field_press_contact_location" : { "type" : "text" },
        "field_press_contact_organization" : { "type" : "text" },
        "field_publication_date" : { "type" : "date" },
        "field_quote" : { "type" : "text" },
        "field_recommended_articles" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_recommended_resources" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_revised_date" : { "type" : "date" },
        "field_summary" : { "type" : "text" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_tags:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_tool_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_wg_category" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_wg_role_1" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_wg_role_2" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_zip_code" : { "type" : "text" },
        "language" : { "type" : "string" },
        "nid" : { "type" : "integer" },
        "search_api_et_id" : { "type" : "string" },
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" },
        "status" : { "type" : "integer" },
        "title" : { "type" : "text" },
        "title2" : { "type" : "string" },
        "title_field" : { "type" : "text" },
        "type" : { "type" : "string" },
        "url" : { "type" : "uri" },
        "uuid" : { "type" : "text" },
        "vid" : { "type" : "integer" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : {
              "article" : "article",
              "event_speaker" : "event_speaker",
              "events" : "events",
              "faq" : "faq",
              "news" : "news",
              "practical_tool" : "practical_tool",
              "partner" : "partner",
              "press_release" : "press_release",
              "wiki_page" : "wiki_page"
            }
          }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_attachments_alter_settings" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0"
          }
        },
        "search_api_alter_language_control" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } }
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
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
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
