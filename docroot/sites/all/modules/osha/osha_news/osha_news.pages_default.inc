<?php
/**
 * @file
 * osha_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function osha_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'create_news';
  $page->task = 'page';
  $page->admin_title = 'Create news';
  $page->admin_description = 'Create news page contains: private zone menu and create news form';
  $page->path = 'node/%node/create-news';
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
  $handler->name = 'page_create_news__panel';
  $handler->task = 'page';
  $handler->subtask = 'create_news';
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
        'identifier' => 'Create news form',
        'keyword' => 'node_add',
        'name' => 'node_add_form',
        'type' => 'news',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
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
          2 => 2,
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
        'title' => 'Form title',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
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
  $display->uuid = 'dd7f8527-ac0f-4d26-8b90-8cc65b4cc2f3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-68bd954f-871b-4240-b069-177d18ab84fa';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Partner update news',
      'title' => '<none>',
      'title_heading' => 'h2',
      'body' => '<h2>Create news</h2>',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '68bd954f-871b-4240-b069-177d18ab84fa';
    $display->content['new-68bd954f-871b-4240-b069-177d18ab84fa'] = $pane;
    $display->panels['center'][0] = 'new-68bd954f-871b-4240-b069-177d18ab84fa';
    $pane = new stdClass();
    $pane->pid = 'new-362b9e46-c99a-401f-9260-da9f7acf420c';
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
    $pane->uuid = '362b9e46-c99a-401f-9260-da9f7acf420c';
    $display->content['new-362b9e46-c99a-401f-9260-da9f7acf420c'] = $pane;
    $display->panels['form'][0] = 'new-362b9e46-c99a-401f-9260-da9f7acf420c';
    $pane = new stdClass();
    $pane->pid = 'new-787da593-389a-43b5-9f1a-ca5e54e96515';
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
    $pane->uuid = '787da593-389a-43b5-9f1a-ca5e54e96515';
    $display->content['new-787da593-389a-43b5-9f1a-ca5e54e96515'] = $pane;
    $display->panels['menu'][0] = 'new-787da593-389a-43b5-9f1a-ca5e54e96515';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['create_news'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'edit_news';
  $page->task = 'page';
  $page->admin_title = 'Edit news';
  $page->admin_description = 'Partner edit news page form';
  $page->path = 'node/%node/edit-news/%news_id';
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
  );
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Content: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
    'news_id' => array(
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
  $handler->name = 'page_edit_news__panel';
  $handler->task = 'page';
  $handler->subtask = 'edit_news';
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
        'identifier' => 'News edit form',
        'keyword' => 'node_edit_form',
        'name' => 'node_edit_form_from_node',
        'context' => 'argument_entity_id:node_2',
        'id' => 1,
      ),
    ),
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
          2 => 2,
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
        'title' => 'Form title',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
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
  $display->title = '';
  $display->uuid = '3b4f705c-4998-4c92-a766-f5e25e7fabcc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0c04bb07-2d14-4a83-b24f-218b5378a9c1';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Partner update news',
      'title' => '<none>',
      'title_heading' => 'h2',
      'body' => '<h2>Update News <em>%news_id:title</em></h2>',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0c04bb07-2d14-4a83-b24f-218b5378a9c1';
    $display->content['new-0c04bb07-2d14-4a83-b24f-218b5378a9c1'] = $pane;
    $display->panels['center'][0] = 'new-0c04bb07-2d14-4a83-b24f-218b5378a9c1';
    $pane = new stdClass();
    $pane->pid = 'new-3f6c51ce-2767-4ecd-ac1a-29b89c732ccb';
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
    $pane->uuid = '3f6c51ce-2767-4ecd-ac1a-29b89c732ccb';
    $display->content['new-3f6c51ce-2767-4ecd-ac1a-29b89c732ccb'] = $pane;
    $display->panels['form'][0] = 'new-3f6c51ce-2767-4ecd-ac1a-29b89c732ccb';
    $pane = new stdClass();
    $pane->pid = 'new-ba51cc9e-c8d1-44c1-a6ca-233c4daf6a8f';
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
    $pane->uuid = 'ba51cc9e-c8d1-44c1-a6ca-233c4daf6a8f';
    $display->content['new-ba51cc9e-c8d1-44c1-a6ca-233c4daf6a8f'] = $pane;
    $display->panels['menu'][0] = 'new-ba51cc9e-c8d1-44c1-a6ca-233c4daf6a8f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['edit_news'] = $page;

  return $pages;

}
