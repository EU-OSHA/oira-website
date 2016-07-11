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
  $mini->name = 'contact_information_partner';
  $mini->category = 'oira';
  $mini->admin_title = 'Contact information partner';
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
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
        'hide_empty' => 1,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
        'class' => '',
        'hide_empty' => 1,
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 1,
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 1,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Contact information';
  $display->uuid = '136c25a0-a518-463a-b32d-ce46a625d543';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-73b03593-1ae9-4031-b294-3500d2352267';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ph_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->uuid = '73b03593-1ae9-4031-b294-3500d2352267';
    $display->content['new-73b03593-1ae9-4031-b294-3500d2352267'] = $pane;
    $display->panels['center'][0] = 'new-73b03593-1ae9-4031-b294-3500d2352267';
    $pane = new stdClass();
    $pane->pid = 'new-13fb3d18-1595-4283-a001-1edc701f40d6';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ph_address_extra';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '13fb3d18-1595-4283-a001-1edc701f40d6';
    $display->content['new-13fb3d18-1595-4283-a001-1edc701f40d6'] = $pane;
    $display->panels['center'][1] = 'new-13fb3d18-1595-4283-a001-1edc701f40d6';
    $pane = new stdClass();
    $pane->pid = 'new-9b5bb3d8-2f99-4b20-904c-70faf9d5a512';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ph_cp';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9b5bb3d8-2f99-4b20-904c-70faf9d5a512';
    $display->content['new-9b5bb3d8-2f99-4b20-904c-70faf9d5a512'] = $pane;
    $display->panels['center'][2] = 'new-9b5bb3d8-2f99-4b20-904c-70faf9d5a512';
    $pane = new stdClass();
    $pane->pid = 'new-dd946491-6529-4084-af81-4f9ad67375d8';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ph_town';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'dd946491-6529-4084-af81-4f9ad67375d8';
    $display->content['new-dd946491-6529-4084-af81-4f9ad67375d8'] = $pane;
    $display->panels['center'][3] = 'new-dd946491-6529-4084-af81-4f9ad67375d8';
    $pane = new stdClass();
    $pane->pid = 'new-46ee8e50-76d5-4719-b5bd-e4870f433c21';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_country';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'i18n_taxonomy_term_reference_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '46ee8e50-76d5-4719-b5bd-e4870f433c21';
    $display->content['new-46ee8e50-76d5-4719-b5bd-e4870f433c21'] = $pane;
    $display->panels['center'][4] = 'new-46ee8e50-76d5-4719-b5bd-e4870f433c21';
    $pane = new stdClass();
    $pane->pid = 'new-8612b9e5-6641-48d8-8131-611d8cb86568';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_website';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_absolute',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '8612b9e5-6641-48d8-8131-611d8cb86568';
    $display->content['new-8612b9e5-6641-48d8-8131-611d8cb86568'] = $pane;
    $display->panels['center'][5] = 'new-8612b9e5-6641-48d8-8131-611d8cb86568';
    $pane = new stdClass();
    $pane->pid = 'new-dfee6ae9-0d6d-4971-b873-c004c451aea7';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_general_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'email_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'dfee6ae9-0d6d-4971-b873-c004c451aea7';
    $display->content['new-dfee6ae9-0d6d-4971-b873-c004c451aea7'] = $pane;
    $display->panels['center'][6] = 'new-dfee6ae9-0d6d-4971-b873-c004c451aea7';
    $pane = new stdClass();
    $pane->pid = 'new-0522e8b8-6f75-4626-91e8-ac8d7a0df986';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_general_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '0522e8b8-6f75-4626-91e8-ac8d7a0df986';
    $display->content['new-0522e8b8-6f75-4626-91e8-ac8d7a0df986'] = $pane;
    $display->panels['center'][7] = 'new-0522e8b8-6f75-4626-91e8-ac8d7a0df986';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['contact_information_partner'] = $mini;

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
        'class' => 'col-sm-4 partner-colaborators-container',
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
        'class' => 'col-sm-3 partner-social-container',
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
        'class' => 'col-sm-3 partner-contact-container',
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
        'class' => 'col-sm-2 partner-text2-container',
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
        'hide_empty' => 1,
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
        'class' => 'col-sm-8 partner-text-container',
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
        'class' => 'col-sm-4 partner-image-container',
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
    $pane->pid = 'new-8d085abd-9be9-4547-96ed-50de019e2d69';
    $pane->panel = 'colaborators';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_collaborator';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'field_formatter_class' => '',
        'view_mode' => 'full',
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => 'Other collaborators',
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
    $pane->uuid = '8d085abd-9be9-4547-96ed-50de019e2d69';
    $display->content['new-8d085abd-9be9-4547-96ed-50de019e2d69'] = $pane;
    $display->panels['colaborators'][0] = 'new-8d085abd-9be9-4547-96ed-50de019e2d69';
    $pane = new stdClass();
    $pane->pid = 'new-be7ed5b0-3946-49ea-91d7-c95d78f1018c';
    $pane->panel = 'contact';
    $pane->type = 'panels_mini';
    $pane->subtype = 'contact_information_partner';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'requiredcontext_entity:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => '%title',
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
    $pane->uuid = 'be7ed5b0-3946-49ea-91d7-c95d78f1018c';
    $display->content['new-be7ed5b0-3946-49ea-91d7-c95d78f1018c'] = $pane;
    $display->panels['contact'][0] = 'new-be7ed5b0-3946-49ea-91d7-c95d78f1018c';
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
        'image_style' => 'large',
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
    $pane->pid = 'new-626e9816-cb3a-41cb-a36d-01d9067ec143';
    $pane->panel = 'social';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_social_profile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_plain',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'text' => '',
        'field_formatter_class' => '',
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => 'Social profiles',
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
    $pane->uuid = '626e9816-cb3a-41cb-a36d-01d9067ec143';
    $display->content['new-626e9816-cb3a-41cb-a36d-01d9067ec143'] = $pane;
    $display->panels['social'][0] = 'new-626e9816-cb3a-41cb-a36d-01d9067ec143';
    $pane = new stdClass();
    $pane->pid = 'new-234a31ce-df16-47f2-acd6-ca92e4bebc64';
    $pane->panel = 'text';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_country';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'i18n_taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => 'Focal point',
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
    $pane->uuid = '234a31ce-df16-47f2-acd6-ca92e4bebc64';
    $display->content['new-234a31ce-df16-47f2-acd6-ca92e4bebc64'] = $pane;
    $display->panels['text'][0] = 'new-234a31ce-df16-47f2-acd6-ca92e4bebc64';
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
    $pane = new stdClass();
    $pane->pid = 'new-8e512882-295b-4326-8d8a-660e22e121a3';
    $pane->panel = 'text_';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_mission_statement';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8e512882-295b-4326-8d8a-660e22e121a3';
    $display->content['new-8e512882-295b-4326-8d8a-660e22e121a3'] = $pane;
    $display->panels['text_'][1] = 'new-8e512882-295b-4326-8d8a-660e22e121a3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['partner_in_country'] = $mini;

  return $export;
}
