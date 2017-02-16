<?php

/**
 * @file
 * Plugin to provide a menu_link_item context.
 */

$plugin = [
  'title' => t('Menu Link Item'),
  'description' => t('Translated menu item.'),
  'context' => 'oira_menu_link_item_context_plugin',
  'edit form' => 'oira_menu_link_item_context_plugin_settings_form',
  'defaults' => [
    'menu_item_id' => FALSE,
  ],
  'keyword' => 'menu_link_item',
  'context name' => 'menu_link_item',
  'convert list' => 'oira_menu_link_item_context_plugin_get_convert_list',
  'convert' => 'oira_menu_link_item_context_plugin_convert',
];

/**
 * Context callback.
 */
function oira_menu_link_item_context_plugin($empty, $data = NULL, $conf = FALSE) {
  $context = new ctools_context('menu_link_item');
  $context->plugin = 'oira.oira_menu_link_item_context_plugin';
  if (empty($empty) && !empty($conf) && !empty($data['menu_item_id'])) {
    $menu_link = menu_link_load($data['menu_item_id']);
    if ($menu_link) {
      $context->data['title'] = $menu_link['title'];
      $context->data['path'] = $menu_link['path'] == '<nolink>' ? NULL : url($menu_link['path'], ['absolute' => TRUE]);
    }
  }
  return $context;
}

/**
 * Returns available properties list.
 */
function oira_menu_link_item_context_plugin_get_convert_list() {
  return [
    'title' => 'Title of the menu item',
    'path' => 'Path of the menu item',
  ];
}

/**
 * Returns property value by property type.
 */
function oira_menu_link_item_context_plugin_convert($context, $type) {
  return $context->data[$type];
}

/**
 * Settings form for server_info context.
 */
function oira_menu_link_item_context_plugin_settings_form($form, &$form_state) {
  // Demo setting.
  $form['menu_item_id'] = [
    '#type' => 'textfield',
    '#title' => t('Menu item id'),
    '#default_value' => $form_state['conf']['menu_item_id'],
    '#required' => TRUE,
  ];

  return $form;
}

/**
 * Validates the form.
 */
function oira_menu_link_item_context_plugin_settings_form_validate($form, &$form_state) {
  $menu_item_id = $form_state['values']['menu_item_id'];
  if (!menu_link_load($menu_item_id)) {
    form_set_error('menu_item_id', t('Enter a valid menu item id.'));
  }
}

/**
 * Settings form submit.
 */
function oira_menu_link_item_context_plugin_settings_form_submit($form, &$form_state) {
  // Save submitted value.
  $form_state['conf']['menu_item_id'] = $form_state['values']['menu_item_id'];
}
