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
    'title' => t('If node is within latest 4 tools. (OiRA tools or E-tools)'),
    'help' => t('If node is within latest 4 tools. (OiRA tools or E-tools)'),
    'filter' => array(
      'label' => t('Node is within latest 4 tools. (OiRA tools or E-tools)'),
      'handler' => 'Hwc_practical_tool_handler_latest_tools',
    ),
  );
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
    $term = reset(taxonomy_get_term_by_name('E-tools', 'wiki_categories'));
    $operator = empty($this->value) ? 'NOT IN' : 'IN';

    // Get latest 4 E-tools WIKI PAGES
    $q = db_select('field_data_field_wiki_categories', 'cat');
    $q->innerJoin('field_data_field_updated', 'up', 'cat.entity_id = up.entity_id');
    $q->fields('up', ['entity_id', 'field_updated_value'])
      ->condition('cat.bundle', 'wiki_page')
      ->condition('cat.field_wiki_categories_tid', $term->tid)
      ->orderBy('up.field_updated_value', 'DESC')
      ->range(0, 4);
    $wiki_pages = $q->execute()->fetchAllKeyed();

    // Get latest 4 OiRA TOOLS
    $q = db_select('field_data_field_publication_date', 'd');
    $q->innerJoin('field_data_field_revised_date', 'rev', 'rev.entity_id = d.entity_id');
    $q->fields('rev', ['entity_id', 'field_revised_date_value'])
      ->condition('d.bundle', 'practical_tool')
      ->condition('d.field_publication_date_value', gmdate("Y-m-d H:i:s", time()), '<=')
      ->orderBy('rev.field_revised_date_value', 'DESC')
      ->range(0, 4);
    $tools = $q->execute()->fetchAllKeyed();

    $limit = 4;
    $wiki_pages_no = $tools_no = 0;
    $items = [0];

    while ($limit > 0) {
      if ((reset($wiki_pages) > reset($tools) && $wiki_pages_no < 3) || $tools_no >= 3) {
        $items[] = key($wiki_pages);
        unset($wiki_pages[key($wiki_pages)]);
        $wiki_pages_no++;
      }
      else {
        $items[] = key($tools);
        unset($tools[key($tools)]);
        $tools_no++;
      }
      $limit--;
    }

    $this->query->add_where(1, "{$this->query->base_table}.nid", $items, $operator);
  }
}