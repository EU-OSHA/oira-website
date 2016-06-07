<?php
/**
 * @file
 * oira_partner.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function oira_partner_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'partner_in_country';
  $mini->category = 'oira';
  $mini->admin_title = 'Partner in country';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Content',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'optional' => 0,
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
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
        'contains' => 'column',
        'children' => array(
          0 => 11,
          1 => 10,
        ),
        'parent' => 'main',
        'class' => 'row',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 4,
          1 => 3,
          2 => 2,
          3 => 5,
        ),
        'parent' => 'main',
        'class' => 'row',
        'hide_empty' => 1,
      ),
      2 => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 8,
        ),
        'class' => 'col-sm-3',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 7,
        ),
        'class' => 'col-sm-3',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 6,
        ),
        'class' => 'col-sm-3',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 9,
        ),
        'class' => 'col-sm-3',
        'hide_empty' => 0,
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'contact',
        ),
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'contact' => array(
        'type' => 'region',
        'title' => 'Contact',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
        'hide_empty' => 0,
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'social',
        ),
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'social' => array(
        'type' => 'region',
        'title' => 'Social',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
        'hide_empty' => 0,
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'colaborators',
        ),
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'colaborators' => array(
        'type' => 'region',
        'title' => 'Colaborators',
        'width' => 100,
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
        'hide_empty' => 0,
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'text',
        ),
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
      'text' => array(
        'type' => 'region',
        'title' => 'Text',
        'width' => 100,
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
        'hide_empty' => 0,
      ),
      10 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 13,
        ),
        'class' => 'col-sm-8',
        'hide_empty' => 0,
      ),
      11 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 12,
        ),
        'class' => 'col-sm-4',
        'hide_empty' => 0,
      ),
      12 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'image',
        ),
        'parent' => '11',
        'class' => '',
        'hide_empty' => 0,
      ),
      'image' => array(
        'type' => 'region',
        'title' => 'Image',
        'width' => 100,
        'width_type' => '%',
        'parent' => '12',
        'class' => '',
        'hide_empty' => 0,
      ),
      13 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'text_',
        ),
        'parent' => '10',
        'class' => '',
        'hide_empty' => 0,
      ),
      'text_' => array(
        'type' => 'region',
        'title' => 'Text',
        'width' => 100,
        'width_type' => '%',
        'parent' => '13',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'contact' => NULL,
      'social' => NULL,
      'colaborators' => NULL,
      'text' => NULL,
      'image' => NULL,
      'text_' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '525e4bb5-491e-4a1a-8942-236f30882f5f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-376ee057-6f14-4def-9bd3-8ae8f1aaa92c';
    $pane->panel = 'image';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_logo';
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
        'image_style' => 'medium',
        'image_link' => '',
      ),
      'context' => 'requiredcontext_entity:node_1',
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
    $pane->uuid = '376ee057-6f14-4def-9bd3-8ae8f1aaa92c';
    $display->content['new-376ee057-6f14-4def-9bd3-8ae8f1aaa92c'] = $pane;
    $display->panels['image'][0] = 'new-376ee057-6f14-4def-9bd3-8ae8f1aaa92c';
    $pane = new stdClass();
    $pane->pid = 'new-b82fb197-4f24-4f68-90ee-05d83089aad9';
    $pane->panel = 'text_';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => 'h2',
        'title_link' => '',
        'title_class' => '',
        'field_formatter_class' => '',
      ),
      'context' => 'requiredcontext_entity:node_1',
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
    $pane->uuid = 'b82fb197-4f24-4f68-90ee-05d83089aad9';
    $display->content['new-b82fb197-4f24-4f68-90ee-05d83089aad9'] = $pane;
    $display->panels['text_'][0] = 'new-b82fb197-4f24-4f68-90ee-05d83089aad9';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['partner_in_country'] = $mini;

  return $export;
}
