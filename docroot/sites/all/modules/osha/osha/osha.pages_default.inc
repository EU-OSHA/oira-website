<?php
/**
 * @file
 * osha.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function osha_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_a5aca9bb-ac52-409b-bffc-8873ad684cd4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Article',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_page_title_state' => 1,
    'panels_page_title' => '%node:title',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
          2 => 10,
          3 => 13,
        ),
        'parent' => 'canvas',
        'class' => '',
        'hide_empty' => 0,
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 4,
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'cover_image',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'cover_image' => array(
        'type' => 'region',
        'title' => 'Cover image',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 6,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content',
        ),
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'content' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => 'article-content-container',
        'hide_empty' => 0,
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 11,
        ),
        'parent' => 'main',
        'class' => 'article-related-content-container',
        'hide_empty' => 1,
      ),
      11 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => '10',
        'children' => array(
          0 => 12,
        ),
        'class' => '',
        'hide_empty' => 1,
      ),
      12 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'related_content',
        ),
        'parent' => '11',
        'class' => 'container',
        'hide_empty' => 1,
      ),
      13 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 14,
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      14 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => '13',
        'children' => array(
          0 => 15,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      15 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'add_res',
        ),
        'parent' => '14',
        'class' => '',
        'hide_empty' => 0,
      ),
      'add_res' => array(
        'type' => 'region',
        'title' => 'Add res',
        'width' => 100,
        'width_type' => '%',
        'parent' => '15',
        'class' => '',
        'hide_empty' => 0,
      ),
      'related_content' => array(
        'type' => 'region',
        'title' => 'Related content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '12',
        'class' => 'container-fluid',
        'hide_empty' => 1,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'cover_image' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
      'additional_resources' => NULL,
      'related_content' => NULL,
      'additional_res' => NULL,
      'add_res' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title-field';
  $display->uuid = 'db1cb231-615f-487a-bcd1-a23e8e9361ee';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e3685a84-17d0-42b4-a087-541c145b4fa2';
    $pane->panel = 'add_res';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_aditional_resources';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'field_formatter_class' => '',
        'view_mode' => 'osha_resources',
        'links' => 1,
        'use_content_language' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Additional resources',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e3685a84-17d0-42b4-a087-541c145b4fa2';
    $display->content['new-e3685a84-17d0-42b4-a087-541c145b4fa2'] = $pane;
    $display->panels['add_res'][0] = 'new-e3685a84-17d0-42b4-a087-541c145b4fa2';
    $pane = new stdClass();
    $pane->pid = 'new-e04b48e4-b4c0-4d7b-83f2-aaad14906cda';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => 'h1',
        'title_link' => '',
        'title_class' => '',
        'field_formatter_class' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '%title',
      'override_title_heading' => 'h1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e04b48e4-b4c0-4d7b-83f2-aaad14906cda';
    $display->content['new-e04b48e4-b4c0-4d7b-83f2-aaad14906cda'] = $pane;
    $display->panels['content'][0] = 'new-e04b48e4-b4c0-4d7b-83f2-aaad14906cda';
    $pane = new stdClass();
    $pane->pid = 'new-05336879-03d7-45f7-acab-96275201695f';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_summary';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'smart_trim_format',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => '150',
        'trim_type' => 'chars',
        'trim_suffix' => '...',
        'trim_link' => '0',
        'more_link' => '0',
        'more_text' => 'Read more',
        'trim_options' => array(
          'text' => 'text',
        ),
        'trim_preserve_tags' => '',
        'field_formatter_class' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '05336879-03d7-45f7-acab-96275201695f';
    $display->content['new-05336879-03d7-45f7-acab-96275201695f'] = $pane;
    $display->panels['content'][1] = 'new-05336879-03d7-45f7-acab-96275201695f';
    $pane = new stdClass();
    $pane->pid = 'new-8dc8592a-bd74-40cf-847a-0305facc215b';
    $pane->panel = 'content';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:share_widget';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8dc8592a-bd74-40cf-847a-0305facc215b';
    $display->content['new-8dc8592a-bd74-40cf-847a-0305facc215b'] = $pane;
    $display->panels['content'][2] = 'new-8dc8592a-bd74-40cf-847a-0305facc215b';
    $pane = new stdClass();
    $pane->pid = 'new-f749e93d-4e1d-46f4-a93a-87cb660d63dc';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f749e93d-4e1d-46f4-a93a-87cb660d63dc';
    $display->content['new-f749e93d-4e1d-46f4-a93a-87cb660d63dc'] = $pane;
    $display->panels['content'][3] = 'new-f749e93d-4e1d-46f4-a93a-87cb660d63dc';
    $pane = new stdClass();
    $pane->pid = 'new-eda7eb04-85ad-4452-bdf6-9ae7f7df14d5';
    $pane->panel = 'content';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:share_widget';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'eda7eb04-85ad-4452-bdf6-9ae7f7df14d5';
    $display->content['new-eda7eb04-85ad-4452-bdf6-9ae7f7df14d5'] = $pane;
    $display->panels['content'][4] = 'new-eda7eb04-85ad-4452-bdf6-9ae7f7df14d5';
    $pane = new stdClass();
    $pane->pid = 'new-ff3cd60d-1108-4d82-9128-7ec183a2384f';
    $pane->panel = 'cover_image';
    $pane->type = 'custom_title_tag';
    $pane->subtype = 'custom_title_tag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => NULL,
      'custom_page_title_pattern' => '%node:title-field',
      'form_build_id' => 'form-YN5XmpPlSEll1_ZESuM_YloARQWrW9UwXII3gkZsBMM',
      'form_token' => 'rymw48L-ewH3pRKyOpiiZAaHotdDgniATlirr-2SfrI',
      'form_id' => 'panels_custom_title_tag_edit_form',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ff3cd60d-1108-4d82-9128-7ec183a2384f';
    $display->content['new-ff3cd60d-1108-4d82-9128-7ec183a2384f'] = $pane;
    $display->panels['cover_image'][0] = 'new-ff3cd60d-1108-4d82-9128-7ec183a2384f';
    $pane = new stdClass();
    $pane->pid = 'new-6b1ef6a3-dbb3-40f1-bedc-dff916260412';
    $pane->panel = 'cover_image';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_formatter_class' => '',
        'image_style' => 'article_image',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6b1ef6a3-dbb3-40f1-bedc-dff916260412';
    $display->content['new-6b1ef6a3-dbb3-40f1-bedc-dff916260412'] = $pane;
    $display->panels['cover_image'][1] = 'new-6b1ef6a3-dbb3-40f1-bedc-dff916260412';
    $pane = new stdClass();
    $pane->pid = 'new-3a5ef1dd-f2eb-4a58-8885-a7c0a037d769';
    $pane->panel = 'related_content';
    $pane->type = 'panels_mini';
    $pane->subtype = 'related_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3a5ef1dd-f2eb-4a58-8885-a7c0a037d769';
    $display->content['new-3a5ef1dd-f2eb-4a58-8885-a7c0a037d769'] = $pane;
    $display->panels['related_content'][0] = 'new-3a5ef1dd-f2eb-4a58-8885-a7c0a037d769';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-f749e93d-4e1d-46f4-a93a-87cb660d63dc';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_a5aca9bb-ac52-409b-bffc-8873ad684cd4'] = $handler;

  return $export;
}
