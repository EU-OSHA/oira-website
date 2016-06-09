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

    $all_rows = array();
    $all_rows_rendered = '';
    foreach ($sets as $title => $records) {
      if ($this->uses_row_plugin()) {
        $rows = array();
        foreach ($records as $row_index => $row) {
          if (isset($row->nid)) {
            $node = node_load($row->nid);
            $row_render = node_view($node, 'teaser');
            $row_rendered = drupal_render($row_render);
          }
          else {
            $this->view->row_index = $row_index;
            $row_rendered = $this->row_plugin->render($row);
          }
          $all_rows[$row_index] = $row->field_title_field[0]['raw']['safe_value'];
          $rows[] = $row_rendered;
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
        $contents = '<div class="container"><div class="content-group-label">' . $title . '</div>';
        foreach ($rows as $row) {
          $contents .= '<div class="quicktabs-views-group ' . $this->options['row_class'] . '">' . $row . '</div>';
        }
        $contents .= '</div>';
        $tabs[] = array(
          'title' => $title . ' (' . count($records) . ')',
          'contents' => array('#markup' => $contents),
        );
        $all_rows_rendered .= $contents;
      }

      // If not grouped, there's just one set of rows that we loop through.
      else {
        foreach ($rows as $index => $row) {
          $title = $this->get_field($index, $this->options['tab_title_field']);
          $tabs[] = array(
            'title' => $title,
            'contents' => array('#markup' => $row),
          );
        }
      }
    }

    // WHY sort the results by title???
    $tabs[] = array(
      'title' => t('Show all'),
      'contents' => array('#markup' => $all_rows_rendered),
    );

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