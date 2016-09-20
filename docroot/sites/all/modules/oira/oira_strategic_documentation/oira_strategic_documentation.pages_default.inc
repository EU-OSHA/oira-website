<?php
/**
 * @file
 * oira_strategic_documentation.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function oira_strategic_documentation_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'strategic_documentation_search';
  $page->task = 'page';
  $page->admin_title = 'Strategic documentation search';
  $page->admin_description = '';
  $page->path = 'strategic-documentation-search';
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
  $handler->name = 'page_strategic_documentation_search__panel_context_86621b85-4c54-47c9-b6bb-c8d490980796';
  $handler->task = 'page';
  $handler->subtask = 'strategic_documentation_search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Strategic documentation landing page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-strategic-documentation-search',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Content',
        'keyword' => 'node',
        'name' => 'entity:node',
        'entity_id' => '174',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => '',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '%node:title-field',
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
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => 'page-promotional-materials-search ',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
        'hide_empty' => 0,
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
        'class' => 'panel-page-introduction-text',
        'hide_empty' => 0,
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
        'class' => 'promotional-materials-form-container',
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
  $display->title = '%node:title-field';
  $display->uuid = 'eee1a97d-d0a3-4ef0-8501-cbacda3efc96';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b50c66f5-a042-49cc-ac8e-62f90efbb783';
    $pane->panel = 'center';
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
      'context' => 'context_entity:node_1',
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
    $pane->uuid = 'b50c66f5-a042-49cc-ac8e-62f90efbb783';
    $display->content['new-b50c66f5-a042-49cc-ac8e-62f90efbb783'] = $pane;
    $display->panels['center'][0] = 'new-b50c66f5-a042-49cc-ac8e-62f90efbb783';
    $pane = new stdClass();
    $pane->pid = 'new-ad09cb47-53b1-40f4-9c92-7750590afc66';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'oira_strategic_documentation-oira_strategic_docs_listing';
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
    $pane->uuid = 'ad09cb47-53b1-40f4-9c92-7750590afc66';
    $display->content['new-ad09cb47-53b1-40f4-9c92-7750590afc66'] = $pane;
    $display->panels['content'][0] = 'new-ad09cb47-53b1-40f4-9c92-7750590afc66';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['strategic_documentation_search'] = $page;

  return $pages;

}
