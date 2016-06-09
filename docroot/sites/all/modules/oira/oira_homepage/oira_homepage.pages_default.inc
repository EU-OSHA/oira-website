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
          3 => 16,
          4 => 19,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 14,
        ),
        'parent' => 'main',
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
        'class' => '',
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
        'class' => '',
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
        'class' => 'container',
        'hide_empty' => 0,
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 10,
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      10 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => '9',
        'children' => array(
          0 => 13,
        ),
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
        'class' => 'container',
        'hide_empty' => 0,
      ),
      14 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
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
          0 => 'slider',
        ),
        'parent' => '14',
        'class' => '',
        'hide_empty' => 0,
      ),
      'slider' => array(
        'type' => 'region',
        'title' => 'Slider',
        'width' => 100,
        'width_type' => '%',
        'parent' => '15',
        'class' => '',
        'hide_empty' => 0,
      ),
      16 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 17,
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      17 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => '16',
        'children' => array(
          0 => 18,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      18 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'tools',
        ),
        'parent' => '17',
        'class' => '',
        'hide_empty' => 0,
      ),
      'tools' => array(
        'type' => 'region',
        'title' => 'Tools',
        'width' => 100,
        'width_type' => '%',
        'parent' => '18',
        'class' => 'container',
        'hide_empty' => 0,
      ),
      19 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 20,
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      20 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => '19',
        'children' => array(
          0 => 21,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      21 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'oira_partners',
        ),
        'parent' => '20',
        'class' => '',
        'hide_empty' => 0,
      ),
      'oira_partners' => array(
        'type' => 'region',
        'title' => 'OiRA Partners',
        'width' => 100,
        'width_type' => '%',
        'parent' => '21',
        'class' => 'container',
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
      'slider' => NULL,
      'tools' => NULL,
      'oira_partners' => NULL,
    ),
    'oira_partners' => array(
      'style' => '-1',
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
    $pane->pid = 'new-e237c061-c218-44d2-a4be-a724bd53fb5c';
    $pane->panel = 'oira_partners';
    $pane->type = 'views';
    $pane->subtype = 'oira_partners';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '6',
      'pager_id' => '0',
      'offset' => '1',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'oira_partners_homepage',
      'override_title' => 1,
      'override_title_text' => ' %title',
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
    $pane->uuid = 'e237c061-c218-44d2-a4be-a724bd53fb5c';
    $display->content['new-e237c061-c218-44d2-a4be-a724bd53fb5c'] = $pane;
    $display->panels['oira_partners'][0] = 'new-e237c061-c218-44d2-a4be-a724bd53fb5c';
    $pane = new stdClass();
    $pane->pid = 'new-a0b06c34-2e96-42d4-89cf-be424671d2e4';
    $pane->panel = 'promotional_materials';
    $pane->type = 'panels_mini';
    $pane->subtype = 'promotional_materials';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'a0b06c34-2e96-42d4-89cf-be424671d2e4';
    $display->content['new-a0b06c34-2e96-42d4-89cf-be424671d2e4'] = $pane;
    $display->panels['promotional_materials'][0] = 'new-a0b06c34-2e96-42d4-89cf-be424671d2e4';
    $pane = new stdClass();
    $pane->pid = 'new-9b522aa6-b427-4a86-9367-2d0381e4a273';
    $pane->panel = 'slider';
    $pane->type = 'views';
    $pane->subtype = 'slideshow';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
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
      'override_title_text' => '<none>',
      'override_title_heading' => 'div',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9b522aa6-b427-4a86-9367-2d0381e4a273';
    $display->content['new-9b522aa6-b427-4a86-9367-2d0381e4a273'] = $pane;
    $display->panels['slider'][0] = 'new-9b522aa6-b427-4a86-9367-2d0381e4a273';
    $pane = new stdClass();
    $pane->pid = 'new-a6d58695-70ab-4bc2-8bbd-bd9ecf063aac';
    $pane->panel = 'tools';
    $pane->type = 'panels_mini';
    $pane->subtype = 'oira_tools';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'OiRA tools',
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
    $pane->uuid = 'a6d58695-70ab-4bc2-8bbd-bd9ecf063aac';
    $display->content['new-a6d58695-70ab-4bc2-8bbd-bd9ecf063aac'] = $pane;
    $display->panels['tools'][0] = 'new-a6d58695-70ab-4bc2-8bbd-bd9ecf063aac';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}
