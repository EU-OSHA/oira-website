<?php
/**
 * Render footer menu as nav-pills.
 */
function bootstrap_menu_tree__menu_footer_menu(&$variables) {
  return '<ul class="menu nav nav-pills">' . $variables['tree'] . '</ul>';
}
/**
 * Implements theme_menu_link__menu_block().
 */
function oira_frontend_menu_link__menu_block($variables) {
  $element = &$variables['element'];
  $delta = $element['#bid']['delta'];
  // Add homepage Icon.
  /*$attr = drupal_attributes($element['#attributes']);
  if (isset($variables['element']['#href']) &&
    $variables['element']['#href'] == '<front>' &&
    isset($element['#localized_options']['content']['image'])
  ) {
    $path = file_create_url($element['#localized_options']['content']['image']);
    $link = l('<img src="' . $path . '" />', $element['#href'],
      array('html' => TRUE, 'attributes' => $element['#localized_options']['attributes'])
    );
    return sprintf("\n<li %s>%s</li>", $attr, $link);
  }*/
  // Render or not the Menu Image.
  // Get the variable provided by osha_menu module.
  $render_img = variable_get('menu_block_' . $delta . '_' . OSHA_MENU_RENDER_IMG_VAR_NAME, 0);
  if (!$render_img) {
    return theme_menu_link($variables);
  }
  // $element['#attributes']['data-image-url'] = $image_url;
  $output_link = l($element['#title'], $element['#href'], $element['#localized_options']);
  $output_image = "";
  if (!empty($element['#localized_options']['content']['image'])
    && $image_url = file_create_url($element['#localized_options']['content']['image'])) {
    $image = '<img alt="' . $element['#title'] . '" src="' . $image_url . '"/>';
    $options = array_merge($element['#localized_options'], array('html' => TRUE));
    $output_image = l($image, $element['#href'], $options);
  }

  $sub_menu = '';
  if (!empty($element['#below']) && in_array('expanded',$element['#attributes']['class'])) {
    unset($element['#below']['#theme_wrappers']);
    $sub_menu .= '<ul class="submenu-items">' . drupal_render($element['#below']) . '</ul>';
  }
  return '<li' . drupal_attributes($element['#attributes']) . '>
  <div><div class="introduction-image">' . $output_image . '</div>
  <div class="introduction-title">' . $output_link . '</div></div>'.$sub_menu.
  '</li>';
}
/**
 * Overrides theme_menu_link().
 */
function oira_frontend_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';
  if ($element['#below']) {
    // Prevent dropdown functions from being added to management menu so it
    // does not affect the navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] == 1)) {
      // Add our own wrapper.
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
      // Generate as standard dropdown.
      $element['#title'] .= ' <span class="caret"></span>';
      $element['#attributes']['class'][] = 'dropdown';
      $element['#localized_options']['html'] = TRUE;
      // Set dropdown trigger element to # to prevent inadvertant page loading
      // when a submenu link is clicked.
//      $element['#localized_options']['attributes']['data-target'] = '#';
      $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
//      $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
      $element['#localized_options']['attributes']['role'] = 'button';
      $element['#localized_options']['attributes']['aria-haspopup'] = 'true';
      $element['#localized_options']['attributes']['aria-expanded'] = 'false';
    }
  }
  // On primary navigation menu, class 'active' is not set on active menu item.
  // @see https://drupal.org/node/1896674
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }
  // Add image to Home menu item.
  if (isset($variables['element']['#href']) && $variables['element']['#href'] == '<front>' && isset($element['#localized_options']['content']['image'])) {
    $path = file_create_url($element['#localized_options']['content']['image']);
    $link = l('<img alt="' . $element['#title'] . '" src="' . $path . '" />', $element['#href'],
      array('html' => TRUE, 'attributes' => $element['#localized_options']['attributes'])
    );
    return '<li' . drupal_attributes($element['#attributes']) . '>' . $link . "</li>\n";
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}


/**
 * Theme flexible layout of panels.
 * Copied the panels function and removed the css files.
 */
function oira_frontend_panels_flexible($vars) {
  $css_id = $vars['css_id'];
  $content = $vars['content'];
  $settings = $vars['settings'];
  $display = $vars['display'];
  $layout = $vars['layout'];
  $handler = $vars['renderer'];
  panels_flexible_convert_settings($settings, $layout);
  $renderer = panels_flexible_create_renderer(FALSE, $css_id, $content, $settings, $display, $layout, $handler);
  $output = "<div class=\"panel-flexible " . $renderer->base['canvas'] . " clearfix\" $renderer->id_str>\n";
  $output .= "<div class=\"panel-flexible-inside " . $renderer->base['canvas'] . "-inside\">\n";
  $output .= panels_flexible_render_items($renderer, $settings['items']['canvas']['children'], $renderer->base['canvas']);
  // Wrap the whole thing up nice and snug
  $output .= "</div>\n</div>\n";
  return $output;
}

/**
 * Implements hook_process_html_tag().
 */
function oira_frontend_process_html_tag(&$variables) {
  $tag = &$variables['element'];

  if ($tag['#tag'] == 'script') {
    $tag['#attributes']['type'] = 'text/javascript';
  }
}

/**
 * Implements hook_preprocess_page().
 */
function oira_frontend_preprocess_block(&$vars) {

  if (variable_get('google_no_index', FALSE)) {
    $robots_noindex = array(
      '#type' => 'html_tag',
      '#tag' => 'meta',
      '#attributes' => array(
        'name' => 'robots',
        'content' => 'noindex',
      ),
    );
    drupal_add_html_head($robots_noindex, 'no_index_robots');
    $robots_noindex = array(
      '#type' => 'html_tag',
      '#tag' => 'meta',
      '#attributes' => array(
        'name' => 'googlebot',
        'content' => 'noindex',
      ),
    );
    drupal_add_html_head($robots_noindex, 'no_index_google');
  }

  // Private zone menu block alter.
  if (!empty($vars['elements']['#block']->bid)
    && $vars['elements']['#block']->bid == 317) {
    $vars['title_attributes_array']['class'][] = 'container';
    $vars['content'] .= '<div class="container"><div class="private-zone-back-wrapper"><a class="private-zone-back-link" onclick="history.go(-1);return true;" href="#">Back</a></div></div>';
  }
}

function oira_frontend_preprocess_page(&$vars) {
  global $language;
  if (drupal_is_front_page()) {
    unset($vars['page']['content']['system_main']['default_message']);
    drupal_set_title('');
  }
  $vars['logo'] = '/sites/all/themes/oira_frontend/images/eu-osha-logo/EU-OSHA-'.($language->language).'.png';
  $vars['eu_logo'] = '/sites/all/themes/oira_frontend/images/europeLogo.png';
  $vars['oira_logo'] = '/sites/all/themes/oira_frontend/images/oiraLogo.gif';

  // Set info status for contact confirmation submission
  if (!empty($vars['page']['contact_form_widget']['webform_client-block-43'])) {
    $node = node_load(43);
    $messages = drupal_get_messages('status');

    if (!empty($messages['status']) && !empty($node->webform['confirmation'])) {
      foreach ($messages['status'] as $idx => $message) {
        if (strcmp($message, $node->webform['confirmation']) == 0) {
          array_splice($messages['status'], $idx, 1);
          drupal_set_message('<div class="webform-confirmation">' . t($node->webform['confirmation']) . '</div>','info');
        }
      }
    }
  }
  // Add information about the number of sidebars.
  if (!empty($vars['page']['sidebar_first']) && !empty($vars['page']['sidebar_second'])) {
    $vars['content_column_class'] = ' class="col-sm-6"';
  }
  elseif (!empty($vars['page']['sidebar_first']) || !empty($vars['page']['sidebar_second'])) {
    $vars['content_column_class'] = ' class="col-sm-9"';
  }
  else {
    $vars['content_column_class'] = '';
  }

  // Hide tabs for partners.
  $partner_role = user_role_load_by_name(ROLE_OIRA_PARTNER);
  if (user_has_role($partner_role->rid) && isset($vars['tabs'])) {
    $vars['tabs']['#access'] = FALSE;
  }

}

function oira_frontend_css_alter(&$css) {
  global $theme_info, $base_theme_info;
  if (isset($css['sites/all/modules/contrib/panels/css/panels.css'])) {
    unset($css['sites/all/modules/contrib/panels/css/panels.css']);
  }

  uasort($css, 'drupal_sort_css_js');
  $print = array();
  $weight = 0;
  foreach ($css as $name => $style) {
    if ($css[$name]['browsers']['!IE']) {
      $css[$name]['group'] = 0;
      $css[$name]['weight'] = ++$weight;
      $css[$name]['every_page'] = TRUE;
    }
    if ($css[$name]['media'] == 'print') {
      $print[$name] = $css[$name];
      unset($css[$name]);
    }
  }
  $css = array_merge($css, $print);
}

function oira_frontend_js_alter(&$js) {

  if (arg(0) === 'admin') {
    return;
  }
  // Sort JS items, so that they appear in the correct order.
  uasort($js, 'drupal_sort_css_js');

  $weight = 0;

  foreach ($js as $name => $javascript) {
    $js[$name]['group'] = -100;
    $js[$name]['weight'] = ++$weight;
    $js[$name]['every_page'] = 1;
  }

}


function oira_frontend_preprocess_region(&$variables, $hook) {
  if($variables['region'] == "header_block"){
    $variables['classes_array'][] = 'clearfix';
  }
}

function oira_frontend_preprocess_field(&$variables) {
  // Add theme suggestion for field based on field name and view mode.
  if (!empty($variables['element']['#view_mode'])) {
    $variables['theme_hook_suggestions'][] = 'field__' . $variables['element']['#field_name'] . '__' . $variables['element']['#view_mode'];
  }
}

function oira_frontend_preprocess_node(&$vars) {
  if (isset($vars['content']['links']['node']['#links']['node-readmore'])) {
//    $vars['content']['links']['node']['#links']['node-readmore']['title'] = t('See more');
  }
  $view_mode = $vars['view_mode'];
  $vars['theme_hook_suggestions'][] = 'node__' . $view_mode;
  $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '__' . $view_mode;
  $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->nid . '__' . $view_mode;
  if (context_isset('context', 'segmentation_page')) {
    $vars['theme_hook_suggestions'][] = 'node__article_segment';
  }
//  oira_frontend_top_anchor($vars);
}

function oira_frontend_preprocess_image_style(&$variables) {
  $variables['attributes']['class'][] = 'img-responsive';
  if (empty($variables['alt'])) {
    $variables['alt'] = drupal_basename($variables['path']);
  }
}

/**
 * Implements theme_pager().
 */

function oira_frontend_pager($variables) {
  // Overwrite pager links.
  $variables['tags'][0] = '«';
  $variables['tags'][1] = '‹';
  $variables['tags'][3] = '›';
  $variables['tags'][4] = '»';

  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = $variables['quantity'];
  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // current is the page we are currently paged to
  $pager_current = $pager_page_array[$element] + 1;
  // first is the first page listed by this pager piece (re quantity)
  $pager_first = $pager_current - $pager_middle + 1;
  // last is the last page listed by this pager piece (re quantity)
  $pager_last = $pager_current + $quantity - $pager_middle;
  // max is the maximum page number
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  // Prepare for generation loop.
  $i = $pager_first;

  $li_first = theme('pager_first', array('text' => (isset($tags[0]) ? $tags[0] : t('« first')), 'element' => $element, 'parameters' => $parameters));
  $li_previous = theme('pager_previous', array('text' => (isset($tags[1]) ? $tags[1] : t('‹ previous')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_next = theme('pager_next', array('text' => (isset($tags[3]) ? $tags[3] : t('next ›')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_last = theme('pager_last', array('text' => (isset($tags[4]) ? $tags[4] : t('last »')), 'element' => $element, 'parameters' => $parameters));

  if ($pager_total[$element] > 1) {
    if ($li_first) {
      $items[] = array(
        'class' => array('pager-first'),
        'data' => $li_first,
      );
    }
    if ($li_previous) {
      $items[] = array(
        'class' => array('pager-previous'),
        'data' => $li_previous,
      );
    }

  // When there is more than one page, create the pager list.
    $items[] = array(
      'class' => array('pager-current'),
      'data' => $pager_current,
    );

    $items[] = array(
      'class' => array('pager-separator'),
      'data' => '/',
    );

    if ($pager_max - $pager_current) {
      $items[] = array(
        'class' => array('pager-item'),
        'data' => theme('pager_next', array('text' => $pager_max, 'element' => $element, 'interval' => ($pager_max - $pager_current), 'parameters' => $parameters)),
      );
    }
    else {
      $items[] = array(
        'class' => array('pager-item'),
        'data' => $pager_current,
      );
    }
    // End generation.
    if ($li_next) {
      $items[] = array(
        'class' => array('pager-next'),
        'data' => $li_next,
      );
    }
    if ($li_last) {
      $items[] = array(
        'class' => array('pager-last'),
        'data' => $li_last,
      );
    }
    return '<h4 class="element-invisible">' . t('Pages') . '</h4>' . theme('item_list', array(
      'items' => $items,
      'attributes' => array('class' => array('pager')),
    ));
  }
}

/**
 * Colorbox theme function to add support for image field caption.
 *
 * @see theme_colorbox_image_formatter
 */
function oira_frontend_colorbox_image_formatter($variables) {
  $item = $variables['item'];
  $entity_type = $variables['entity_type'];
  $entity = $variables['entity'];
  $field = $variables['field'];
  $settings = $variables['display_settings'];
  $image = array(
    'path' => $item['uri'],
    'alt' => isset($item['alt']) ? $item['alt'] : '',
    'title' => isset($item['title']) ? $item['title'] : '',
    'style_name' => $settings['colorbox_node_style'],
  );
  if ($variables['delta'] == 0 && !empty($settings['colorbox_node_style_first'])) {
    $image['style_name'] = $settings['colorbox_node_style_first'];
  }
  if (isset($item['width']) && isset($item['height'])) {
    $image['width'] = $item['width'];
    $image['height'] = $item['height'];
  }
  if (isset($item['attributes'])) {
    $image['attributes'] = $item['attributes'];
  }
  // Allow image attributes to be overridden.
  if (isset($variables['item']['override']['attributes'])) {
    foreach (array('width', 'height', 'alt', 'title') as $key) {
      if (isset($variables['item']['override']['attributes'][$key])) {
        $image[$key] = $variables['item']['override']['attributes'][$key];
        unset($variables['item']['override']['attributes'][$key]);
      }
    }
    if (isset($image['attributes'])) {
      $image['attributes'] = $variables['item']['override']['attributes'] + $image['attributes'];
    }
    else {
      $image['attributes'] = $variables['item']['override']['attributes'];
    }
  }
  $entity_title = entity_label($entity_type, $entity);
  switch ($settings['colorbox_caption']) {
    case 'auto':
      // If the title is empty use alt or the entity title in that order.
      if (!empty($image['title'])) {
        $caption = $image['title'];
      }
      elseif (!empty($image['alt'])) {
        $caption = $image['alt'];
      }
      elseif (!empty($entity_title)) {
        $caption = $entity_title;
      }
      else {
        $caption = '';
      }
      break;
    case 'title':
      $caption = $image['title'];
      break;
    case 'alt':
      $caption = $image['alt'];
      break;
    case 'node_title':
      $caption = $entity_title;
      break;
    case 'custom':
      $caption = token_replace($settings['colorbox_caption_custom'], array(
        $entity_type => $entity,
        'file' => (object) $item
      ), array('clear' => TRUE));
      break;
    default:
      $caption = '';
  }
  // If our custom checkbox is used, overwrite caption.
  if (!empty($settings['use_image_caption_field'])) {
    if (!empty($item['image_field_caption']['value'])) {
      $caption = $item['image_field_caption']['value'];
    }
  }
  // Shorten the caption for the example styles or when caption shortening is active.
  $colorbox_style = variable_get('colorbox_style', 'default');
  $trim_length = variable_get('colorbox_caption_trim_length', 75);
  if (((strpos($colorbox_style, 'colorbox/example') !== FALSE) || variable_get('colorbox_caption_trim', 0)) && (drupal_strlen($caption) > $trim_length)) {
    $caption = drupal_substr($caption, 0, $trim_length - 5) . '...';
  }
  // Build the gallery id.
  list($id, $vid, $bundle) = entity_extract_ids($entity_type, $entity);
  $entity_id = !empty($id) ? $entity_type . '-' . $id : 'entity-id';
  switch ($settings['colorbox_gallery']) {
    case 'post':
      $gallery_id = 'gallery-' . $entity_id;
      break;
    case 'page':
      $gallery_id = 'gallery-all';
      break;
    case 'field_post':
      $gallery_id = 'gallery-' . $entity_id . '-' . $field['field_name'];
      break;
    case 'field_page':
      $gallery_id = 'gallery-' . $field['field_name'];
      break;
    case 'custom':
      $gallery_id = $settings['colorbox_gallery_custom'];
      break;
    default:
      $gallery_id = '';
  }
  if ($style_name = $settings['colorbox_image_style']) {
    $path = image_style_url($style_name, $image['path']);
  }
  else {
    $path = file_create_url($image['path']);
  }
  return theme('colorbox_imagefield', array(
    'image' => $image,
    'path' => $path,
    'title' => $caption,
    'gid' => $gallery_id,
    'entity' => $entity,
    'colorbox_style' => $style_name,
  ));
}
/**
 * @see theme_colorbox_imagefield().
 * @see colorbox_handler_field_colorbox.
 */
function oira_frontend_colorbox_imagefield($variables) {
  // Load the necessary js file for Colorbox activation.
  if (_colorbox_active() && !variable_get('colorbox_inline', 0)) {
    drupal_add_js(drupal_get_path('module', 'colorbox') . '/js/colorbox_inline.js');
  }
  if ($variables['image']['style_name'] == 'hide') {
    $image = '';
    $class[] = 'js-hide';
  }
  elseif (!empty($variables['image']['style_name'])) {
    $image = theme('image_style', $variables['image']);
  }
  else {
    $image = theme('image', $variables['image']);
  }
  $file = current(file_load_multiple(array(), array('uri' => $variables['image']['path'])));
  $sectors = '';
  if (!empty($file->field_multiple_sector)) {
    $sectors = '<div class="image-sectors">';
    foreach ($file->field_multiple_sector[LANGUAGE_NONE] as $val) {
      $term = taxonomy_term_load($val['tid']);
      $sectors .= '<span class="sector-term">' . $term->name . '</span>';
    }
    $sectors .= '</div>';
  }
  $download = '<a href="' . file_create_url($file->uri) . '" target="_blank" class="download-file"><span class="glyphicon glyphicon-download"></span></a>';

  $image = '<div class="image-thumb-container"><div class="image-container">' . $image . '</div><div class="image-title">' . $file->filename . '</div>' . $sectors . $download . '</div>';

  $image_vars = array(
    'style_name' => $variables['colorbox_style'],
    'path' => $variables['image']['path'],
    'alt' => $variables['entity']->title,
  );
  $popup = theme('image_style', $image_vars);

  $caption = $variables['title'];

  $width = 'auto';
  $height = 'auto';
  $gallery_id = $variables['gid'];
  $link_options = drupal_parse_url($variables['image']['path']);
  $link_options = array_merge($link_options, array(
    'html' => TRUE,
    'fragment' => 'colorbox-inline-' . md5($variables['image']['path']),
    'query' => array(
      'width' => $width,
      'height' => $height,
      'title' => $caption,
      'inline' => 'true'
    ),
    'attributes' => array(
      'class' => array('colorbox-inline'),
      'rel' => $gallery_id
    )
  ));
  // Remove any parameters that aren't set.
  $link_options['query'] = array_filter($link_options['query']);
  $link_tag = l($image, $variables['path'], $link_options);
  return $link_tag . '<div style="display: none;"><div id="colorbox-inline-' . md5($variables['image']['path']) . '">' . $popup . '</div></div>';
}

/**
 * @see theme_flickr_photoset.
 */
function oira_frontend_flickr_photoset($variables) {
  $photoset = $variables['photoset'];
  $owner = $variables['owner'];
  $size = $variables['size'];
  $media = isset($variables['media']) ? $variables['media'] : 'photos';
  $attribs = $variables['attribs'];
  $min_title = $variables['min_title'];
  $min_metadata = $variables['min_metadata'];
  $settings = $variables['settings'];
  $wrapper_class = $settings['image_class'];
  $variables['wrapper_class'] = $settings['image_class'];
  $output = '';
  $attribs['class'] = (!empty($attribs['class'])) ? $attribs['class'] . ' img-responsive' : 'img-responsive';
  if (module_exists('flickr_sets')) {
    $output = "<div class='flickr-photoset'>\n";
    $per_page = $settings['images_shown'];
    $photos = flickr_photosets_getphotos($photoset['id'], array(
      'per_page' => $per_page,
      'media' => $media,
    ));
    if ($photos['photoset']['total']) {
      foreach ((array) $photos['photoset']['photo'] as $photo) {
        // Insert owner into $photo because theme_flickr_photo needs it.
        $photo['owner'] = $owner;
        $output .= theme('flickr_photo', array(
          'photo' => $photo,
          'size' => $size,
          'format' => NULL,
          'attribs' => $attribs,
          'min_title' => $variables['min_title'],
          'min_metadata' => $variables['min_metadata'],
          'wrapper_class' => $wrapper_class,
        ));
      }
      if ($photos['photoset']['total'] > count($photos['photoset']['photo'])) {
        $output .= l(t('View all'), flickr_photoset_page_url($owner, $photoset['id']), array('attributes' => array('target' => '_blank')));
      }
    }
    else {
      $output .= t('No media in this set.');
    }
  }
  else {
    $img = flickr_img($photoset, $size, $attribs);
    $output = theme('pager');
    $photo_url = flickr_photoset_page_url($owner, $photoset['id']);
    $output .= "<div class='flickr-photoset" . $wrapper_class . "'>";
    $title = is_array($photoset['title']) ? $photoset['title']['_content'] : $photoset['title'];
    return l($img, $photo_url, array(
      'attributes' => array(
        'title' => $title),
      'absolute' => TRUE,
      'html' => TRUE,
    ));
  }
  $output .= '</div>';
  return $output;
}
/**
 * Anchor to top of the page
 */
function oira_frontend_top_anchor(&$vars) {
  $options = array(
    'attributes' => array(
      'class' => 'top_anchor',
    ),
    'external' => TRUE,
    'fragment' => 'top',
    'html' => TRUE,
  );
  $vars['top_anchor'] = l('<img alt="Anchor to top" src="'.file_create_url(path_to_theme().'/images/anchor-top.png').'" />', '', $options);
}

function oira_frontend_qt_quicktabs_tabset($vars) {
  $variables = array(
    'attributes' => array(
      'class' => array('quicktabs-tabs quicktabs-style-' . $vars['tabset']['#options']['style'], 'container'),
    ),
    'items' => array(),
  );
  foreach (element_children($vars['tabset']['tablinks']) as $key) {
    $item = array();
    if (is_array($vars['tabset']['tablinks'][$key])) {
      $tab = $vars['tabset']['tablinks'][$key];
      if ($key == $vars['tabset']['#options']['active']) {
        $item['class'] = array('active');
      }
      $tab['#options']['html'] = TRUE;
      $item['data'] = drupal_render($tab);
      $variables['items'][] = $item;
    }
  }
  $ul = theme('item_list', $variables);
  return '<div class="quicktabs-tabs-container">' . $ul . '</div>';
}

/**
 * Overrides theme_form_element_label().
 */
function oira_frontend_form_element_label(&$variables) {
  $element = $variables['element'];

  // This is also used in the installer, pre-database setup.
  $t = get_t();

  // Determine if certain things should skip for checkbox or radio elements.
  $skip = (isset($element['#type']) && ('checkbox' === $element['#type'] || 'radio' === $element['#type']));

  // If title and required marker are both empty, output no label.
  if ((!isset($element['#title']) || $element['#title'] === '' && !$skip) && empty($element['#required'])) {
    return '';
  }

  // If the element is required, a required marker is appended to the label.
  $required = !empty($element['#required']) ? theme('form_required_marker', array('element' => $element)) : '';

  $title = '';
  if (!empty($element['#title'])) {
    $title = filter_xss_admin($element['#title']);
  }

  $attributes = array();

  // Style the label as class option to display inline with the element.
  if ($element['#title_display'] == 'after' && !$skip) {
    $attributes['class'][] = $element['#type'];
  }
  // Show label only to screen readers to avoid disruption in visual flows.
  elseif ($element['#title_display'] == 'invisible') {
    $attributes['class'][] = 'element-invisible';
  }

  $skip_for = in_array($element['#type'], ['checkboxes']);
  if (!empty($element['#id']) && !$skip_for) {
    $attributes['for'] = $element['#id'];
  }

  // Insert radio and checkboxes inside label elements.
  $output = '';
  if (isset($variables['#children'])) {
    $output .= $variables['#children'];
  }

  // Append label.
  $output .= $t('!title !required', array('!title' => $title, '!required' => $required));

  // The leading whitespace helps visually separate fields from inline labels.
  return ' <label' . drupal_attributes($attributes) . '>' . $output . "</label>\n";
}

function oira_frontend_node_save_redirect_submit($form, &$form_state){
//  $partner_id = osha_workflow_user_partner_id($form_state['values']['uid']);
//  // TODO FIX THIS SCOTCH WITH ANOTHER SCOTCH.
//  if ($partner_id !== NULL) {
//    unset($_GET['destination']);
//    $form_state['redirect'] = 'node/' . $partner_id . '/edit-' . $form_state['values']['type'] . '/' . $form_state['nid'];
//  }
}

/**
 * Add javascript functionality for for limiting number of words for field_summary.
 */
function oira_frontend_news_after_build($form, &$form_state){

  drupal_add_js(drupal_get_path('module', 'oira') . '/js/textarea_word_count.js');

  $form['#attached']['js'][] = array(
    'data' => '(function ($){$("#' . $form['field_summary']['#id'] . ' textarea").textareaCounter({limit : 420}); }(jQuery));',
    'type' => 'inline',
    'scope' => 'footer',
  );
  return $form;
}

/**
 * Additional validation for limiting number of words for field_summary.
 */
function oira_frontend_news_validate_summary_word_count($form, &$form_state){
  if($form_state['values']['nid'] !== NULL){
    $language =  isset($form_state['values']['language']) ? $form_state['values']['language'] : LANGUAGE_NONE;
  }else{
    $language = LANGUAGE_NONE;
  }

  if (isset($form_state['values']['field_summary'][$language][0]['value'])) {
    $words = explode(' ', $form_state['values']['field_summary'][$language][0]['value']);
    if(count($words)>420){
      form_set_error('field_summary', t('Maximum allowed words for summary is @words',array('@words' => 420)));
    }
  }
}

/**
 * Implements form_alter().
 */
function oira_frontend_form_alter(&$form, &$form_state, $form_id){
  switch($form_id){
    case 'user_login':
      $form['#submit'][] = 'oira_frontend_login_destination_submit';
      break;
    case 'news_node_form':
      $form['#after_build'][] = 'oira_frontend_news_after_build';
      $form['#validate'][] = 'oira_frontend_news_validate_summary_word_count';
      $form['field_image']['und'][0]['#process'][] = 'oira_frontend_image_field_caption_widget_process';
      $form['actions']['#attributes']['class'] = array('container','text-center');
      $form['field_aditional_resources']['#access'] = FALSE;
      $form['actions']['submit']['#submit'][] = 'oira_frontend_node_save_redirect_submit';
      if(isset($form['actions']['save_preview'])){
        $form['actions']['save_preview']['#submit'][] = 'oira_frontend_node_save_redirect_submit';
      }
      if(isset($form['actions']['send_for_approval'])){
        $form['actions']['send_for_approval']['#submit'][] = 'oira_frontend_node_save_redirect_submit';
      }
      break;

    case 'promotional_material_node_form':
      $form['field_oira'][LANGUAGE_NONE]['#title_display'] = 'invisible';
      $form['field_publication_date']['#prefix'] = '<label>' . $form['field_publication_date'][LANGUAGE_NONE]['#title'] . '</label>';
      $form['field_revised_date']['#prefix'] = '<label>' . $form['field_revised_date'][LANGUAGE_NONE]['#title'] . '</label>';
      $form['field_publication_date']['#attributes']['class'][] = 'pull-left';
      $form['field_oira']['#attributes']['class'][] = 'pull-right';
      $form['field_image']['und'][0]['#process'][] = 'oira_frontend_image_field_caption_widget_process';
      $form['actions']['#attributes']['class'] = array('container','text-center');
      $form['actions']['submit']['#submit'][] = 'oira_frontend_node_save_redirect_submit';
      if(isset($form['actions']['save_preview'])){
        $form['actions']['save_preview']['#submit'][] = 'oira_frontend_node_save_redirect_submit';
      }
      if(isset($form['actions']['send_for_approval'])){
        $form['actions']['send_for_approval']['#submit'][] = 'oira_frontend_node_save_redirect_submit';
      }
      break;

    case 'practical_tool_node_form':
      $form['field_publication_date']['#prefix'] = '<label>' . $form['field_publication_date'][LANGUAGE_NONE]['#title'] . '</label>';
      $form['field_revised_date']['#prefix'] = '<label>' . $form['field_revised_date'][LANGUAGE_NONE]['#title'] . '</label>';
      $form['body']['#attributes']['class'][] = 'oira-hide-format-description';
      $form['field_alternative_body']['#attributes']['class'][] = 'oira-hide-format-description';
      $form['field_image']['und'][0]['#process'][] = 'oira_frontend_image_field_caption_widget_process';
      $form['actions']['#attributes']['class'] = array('container','text-center');
      $form['#after_build'][] = 'oira_hide_format_description';
      $form['actions']['submit']['#submit'][] = 'oira_frontend_node_save_redirect_submit';
      if(isset($form['actions']['save_preview'])){
        $form['actions']['save_preview']['#submit'][] = 'oira_frontend_node_save_redirect_submit';
      }
      if(isset($form['actions']['send_for_approval'])){
        $form['actions']['send_for_approval']['#submit'][] = 'oira_frontend_node_save_redirect_submit';
      }
      break;

    case 'strategic_documentation_node_form':
      $form['field_oira'][LANGUAGE_NONE]['#title_display'] = 'invisible';
      $form['field_publication_date']['#prefix'] = '<label>' . $form['field_publication_date'][LANGUAGE_NONE]['#title'] . '</label>';
      $form['actions']['#attributes']['class'] = array('container','text-center');
      $form['actions']['submit']['#submit'][] = 'oira_frontend_node_save_redirect_submit';
      if(isset($form['actions']['save_preview'])){
        $form['actions']['save_preview']['#submit'][] = 'oira_frontend_node_save_redirect_submit';
      }
      if(isset($form['actions']['send_for_approval'])){
        $form['actions']['send_for_approval']['#submit'][] = 'oira_frontend_node_save_redirect_submit';
      }
      break;

    case 'partner_node_form':
      $node = $form['#node'];
      $node_wrapper = entity_metadata_wrapper('node', $node);
      $form['about_organization'] = array(
        '#markup' => '<div class="ds-about-organization"><div class="row"><div class="col-sm-12"><h2>' . t('About your organization') . '</h2></div></div></div>',
        '#weight' => -100,
      );
      $form['title_field']['#disabled'] = TRUE;
      $form['title_field']['#weight'] = -99;
      $form['title_field']['#prefix'] = '<div class="row"><div class="group-left col-sm-6">';
      $form['field_logo'] = array(
        '#type' => 'item',
        '#title' => t('Logo'),
        '#markup' => '<img src="' . image_style_url('thumbnail', $form['field_logo']['und'][0]['#default_value']['uri']) .'" class="img-responsive">',
        '#prefix' => '<div class="image-preview oira-logo-container">',
        '#suffix' => '</div></div>',
        '#weight' => -98,
      );
      $form['field_mission_statement']['#disabled'] = TRUE;
      $form['field_mission_statement']['#weight'] = -97;
      $form['field_mission_statement']['#prefix'] = '<div class="group-right col-sm-6">';
      $form['field_mission_statement']['#suffix'] = '</div></div>';
      $form['general_contact_information'] = array(
        '#markup' => '<div class="group-footer col-md-12"></div><div class="ds-general-contact-information"><div class="row"><div class="col-sm-12"><h2>' . t('General contact information') . '</h2></div></div></div>',
        '#weight' => -96,
      );
      $form['field_ph_address']['#disabled'] = TRUE;
      $form['field_ph_address']['#weight'] = -95;
      $form['field_ph_address']['#prefix'] = '<div class="row"><div class="group-left col-sm-6">';
      $form['field_ph_cp']['#disabled'] = TRUE;
      $form['field_ph_cp']['#weight'] = -94;
      $form['field_general_email']['#disabled'] = TRUE;
      $form['field_general_email']['#weight'] = -93;
      $form['field_website']['#disabled'] = TRUE;
      $form['field_website']['#weight'] = -92;
      $form['field_website']['#suffix'] = '</div>';
      $form['field_general_phone']['#disabled'] = TRUE;
      $form['field_general_phone']['#weight'] = -91;
      $form['field_general_phone']['#prefix'] = '<div class="group-right col-sm-6">';
      $form['field_country']['#disabled'] = TRUE;
      $form['field_country']['#weight'] = -90;
      $form['field_ph_town']['#disabled'] = TRUE;
      $form['field_ph_town']['#weight'] = -89;
      $form['field_dedicated_oira_website']['#disabled'] = TRUE;
      $form['field_dedicated_oira_website']['#weight'] = -88;
      $form['field_dedicated_oira_website']['#suffix'] = '</div></div>';
      $form['field_orgtype']['#access'] = FALSE;
      $form['field_partner_type']['#access'] = FALSE;
      $form['field_guid_organisation']['#access'] = FALSE;
      $form['field_guid_main_contact']['#access'] = FALSE;
      $form['field_social_profile']['#disabled'] = TRUE;
      $form['field_social_profile']['#weight'] = -87;
      $form['field_social_profile']['#prefix'] = '<div id="field-social-profile-add-more-wrapper--2"><label>' . t('Social media profiles') . '</label>';
      $form['field_social_profile']['#sufix'] = '</div>';

      foreach($form['field_social_profile']['und'] as $key=>$val){
        if(is_numeric($key)){
          if(!isset($form['field_social_profile']['und'][$key]['#default_value'])
            || !isset($form['field_social_profile']['und'][$key]['#default_value']['url'])){
              unset($form['field_social_profile']['und'][$key]);
            }
          }
        }
      unset($form['field_social_profile']['und']['add_more']);

      $form['field_main_contact']['#access'] = FALSE;
      $form['field_main_contact_email']['#access'] = FALSE;



      if (empty($node->field_collaborator[LANGUAGE_NONE])) {
        $form['field_collaborator']['#access'] = FALSE;
      }
      else {
        $form['field_collaborator']['#disabled'] = TRUE;
        unset($form['field_collaborator']['und']['#title']);
        $form['other_collaborators'] = array(
          '#markup' => '<div class="group-footer col-md-12"></div><div class="ds-other-collaborators"><div class="row"><div class="col-sm-12"><h2>' . t('Collaborators') . '</h2></div></div></div>',
          '#weight' => 0,
        );

        $weight = 0;
        foreach ($form['field_collaborator']['und'] as $key => $val) {
          if (is_numeric($key)) {
            if (isset($form['field_collaborator']['und'][$key]['#entity'])
              && !$form['field_collaborator']['und'][$key]['#entity']->item_id){
              unset($form['field_collaborator']['und'][$key]);
            }
            else {
              $form['field_collaborator']['und'][$key]['field_logo'] = array(
                '#type' => 'item',
                '#title' => t('Logo'),
                '#markup' => '<img src="' . image_style_url('thumbnail', $form['field_collaborator']['und'][$key]['field_logo']['und'][0]['#default_value']['uri']) .'" class="img-responsive">',
                '#prefix' => '<div class="image-preview oira-logo-container">',
                '#suffix' => '</div>',
                '#weight' => $weight++,
              );
            }
          }
        }
      }

      $form['footer_line'] = array(
        '#markup' => '<div class="group-footer col-md-12"></div>',
        '#weight' => 100,
      );

      $form['#attached']['js'][] = array(
        'data' => drupal_get_path('theme', 'oira_frontend') . '/js/oira-tabledrag.js',
        'weight' => -2,
      );

      unset($form['#submit']);

      $form['actions']['#access'] = FALSE;

      $form['field_partner_other_users']['#access'] = FALSE;

      if (isset($form['workbench_access']['workbench_access']['#default_value']) && !empty($node->field_partner_other_users)) {
        // Because the profile menu item is just a callback with a redirect, manually set it as active.
        menu_set_active_item('private-zone/update-profile');

        $other_users = $node_wrapper->field_partner_other_users->value();
        $form['other_users'] = array(
          '#markup' => '<div class="group-footer col-md-12"></div><div class="ds-other-users"><div class="row"><div class="col-sm-12"><h2>' . t('Users') . '</h2></div></div></div>',
          '#weight' => 200,
        );
        $other_users_header = array(
          t('Name'),
          t('Email address'),
          t('Telephone'),
          );
        $other_users_rows = [];
        foreach ($other_users as $user_text) {
          $other_users_rows[] = explode('^', $user_text);
        }

        $form['other_users_table'] = array(
          '#markup' => theme('table',
            array(
              'header' => $other_users_header,
              'rows' => $other_users_rows
            )
          ),
          '#weight' => 201,
        );
      }
      break;
    default:
      break;
  }
}

function oira_hide_format_description($form, &$form_state){
  foreach($form as &$element){
    if(is_array($element) && isset($element['#attributes']['class']) && array_search('oira-hide-format-description', $element['#attributes']['class']) !== FALSE){
      $element['und'][0]['format']['#attributes']['class'][] = 'hidden';
      $element['und'][0]['summary']['#access'] = FALSE;
      unset($element['format']);
    }
  }
  return $form;
}

/**
 * An element #process callback for the image field type.
 *
 * Adds hide-format-description class to element
 */
function oira_frontend_image_field_caption_widget_process($element, &$form_state, $form) {
  if(isset($element['image_field_caption'])) {
    $element['image_field_caption']['#attributes'] = array(
       'class' => array(
          'oira-hide-format-description',
       )
    );
  }
  return $element;
}

/**
 * Implements of hook_element_info_alter().
 */
function oira_frontend_element_info_alter(&$type) {
  // Our process callback must run immediately after filter_process_format().
  $filter_process_format_location = array_search('filter_process_format', $type['text_format']['#process']);
  $replacement = array('filter_process_format', 'oira_frontend_filter_process_format');
  array_splice($type['text_format']['#process'], $filter_process_format_location, 1, $replacement);
}

/**
 * Process callback for form elements that have a text format selector attached.
 *
 * This callback runs after filter_process_format() and performs additional
 * modifications to the form element.If hide-format-description class is found, the format is unset, as a result
 * the help info will not be displayed.
 *
 * @see filter_process_format()
 */
function oira_frontend_filter_process_format($element) {
  if(isset($element['#attributes']['class']) && array_search('oira-hide-format-description', $element['#attributes']['class']) !== FALSE){
    $element['format']['#attributes']['class'][] = 'hidden';
    $element['summary']['#access'] = FALSE;
    //unset($element['format']);
  }
  return $element;
}

function oira_frontend_menu_tree__menu_block__menu_private_zone($variables){
  return '<ul class="menu nav container">' . $variables['tree'] . '</ul>';
}

/**
 * Preprocess variables for panels_pane.tpl.php
 */
function oira_frontend_preprocess_panels_pane(&$vars) {
  if (isset($vars['pane'])) {
    if ($vars['pane']->type == 'views' && $vars['pane']->subtype == 'partner_content') {
      $vars['title_attributes_array']['class'][] = 'container';
    }
  }
}

/**
 * Prepare redirect url for Partner after login
 */
function oira_frontend_login_destination_submit($form, &$form_state){
  global $user;
  if (isset($_GET['destination'])){
    return;
  }
  if(array_intersect(array(ROLE_OIRA_PARTNER),array_values($user->roles))){
    $partner_node_id = osha_workflow_user_partner_id($user->uid);
    if($partner_node_id){
      $GLOBALS['destination'] = url('node/' . $partner_node_id,array('absolute'=>TRUE));
    }
  }
}

/**
 * Implements hook_drupal_goto_alter().
 */
function oira_frontend_drupal_goto_alter(&$path, &$options, &$http_response_code) {
  if (!isset($GLOBALS['destination'])) {
    return;
  }
  $path = $GLOBALS['destination'];
}


// Create a theme function that can be overridden by other theme developers.
function oira_frontend_text_resize_block() {
  // Add js, css, and library
  $content = array(
    '#attached' => array(
      'js' => array(
        array(
          'data' => "var text_resize_scope = " . drupal_json_encode(variable_get('text_resize_scope', 'main')) . ";
          var text_resize_minimum = " . drupal_json_encode(variable_get('text_resize_minimum', '12')) . ";
          var text_resize_maximum = " . drupal_json_encode(variable_get('text_resize_maximum', '25')) . ";
          var text_resize_line_height_allow = " . drupal_json_encode(variable_get('text_resize_line_height_allow', FALSE)) . ";
          var text_resize_line_height_min = " . drupal_json_encode(variable_get('text_resize_line_height_min', 16)) . ";
          var text_resize_line_height_max = " . drupal_json_encode(variable_get('text_resize_line_height_max', 36)) . ";",
          'type' => 'inline',
        ),
        array(
          'data' => drupal_get_path('module', 'text_resize') . '/text_resize.js',
          'type' => 'file',
        )
      ),
      'css' => array(
        drupal_get_path('module', 'text_resize') . '/text_resize.css',
      ),
      'library' => array(
        array('system', 'jquery.cookie')
      ),
    ),
  );
  if (variable_get('text_resize_reset_button', FALSE) == TRUE) {
    $content['#markup'] = t('<a href="javascript:;" class="changer" title="Smaller text" id="text_resize_decrease"><sup>-</sup>A</a> <a href="javascript:;" class="changer" id="text_resize_reset">A</a> <a href="javascript:;" class="changer" title="Bigger text" id="text_resize_increase"><sup>+</sup>A</a><div id="text_resize_clear"></div>');
  }
  else {
    $content['#markup'] = t('<a href="javascript:;" class="changer" title="Smaller text" id="text_resize_decrease"><sup>-</sup>A</a> <a href="javascript:;" class="changer" title="Bigger text" id="text_resize_increase"><sup>+</sup>A</a><div id="text_resize_clear"></div>');
  }

  return render($content);
}