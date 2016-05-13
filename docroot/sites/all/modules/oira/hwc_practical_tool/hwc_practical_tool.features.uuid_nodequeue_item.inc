<?php
/**
 * @file
 * hwc_practical_tool.features.uuid_nodequeue_item.inc
 */

/**
 * Implements hook_uuid_features_default_nodequeue_items().
 */
function hwc_practical_tool_uuid_features_default_nodequeue_items() {
  $nodequeue_items = array();

  $nodequeue_items[] = array(
    'queue_name' => 'tool_of_the_week',
    'node_uuid' => '25e19e2d-cb4a-49ad-b9f6-82041dcbb697',
  );
  return $nodequeue_items;
}
