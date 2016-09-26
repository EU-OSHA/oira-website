<?php
/**
 * @file
 * oira_workflow.features.workbench_moderation_transitions.inc
 */

/**
 * Implements hook_workbench_moderation_export_transitions().
 */
function oira_workflow_workbench_moderation_export_transitions() {
  $items = array(
    'draft:final_draft' => array(
      'from_name' => 'draft',
      'to_name' => 'final_draft',
      'name' => 'Creating Final Draft',
    ),
    'draft:published' => array(
      'from_name' => 'draft',
      'to_name' => 'published',
      'name' => 'Publishing',
    ),
    'draft:ready_to_publish' => array(
      'from_name' => 'draft',
      'to_name' => 'ready_to_publish',
      'name' => 'Ready to Publish',
    ),
    'final_draft:needs_review' => array(
      'from_name' => 'final_draft',
      'to_name' => 'needs_review',
      'name' => 'Reviewing Final Draft',
    ),
    'needs_review:draft' => array(
      'from_name' => 'needs_review',
      'to_name' => 'draft',
      'name' => 'Reject',
    ),
    'needs_review:to_be_approved' => array(
      'from_name' => 'needs_review',
      'to_name' => 'to_be_approved',
      'name' => 'Requesting Approval',
    ),
    'ready_to_publish:published' => array(
      'from_name' => 'ready_to_publish',
      'to_name' => 'published',
      'name' => 'Publishing',
    ),
    'to_be_approved:needs_review' => array(
      'from_name' => 'to_be_approved',
      'to_name' => 'needs_review',
      'name' => 'Reject',
    ),
    'to_be_approved:published' => array(
      'from_name' => 'to_be_approved',
      'to_name' => 'published',
      'name' => 'Publishing',
    ),
  );
  return $items;
}
