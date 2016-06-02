<?php
/**
 * @file
 * oira_country.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function oira_country_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_f4e56f46-f483-41d8-9df7-0a74c904b6a4';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Country',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'country' => 'country',
            ),
          ),
          'context' => 'argument_term_1',
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
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'country-page-top-container',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 2,
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 3,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'partners',
        ),
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'partners' => array(
        'type' => 'region',
        'title' => 'Partners',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'partners' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd78ace5f-c1c1-4273-b738-0485972cfafd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f6b5c56a-4011-4a7e-88e3-e3726121cfeb';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_flag';
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
        'image_style' => 'thumbnail',
        'image_link' => '',
      ),
      'context' => 'argument_term_1',
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
    $pane->uuid = 'f6b5c56a-4011-4a7e-88e3-e3726121cfeb';
    $display->content['new-f6b5c56a-4011-4a7e-88e3-e3726121cfeb'] = $pane;
    $display->panels['center'][0] = 'new-f6b5c56a-4011-4a7e-88e3-e3726121cfeb';
    $pane = new stdClass();
    $pane->pid = 'new-6650b52d-c286-4d08-a139-61ec399bfa27';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:name_field';
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
      'context' => 'argument_term_1',
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
    $pane->uuid = '6650b52d-c286-4d08-a139-61ec399bfa27';
    $display->content['new-6650b52d-c286-4d08-a139-61ec399bfa27'] = $pane;
    $display->panels['center'][1] = 'new-6650b52d-c286-4d08-a139-61ec399bfa27';
    $pane = new stdClass();
    $pane->pid = 'new-a34f8d49-e9fa-40f6-8af8-6ba0501dea20';
    $pane->panel = 'center';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'taxonomy_term:country_content_count';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_term_1',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a34f8d49-e9fa-40f6-8af8-6ba0501dea20';
    $display->content['new-a34f8d49-e9fa-40f6-8af8-6ba0501dea20'] = $pane;
    $display->panels['center'][2] = 'new-a34f8d49-e9fa-40f6-8af8-6ba0501dea20';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-f6b5c56a-4011-4a7e-88e3-e3726121cfeb';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_f4e56f46-f483-41d8-9df7-0a74c904b6a4'] = $handler;

  return $export;
}
