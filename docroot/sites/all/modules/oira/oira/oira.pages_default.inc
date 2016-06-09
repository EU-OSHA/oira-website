<?php
/**
 * @file
 * oira.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function oira_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'what_s_new';
  $page->task = 'page';
  $page->admin_title = 'What\'s new';
  $page->admin_description = '';
  $page->path = 'what-is-new';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_what_s_new__panel';
  $handler->task = 'page';
  $handler->subtask = 'what_s_new';
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
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'What\'s new in OiRA?',
    'panels_breadcrumbs_paths' => '<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
        ),
        'parent' => NULL,
      ),
      1 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
          1 => 3,
          2 => 6,
        ),
        'class' => '',
        'hide_empty' => 1,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top_row',
        ),
        'parent' => '1',
        'class' => 'container-fluid',
        'hide_empty' => 1,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'latest_news',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'new_tools',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 1,
      ),
      'new_tools' => array(
        'type' => 'region',
        'title' => 'New tools',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => 'container',
        'hide_empty' => 1,
      ),
      'top_row' => array(
        'type' => 'region',
        'title' => 'Top row',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'container',
        'hide_empty' => 0,
      ),
      'latest_news' => array(
        'type' => 'region',
        'title' => 'Latest News',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => 'container',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right' => NULL,
      'left' => NULL,
      'new_tools' => NULL,
      'top_row' => NULL,
      'latest_news' => NULL,
    ),
    'new_tools' => array(
      'style' => '-1',
    ),
    'top_row' => array(
      'style' => '-1',
    ),
    'latest_news' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'What\'s new in OiRA?';
  $display->uuid = '67235c14-a809-4e72-957a-a2c262386280';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c2927d13-7604-4d82-836e-95d33a90155e';
    $pane->panel = 'latest_news';
    $pane->type = 'views';
    $pane->subtype = 'news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 1,
      'override_title_text' => 'Latest news',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c2927d13-7604-4d82-836e-95d33a90155e';
    $display->content['new-c2927d13-7604-4d82-836e-95d33a90155e'] = $pane;
    $display->panels['latest_news'][0] = 'new-c2927d13-7604-4d82-836e-95d33a90155e';
    $pane = new stdClass();
    $pane->pid = 'new-bad84030-52a4-423b-aea9-dd389a07853b';
    $pane->panel = 'new_tools';
    $pane->type = 'views';
    $pane->subtype = 'tools';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 1,
      'override_title_text' => 'New tools',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bad84030-52a4-423b-aea9-dd389a07853b';
    $display->content['new-bad84030-52a4-423b-aea9-dd389a07853b'] = $pane;
    $display->panels['new_tools'][0] = 'new-bad84030-52a4-423b-aea9-dd389a07853b';
    $pane = new stdClass();
    $pane->pid = 'new-70144c79-65be-4c1c-9c82-131d8f233e00';
    $pane->panel = 'top_row';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '57',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'osha_wiki',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '<none>',
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
    $pane->uuid = '70144c79-65be-4c1c-9c82-131d8f233e00';
    $display->content['new-70144c79-65be-4c1c-9c82-131d8f233e00'] = $pane;
    $display->panels['top_row'][0] = 'new-70144c79-65be-4c1c-9c82-131d8f233e00';
    $pane = new stdClass();
    $pane->pid = 'new-bbcfc306-8f03-494e-953e-e36d106d0d09';
    $pane->panel = 'top_row';
    $pane->type = 'views';
    $pane->subtype = 'what_s_new_article';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
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
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bbcfc306-8f03-494e-953e-e36d106d0d09';
    $display->content['new-bbcfc306-8f03-494e-953e-e36d106d0d09'] = $pane;
    $display->panels['top_row'][1] = 'new-bbcfc306-8f03-494e-953e-e36d106d0d09';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-c2927d13-7604-4d82-836e-95d33a90155e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['what_s_new'] = $page;

  return $pages;

}
