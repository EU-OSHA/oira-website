<?php
/**
 * @file
 * oira_homepage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function oira_homepage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'hp';
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
  $handler->name = 'page_homepage__panel';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Homepage',
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
          0 => 1,
          1 => 6,
          2 => 9,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 3,
          1 => 2,
        ),
        'parent' => 'main',
        'class' => 'row',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 5,
        ),
        'class' => 'col-xs-12 col-sm-6',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 4,
        ),
        'class' => 'col-xs-12 col-sm-6',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top_left_article',
        ),
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top_right_article',
        ),
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'top_left_article' => array(
        'type' => 'region',
        'title' => 'Top left article',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'top_right_article' => array(
        'type' => 'region',
        'title' => 'Top right article',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 7,
        ),
        'parent' => 'main',
        'class' => 'row',
        'hide_empty' => 0,
      ),
      7 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'children' => array(
          0 => 8,
        ),
        'class' => 'col-xs-12',
        'hide_empty' => 0,
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'news_section',
        ),
        'parent' => '7',
        'class' => '',
        'hide_empty' => 0,
      ),
      'news_section' => array(
        'type' => 'region',
        'title' => 'News section',
        'width' => 100,
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
        'hide_empty' => 0,
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 11,
          1 => 10,
        ),
        'parent' => 'main',
        'class' => 'row',
        'hide_empty' => 0,
      ),
      10 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '9',
        'children' => array(
          0 => 13,
        ),
        'class' => 'col-xs-12 col-sm-6',
        'hide_empty' => 0,
      ),
      11 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '9',
        'children' => array(
          0 => 12,
        ),
        'class' => 'col-xs-12 col-sm-6',
        'hide_empty' => 0,
      ),
      12 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'oira_tools',
        ),
        'parent' => '11',
        'class' => '',
        'hide_empty' => 0,
      ),
      'oira_tools' => array(
        'type' => 'region',
        'title' => 'OiRA tools',
        'width' => 100,
        'width_type' => '%',
        'parent' => '12',
        'class' => '',
        'hide_empty' => 0,
      ),
      13 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'promotional_materials',
        ),
        'parent' => '10',
        'class' => '',
        'hide_empty' => 0,
      ),
      'promotional_materials' => array(
        'type' => 'region',
        'title' => 'Promotional materials',
        'width' => 100,
        'width_type' => '%',
        'parent' => '13',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top_left_article' => NULL,
      'top_right_article' => NULL,
      'news_section' => NULL,
      'oira_tools' => NULL,
      'promotional_materials' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '52b64eb0-64cd-4340-9ca2-992c0e58708d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c12890d8-4a82-4186-a28b-3cd716cab9d4';
    $pane->panel = 'news_section';
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
      'display' => 'oshnews_latest',
      'override_title' => 1,
      'override_title_text' => 'Latest news',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c12890d8-4a82-4186-a28b-3cd716cab9d4';
    $display->content['new-c12890d8-4a82-4186-a28b-3cd716cab9d4'] = $pane;
    $display->panels['news_section'][0] = 'new-c12890d8-4a82-4186-a28b-3cd716cab9d4';
    $pane = new stdClass();
    $pane->pid = 'new-cd0d9b24-1a05-49fc-8e43-a334c3ea4fbe';
    $pane->panel = 'promotional_materials';
    $pane->type = 'views';
    $pane->subtype = 'promotional_materials';
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
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => 'Promotional materials',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cd0d9b24-1a05-49fc-8e43-a334c3ea4fbe';
    $display->content['new-cd0d9b24-1a05-49fc-8e43-a334c3ea4fbe'] = $pane;
    $display->panels['promotional_materials'][0] = 'new-cd0d9b24-1a05-49fc-8e43-a334c3ea4fbe';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}
