<?php
/**
 * @file
 * oira_private_image.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function oira_private_image_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'private_images';
  $page->task = 'page';
  $page->admin_title = 'Private images';
  $page->admin_description = '';
  $page->path = 'node/%node/collaboration-area/private-images';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 11,
            2 => 12,
            3 => 14,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Content: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_private_images__panel';
  $handler->task = 'page';
  $handler->subtask = 'private_images';
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
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Partner profile - private zone',
            'php' => '$is_partner = FALSE;

if(isset($contexts[\'argument_entity_id:node_1\']->data->field_guid_organisation[LANGUAGE_NONE][0][\'value\']) && isset($contexts[\'logged-in-user\']->data->field_user_partner_guid[LANGUAGE_NONE][0][\'value\'])) {
	if($contexts[\'argument_entity_id:node_1\']->data->field_guid_organisation[LANGUAGE_NONE][0][\'value\'] == $contexts[\'logged-in-user\']->data->field_user_partner_guid[LANGUAGE_NONE][0][\'value\']) {$is_partner = TRUE;}
}

return $is_partner;',
          ),
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
          0 => 1,
          1 => 'main-row',
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
        'class' => '',
        'hide_empty' => 0,
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Container',
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
          0 => 'menu',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'menu' => array(
        'type' => 'region',
        'title' => 'Menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'menu' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Private Zone';
  $display->uuid = 'e951151e-06c4-4692-80ac-906e2fca83b1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-664d4951-5dc5-4e60-a0c1-2778483e1958';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'private_images';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => '<none>',
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
    $pane->uuid = '664d4951-5dc5-4e60-a0c1-2778483e1958';
    $display->content['new-664d4951-5dc5-4e60-a0c1-2778483e1958'] = $pane;
    $display->panels['center'][0] = 'new-664d4951-5dc5-4e60-a0c1-2778483e1958';
    $pane = new stdClass();
    $pane->pid = 'new-5eb671d8-3180-4634-a64b-58ae8bdab751';
    $pane->panel = 'menu';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
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
    $pane->uuid = '5eb671d8-3180-4634-a64b-58ae8bdab751';
    $display->content['new-5eb671d8-3180-4634-a64b-58ae8bdab751'] = $pane;
    $display->panels['menu'][0] = 'new-5eb671d8-3180-4634-a64b-58ae8bdab751';
    $pane = new stdClass();
    $pane->pid = 'new-33c005db-d620-4fd4-9448-06322998d8c0';
    $pane->panel = 'menu';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Image Gallery title - private zone',
      'title' => '<none>',
      'title_heading' => 'h2',
      'body' => '<h2>Image Gallery</h2><div class="private-zone-back-wrapper"><a class="private-zone-back-link" onclick="history.go(-1);return true;" href="#">Back</a></div>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '33c005db-d620-4fd4-9448-06322998d8c0';
    $display->content['new-33c005db-d620-4fd4-9448-06322998d8c0'] = $pane;
    $display->panels['menu'][1] = 'new-33c005db-d620-4fd4-9448-06322998d8c0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-664d4951-5dc5-4e60-a0c1-2778483e1958';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['private_images'] = $page;

  return $pages;

}
