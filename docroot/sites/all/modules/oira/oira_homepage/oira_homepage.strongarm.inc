<?php
/**
 * @file
 * oira_homepage.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function oira_homepage_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_add_class_active_owlcarousel_settings_oira-homepage';
  $strongarm->value = 0;
  $export['owlcarousel_add_class_active_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_height_owlcarousel_settings_oira-homepage';
  $strongarm->value = 1;
  $export['owlcarousel_auto_height_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_play_owlcarousel_settings_oira-homepage';
  $strongarm->value = '5000';
  $export['owlcarousel_auto_play_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_base_class_owlcarousel_settings_oira-homepage';
  $strongarm->value = 'owl-carousel';
  $export['owlcarousel_base_class_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_drag_before_anim_finish_owlcarousel_settings_oira-homepage';
  $strongarm->value = 1;
  $export['owlcarousel_drag_before_anim_finish_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_oira-homepage_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_desktop_owlcarousel_settings_oira-homepage_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_oira-homepage_width';
  $strongarm->value = '1199';
  $export['owlcarousel_items_desktop_owlcarousel_settings_oira-homepage_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_oira-homepage_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_oira-homepage_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_oira-homepage_width';
  $strongarm->value = '979';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_oira-homepage_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_oira-homepage_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_mobile_owlcarousel_settings_oira-homepage_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_oira-homepage_width';
  $strongarm->value = '479';
  $export['owlcarousel_items_mobile_owlcarousel_settings_oira-homepage_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_owlcarousel_settings_oira-homepage';
  $strongarm->value = '5';
  $export['owlcarousel_items_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_scale_up_owlcarousel_settings_oira-homepage';
  $strongarm->value = 0;
  $export['owlcarousel_items_scale_up_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_oira-homepage_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_tablet_owlcarousel_settings_oira-homepage_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_oira-homepage_width';
  $strongarm->value = '768';
  $export['owlcarousel_items_tablet_owlcarousel_settings_oira-homepage_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_oira-homepage_items';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_oira-homepage_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_oira-homepage_width';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_oira-homepage_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_path_owlcarousel_settings_oira-homepage';
  $strongarm->value = '';
  $export['owlcarousel_json_path_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_success_owlcarousel_settings_oira-homepage';
  $strongarm->value = '';
  $export['owlcarousel_json_success_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_effect_owlcarousel_settings_oira-homepage';
  $strongarm->value = 'fadeIn';
  $export['owlcarousel_lazy_effect_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_follow_owlcarousel_settings_oira-homepage';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_follow_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_load_owlcarousel_settings_oira-homepage';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_load_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_mouse_drag_owlcarousel_settings_oira-homepage';
  $strongarm->value = 1;
  $export['owlcarousel_mouse_drag_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_owlcarousel_settings_oira-homepage';
  $strongarm->value = 0;
  $export['owlcarousel_navigation_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_oira-homepage';
  $strongarm->value = array(
    0 => 'prev',
    1 => 'next',
  );
  $export['owlcarousel_navigation_text_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_override_ajax_pagination_owlcarousel_settings_oira-homepage';
  $strongarm->value = 0;
  $export['owlcarousel_override_ajax_pagination_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_numbers_owlcarousel_settings_oira-homepage';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_numbers_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_owlcarousel_settings_oira-homepage';
  $strongarm->value = 1;
  $export['owlcarousel_pagination_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_speed_owlcarousel_settings_oira-homepage';
  $strongarm->value = '800';
  $export['owlcarousel_pagination_speed_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_base_width_owlcarousel_settings_oira-homepage';
  $strongarm->value = 'window';
  $export['owlcarousel_responsive_base_width_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_owlcarousel_settings_oira-homepage';
  $strongarm->value = 1;
  $export['owlcarousel_responsive_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_refresh_rate_owlcarousel_settings_oira-homepage';
  $strongarm->value = '200';
  $export['owlcarousel_responsive_refresh_rate_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_nav_owlcarousel_settings_oira-homepage';
  $strongarm->value = 1;
  $export['owlcarousel_rewind_nav_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_speed_owlcarousel_settings_oira-homepage';
  $strongarm->value = '1000';
  $export['owlcarousel_rewind_speed_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_scroll_per_page_owlcarousel_settings_oira-homepage';
  $strongarm->value = 0;
  $export['owlcarousel_scroll_per_page_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_settings_oira-homepage';
  $strongarm->value = 'oira_homepage';
  $export['owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_single_item_owlcarousel_settings_oira-homepage';
  $strongarm->value = 0;
  $export['owlcarousel_single_item_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_slide_speed_owlcarousel_settings_oira-homepage';
  $strongarm->value = '200';
  $export['owlcarousel_slide_speed_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_stop_on_hover_owlcarousel_settings_oira-homepage';
  $strongarm->value = 1;
  $export['owlcarousel_stop_on_hover_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_theme_owlcarousel_settings_oira-homepage';
  $strongarm->value = 'owl-theme';
  $export['owlcarousel_theme_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_touch_drag_owlcarousel_settings_oira-homepage';
  $strongarm->value = 1;
  $export['owlcarousel_touch_drag_owlcarousel_settings_oira-homepage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_transition_style_owlcarousel_settings_oira-homepage';
  $strongarm->value = '';
  $export['owlcarousel_transition_style_owlcarousel_settings_oira-homepage'] = $strongarm;

  return $export;
}
