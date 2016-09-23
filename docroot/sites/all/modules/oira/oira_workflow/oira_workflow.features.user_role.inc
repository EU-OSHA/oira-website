<?php
/**
 * @file
 * oira_workflow.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function oira_workflow_user_default_roles() {
  $roles = array();

  // Exported role: Oira Project Manager.
  $roles['Oira Project Manager'] = array(
    'name' => 'Oira Project Manager',
    'weight' => 11,
  );

  // Exported role: Oira Supervisor.
  $roles['Oira Supervisor'] = array(
    'name' => 'Oira Supervisor',
    'weight' => 12,
  );

  // Exported role: Partner.
  $roles['Partner'] = array(
    'name' => 'Partner',
    'weight' => 10,
  );

  return $roles;
}
