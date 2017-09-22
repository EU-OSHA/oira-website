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

  // Exported permission: 'create private_album content'.
  $permissions['create private_album content'] = array(
    'name' => 'create private_album content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any private_album content'.
  $permissions['delete any private_album content'] = array(
    'name' => 'delete any private_album content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own private_album content'.
  $permissions['delete own private_album content'] = array(
    'name' => 'delete own private_album content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any private_album content'.
  $permissions['edit any private_album content'] = array(
    'name' => 'edit any private_album content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own private_album content'.
  $permissions['edit own private_album content'] = array(
    'name' => 'edit own private_album content',
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
