<?php
/**
 * @file
 * oira_promotional_material.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function oira_promotional_material_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'promotional_materials';
  $page->task = 'page';
  $page->admin_title = 'Promotional materials';
  $page->admin_description = '';
  $page->path = 'promotional-materials';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_promotional_materials__panel';
  $handler->task = 'page';
  $handler->subtask = 'promotional_materials';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Promotional materials landing page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
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
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Introduction',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'container',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'promotional_materials',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'promotional_materials' => array(
        'type' => 'region',
        'title' => 'Promotional materials',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'container',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'promotional_materials' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Promotional materials';
  $display->uuid = '7dd8d375-af95-477e-8e79-6b2b32ecb776';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8d7b9f9b-7016-48e8-8f6b-9e09a85bddc1';
    $pane->panel = 'center';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '50',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
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
    $pane->uuid = '8d7b9f9b-7016-48e8-8f6b-9e09a85bddc1';
    $display->content['new-8d7b9f9b-7016-48e8-8f6b-9e09a85bddc1'] = $pane;
    $display->panels['center'][0] = 'new-8d7b9f9b-7016-48e8-8f6b-9e09a85bddc1';
    $pane = new stdClass();
    $pane->pid = 'new-a4743c6b-60b2-4533-9a7b-f1d719d803dd';
    $pane->panel = 'promotional_materials';
    $pane->type = 'views';
    $pane->subtype = 'promotional_materials_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
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
    $pane->uuid = 'a4743c6b-60b2-4533-9a7b-f1d719d803dd';
    $display->content['new-a4743c6b-60b2-4533-9a7b-f1d719d803dd'] = $pane;
    $display->panels['promotional_materials'][0] = 'new-a4743c6b-60b2-4533-9a7b-f1d719d803dd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a4743c6b-60b2-4533-9a7b-f1d719d803dd';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['promotional_materials'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'promotional_materials_search';
  $page->task = 'page';
  $page->admin_title = 'Promotional materials search';
  $page->admin_description = '';
  $page->path = 'promotional-materials/search';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_promotional_materials_search__panel';
  $handler->task = 'page';
  $handler->subtask = 'promotional_materials_search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
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
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Introduction',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'container',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'content' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'container',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Promotional materials';
  $display->uuid = 'eee1a97d-d0a3-4ef0-8501-cbacda3efc96';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-98e71801-ad9d-48c8-82d9-9f808eeb0b59';
    $pane->panel = 'center';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '51',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
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
    $pane->uuid = '98e71801-ad9d-48c8-82d9-9f808eeb0b59';
    $display->content['new-98e71801-ad9d-48c8-82d9-9f808eeb0b59'] = $pane;
    $display->panels['center'][0] = 'new-98e71801-ad9d-48c8-82d9-9f808eeb0b59';
    $pane = new stdClass();
    $pane->pid = 'new-f67ccc71-f867-417a-86af-9bfec9a169e1';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'oira_promotional_material-oira_promotional_listing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'f67ccc71-f867-417a-86af-9bfec9a169e1';
    $display->content['new-f67ccc71-f867-417a-86af-9bfec9a169e1'] = $pane;
    $display->panels['content'][0] = 'new-f67ccc71-f867-417a-86af-9bfec9a169e1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-98e71801-ad9d-48c8-82d9-9f808eeb0b59';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['promotional_materials_search'] = $page;

  return $pages;

}
