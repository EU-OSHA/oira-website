<?php

class oira_partner_quicktabs_style_plugin extends quicktabs_style_plugin {

  function option_definition() {
    $options = parent::option_definition();
    $options['row_class'] = '';

    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['row_class'] = array(
      '#type' => 'textfield',
      '#title' => t('Row class'),
      '#default_value' => $this->options['row_class'],
      '#description' => t('Row class.'),
      '#weight' => 3,
    );
  }
  // Override the render functionality.
  function render() {
    if (empty($this->row_plugin)) {
      vpr('views_plugin_style_default: Missing row plugin');
      return;
    }

    $view = $this->view;
    $qt_name = 'view__' . $view->name .'__'. $view->current_display;

    // Group the rows according to the grouping field, if specified.
    $sets = $this->render_grouping($this->view->result, $this->options['grouping']);
    $tabs = array();

    // All rows will contain 2 of each group.
    $all_rows = array();
    $all_rows_rendered = '';
    $tab_index = 0;
    foreach ($sets as $title => $records) {
      $tab_index++;
      usort($records, 'oira_partner_quicktabs_sort_content');
      $has_sector = FALSE;
      $all_group_counter = 0;
      $content_type = '';
      if ($this->uses_row_plugin()) {
        $rows = array();
        foreach ($records as $row_index => $row) {
          if (isset($row->nid)) {
            $node = node_load($row->nid);
            $row_render = node_view($node, 'teaser');
            if (!empty($row_render['links'])) {
              unset($row_render['links']);
            }
            if ($row->node_type == 'practical_tool') {
              $has_sector = TRUE;
            }
            $content_type = $row->node_type;
            $row_rendered = drupal_render($row_render);
          }
          else {
            $this->view->row_index = $row_index;
            $row_rendered = $this->row_plugin->render($row);
          }
          if ($all_group_counter < 2) {
            $all_rows[$row_index] = $row->field_title_field[0]['raw']['safe_value'];
          }
          $rows[] = $row_rendered;
          $all_group_counter++;
        }
      }
      else {
        $rows = $records;
      }
      // If grouped, we'll be using the group title for each tab.
      if ($this->options['grouping']) {
        // Remove labels from titles.
        foreach (element_children($this->options['grouping']) as $key => $value) {
          if (!empty($this->view->field[$this->options['grouping'][$key]['field']]->options['label'])) {
            $title = str_replace($this->view->field[$this->options['grouping'][$key]['field']]->options['label'] . ': ', '', $title);
          }
        }

        if (empty($title)) {
          $title = t('Other');
        }
        $contents = '<div class="quicktabs-group-wrapper"><div class="container"><div class="content-group-label group-' . $content_type . '">' . $title . '</div>';
        $all_rows_rendered .= $contents;
        $all_group_counter = 0;
        foreach ($rows as $row) {
          $contents .= '<div class="quicktabs-views-group ' . (($has_sector) ? 'sector-filter-tab-content' : '') . $this->options['row_class'] . '">' . $row . '</div>';
          if ($all_group_counter < 2) {
            $all_rows_rendered .= '<div class="quicktabs-views-group ' . $this->options['row_class'] . '">' . $row . '</div>';
          }
          if ($all_group_counter == 2) {
            $all_rows_rendered .= '<a class="quicktab-group-view-all more-link" href="javascript:jQuery(\'.quicktabs-tabs li\').eq(' . $tab_index . ').find(\'a\').trigger(\'click\');">View all</a>';
          }
          $all_group_counter++;
        }
        $contents .= '</div></div>';
        $all_rows_rendered .= '</div></div>';
        $tabs[] = array(
          'title' => '<span class="tab-title-wrap tab-title-' . $content_type . '">' . $title . ' (' . count($records) . ')' . '</span>',
          'contents' => array('#markup' => $contents),
        );
      }

      // If not grouped, there's just one set of rows that we loop through.
      else {
        foreach ($rows as $index => $row) {
          $title = $this->get_field($index, $this->options['tab_title_field']);
          $tabs[] = array(
            'title' => '<span class="tab-title-wrap tab-title-' . $content_type . '">' . $title . '</span>',
            'contents' => array('#markup' => $row),
          );
        }
      }
    }
    drupal_add_js(drupal_get_path('module', 'oira_partner') . '/js/sector_filter.js');
    // WHY sort the results by title???
    $all_tab = array(
      'title' => '<span class="tab-title-wrap tab-title-show-all">' . t('Show all') . '</span>',
      'contents' => array('#markup' => $all_rows_rendered),
    );

    array_unshift($tabs, $all_tab);

    $overrides = array('style' => $view->style_plugin->options['tab_style'], 'sorted' => TRUE);
    $quicktabs = quicktabs_build_quicktabs($qt_name, $overrides, $tabs);

    $output = drupal_render($quicktabs);

    // If doing a live preview, add the JavaScript directly to the output.
    if (isset($view->live_preview) && $view->live_preview) {
      $js = drupal_add_js();
      $qtsettings = array();
      foreach ($js['settings']['data'] as $settings) {
        if (isset($settings['quicktabs']['qt_'. $qt_name])) {
          $qtsettings = $settings['quicktabs']['qt_'. $qt_name];
          break;
        }
      }

      $output .= "<script type=\"text/javascript\">\n";
      $output .= "Drupal.settings.quicktabs = Drupal.settings.quicktabs || {};\n";
      $output .= "jQuery.extend(Drupal.settings.quicktabs, ". json_encode(array('qt_'. $qt_name => $qtsettings)) .");\n";
      $output .= "</script>\n";
    }

    unset($view->row_index);

    return $output;
  }
}

function oira_partner_quicktabs_sort_content($a, $b) {
  if (in_array($a->node_type, array('practical_tool', 'promotional_material')) && isset($a->field_field_revised_date[0]['raw']['value'])) {
    $a_time = strtotime($a->field_field_revised_date[0]['raw']['value']);
  }
  else {
    $a_time = strtotime($a->field_field_publication_date[0]['raw']['value']);
  }
  if ($b->node_type == 'practical_tool' && isset($b->field_field_revised_date[0]['raw']['value'])) {
    $b_time = strtotime($b->field_field_revised_date[0]['raw']['value']);
  }
  else {
    $b_time = strtotime($a->field_field_publication_date[0]['raw']['value']);
  }
  if ($a_time == $b_time) {
    return 0;
  }
  return ($a_time < $b_time) ? -1 : 1;
}
