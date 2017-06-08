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
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'create_promotional_resource';
  $page->task = 'page';
  $page->admin_title = 'create promotional resource';
  $page->admin_description = 'create promotional resources form';
  $page->path = 'node/%node/create-promotional-resource';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 11,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Content: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
      'keyword' => 'node',
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_create_promotional_resource__panel';
  $handler->task = 'page';
  $handler->subtask = 'create_promotional_resource';
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
        'identifier' => 'Create promotional resource form',
        'keyword' => 'node_add',
        'name' => 'node_add_form',
        'type' => 'promotional_material',
        'id' => 1,
      ),
    ),
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
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Private Zone
My Promotional Resources
Upload Promotional Resources',
    'panels_breadcrumbs_paths' => '/node/%node:nid
/node/%node:nid/my-content?type=promotional_material&status=All
<none>',
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
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 2,
        ),
        'parent' => 'canvas',
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
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'form',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'form' => array(
        'type' => 'region',
        'title' => 'Form',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
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
      'form' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Private Zone';
  $display->uuid = 'ef32d483-b1d6-4a4b-9cde-123d61d6f7df';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-17090856-ecc9-40a7-8f03-222c0535ee99';
  $pane->panel = 'form';
  $pane->type = 'form';
  $pane->subtype = 'form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'context_node_add_form_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '17090856-ecc9-40a7-8f03-222c0535ee99';
  $display->content['new-17090856-ecc9-40a7-8f03-222c0535ee99'] = $pane;
  $display->panels['form'][0] = 'new-17090856-ecc9-40a7-8f03-222c0535ee99';
  $pane = new stdClass();
  $pane->pid = 'new-dc40bb11-7c0a-4576-858d-e8d9f89a37d3';
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
  $pane->uuid = 'dc40bb11-7c0a-4576-858d-e8d9f89a37d3';
  $display->content['new-dc40bb11-7c0a-4576-858d-e8d9f89a37d3'] = $pane;
  $display->panels['menu'][0] = 'new-dc40bb11-7c0a-4576-858d-e8d9f89a37d3';
  $pane = new stdClass();
  $pane->pid = 'new-1bd0ddf8-4cb1-48b1-9339-8c7ff0ccccfb';
  $pane->panel = 'menu';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Partner create promotional resource',
    'title' => '<none>',
    'title_heading' => 'h2',
    'body' => '<h2>Upload Promotional Resource</h2><div class="private-zone-back-wrapper"><a class="private-zone-back-link" onclick="history.go(-1);return true;" href="#">Back</a></div>',
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
  $pane->uuid = '1bd0ddf8-4cb1-48b1-9339-8c7ff0ccccfb';
  $display->content['new-1bd0ddf8-4cb1-48b1-9339-8c7ff0ccccfb'] = $pane;
  $display->panels['menu'][1] = 'new-1bd0ddf8-4cb1-48b1-9339-8c7ff0ccccfb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['create_promotional_resource'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'edit_promotional_material';
  $page->task = 'page';
  $page->admin_title = 'Edit promotional material';
  $page->admin_description = 'Edit promotional material page form';
  $page->path = 'node/%node/edit-promotional_material/%promotional_material_id';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 11,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_access',
        'settings' => array(
          'type' => 'update',
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'argument_entity_id:node_2',
        ),
        'not' => FALSE,
      ),
    ),
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Content: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
    'promotional_material_id' => array(
      'id' => 2,
      'identifier' => 'Content: ID 2',
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
  $handler->name = 'page_edit_promotional_material__panel';
  $handler->task = 'page';
  $handler->subtask = 'edit_promotional_material';
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
    'relationships' => array(
      0 => array(
        'identifier' => 'Promotional material edit form',
        'keyword' => 'node_edit_form',
        'name' => 'node_edit_form_from_node',
        'context' => 'argument_entity_id:node_2',
        'id' => 1,
      ),
    ),
    'name' => 'panel',
    'access' => array(
      'logic' => 'and',
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
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Private Zone
My Promotional Resources
Update Promotional Resource',
    'panels_breadcrumbs_paths' => '/node/%node:nid
/node/%node:nid/my-content?type=promotional_material&status=All
<none>',
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
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 2,
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
        'title' => 'Menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'form',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'form' => array(
        'type' => 'region',
        'title' => 'Form',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'form_title' => NULL,
      'form' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Private Zone';
  $display->uuid = '02e63f6d-f6cf-41d5-bc53-a10bd796cbb6';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-cf508322-920c-4c57-933e-c0f4b0c2fb87';
  $pane->panel = 'center';
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
  $pane->uuid = 'cf508322-920c-4c57-933e-c0f4b0c2fb87';
  $display->content['new-cf508322-920c-4c57-933e-c0f4b0c2fb87'] = $pane;
  $display->panels['center'][0] = 'new-cf508322-920c-4c57-933e-c0f4b0c2fb87';
  $pane = new stdClass();
  $pane->pid = 'new-28251796-0192-4100-af3f-4fe75006bef8';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Partner update promotional material',
    'title' => '<none>',
    'title_heading' => 'h2',
    'body' => '<h2>Update Promotional Resource<em>%promotional_material_id:title</em></h2><div class="private-zone-back-wrapper"><a class="private-zone-back-link" onclick="history.go(-1);return true;" href="#">Back</a></div>',
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
  $pane->uuid = '28251796-0192-4100-af3f-4fe75006bef8';
  $display->content['new-28251796-0192-4100-af3f-4fe75006bef8'] = $pane;
  $display->panels['center'][1] = 'new-28251796-0192-4100-af3f-4fe75006bef8';
  $pane = new stdClass();
  $pane->pid = 'new-3bebc8c2-c3b6-4b68-8c51-d43cb1202de6';
  $pane->panel = 'form';
  $pane->type = 'form';
  $pane->subtype = 'form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'relationship_node_edit_form_from_node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3bebc8c2-c3b6-4b68-8c51-d43cb1202de6';
  $display->content['new-3bebc8c2-c3b6-4b68-8c51-d43cb1202de6'] = $pane;
  $display->panels['form'][0] = 'new-3bebc8c2-c3b6-4b68-8c51-d43cb1202de6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['edit_promotional_material'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'promotional_materials';
  $page->task = 'page';
  $page->admin_title = 'Promotional materials';
  $page->admin_description = '';
  $page->path = 'promotional-resources';
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
    'body_classes_to_add' => 'page-promotional-resources',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Content',
        'keyword' => 'node',
        'name' => 'entity:node',
        'entity_id' => '50',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Token',
        'keyword' => 'token',
        'name' => 'token',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'panel',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '%node:title_field',
    'panels_breadcrumbs_paths' => '<none>',
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
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => 'page-promotional-materials',
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
          0 => 'promotional_materials',
        ),
        'parent' => 'main',
        'class' => 'promotional-materials-types-container',
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
  $display->title = '%node:title-field';
  $display->uuid = '7dd8d375-af95-477e-8e79-6b2b32ecb776';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3c0a4591-79b6-47df-b1f9-b751d3c340bc';
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
  $pane->uuid = '3c0a4591-79b6-47df-b1f9-b751d3c340bc';
  $display->content['new-3c0a4591-79b6-47df-b1f9-b751d3c340bc'] = $pane;
  $display->panels['center'][0] = 'new-3c0a4591-79b6-47df-b1f9-b751d3c340bc';
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
  $page->path = 'promotional-resources-search';
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
    'body_classes_to_add' => 'page-promotional-resources-search',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Content',
        'keyword' => 'node',
        'name' => 'entity:node',
        'entity_id' => '51',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'panel',
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
  $display->storage_type = '';
  $display->storage_id = '';
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
  $pane->pid = 'new-f5c6632a-9e03-49b5-a686-f294f58a5c41';
  $pane->panel = 'center';
  $pane->type = 'custom_title_tag';
  $pane->subtype = 'custom_title_tag';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'custom_page_title_pattern' => 'Promotional Resources-Search',
    'form_build_id' => 'form-z4kqeA0WSySXRQjZ06kXjhvg-YbaTM4xfoCJu0iFQXA',
    'form_token' => 'DRh6GLucvYR-EmOmn5gPbMhiJgohPjoSu6oD8WQS-gI',
    'form_id' => 'panels_custom_title_tag_edit_form',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f5c6632a-9e03-49b5-a686-f294f58a5c41';
  $display->content['new-f5c6632a-9e03-49b5-a686-f294f58a5c41'] = $pane;
  $display->panels['center'][1] = 'new-f5c6632a-9e03-49b5-a686-f294f58a5c41';
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
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['promotional_materials_search'] = $page;

  return $pages;

}
