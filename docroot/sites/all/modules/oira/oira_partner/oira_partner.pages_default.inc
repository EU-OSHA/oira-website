<?php
/**
 * @file
 * oira_partner.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function oira_partner_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'national_social_partners';
  $page->task = 'page';
  $page->admin_title = 'National social partners';
  $page->admin_description = '';
  $page->path = 'national-social-partners';
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
  $handler->name = 'page_national_social_partners__panel';
  $handler->task = 'page';
  $handler->subtask = 'national_social_partners';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'National social partners',
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
  $display->title = 'EU/National Social Partners';
  $display->uuid = '47b47281-c299-48fd-9a54-2e3c7de4c9a5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b9cabf9d-c26e-49c4-990d-4e3a5392419e';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'partners_list';
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
    $pane->uuid = 'b9cabf9d-c26e-49c4-990d-4e3a5392419e';
    $display->content['new-b9cabf9d-c26e-49c4-990d-4e3a5392419e'] = $pane;
    $display->panels['content'][0] = 'new-b9cabf9d-c26e-49c4-990d-4e3a5392419e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b9cabf9d-c26e-49c4-990d-4e3a5392419e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['national_social_partners'] = $page;

  return $pages;

}
