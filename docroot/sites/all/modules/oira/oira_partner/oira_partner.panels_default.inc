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
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'contact_information_partner';
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
  $pane->pid = 'new-9974c2dc-0d31-4290-a1b9-104512eb0be3';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '9974c2dc-0d31-4290-a1b9-104512eb0be3';
  $display->content['new-9974c2dc-0d31-4290-a1b9-104512eb0be3'] = $pane;
  $display->panels['center'][4] = 'new-9974c2dc-0d31-4290-a1b9-104512eb0be3';
  $pane = new stdClass();
  $pane->pid = 'new-8612b9e5-6641-48d8-8131-611d8cb86568';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_website';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'oira_external_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'Website:',
    'override_title_heading' => 'span',
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
  $pane->pid = 'new-4275886e-b6c2-4324-92ab-efb1613dc0db';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_dedicated_oira_website';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'oira_external_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'Dedicated OiRA website:',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '4275886e-b6c2-4324-92ab-efb1613dc0db';
  $display->content['new-4275886e-b6c2-4324-92ab-efb1613dc0db'] = $pane;
  $display->panels['center'][6] = 'new-4275886e-b6c2-4324-92ab-efb1613dc0db';
  $pane = new stdClass();
  $pane->pid = 'new-dfee6ae9-0d6d-4971-b873-c004c451aea7';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_general_email';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'email_spamspan',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'email:',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'dfee6ae9-0d6d-4971-b873-c004c451aea7';
  $display->content['new-dfee6ae9-0d6d-4971-b873-c004c451aea7'] = $pane;
  $display->panels['center'][7] = 'new-dfee6ae9-0d6d-4971-b873-c004c451aea7';
  $pane = new stdClass();
  $pane->pid = 'new-0522e8b8-6f75-4626-91e8-ac8d7a0df986';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_general_phone';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'General phone:',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '0522e8b8-6f75-4626-91e8-ac8d7a0df986';
  $display->content['new-0522e8b8-6f75-4626-91e8-ac8d7a0df986'] = $pane;
  $display->panels['center'][8] = 'new-0522e8b8-6f75-4626-91e8-ac8d7a0df986';
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
  $mini->relationships = array(
    0 => array(
      'identifier' => 'Country',
      'keyword' => 'taxonomy_term',
      'name' => 'entity_from_field:field_country-node-taxonomy_term',
      'delta' => 0,
      'context' => 'requiredcontext_entity:node_1',
      'id' => 1,
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
        ),
        'parent' => 'main',
        'class' => 'row',
        'hide_empty' => 1,
      ),
      2 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 8,
        ),
        'class' => 'col-md-4 col-sm-6 col-xs-12 partner-colaborators-container',
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
        'class' => 'col-md-4 col-sm-6 col-xs-12 partner-social-container',
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
        'class' => 'col-md-4 col-sm-6 col-xs-12 partner-contact-container',
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
  $display->storage_type = '';
  $display->storage_id = '';
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
    'override_title_text' => 'Collaborators',
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
    'formatter' => 'oira_partner',
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
    'formatter' => 'oira_social_link_icon',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'text' => '',
      'field_formatter_class' => '',
    ),
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'Social media profiles',
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
      'title_link' => 'content',
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'trim-title',
  );
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

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'partner_in_profile';
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
  $mini->relationships = array(
    0 => array(
      'identifier' => 'Country',
      'keyword' => 'taxonomy_term',
      'name' => 'entity_from_field:field_country-node-taxonomy_term',
      'delta' => 0,
      'context' => 'requiredcontext_entity:node_1',
      'id' => 1,
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
          2 => 14,
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
        ),
        'parent' => 'main',
        'class' => 'row',
        'hide_empty' => 1,
      ),
      2 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 8,
        ),
        'class' => 'col-md-4 col-sm-6 col-xs-12 partner-colaborators-container',
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
        'class' => 'col-md-3 col-sm-6 col-xs-12 partner-social-container',
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
        'class' => 'col-md-3 col-sm-6 col-xs-12 partner-contact-container',
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
        'class' => 'partner-image-container',
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
      14 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'text_focal_point',
        ),
        'parent' => 'main',
        'class' => 'row',
        'hide_empty' => 0,
      ),
      'text_focal_point' => array(
        'type' => 'region',
        'title' => 'Text Focal Point',
        'width' => 100,
        'width_type' => '%',
        'parent' => '14',
        'class' => 'col-md-12',
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
      'text_focal_point' => NULL,
    ),
    'text_' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '525e4bb5-491e-4a1a-8942-236f30882f5f';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'partner_in_profile';
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
    'override_title_text' => 'Collaborators',
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
  $pane->pid = 'new-80ae4b8d-c845-4d97-b9c3-b5a558264878';
  $pane->panel = 'image';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'oira_partner',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'field_formatter_class' => '',
      'image_style' => '',
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
  $pane->uuid = '80ae4b8d-c845-4d97-b9c3-b5a558264878';
  $display->content['new-80ae4b8d-c845-4d97-b9c3-b5a558264878'] = $pane;
  $display->panels['image'][0] = 'new-80ae4b8d-c845-4d97-b9c3-b5a558264878';
  $pane = new stdClass();
  $pane->pid = 'new-626e9816-cb3a-41cb-a36d-01d9067ec143';
  $pane->panel = 'social';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_social_profile';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'oira_social_link_icon',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'text' => '',
      'field_formatter_class' => '',
    ),
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'Social media profiles',
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
  $pane->pid = 'new-12f8ecab-af41-4b31-be71-510ef9c107f5';
  $pane->panel = 'text_';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Title + country',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h1>%node:title-field - %node:field-country</h1>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '12f8ecab-af41-4b31-be71-510ef9c107f5';
  $display->content['new-12f8ecab-af41-4b31-be71-510ef9c107f5'] = $pane;
  $display->panels['text_'][0] = 'new-12f8ecab-af41-4b31-be71-510ef9c107f5';
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
  $pane = new stdClass();
  $pane->pid = 'new-d5cf3bca-eb15-49e5-b600-84b39f10bf9d';
  $pane->panel = 'text_focal_point';
  $pane->type = 'focal_point_text';
  $pane->subtype = 'focal_point_text';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:partner:field_partner_type',
        'settings' => array(
          'field_partner_type' => array(
            'und' => array(
              0 => array(
                'tid' => '284',
              ),
            ),
          ),
          'field_partner_type_tid' => array(
            0 => '284',
          ),
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => TRUE,
      ),
      1 => array(
        'name' => 'entity_field_value:node:partner:field_guid_organisation',
        'settings' => array(
          'field_guid_organisation' => array(
            'und' => array(
              0 => array(
                'value' => '80892479-9d92-e411-80c3-005056ba4e5c',
                'format' => '',
              ),
            ),
          ),
          'field_guid_organisation_value' => array(
            0 => '80892479-9d92-e411-80c3-005056ba4e5c',
          ),
          'field_guid_organisation_format' => array(
            0 => '',
          ),
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => TRUE,
      ),
      2 => array(
        'name' => 'entity_field_value:node:partner:field_guid_organisation',
        'settings' => array(
          'field_guid_organisation' => array(
            'und' => array(
              0 => array(
                'value' => 'a4892479-9d92-e411-80c3-005056ba4e5c',
                'format' => '',
              ),
            ),
          ),
          'field_guid_organisation_value' => array(
            0 => 'a4892479-9d92-e411-80c3-005056ba4e5c',
          ),
          'field_guid_organisation_format' => array(
            0 => '',
          ),
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => TRUE,
      ),
      3 => array(
        'name' => 'entity_field_value:node:partner:field_guid_organisation',
        'settings' => array(
          'field_guid_organisation' => array(
            'und' => array(
              0 => array(
                'value' => '7559f896-552c-e511-80c3-005056ba4e5c',
                'format' => '',
              ),
            ),
          ),
          'field_guid_organisation_value' => array(
            0 => '7559f896-552c-e511-80c3-005056ba4e5c',
          ),
          'field_guid_organisation_format' => array(
            0 => '',
          ),
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => TRUE,
      ),
      4 => array(
        'name' => 'entity_field_value:node:partner:field_guid_organisation',
        'settings' => array(
          'field_guid_organisation' => array(
            'und' => array(
              0 => array(
                'value' => 'dc842479-9d92-e411-80c3-005056ba4e5c',
                'format' => '',
              ),
            ),
          ),
          'field_guid_organisation_value' => array(
            0 => 'dc842479-9d92-e411-80c3-005056ba4e5c',
          ),
          'field_guid_organisation_format' => array(
            0 => '',
          ),
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => TRUE,
      ),
      5 => array(
        'name' => 'entity_field_value:node:partner:field_partner_type',
        'settings' => array(
          'field_partner_type' => array(
            'und' => array(
              0 => array(
                'tid' => '263',
              ),
            ),
          ),
          'field_partner_type_tid' => array(
            0 => '263',
          ),
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd5cf3bca-eb15-49e5-b600-84b39f10bf9d';
  $display->content['new-d5cf3bca-eb15-49e5-b600-84b39f10bf9d'] = $pane;
  $display->panels['text_focal_point'][0] = 'new-d5cf3bca-eb15-49e5-b600-84b39f10bf9d';
  $pane = new stdClass();
  $pane->pid = 'new-2f492cab-6d2e-4eb0-8d93-6f336c641e76';
  $pane->panel = 'text_focal_point';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'entity_field_value:node:partner:field_guid_organisation',
        'settings' => array(
          'field_guid_organisation' => array(
            'und' => array(
              0 => array(
                'value' => '80892479-9d92-e411-80c3-005056ba4e5c',
                'format' => '',
              ),
            ),
          ),
          'field_guid_organisation_value' => array(
            0 => '80892479-9d92-e411-80c3-005056ba4e5c',
          ),
          'field_guid_organisation_format' => array(
            0 => '',
          ),
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Health and Safety Authority - IRAT - custom text',
    'title' => '<none>',
    'title_heading' => 'h2',
    'body' => '<div class="focal-poin-partner-text">The BeSMART.ie - Business electronic Safety Management And Risk assessment Tool - will help small business owners/managers to prepare risk assessments and a safety statement for their workplace. It is easy to use and it aims to reduce the chances of an accident occurring in the workplace and to save time and money. Developed by the Health and Safety Authority, you can explore BeSMART.ie (EN)&nbsp;<a class="external-link" title="Follow link" href="https://www.besmart.ie/" rel="nofollow">here</a></div>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2f492cab-6d2e-4eb0-8d93-6f336c641e76';
  $display->content['new-2f492cab-6d2e-4eb0-8d93-6f336c641e76'] = $pane;
  $display->panels['text_focal_point'][1] = 'new-2f492cab-6d2e-4eb0-8d93-6f336c641e76';
  $pane = new stdClass();
  $pane->pid = 'new-65c16067-e1c3-4526-9c99-9ddd58284d13';
  $pane->panel = 'text_focal_point';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:partner:field_guid_organisation',
        'settings' => array(
          'field_guid_organisation' => array(
            'und' => array(
              0 => array(
                'value' => 'a4892479-9d92-e411-80c3-005056ba4e5c',
                'format' => '',
              ),
            ),
          ),
          'field_guid_organisation_value' => array(
            0 => 'a4892479-9d92-e411-80c3-005056ba4e5c',
          ),
          'field_guid_organisation_format' => array(
            0 => '',
          ),
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Spanish National Institute for Safety and Health at Work - IRAT - custom text',
    'title' => '<none>',
    'title_heading' => 'h2',
    'body' => '<div class="focal-poin-partner-text">Prevencion10.es is a free public platform developed by the Spanish Ministry of Employment and Social Security, which offers advice on occupational risks prevention. It is aimed at companies with up to 25 workers - which will be able to carry out their own risk assessments while complying with the Spanish Act on Prevention of Occupational Risks - and at self-employed workers - who will be able to know what their obligations and rights are in terms of occupational risks prevention and business activity coordination. You can explore Prevencion10.es (ES)&nbsp;<a title="Follow link" href="https://www.prevencion10.es/p10_front/" rel="nofollow" target="_blank">here</a></div>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '65c16067-e1c3-4526-9c99-9ddd58284d13';
  $display->content['new-65c16067-e1c3-4526-9c99-9ddd58284d13'] = $pane;
  $display->panels['text_focal_point'][2] = 'new-65c16067-e1c3-4526-9c99-9ddd58284d13';
  $pane = new stdClass();
  $pane->pid = 'new-e3423e93-2e21-4dd4-8dcf-3315446b58dd';
  $pane->panel = 'text_focal_point';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:partner:field_guid_organisation',
        'settings' => array(
          'field_guid_organisation' => array(
            'und' => array(
              0 => array(
                'value' => '7559f896-552c-e511-80c3-005056ba4e5c',
                'format' => '',
              ),
            ),
          ),
          'field_guid_organisation_value' => array(
            0 => '7559f896-552c-e511-80c3-005056ba4e5c',
          ),
          'field_guid_organisation_format' => array(
            0 => '',
          ),
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'TNO Prevention, Work & Health - IRAT - custom text',
    'title' => '<none>',
    'title_heading' => 'h2',
    'body' => '<div class="focal-poin-partner-text">RI&amp;E is a Dutch interactive risk assessment &amp; evaluation tool, and the equivalent to OiRA in The Netherlands. An RI&amp;E means actually two things; a list of all occupational risks associated to the company and a plan for their solution. The combination of these two will help companies reduce the workplace hazards, in terms of staff and business, which will also involve a reduction of the financial risks as well. Developed by TNO Prevention, Work &amp; Health, you can explore RI&amp;E (NL)&nbsp;<a class="external-link" title="Follow link" href="http://www.rie.nl/" rel="nofollow">here</a></div>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e3423e93-2e21-4dd4-8dcf-3315446b58dd';
  $display->content['new-e3423e93-2e21-4dd4-8dcf-3315446b58dd'] = $pane;
  $display->panels['text_focal_point'][3] = 'new-e3423e93-2e21-4dd4-8dcf-3315446b58dd';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['partner_in_profile'] = $mini;

  return $export;
}
