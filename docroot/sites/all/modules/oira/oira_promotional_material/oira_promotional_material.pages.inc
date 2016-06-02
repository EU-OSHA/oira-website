<?php

function oira_promotional_material_search_form($form, $form_state) {
  global $language;
  drupal_set_title(t('OiRA tools'));

  $form = array(
    '#action' => 'promotional-materials',
    '#method' => 'GET',
    '#token' => FALSE,
    'top' => array(
      '#type' => 'container',
      '#attributes' => array('class' => array('col-md-12')),
    ),
    'left-column' => array(
      '#type' => 'container',
      '#attributes' => array('class' => array('col-md-3')),
    ),
    'content' => array(
      '#type' => 'container',
      '#attributes' => array('class' => array('col-md-9')),
    ),
  );
  $form['left-column']['search']['text'] = array(
    '#type' => 'textfield',
    '#size' => 30,
    '#title' => t('Search'),
    '#maxlength' => 200,
    '#default_value' => $text,
    '#title_display' => 'invisible',
    '#attributes' => array('placeholder' => t('Search promotional materials')),
  );
  $form['left-column']['search']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Search'),
  );

  if (!empty($text)) {
    $form['content']['search_phrase'] = array(
      '#type' => 'markup',
      '#markup' => t('Results for !text', array('!text' => '<span class="searched-text"> ' . check_plain($text) .'</span>')),
    );
  }

  return $form;
}
