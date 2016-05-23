<?php

function oira_partner_views_data_alter(&$data) {
  // Define group.
  $data['oira_partner']['table']['group'] = t('Oira partner');
  $data['oira_partner']['table']['join'] = array(
    // #global is a special flag which let's a table appear all the time.
    '#global' => array(),
  );
  // Filters nodes that are in current users RM section.
  $data['oira_partner']['is_co_author'] = array(
    'title' => t('Node is co author of current node.'),
    'help' => t('Node is co author of current node.'),
    'filter' => array(
      'label' => t('Node is co author of current node.'),
      'handler' => 'oira_partner_handler_is_co_author',
    ),
  );
}

/**
 *
 * Get the latest 4 tools. (At least one OiRA tool & one E-tool)
 */
class oira_partner_handler_is_co_author extends views_handler_filter_boolean_operator {

  /**
   * Overrides views_handler_field::query().
   */
  function query() {
    $node = menu_get_object();
    if (empty($this->value)) {
      $in_operator = 'NOT IN';
      $equal_operator = '!=';
    }
    else {
      $in_operator = 'IN';
      $equal_operator = '=';
    }
    if (!empty($node->field_co_author)) {
      $node_wrapper = entity_metadata_wrapper('node', $node);
      $tids = array();
      foreach ($node_wrapper->field_co_author->value() as $term) {
        $tids[] = $term->tid;
      }
      $subquery = db_select('workbench_access_node', 'workbench_access_node');
      $subquery->addField('workbench_access_node', 'nid');
      $subquery->distinct();
      $subquery->condition('workbench_access_node.access_id', $tids, 'IN');
      $this->query->add_where($this->options['group'], "{$this->query->base_table}.nid", $subquery, $in_operator);
    }
    else {
      // Show no results.
      $this->query->add_where($this->options['group'], "{$this->query->base_table}.nid", 0, $equal_operator);
    }
  }
}