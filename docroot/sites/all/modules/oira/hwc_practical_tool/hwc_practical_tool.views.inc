<?php

function hwc_practical_tool_views_data_alter(&$data) {
  // Define group.
  $data['hwc_practical_tool']['table']['group'] = t('HWC practical tool');
  $data['hwc_practical_tool']['table']['join'] = array(
    // #global is a special flag which let's a table appear all the time.
    '#global' => array(),
  );
  // Filters nodes that are in current users RM section.
  $data['hwc_practical_tool']['latest_tools'] = array(
    'title' => t('If node is within latest tools. (OiRA tools or E-tools)'),
    'help' => t('If node is within latest tools. (OiRA tools or E-tools)'),
    'filter' => array(
      'label' => t('Node is within latest tools. (OiRA tools or E-tools)'),
      'handler' => 'Hwc_practical_tool_handler_latest_tools',
    ),
  );
  $data['hwc_practical_tool']['tool_type_field'] = array(
    'title' => 'Tool type',
    'help' => 'Oira tool or e-tool.',
    'field' => array(
      'handler' => 'tool_handler_tool_type',
    ),
  );
}

/**
 * Provides a custom views field.
 */
class tool_handler_tool_type extends views_handler_field {
  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }

  function query() {
    // do nothing -- to override the parent query.
  }

  function render($data) {
    $output = NULL;
    $field = current($data->_field_data);
    if (!empty($field['entity'])) {
      $node = $field['entity'];
      if ($node->type == 'wiki_page') {
        $output = t('E-tool');
      }
      else {
        $output = t('OiRA tool');
      }
    }
    return $output;
  }
}


/**
 *
 * Get the latest 4 tools. (At least one OiRA tool & one E-tool)
 */
class Hwc_practical_tool_handler_latest_tools extends views_handler_filter_boolean_operator {

  /**
   * Overrides views_handler_field::query().
   */
  function query() {
    $allow_wiki = variable_get('hwc_practical_tool_allow_wiki', 0);

    $limit = !empty($this->options['number_of_items']) ? $this->options['number_of_items'] : 3;
    $term = taxonomy_get_term_by_name('E-tools', 'wiki_categories');
    $term = reset($term);

    $wiki_pages = [];
    if ($allow_wiki) {
      // Get latest 3 E-tools WIKI PAGES.
      $q = db_select('field_data_field_wiki_categories', 'cat');
      $q->innerJoin('field_data_field_updated', 'up', 'cat.entity_id = up.entity_id');
      $q->innerJoin('node', 'n', 'n.nid = cat.entity_id');
      $q->fields('up', ['entity_id', 'field_updated_value'])
        ->condition('n.status', 1)
        ->condition('cat.bundle', 'wiki_page')
        ->condition('cat.field_wiki_categories_tid', $term->tid)
        ->orderBy('up.field_updated_value', 'DESC')
        ->range(0, $limit);
      $wiki_pages = $q->execute()->fetchAllKeyed();
    }

    // Get latest 3 OiRA TOOLS.
    $q = db_select('field_data_field_publication_date', 'd');
    $q->innerJoin('field_data_field_revised_date', 'rev', 'rev.entity_id = d.entity_id');
    $q->innerJoin('node', 'n', 'n.nid = d.entity_id');
    $q->fields('rev', ['entity_id', 'field_revised_date_value'])
      ->condition('n.status', 1)
      ->condition('d.bundle', 'practical_tool')
      ->condition('d.field_publication_date_value', gmdate("Y-m-d H:i:s", time()), '<=')
      ->orderBy('rev.field_revised_date_value', 'DESC')
      ->range(0, $limit);
    $tools = $q->execute()->fetchAllKeyed();

    $items = [];

    // Add first tool.
    if (!empty($tools)) {
      reset($tools);
      $nid = key($tools);
      $items[$nid] = strtotime($tools[$nid]);
      unset($tools[$nid]);
      $limit -= 1;
    }
    // Get remaining items and sort them desc.
    $all_items = array_map('strtotime', $wiki_pages + $tools);
    arsort($all_items);

    // Add the rest of items.
    while ($limit > 0 && !empty($all_items)) {
      reset($all_items);
      $nid = key($all_items);
      $items[$nid] = strtotime($all_items[$nid]);
      unset($all_items[$nid]);
      $limit--;
    }

    $nids = array_keys($items);
    if (!empty($nids)) {
      $operator = empty($this->value) ? 'NOT IN' : 'IN';
      $this->query->add_where(1, "{$this->query->base_table}.nid", $nids, $operator);
    }
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['number_of_items'] = array('default' => '3');
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['number_of_items'] = [
      '#type' => 'textfield',
      '#title' => t('Number of items to return'),
      '#default_value' => !empty($this->options['number_of_items']) ? $this->options['number_of_items'] : 3,
      '#size' => 3,
      '#maxlength' => 3,
    ];
  }
}
