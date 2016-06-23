<?php


/**
 * Implementation of hook_views_plugins().
 */
function oira_partner_views_plugins() {
  $path = drupal_get_path('module', 'oira_partner');

  return array(
    'style' => array(
      'oira_quicktabs' => array(
        'title' => t('OiRA Partner Quicktabs'),
        'help' => t('Display view in Quicktabs.'),
        'handler' => 'oira_partner_quicktabs_style_plugin',
        'path' => "$path/includes",
        'theme' => 'quicktabs_view',
        'uses row plugin' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}

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

  $data['oira_partner']['random_partner'] = array(
    'title' => t('Random partner.'),
    'help' => t('Random partner.'),
    'filter' => array(
      'label' => t('Random partner.'),
      'handler' => 'oira_partner_handler_random_partner',
    ),
  );

  $data['oira_partner']['country_partner_access'] = array(
    'title' => t('Node has section of country partner'),
    'help' => t('Node has section of country partner'),
    'filter' => array(
      'label' => t('Node has section of country partner.'),
      'handler' => 'oira_partner_handler_country_partner_access',
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

/**
 *
 * Get the latest 4 tools. (At least one OiRA tool & one E-tool)
 */
class oira_partner_handler_country_partner_access extends views_handler_filter_boolean_operator {

  /**
   * Overrides views_handler_field::query().
   */
  function query() {
    if (empty($this->value)) {
      $in_operator = 'NOT IN';
      $equal_operator = '!=';
    }
    else {
      $in_operator = 'IN';
      $equal_operator = '=';
    }
    $term = menu_get_object('taxonomy_term', 2);
    if (!empty($term)) {
      $nids = _oira_partner_get_by_country($term->tid);
      if (!empty($nids)) {
        $subquery = db_select('workbench_access_node', 'wa')
          ->fields('wa', array('access_id'))
          ->condition('wa.nid', $nids);

        $query = db_select('workbench_access_node', 'wan')
          ->fields('wan', array('nid'))
          ->condition('access_id', $subquery, 'IN');

        $this->query->add_where($this->options['group'], "{$this->query->base_table}.nid", $query, $in_operator);
      }
      else {
        // Show no results.
        $this->query->add_where($this->options['group'], "{$this->query->base_table}.nid", 0, $equal_operator);
      }
    }
    else {
      // Show no results.
      $this->query->add_where($this->options['group'], "{$this->query->base_table}.nid", 0, $equal_operator);
    }
  }
}


/**
 *
 * Get the latest 4 tools. (At least one OiRA tool & one E-tool)
 */
class oira_partner_handler_random_partner extends views_handler_filter_boolean_operator {

  /**
   * Overrides views_handler_field::query().
   */
  function query() {
    if (empty($this->value)) {
      $equal_operator = '!=';
    }
    else {
      $equal_operator = '=';
    }
    static $random_partner;
    if (empty($random_partner)) {
      $query = db_select('node', 'n')
        ->fields('n', array('nid'))
        ->condition('type', 'partner')
        ->condition('status', 1)
        ->range(0, 1)
        ->orderRandom()
        ->execute();
      $nid = $query->fetchField();
      if (!empty($nid)) {
        $random_partner = $nid;
      }
    }
    if (!empty($random_partner)) {
      $this->query->add_where($this->options['group'], "{$this->query->base_table}.nid", $random_partner, $equal_operator);
    }
  }
}
