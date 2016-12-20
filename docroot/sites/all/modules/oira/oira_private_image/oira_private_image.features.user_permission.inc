<?php
/**
 * @file
 * oira_private_image.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function oira_private_image_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create oira_private_image content'.
  $permissions['create oira_private_image content'] = array(
    'name' => 'create oira_private_image content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any oira_private_image content'.
  $permissions['delete any oira_private_image content'] = array(
    'name' => 'delete any oira_private_image content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own oira_private_image content'.
  $permissions['delete own oira_private_image content'] = array(
    'name' => 'delete own oira_private_image content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any oira_private_image content'.
  $permissions['edit any oira_private_image content'] = array(
    'name' => 'edit any oira_private_image content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own oira_private_image content'.
  $permissions['edit own oira_private_image content'] = array(
    'name' => 'edit own oira_private_image content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'Editor' => 'Editor',
      'Oira Project Manager' => 'Oira Project Manager',
      'Oira Supervisor' => 'Oira Supervisor',
      'Partner' => 'Partner',
      'Superadministrator' => 'Superadministrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'Oira Project Manager' => 'Oira Project Manager',
      'Oira Supervisor' => 'Oira Supervisor',
      'Partner' => 'Partner',
      'Superadministrator' => 'Superadministrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  return $permissions;
}
