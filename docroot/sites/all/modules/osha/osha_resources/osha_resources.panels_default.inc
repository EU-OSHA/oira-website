<?php
/**
 * @file
 * osha_resources.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function osha_resources_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'additional_resources';
  $mini->category = '';
  $mini->admin_title = 'Additional resources';
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
  $display->title = '';
  $display->uuid = 'c494b9a0-a840-455b-86f4-ac9aec9dfe8e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ca0d6683-5c55-422c-b54c-6cdab50a2fcb';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'additional_resources';
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
      'args' => '%1/youtube',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => 'Youtube',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'additional-resources-youtube-pane',
      'css_class' => 'additional-resources-pane',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ca0d6683-5c55-422c-b54c-6cdab50a2fcb';
    $display->content['new-ca0d6683-5c55-422c-b54c-6cdab50a2fcb'] = $pane;
    $display->panels['center'][0] = 'new-ca0d6683-5c55-422c-b54c-6cdab50a2fcb';
    $pane = new stdClass();
    $pane->pid = 'new-e86f23ea-4a43-4fc4-b62f-b297b97613c3';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'additional_resources';
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
      'args' => '%1/slideshare',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => 'Slideshare',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'additional-resources-slideshare-pane',
      'css_class' => 'additional-resources-pane',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e86f23ea-4a43-4fc4-b62f-b297b97613c3';
    $display->content['new-e86f23ea-4a43-4fc4-b62f-b297b97613c3'] = $pane;
    $display->panels['center'][1] = 'new-e86f23ea-4a43-4fc4-b62f-b297b97613c3';
    $pane = new stdClass();
    $pane->pid = 'new-f4514448-c34f-4dd8-8e25-cacb7aa2f7bc';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'additional_resources';
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
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '%1/flickr',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 1,
      'override_title_text' => 'Flickr',
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
    $pane->uuid = 'f4514448-c34f-4dd8-8e25-cacb7aa2f7bc';
    $display->content['new-f4514448-c34f-4dd8-8e25-cacb7aa2f7bc'] = $pane;
    $display->panels['center'][2] = 'new-f4514448-c34f-4dd8-8e25-cacb7aa2f7bc';
    $pane = new stdClass();
    $pane->pid = 'new-59fcd2ca-4083-44b0-9653-b6819a6c8239';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'additional_resources';
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
      'args' => '%1/news',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => 'News',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'additional-resources-news-pane',
      'css_class' => 'additional-resources-pane',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '59fcd2ca-4083-44b0-9653-b6819a6c8239';
    $display->content['new-59fcd2ca-4083-44b0-9653-b6819a6c8239'] = $pane;
    $display->panels['center'][3] = 'new-59fcd2ca-4083-44b0-9653-b6819a6c8239';
    $pane = new stdClass();
    $pane->pid = 'new-d4387249-e424-4512-814b-fd26621d9acf';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'additional_resources';
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
      'args' => '%1/external_url',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => 'External resources',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'additional-resources-external_url-pane',
      'css_class' => 'additional-resources-pane',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd4387249-e424-4512-814b-fd26621d9acf';
    $display->content['new-d4387249-e424-4512-814b-fd26621d9acf'] = $pane;
    $display->panels['center'][4] = 'new-d4387249-e424-4512-814b-fd26621d9acf';
    $pane = new stdClass();
    $pane->pid = 'new-7f84e0b0-0e99-4073-95cb-4c425534cf32';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'additional_resources';
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
      'args' => '%1/internal_url',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => 'Internal resources',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'additional-resources-internal_url-pane',
      'css_class' => 'additional-resources-internal_url-pane',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '7f84e0b0-0e99-4073-95cb-4c425534cf32';
    $display->content['new-7f84e0b0-0e99-4073-95cb-4c425534cf32'] = $pane;
    $display->panels['center'][5] = 'new-7f84e0b0-0e99-4073-95cb-4c425534cf32';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['additional_resources'] = $mini;

  return $export;
}
