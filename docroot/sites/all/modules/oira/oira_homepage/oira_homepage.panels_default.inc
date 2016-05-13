<?php
/**
 * @file
 * oira_homepage.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function oira_homepage_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'oira_tools';
  $mini->category = 'oira';
  $mini->admin_title = 'OiRA tools';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'OiRA tools';
  $display->uuid = '33a74b88-86eb-48ed-ab4c-ac2a2b5ad258';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-289634e1-2b12-4ace-a7b2-f55eafe1a527';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'tools';
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
      'override_title_text' => 'Tool of the week',
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
    $pane->uuid = '289634e1-2b12-4ace-a7b2-f55eafe1a527';
    $display->content['new-289634e1-2b12-4ace-a7b2-f55eafe1a527'] = $pane;
    $display->panels['center'][0] = 'new-289634e1-2b12-4ace-a7b2-f55eafe1a527';
    $pane = new stdClass();
    $pane->pid = 'new-63d51b62-e0e8-4629-8830-b5e8cffb7b9d';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'tools';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '2',
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
      'override_title_text' => 'Latest tools',
      'override_title_heading' => 'div',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '63d51b62-e0e8-4629-8830-b5e8cffb7b9d';
    $display->content['new-63d51b62-e0e8-4629-8830-b5e8cffb7b9d'] = $pane;
    $display->panels['center'][1] = 'new-63d51b62-e0e8-4629-8830-b5e8cffb7b9d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-289634e1-2b12-4ace-a7b2-f55eafe1a527';
  $mini->display = $display;
  $export['oira_tools'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'promotional_materials';
  $mini->category = 'oira';
  $mini->admin_title = 'Promotional materials';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Promotional materials';
  $display->uuid = '9645f227-acbe-4f0e-b55d-86dbd8725335';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8728761c-49f5-4ae3-81eb-91f4856b859f';
    $pane->panel = 'center';
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
      'override_title_text' => 'Latest materials',
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
    $pane->uuid = '8728761c-49f5-4ae3-81eb-91f4856b859f';
    $display->content['new-8728761c-49f5-4ae3-81eb-91f4856b859f'] = $pane;
    $display->panels['center'][0] = 'new-8728761c-49f5-4ae3-81eb-91f4856b859f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8728761c-49f5-4ae3-81eb-91f4856b859f';
  $mini->display = $display;
  $export['promotional_materials'] = $mini;

  return $export;
}
