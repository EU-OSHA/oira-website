<?php
/**
 * @file
 * oira_partner.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function oira_partner_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|partner|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'partner';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'See partner\'s profile',
        'link class' => 'more-link',
        'wrapper' => '',
        'class' => '',
        'field_formatter_class' => '',
      ),
    ),
  );
  $export['node|partner|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|partner|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'partner';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => 'trim-title',
        'exclude node title settings' => '1',
        'field_formatter_class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'See partner\'s profile',
        'link class' => 'more-link',
        'wrapper' => '',
        'class' => '',
        'field_formatter_class' => '',
      ),
    ),
  );
  $export['node|partner|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function oira_partner_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|partner|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'partner';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'partner_edit_form';
  $ds_layout->settings = array(
    'regions' => array(
      'about_organization__left' => array(
        0 => 'title_field',
        1 => 'field_logo',
      ),
      'about_organization__right' => array(
        2 => 'field_mission_statement',
      ),
      'general_contact_information__left' => array(
        3 => 'field_ph_address',
        4 => 'field_ph_cp',
        5 => 'field_general_email',
        6 => 'field_website',
      ),
      'general_contact_information__right' => array(
        7 => 'field_general_phone',
        8 => 'field_country',
        9 => 'field_ph_town',
        16 => 'field_dedicated_oira_website',
      ),
      'hidden' => array(
        10 => 'workbench_access',
        11 => 'path',
        12 => 'redirect',
        13 => 'metatags',
        14 => 'field_orgtype',
        15 => 'field_partner_type',
        17 => 'field_guid_organisation',
        18 => 'field_guid_main_contact',
        20 => 'field_main_contact',
        21 => 'field_main_contact_email',
        23 => 'xmlsitemap',
        24 => '_add_existing_field',
      ),
      'general_contact_information__bottom' => array(
        19 => 'field_social_profile',
      ),
      'other_collaborators__top' => array(
        22 => 'field_collaborator',
      ),
    ),
    'fields' => array(
      'title_field' => 'about_organization__left',
      'field_logo' => 'about_organization__left',
      'field_mission_statement' => 'about_organization__right',
      'field_ph_address' => 'general_contact_information__left',
      'field_ph_cp' => 'general_contact_information__left',
      'field_general_email' => 'general_contact_information__left',
      'field_website' => 'general_contact_information__left',
      'field_general_phone' => 'general_contact_information__right',
      'field_country' => 'general_contact_information__right',
      'field_ph_town' => 'general_contact_information__right',
      'workbench_access' => 'hidden',
      'path' => 'hidden',
      'redirect' => 'hidden',
      'metatags' => 'hidden',
      'field_orgtype' => 'hidden',
      'field_partner_type' => 'hidden',
      'field_dedicated_oira_website' => 'general_contact_information__right',
      'field_guid_organisation' => 'hidden',
      'field_guid_main_contact' => 'hidden',
      'field_social_profile' => 'general_contact_information__bottom',
      'field_main_contact' => 'hidden',
      'field_main_contact_email' => 'hidden',
      'field_collaborator' => 'other_collaborators__top',
      'xmlsitemap' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        'container' => 'container',
      ),
      'about_organization__top' => array(
        'col-md-12' => 'col-md-12',
      ),
      'about_organization__left' => array(
        'col-sm-6' => 'col-sm-6',
      ),
      'about_organization__right' => array(
        'col-sm-6' => 'col-sm-6',
      ),
      'about_organization__bottom' => array(
        'col-md-12' => 'col-md-12',
      ),
      'general_contact_information__top' => array(
        'col-md-12' => 'col-md-12',
      ),
      'general_contact_information__left' => array(
        'col-sm-6' => 'col-sm-6',
      ),
      'general_contact_information__right' => array(
        'col-sm-6' => 'col-sm-6',
      ),
      'general_contact_information__bottom' => array(
        'col-md-12' => 'col-md-12',
      ),
      'other_collaborators__top' => array(
        'col-md-12' => 'col-md-12',
      ),
      'other_collaborators__left' => array(
        'col-sm-6' => 'col-sm-6',
      ),
      'other_collaborators__right' => array(
        'col-sm-6' => 'col-sm-6',
      ),
      'other_collaborators__bottom' => array(
        'col-md-12' => 'col-md-12',
      ),
    ),
    'wrappers' => array(
      'about_organization__top' => 'div',
      'about_organization__left' => 'div',
      'about_organization__right' => 'div',
      'about_organization__bottom' => 'div',
      'general_contact_information__top' => 'div',
      'general_contact_information__left' => 'div',
      'general_contact_information__right' => 'div',
      'general_contact_information__bottom' => 'div',
      'other_collaborators__top' => 'div',
      'other_collaborators__left' => 'div',
      'other_collaborators__right' => 'div',
      'other_collaborators__bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|partner|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|partner|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'partner';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'node_type',
        2 => 'field_mission_statement',
        3 => 'field_country',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'node_type' => 'ds_content',
      'field_mission_statement' => 'ds_content',
      'field_country' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|partner|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|partner|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'partner';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'hwc_2col_stacked_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_logo',
      ),
      'right' => array(
        1 => 'title',
        2 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_logo' => 'left',
      'title' => 'right',
      'node_link' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        'row' => 'row',
      ),
      'left' => array(
        'col-xs-5' => 'col-xs-5',
      ),
      'right' => array(
        'col-xs-7' => 'col-xs-7',
      ),
      'center' => array(
        'col-md-12' => 'col-md-12',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'center' => 'div',
      'left2' => 'div',
      'right2' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|partner|teaser'] = $ds_layout;

  return $export;
}
