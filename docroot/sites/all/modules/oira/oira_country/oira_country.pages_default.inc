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
  $handler->name = 'term_view__country-eu';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Country EU',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-country-profile page-country-profile-eu',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'country-eu',
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
        1 => array(
          'name' => 'entity_field_value:taxonomy_term:country:field_iso2',
          'settings' => array(
            'field_iso2' => array(
              'und' => array(
                0 => array(
                  'value' => 'eu',
                  'format' => '',
                ),
              ),
            ),
            'field_iso2_value' => array(
              0 => 'eu',
            ),
            'field_iso2_format' => array(
              0 => '',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'EU and national partners
%term:name-field',
    'panels_breadcrumbs_paths' => 'eu-national-partners
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
          1 => 1,
          2 => 4,
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
        'class' => 'country-page-top-container container',
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
        'class' => 'container',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 1,
      ),
      'content' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
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
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd78ace5f-c1c1-4273-b738-0485972cfafd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3de4ecb2-2c6a-4ffe-8816-a14242ae5ddf';
    $pane->panel = 'center';
    $pane->type = 'custom_title_tag';
    $pane->subtype = 'custom_title_tag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => NULL,
      'custom_page_title_pattern' => '%term:name-field',
      'form_build_id' => 'form-FoneA2t3UVwpeGVlLFGdVF-feSQ6Ncj6methp9t_XMI',
      'form_token' => 'agatEdmxA_gf5dEvFm6LlorxqN6Cl-MmZp1hbuqosVw',
      'form_id' => 'panels_custom_title_tag_edit_form',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3de4ecb2-2c6a-4ffe-8816-a14242ae5ddf';
    $display->content['new-3de4ecb2-2c6a-4ffe-8816-a14242ae5ddf'] = $pane;
    $display->panels['center'][0] = 'new-3de4ecb2-2c6a-4ffe-8816-a14242ae5ddf';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f6b5c56a-4011-4a7e-88e3-e3726121cfeb';
    $display->content['new-f6b5c56a-4011-4a7e-88e3-e3726121cfeb'] = $pane;
    $display->panels['center'][1] = 'new-f6b5c56a-4011-4a7e-88e3-e3726121cfeb';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6650b52d-c286-4d08-a139-61ec399bfa27';
    $display->content['new-6650b52d-c286-4d08-a139-61ec399bfa27'] = $pane;
    $display->panels['center'][2] = 'new-6650b52d-c286-4d08-a139-61ec399bfa27';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a34f8d49-e9fa-40f6-8af8-6ba0501dea20';
    $display->content['new-a34f8d49-e9fa-40f6-8af8-6ba0501dea20'] = $pane;
    $display->panels['center'][3] = 'new-a34f8d49-e9fa-40f6-8af8-6ba0501dea20';
    $pane = new stdClass();
    $pane->pid = 'new-f2f48ae0-5eb9-4339-94a3-be23dd97e7fe';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'country_partner_content';
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
    $pane->uuid = 'f2f48ae0-5eb9-4339-94a3-be23dd97e7fe';
    $display->content['new-f2f48ae0-5eb9-4339-94a3-be23dd97e7fe'] = $pane;
    $display->panels['content'][0] = 'new-f2f48ae0-5eb9-4339-94a3-be23dd97e7fe';
    $pane = new stdClass();
    $pane->pid = 'new-84faf12d-78ca-40c9-bc09-0acc568b666b';
    $pane->panel = 'partners';
    $pane->type = 'block';
    $pane->subtype = 'oira_partner-oira_partner_country';
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
    $pane->uuid = '84faf12d-78ca-40c9-bc09-0acc568b666b';
    $display->content['new-84faf12d-78ca-40c9-bc09-0acc568b666b'] = $pane;
    $display->panels['partners'][0] = 'new-84faf12d-78ca-40c9-bc09-0acc568b666b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-f6b5c56a-4011-4a7e-88e3-e3726121cfeb';
  $handler->conf['display'] = $display;
  $export['term_view__country-eu'] = $handler;

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
    'body_classes_to_add' => 'page-country-profile',
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
        1 => array(
          'name' => 'entity_field_value:taxonomy_term:country:field_iso2',
          'settings' => array(
            'field_iso2' => array(
              'und' => array(
                0 => array(
                  'value' => 'eu',
                  'format' => '',
                ),
              ),
            ),
            'field_iso2_value' => array(
              0 => 'eu',
            ),
            'field_iso2_format' => array(
              0 => '',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'EU and national partners
%term:name-field',
    'panels_breadcrumbs_paths' => 'eu-national-partners
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
          1 => 1,
          2 => 4,
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
        'class' => 'country-page-top-container container',
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
        'class' => 'container',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 1,
      ),
      'content' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
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
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd78ace5f-c1c1-4273-b738-0485972cfafd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3de4ecb2-2c6a-4ffe-8816-a14242ae5ddf';
    $pane->panel = 'center';
    $pane->type = 'custom_title_tag';
    $pane->subtype = 'custom_title_tag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => NULL,
      'custom_page_title_pattern' => '%term:name-field',
      'form_build_id' => 'form-FoneA2t3UVwpeGVlLFGdVF-feSQ6Ncj6methp9t_XMI',
      'form_token' => 'agatEdmxA_gf5dEvFm6LlorxqN6Cl-MmZp1hbuqosVw',
      'form_id' => 'panels_custom_title_tag_edit_form',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3de4ecb2-2c6a-4ffe-8816-a14242ae5ddf';
    $display->content['new-3de4ecb2-2c6a-4ffe-8816-a14242ae5ddf'] = $pane;
    $display->panels['center'][0] = 'new-3de4ecb2-2c6a-4ffe-8816-a14242ae5ddf';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f6b5c56a-4011-4a7e-88e3-e3726121cfeb';
    $display->content['new-f6b5c56a-4011-4a7e-88e3-e3726121cfeb'] = $pane;
    $display->panels['center'][1] = 'new-f6b5c56a-4011-4a7e-88e3-e3726121cfeb';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6650b52d-c286-4d08-a139-61ec399bfa27';
    $display->content['new-6650b52d-c286-4d08-a139-61ec399bfa27'] = $pane;
    $display->panels['center'][2] = 'new-6650b52d-c286-4d08-a139-61ec399bfa27';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a34f8d49-e9fa-40f6-8af8-6ba0501dea20';
    $display->content['new-a34f8d49-e9fa-40f6-8af8-6ba0501dea20'] = $pane;
    $display->panels['center'][3] = 'new-a34f8d49-e9fa-40f6-8af8-6ba0501dea20';
    $pane = new stdClass();
    $pane->pid = 'new-f2f48ae0-5eb9-4339-94a3-be23dd97e7fe';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'country_partner_content';
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
    $pane->uuid = 'f2f48ae0-5eb9-4339-94a3-be23dd97e7fe';
    $display->content['new-f2f48ae0-5eb9-4339-94a3-be23dd97e7fe'] = $pane;
    $display->panels['content'][0] = 'new-f2f48ae0-5eb9-4339-94a3-be23dd97e7fe';
    $pane = new stdClass();
    $pane->pid = 'new-84faf12d-78ca-40c9-bc09-0acc568b666b';
    $pane->panel = 'partners';
    $pane->type = 'block';
    $pane->subtype = 'oira_partner-oira_partner_country';
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
    $pane->uuid = '84faf12d-78ca-40c9-bc09-0acc568b666b';
    $display->content['new-84faf12d-78ca-40c9-bc09-0acc568b666b'] = $pane;
    $display->panels['partners'][0] = 'new-84faf12d-78ca-40c9-bc09-0acc568b666b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-f6b5c56a-4011-4a7e-88e3-e3726121cfeb';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_f4e56f46-f483-41d8-9df7-0a74c904b6a4'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function oira_country_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'countries';
  $page->task = 'page';
  $page->admin_title = 'EU and national partners';
  $page->admin_description = '';
  $page->path = 'eu-national-partners';
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
  $handler->name = 'page_countries__panel';
  $handler->task = 'page';
  $handler->subtask = 'countries';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-country-lising',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Partners and OiRA Community
EU and national partners',
    'panels_breadcrumbs_paths' => '<none>
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
        'class' => 'country-partners-lising',
        'hide_empty' => 0,
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
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
          0 => 'top',
        ),
        'parent' => 'main',
        'class' => 'strong-background country-listing-header',
        'hide_empty' => 1,
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'container',
        'hide_empty' => 1,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'EU and national partners';
  $display->uuid = '6ec3c1d0-4f3f-4249-9470-bd1917d4750a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9ad54adf-80b2-4266-ab64-89ec7e31655a';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'countries';
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
    $pane->uuid = '9ad54adf-80b2-4266-ab64-89ec7e31655a';
    $display->content['new-9ad54adf-80b2-4266-ab64-89ec7e31655a'] = $pane;
    $display->panels['center'][0] = 'new-9ad54adf-80b2-4266-ab64-89ec7e31655a';
    $pane = new stdClass();
    $pane->pid = 'new-844c1bf3-37da-4874-a32c-ed3d28aa970c';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'oira_country-oira_country_count_all';
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
    $pane->uuid = '844c1bf3-37da-4874-a32c-ed3d28aa970c';
    $display->content['new-844c1bf3-37da-4874-a32c-ed3d28aa970c'] = $pane;
    $display->panels['top'][0] = 'new-844c1bf3-37da-4874-a32c-ed3d28aa970c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9ad54adf-80b2-4266-ab64-89ec7e31655a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['countries'] = $page;

  return $pages;

}
