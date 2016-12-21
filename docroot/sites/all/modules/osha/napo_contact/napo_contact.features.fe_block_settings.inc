<?php
/**
 * @file
 * napo_contact.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function napo_contact_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  return $export;
}
