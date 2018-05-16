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
    'contexts' => array(
      0 => array(
        'identifier' => 'Content',
        'keyword' => 'node',
        'name' => 'entity:node',
        'entity_id' => '450',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Token',
        'keyword' => 'token',
        'name' => 'token',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'Menu Link Item',
        'keyword' => 'menu_link_item',
        'name' => 'oira.oira_menu_link_item_context_plugin',
        'menu_item_id' => '1134',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'panel',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '%menu_link_item:title
%node:title_field',
    'panels_breadcrumbs_paths' => '%menu_link_item:path
<none>
',
    'panels_breadcrumbs_home' => 1,
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => '',
        ),
        'description' => array(
          'value' => '[node:summary]',
        ),
      ),
    ),
    'panels_page_title_state' => 1,
    'panels_page_title' => '%node:title_field - %token:site:name - %token:site:slogan',
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
          0 => 7,
          1 => 2,
          2 => 3,
          3 => 6,
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
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'image',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'image' => array(
        'type' => 'region',
        'title' => 'Image',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
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
      'image' => NULL,
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
    $pane->pid = 'new-85ebbe5d-0175-4deb-b3fb-fb3c1ab7d2a8';
    $pane->panel = 'image';
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
      'context' => 'context_entity:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'whats-new-image',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '85ebbe5d-0175-4deb-b3fb-fb3c1ab7d2a8';
    $display->content['new-85ebbe5d-0175-4deb-b3fb-fb3c1ab7d2a8'] = $pane;
    $display->panels['image'][0] = 'new-85ebbe5d-0175-4deb-b3fb-fb3c1ab7d2a8';
    $pane = new stdClass();
    $pane->pid = 'new-f40dd034-992b-48a0-96bb-9259fe5b869f';
    $pane->panel = 'image';
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
      'context' => 'context_entity:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'whats-new-title container',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f40dd034-992b-48a0-96bb-9259fe5b869f';
    $display->content['new-f40dd034-992b-48a0-96bb-9259fe5b869f'] = $pane;
    $display->panels['image'][1] = 'new-f40dd034-992b-48a0-96bb-9259fe5b869f';
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
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-c2927d13-7604-4d82-836e-95d33a90155e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['what_s_new'] = $page;

  return $pages;

}
