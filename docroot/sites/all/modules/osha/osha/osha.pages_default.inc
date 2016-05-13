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
          0 => 3,
          1 => 2,
          2 => 1,
          3 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 4,
          1 => 5,
        ),
        'parent' => 'main',
        'class' => 'cintainer',
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
      2 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(),
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
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 6,
        ),
        'class' => 'col-sm-9 center-block',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 7,
        ),
        'class' => 'col-sm-3',
        'hide_empty' => 1,
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
        'class' => '',
        'hide_empty' => 0,
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sidebar_right',
        ),
        'parent' => '5',
        'class' => '',
        'hide_empty' => 1,
      ),
      'sidebar_right' => array(
        'type' => 'region',
        'title' => 'Sidebar right',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
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
    ),
  );
  $display->cache = array();
  $display->title = '%node:title-field';
  $display->uuid = 'db1cb231-615f-487a-bcd1-a23e8e9361ee';
  $display->content = array();
  $display->panels = array();
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f749e93d-4e1d-46f4-a93a-87cb660d63dc';
    $display->content['new-f749e93d-4e1d-46f4-a93a-87cb660d63dc'] = $pane;
    $display->panels['content'][0] = 'new-f749e93d-4e1d-46f4-a93a-87cb660d63dc';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'eda7eb04-85ad-4452-bdf6-9ae7f7df14d5';
    $display->content['new-eda7eb04-85ad-4452-bdf6-9ae7f7df14d5'] = $pane;
    $display->panels['content'][1] = 'new-eda7eb04-85ad-4452-bdf6-9ae7f7df14d5';
    $pane = new stdClass();
    $pane->pid = 'new-e04b48e4-b4c0-4d7b-83f2-aaad14906cda';
    $pane->panel = 'cover_image';
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
        'title_style' => 'h2',
        'title_link' => '',
        'title_class' => '',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e04b48e4-b4c0-4d7b-83f2-aaad14906cda';
    $display->content['new-e04b48e4-b4c0-4d7b-83f2-aaad14906cda'] = $pane;
    $display->panels['cover_image'][0] = 'new-e04b48e4-b4c0-4d7b-83f2-aaad14906cda';
    $pane = new stdClass();
    $pane->pid = 'new-8dc8592a-bd74-40cf-847a-0305facc215b';
    $pane->panel = 'cover_image';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8dc8592a-bd74-40cf-847a-0305facc215b';
    $display->content['new-8dc8592a-bd74-40cf-847a-0305facc215b'] = $pane;
    $display->panels['cover_image'][1] = 'new-8dc8592a-bd74-40cf-847a-0305facc215b';
    $pane = new stdClass();
    $pane->pid = 'new-05336879-03d7-45f7-acab-96275201695f';
    $pane->panel = 'cover_image';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '05336879-03d7-45f7-acab-96275201695f';
    $display->content['new-05336879-03d7-45f7-acab-96275201695f'] = $pane;
    $display->panels['cover_image'][2] = 'new-05336879-03d7-45f7-acab-96275201695f';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6b1ef6a3-dbb3-40f1-bedc-dff916260412';
    $display->content['new-6b1ef6a3-dbb3-40f1-bedc-dff916260412'] = $pane;
    $display->panels['cover_image'][3] = 'new-6b1ef6a3-dbb3-40f1-bedc-dff916260412';
    $pane = new stdClass();
    $pane->pid = 'new-918199b3-f4be-420e-b9db-2dd7a915625a';
    $pane->panel = 'sidebar_right';
    $pane->type = 'block';
    $pane->subtype = 'oira_blocks-oshwiki_featured_articles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'OSHwiki',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '918199b3-f4be-420e-b9db-2dd7a915625a';
    $display->content['new-918199b3-f4be-420e-b9db-2dd7a915625a'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-918199b3-f4be-420e-b9db-2dd7a915625a';
    $pane = new stdClass();
    $pane->pid = 'new-9706d71f-b449-4cbc-bce9-1ef664dd5ed2';
    $pane->panel = 'sidebar_right';
    $pane->type = 'block';
    $pane->subtype = 'oira_blocks-related_ncw_publications';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Related publications',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9706d71f-b449-4cbc-bce9-1ef664dd5ed2';
    $display->content['new-9706d71f-b449-4cbc-bce9-1ef664dd5ed2'] = $pane;
    $display->panels['sidebar_right'][1] = 'new-9706d71f-b449-4cbc-bce9-1ef664dd5ed2';
    $pane = new stdClass();
    $pane->pid = 'new-0d9595b4-5757-448c-8422-cfc43e6f774f';
    $pane->panel = 'sidebar_right';
    $pane->type = 'views';
    $pane->subtype = 'related_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => '',
        1 => '',
        2 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'News',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0d9595b4-5757-448c-8422-cfc43e6f774f';
    $display->content['new-0d9595b4-5757-448c-8422-cfc43e6f774f'] = $pane;
    $display->panels['sidebar_right'][2] = 'new-0d9595b4-5757-448c-8422-cfc43e6f774f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f749e93d-4e1d-46f4-a93a-87cb660d63dc';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_a5aca9bb-ac52-409b-bffc-8873ad684cd4'] = $handler;

  return $export;
}
