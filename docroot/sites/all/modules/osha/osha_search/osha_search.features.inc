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
      "datasource" : { "bundles" : [] },
      "index_directly" : 1,
      "cron_limit" : "10",
      "search_api_et" : { "include" : "incomplete", "fallback language" : "en" },
      "fields" : {
        "attachments_field_file" : { "type" : "text" },
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:summary" : { "type" : "text" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "edit_url" : { "type" : "uri" },
        "field_aditional_resources" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_aditional_resources:body:summary" : { "type" : "list\\u003Ctext\\u003E" },
        "field_aditional_resources:body:value" : { "type" : "list\\u003Ctext\\u003E" },
        "field_aditional_resources:field_article_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_aditional_resources:field_tags" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_aditional_resources:title" : { "type" : "list\\u003Ctext\\u003E" },
        "field_aditional_resources:title_field" : { "type" : "list\\u003Ctext\\u003E" },
        "field_alternative_body:value" : { "type" : "text" },
        "field_alternative_title" : { "type" : "text" },
        "field_archived" : { "type" : "boolean" },
        "field_article_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_character_count" : { "type" : "integer" },
        "field_country" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_expiration_date" : { "type" : "date" },
        "field_file:file" : { "type" : "integer", "entity_type" : "file" },
        "field_general_email" : { "type" : "text" },
        "field_general_phone" : { "type" : "text" },
        "field_guid_main_contact" : { "type" : "text" },
        "field_language:safe_value" : { "type" : "text" },
        "field_language:value" : { "type" : "string" },
        "field_link:url" : { "type" : "uri" },
        "field_main_contact" : { "type" : "text" },
        "field_main_contact_email" : { "type" : "text" },
        "field_mission_statement" : { "type" : "text" },
        "field_orgtype" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_page_count" : { "type" : "decimal" },
        "field_partner_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_ph_address" : { "type" : "text" },
        "field_ph_cp" : { "type" : "text" },
        "field_ph_town" : { "type" : "text" },
        "field_promotional_material_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_publication_date" : { "type" : "date" },
        "field_recommended_articles" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_recommended_resources" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_resource_fc" : { "type" : "integer", "entity_type" : "field_collection_item" },
        "field_resource_fc:field_file:file" : { "type" : "integer", "entity_type" : "file" },
        "field_resource_fc:field_language:safe_value" : { "type" : "text" },
        "field_resource_fc:field_language:value" : { "type" : "string" },
        "field_revised_date" : { "type" : "date" },
        "field_sector" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_sector_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_tags:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_third_description:value" : { "type" : "text" },
        "field_third_language:value" : { "type" : "string" },
        "field_third_title" : { "type" : "text" },
        "field_tool_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "language" : { "type" : "string" },
        "nid" : { "type" : "integer" },
        "practical_tool_sort_sector_bg" : { "type" : "string" },
        "practical_tool_sort_sector_ca" : { "type" : "string" },
        "practical_tool_sort_sector_cs" : { "type" : "string" },
        "practical_tool_sort_sector_da" : { "type" : "string" },
        "practical_tool_sort_sector_de" : { "type" : "string" },
        "practical_tool_sort_sector_el" : { "type" : "string" },
        "practical_tool_sort_sector_en" : { "type" : "string" },
        "practical_tool_sort_sector_es" : { "type" : "string" },
        "practical_tool_sort_sector_et" : { "type" : "string" },
        "practical_tool_sort_sector_fi" : { "type" : "string" },
        "practical_tool_sort_sector_fr" : { "type" : "string" },
        "practical_tool_sort_sector_hr" : { "type" : "string" },
        "practical_tool_sort_sector_hu" : { "type" : "string" },
        "practical_tool_sort_sector_is" : { "type" : "string" },
        "practical_tool_sort_sector_it" : { "type" : "string" },
        "practical_tool_sort_sector_lt" : { "type" : "string" },
        "practical_tool_sort_sector_lv" : { "type" : "string" },
        "practical_tool_sort_sector_mt" : { "type" : "string" },
        "practical_tool_sort_sector_nl" : { "type" : "string" },
        "practical_tool_sort_sector_no" : { "type" : "string" },
        "practical_tool_sort_sector_pl" : { "type" : "string" },
        "practical_tool_sort_sector_pt" : { "type" : "string" },
        "practical_tool_sort_sector_ro" : { "type" : "string" },
        "practical_tool_sort_sector_sk" : { "type" : "string" },
        "practical_tool_sort_sector_sl" : { "type" : "string" },
        "practical_tool_sort_sector_sv" : { "type" : "string" },
        "practical_tool_sort_title_bg" : { "type" : "string" },
        "practical_tool_sort_title_ca" : { "type" : "string" },
        "practical_tool_sort_title_cs" : { "type" : "string" },
        "practical_tool_sort_title_da" : { "type" : "string" },
        "practical_tool_sort_title_de" : { "type" : "string" },
        "practical_tool_sort_title_el" : { "type" : "string" },
        "practical_tool_sort_title_en" : { "type" : "string" },
        "practical_tool_sort_title_es" : { "type" : "string" },
        "practical_tool_sort_title_et" : { "type" : "string" },
        "practical_tool_sort_title_fi" : { "type" : "string" },
        "practical_tool_sort_title_fr" : { "type" : "string" },
        "practical_tool_sort_title_hr" : { "type" : "string" },
        "practical_tool_sort_title_hu" : { "type" : "string" },
        "practical_tool_sort_title_is" : { "type" : "string" },
        "practical_tool_sort_title_it" : { "type" : "string" },
        "practical_tool_sort_title_lt" : { "type" : "string" },
        "practical_tool_sort_title_lv" : { "type" : "string" },
        "practical_tool_sort_title_mt" : { "type" : "string" },
        "practical_tool_sort_title_nl" : { "type" : "string" },
        "practical_tool_sort_title_no" : { "type" : "string" },
        "practical_tool_sort_title_pl" : { "type" : "string" },
        "practical_tool_sort_title_pt" : { "type" : "string" },
        "practical_tool_sort_title_ro" : { "type" : "string" },
        "practical_tool_sort_title_sk" : { "type" : "string" },
        "practical_tool_sort_title_sl" : { "type" : "string" },
        "practical_tool_sort_title_sv" : { "type" : "string" },
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
          "weight" : "-50",
          "settings" : {
            "default" : "1",
            "bundles" : {
              "external_url" : "external_url",
              "file" : "file",
              "flickr" : "flickr",
              "internal_url" : "internal_url",
              "slide" : "slide",
              "slideshare" : "slideshare",
              "webform" : "webform",
              "youtube" : "youtube"
            }
          }
        },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "-49", "settings" : [] },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "-48", "settings" : [] },
        "search_api_attachments_alter_settings" : {
          "status" : 1,
          "weight" : "-47",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1
          }
        },
        "search_api_alter_language_control" : {
          "status" : 1,
          "weight" : "-46",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "-45", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "-44", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "-43", "settings" : [] },
        "search_api_metatag_alter_callback" : { "status" : 0, "weight" : "-42", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "-41", "settings" : { "fields" : [] } },
        "search_api_attachments_field_collections_alter_settings" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1
          }
        }
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
