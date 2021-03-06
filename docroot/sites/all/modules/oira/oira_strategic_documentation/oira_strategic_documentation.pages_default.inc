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
  $page->name = 'collaboration_doc_search';
  $page->task = 'page';
  $page->admin_title = 'Collaboration area';
  $page->admin_description = '';
  $page->path = 'private-zone/collaboration-area';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
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
  $handler->name = 'page_collaboration_doc_search__panel_context_86621b85-4c54-47c9-b6bb-c8d490980796';
  $handler->task = 'page';
  $handler->subtask = 'collaboration_doc_search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Collaboration area',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-strategic-documentation-search private-zone-page collaboration-area-page-selector',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Private Zone
Collaboration area
',
    'panels_breadcrumbs_paths' => '/node/%node:nid
<none>',
    'panels_breadcrumbs_home' => 1,
    'access' => array(
      'plugins' => array(),
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
          0 => 2,
          1 => 'main-row',
          2 => 1,
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
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'menu',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 1,
      ),
      'menu' => array(
        'type' => 'region',
        'title' => 'Menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 1,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'content' => NULL,
      'menu' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'EU-OSHA Files';
  $display->uuid = 'eee1a97d-d0a3-4ef0-8501-cbacda3efc96';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-181b84c3-18bb-49a1-a34b-920b1ec77495';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Intro text',
    'title' => '<none>',
    'title_heading' => 'h2',
    'body' => '<p>This section has been designed as a networking space where OiRA partners will be able to share documents, materials and resources. It can also be used as a source of information from where to find, for instance, images to be used in the OiRA tools and for OiRA related presentations and publications.</p>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '181b84c3-18bb-49a1-a34b-920b1ec77495';
  $display->content['new-181b84c3-18bb-49a1-a34b-920b1ec77495'] = $pane;
  $display->panels['center'][0] = 'new-181b84c3-18bb-49a1-a34b-920b1ec77495';
  $pane = new stdClass();
  $pane->pid = 'new-92abd91d-caa7-4ad7-ae17-6e40e054227b';
  $pane->panel = 'content';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '92abd91d-caa7-4ad7-ae17-6e40e054227b';
  $display->content['new-92abd91d-caa7-4ad7-ae17-6e40e054227b'] = $pane;
  $display->panels['content'][0] = 'new-92abd91d-caa7-4ad7-ae17-6e40e054227b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['collaboration_doc_search'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'create_strategic_documentation';
  $page->task = 'page';
  $page->admin_title = 'create strategic documentation';
  $page->admin_description = 'create strategic documentation form';
  $page->path = 'node/%node/create-strategic-documentation';
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
  $handler->name = 'page_create_strategic_documentation__panel';
  $handler->task = 'page';
  $handler->subtask = 'create_strategic_documentation';
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
        'identifier' => 'Create strategic documentation form',
        'keyword' => 'node_add',
        'name' => 'node_add_form',
        'type' => 'strategic_documentation',
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
My Strategic Documentation
Upload Strategic Documentation',
    'panels_breadcrumbs_paths' => '/node/%node:nid
/node/%node:nid/my-content?type=strategic_documentation&status=All
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
  $display->uuid = '12ae27de-e08e-4eb3-b4db-5e37124aa5f7';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-563efce8-b3ba-4524-a6ef-712080376518';
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
  $pane->uuid = '563efce8-b3ba-4524-a6ef-712080376518';
  $display->content['new-563efce8-b3ba-4524-a6ef-712080376518'] = $pane;
  $display->panels['form'][0] = 'new-563efce8-b3ba-4524-a6ef-712080376518';
  $pane = new stdClass();
  $pane->pid = 'new-4e4a956b-eb9a-4b6f-822a-edb05573466a';
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
  $pane->uuid = '4e4a956b-eb9a-4b6f-822a-edb05573466a';
  $display->content['new-4e4a956b-eb9a-4b6f-822a-edb05573466a'] = $pane;
  $display->panels['menu'][0] = 'new-4e4a956b-eb9a-4b6f-822a-edb05573466a';
  $pane = new stdClass();
  $pane->pid = 'new-48c2c912-cd2f-4828-afad-f49cfbc7ae6f';
  $pane->panel = 'menu';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Partner create strategic documentation',
    'title' => '<none>',
    'title_heading' => 'h2',
    'body' => '<h2>Upload Strategic Documentation</h2><div class="private-zone-back-wrapper"><a class="private-zone-back-link" onclick="history.go(-1);return true;" href="#">Back</a></div>',
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
  $pane->uuid = '48c2c912-cd2f-4828-afad-f49cfbc7ae6f';
  $display->content['new-48c2c912-cd2f-4828-afad-f49cfbc7ae6f'] = $pane;
  $display->panels['menu'][1] = 'new-48c2c912-cd2f-4828-afad-f49cfbc7ae6f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-563efce8-b3ba-4524-a6ef-712080376518';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['create_strategic_documentation'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'edit_strategic_documentation';
  $page->task = 'page';
  $page->admin_title = 'Edit strategic documentation';
  $page->admin_description = 'Edit strategic documentation page form';
  $page->path = 'node/%node/edit-strategic_documentation/%strategic_documentation_id';
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
    ),
    'strategic_documentation_id' => array(
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
  $handler->name = 'page_edit_strategic_documentation__panel';
  $handler->task = 'page';
  $handler->subtask = 'edit_strategic_documentation';
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
        'identifier' => 'Strategic documentation edit form',
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
My Strategic Documentation
Update Strategic Documentation',
    'panels_breadcrumbs_paths' => '/node/%node:nid
/node/%node:nid/my-content?type=strategic_documentation&status=All
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
  $display->uuid = '31f79834-9676-4f04-9b1e-95b6297d11ff';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-318a7f8a-04f3-4658-bc5d-23b1020c0c28';
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
  $pane->uuid = '318a7f8a-04f3-4658-bc5d-23b1020c0c28';
  $display->content['new-318a7f8a-04f3-4658-bc5d-23b1020c0c28'] = $pane;
  $display->panels['center'][0] = 'new-318a7f8a-04f3-4658-bc5d-23b1020c0c28';
  $pane = new stdClass();
  $pane->pid = 'new-f62b1c0d-e19e-4625-ad70-d36542169b1a';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h2>Update Strategic Documentation <em>%strategic_documentation_id:title</em></h2><div class="private-zone-back-wrapper"><a class="private-zone-back-link" onclick="history.go(-1);return true;" href="#">Back</a></div>',
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
  $pane->uuid = 'f62b1c0d-e19e-4625-ad70-d36542169b1a';
  $display->content['new-f62b1c0d-e19e-4625-ad70-d36542169b1a'] = $pane;
  $display->panels['center'][1] = 'new-f62b1c0d-e19e-4625-ad70-d36542169b1a';
  $pane = new stdClass();
  $pane->pid = 'new-0a5025db-e590-4ee2-aa9c-32ca12d4ab3f';
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
  $pane->uuid = '0a5025db-e590-4ee2-aa9c-32ca12d4ab3f';
  $display->content['new-0a5025db-e590-4ee2-aa9c-32ca12d4ab3f'] = $pane;
  $display->panels['form'][0] = 'new-0a5025db-e590-4ee2-aa9c-32ca12d4ab3f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['edit_strategic_documentation'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'eu_osha_documents';
  $page->task = 'page';
  $page->admin_title = 'Audiovisual materials';
  $page->admin_description = '';
  $page->path = 'private-zone/collaboration-area/audiovisual-materials';
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
  $handler->name = 'page_eu_osha_documents__panel_context_641b651f-b4ab-40ed-a9ec-562a8147a9d7';
  $handler->task = 'page';
  $handler->subtask = 'eu_osha_documents';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-oira-strategic-documentation oira-strategic-documentation-search-page private-zone-page eu-osha-doc-page-selector eu-o-f-m',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Private Zone
Collaboration area
EU-OSHA documents',
    'panels_breadcrumbs_paths' => '/private-zone
/private-zone/collaboration-area
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
        'class' => 'oira-search-form-container bm-content-panel',
        'hide_empty' => 0,
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Content',
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
        'hide_empty' => 1,
      ),
      'menu' => array(
        'type' => 'region',
        'title' => 'Menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 1,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'introduction' => NULL,
      'menu' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'EU-OSHA Files';
  $display->uuid = '0755c09e-1eb8-4423-856e-26eec25573a4';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-de9921dc-43e1-4b5a-9d21-deaf5727babb';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'eu_osha_files';
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
    'display' => 'eu_osha_files_audiovisual_materials',
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
  $pane->uuid = 'de9921dc-43e1-4b5a-9d21-deaf5727babb';
  $display->content['new-de9921dc-43e1-4b5a-9d21-deaf5727babb'] = $pane;
  $display->panels['center'][0] = 'new-de9921dc-43e1-4b5a-9d21-deaf5727babb';
  $pane = new stdClass();
  $pane->pid = 'new-b5f9384d-c064-40d6-a05c-f1131ef9050c';
  $pane->panel = 'menu';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
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
  $pane->uuid = 'b5f9384d-c064-40d6-a05c-f1131ef9050c';
  $display->content['new-b5f9384d-c064-40d6-a05c-f1131ef9050c'] = $pane;
  $display->panels['menu'][0] = 'new-b5f9384d-c064-40d6-a05c-f1131ef9050c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['eu_osha_documents'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'strategic_documentation';
  $page->task = 'page';
  $page->admin_title = 'Partners documents';
  $page->admin_description = '';
  $page->path = 'private-zone/collaboration-area/partners-documents';
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
  $handler->name = 'page_strategic_documentation__panel';
  $handler->task = 'page';
  $handler->subtask = 'strategic_documentation';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-oira-strategic-documentation oira-strategic-documentation-search-page private-zone-page partner-doc-page-selector eu-o-f-m',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Private Zone
Collaboration area
EU-OSHA documents',
    'panels_breadcrumbs_paths' => '/private-zone
/private-zone/collaboration-area
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
        'class' => 'oira-search-form-container bm-content-panel',
        'hide_empty' => 0,
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'container content-panel-document',
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
        'hide_empty' => 1,
      ),
      'menu' => array(
        'type' => 'region',
        'title' => 'Menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 1,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'introduction' => NULL,
      'menu' => NULL,
    ),
    'center' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'EU-OSHA Files';
  $display->uuid = '0755c09e-1eb8-4423-856e-26eec25573a4';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8019e6a6-3700-4c27-b372-b006956b07bc';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'eu_osha_files';
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
    'display' => 'eu_osha_files_meeting_documents',
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
  $pane->uuid = '8019e6a6-3700-4c27-b372-b006956b07bc';
  $display->content['new-8019e6a6-3700-4c27-b372-b006956b07bc'] = $pane;
  $display->panels['center'][0] = 'new-8019e6a6-3700-4c27-b372-b006956b07bc';
  $pane = new stdClass();
  $pane->pid = 'new-76ed9cee-dd6e-47b3-82e0-ed4f5a637213';
  $pane->panel = 'menu';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
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
  $pane->uuid = '76ed9cee-dd6e-47b3-82e0-ed4f5a637213';
  $display->content['new-76ed9cee-dd6e-47b3-82e0-ed4f5a637213'] = $pane;
  $display->panels['menu'][0] = 'new-76ed9cee-dd6e-47b3-82e0-ed4f5a637213';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['strategic_documentation'] = $page;

  return $pages;

}
