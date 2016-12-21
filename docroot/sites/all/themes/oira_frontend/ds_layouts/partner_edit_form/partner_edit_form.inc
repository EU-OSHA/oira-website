<?php

/**
 * @file
 * Display Suite Partner edit form configuration.
 */

function ds_partner_edit_form() {
  return array(
    'label' => t('Partner edit form'),
    'regions' => array(
      'about_organization__top' => t('About organization - top'),
      'about_organization__left' => t('About organization - left'),
      'about_organization__right' => t('About organization - right'),
      'about_organization__bottom' => t('About organization - bottom'),
      'general_contact_information__top' => t('General contact information - top'),
      'general_contact_information__left' => t('General contact information - left'),
      'general_contact_information__right' => t('General contact information - right'),
      'general_contact_information__bottom' => t('General contact information - bottom'),
      'other_collaborators__top' => t('Other collaborators - top'),
      'other_collaborators__left' => t('Other collaborators - left'),
      'other_collaborators__right' => t('Other collaborators - right'),
      'other_collaborators__bottom' => t('Other collaborators - bottom'),
    ),
    // Uncomment if you want to include a CSS file for this layout (partner_edit_form.css)
    'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (partner_edit_form.png)
    // 'image' => TRUE,
  );
}
