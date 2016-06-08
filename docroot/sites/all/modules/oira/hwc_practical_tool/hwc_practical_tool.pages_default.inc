<?php
/**
 * @file
 * hwc_practical_tool.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function hwc_practical_tool_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__practical_tool_details';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Practical tool details',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'practical_tool_details',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'practical_tool' => 'practical_tool',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'OiRA & tools
%node:title-alt',
    'panels_breadcrumbs_paths' => 'oira-tools
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
          0 => 1,
          1 => 'main',
        ),
        'parent' => NULL,
        'class' => 'container',
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
        'width' => 50,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
        'class' => 'col-sm-9',
        'hide_empty' => 0,
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
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => 'col-sm-3',
        'hide_empty' => 0,
      ),
      2 => array(
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
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'center' => NULL,
      'image' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title-alt';
  $display->uuid = '545f69dd-e116-42e2-84f3-054360f7be44';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-93ddd5ef-35ea-4c0d-a9ec-dd0ee4b12f8c';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_revised_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'osha_day_only',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'field_formatter_class' => '',
        'osha_date_theme' => '',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '93ddd5ef-35ea-4c0d-a9ec-dd0ee4b12f8c';
    $display->content['new-93ddd5ef-35ea-4c0d-a9ec-dd0ee4b12f8c'] = $pane;
    $display->panels['center'][0] = 'new-93ddd5ef-35ea-4c0d-a9ec-dd0ee4b12f8c';
    $pane = new stdClass();
    $pane->pid = 'new-2b78fcf3-af21-4e63-a3b5-472ee4f7f1ad';
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
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2b78fcf3-af21-4e63-a3b5-472ee4f7f1ad';
    $display->content['new-2b78fcf3-af21-4e63-a3b5-472ee4f7f1ad'] = $pane;
    $display->panels['center'][1] = 'new-2b78fcf3-af21-4e63-a3b5-472ee4f7f1ad';
    $pane = new stdClass();
    $pane->pid = 'new-0cda8159-eb11-49d2-a285-f6067555bf10';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_sector';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0cda8159-eb11-49d2-a285-f6067555bf10';
    $display->content['new-0cda8159-eb11-49d2-a285-f6067555bf10'] = $pane;
    $display->panels['center'][2] = 'new-0cda8159-eb11-49d2-a285-f6067555bf10';
    $pane = new stdClass();
    $pane->pid = 'new-b5e82827-b2fc-48a8-8b99-861bd756a9de';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_language';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'language_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format' => array(
          'name' => 'name',
          'iso' => 0,
          'name_native' => 0,
        ),
        'field_formatter_class' => '',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'b5e82827-b2fc-48a8-8b99-861bd756a9de';
    $display->content['new-b5e82827-b2fc-48a8-8b99-861bd756a9de'] = $pane;
    $display->panels['center'][3] = 'new-b5e82827-b2fc-48a8-8b99-861bd756a9de';
    $pane = new stdClass();
    $pane->pid = 'new-268957d0-6c13-488e-8766-7fbac46f8183';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_country';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'i18n_taxonomy_term_reference_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '268957d0-6c13-488e-8766-7fbac46f8183';
    $display->content['new-268957d0-6c13-488e-8766-7fbac46f8183'] = $pane;
    $display->panels['center'][4] = 'new-268957d0-6c13-488e-8766-7fbac46f8183';
    $pane = new stdClass();
    $pane->pid = 'new-a59edd2f-1c47-4e6f-bce4-8384b768f21e';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tool_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_url',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'a59edd2f-1c47-4e6f-bce4-8384b768f21e';
    $display->content['new-a59edd2f-1c47-4e6f-bce4-8384b768f21e'] = $pane;
    $display->panels['center'][5] = 'new-a59edd2f-1c47-4e6f-bce4-8384b768f21e';
    $pane = new stdClass();
    $pane->pid = 'new-7cc410e8-f73e-4c8d-93a7-da3c644d2b41';
    $pane->panel = 'center';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:related_partners';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '7cc410e8-f73e-4c8d-93a7-da3c644d2b41';
    $display->content['new-7cc410e8-f73e-4c8d-93a7-da3c644d2b41'] = $pane;
    $display->panels['center'][6] = 'new-7cc410e8-f73e-4c8d-93a7-da3c644d2b41';
    $pane = new stdClass();
    $pane->pid = 'new-b6f385ad-a21b-400d-9e56-a2144ff3324d';
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
        'image_style' => 'generic_detail_thumbnail',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'b6f385ad-a21b-400d-9e56-a2144ff3324d';
    $display->content['new-b6f385ad-a21b-400d-9e56-a2144ff3324d'] = $pane;
    $display->panels['image'][0] = 'new-b6f385ad-a21b-400d-9e56-a2144ff3324d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__practical_tool_details'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function hwc_practical_tool_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'oira_tools';
  $page->task = 'page';
  $page->admin_title = 'Oira Tools';
  $page->admin_description = '';
  $page->path = 'oira-tools';
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
  $handler->name = 'page_oira_tools__panel';
  $handler->task = 'page';
  $handler->subtask = 'oira_tools';
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
        'entity_id' => '56',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'panel',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'OiRA tools',
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
        'class' => '',
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
  $display->uuid = '0dd33c22-fbd7-41ec-a6a7-6ab0ef34bbba';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f2592e70-ef1d-4216-a10d-bdd5fa355072';
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
    $pane->uuid = 'f2592e70-ef1d-4216-a10d-bdd5fa355072';
    $display->content['new-f2592e70-ef1d-4216-a10d-bdd5fa355072'] = $pane;
    $display->panels['center'][0] = 'new-f2592e70-ef1d-4216-a10d-bdd5fa355072';
    $pane = new stdClass();
    $pane->pid = 'new-dbbf4807-29f5-46a4-bda5-a6ca841cacd2';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'hwc_practical_tool-hwc_practical_tool_listing';
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
    $pane->uuid = 'dbbf4807-29f5-46a4-bda5-a6ca841cacd2';
    $display->content['new-dbbf4807-29f5-46a4-bda5-a6ca841cacd2'] = $pane;
    $display->panels['content'][0] = 'new-dbbf4807-29f5-46a4-bda5-a6ca841cacd2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-dbbf4807-29f5-46a4-bda5-a6ca841cacd2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['oira_tools'] = $page;

  return $pages;

}
