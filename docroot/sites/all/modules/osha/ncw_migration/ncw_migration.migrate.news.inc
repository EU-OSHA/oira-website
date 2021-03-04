<?php

/**
 * Class NCWNewsMigration migrates news
 *
 * Set hwc_migration_news_url variable for explicit source URL.
 */
class NCWNewsMigration extends AbstractNCWNodeMigration {

  public function __construct($arguments) {
    parent::__construct($arguments, 'NCWNewsSource', 'news');
    $this->description = 'Import news from NCW';
  }

  function addFieldMappings() {
    parent::addFieldMappings();

    $this->addFieldMapping('field_tags:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_tags:create_term')->defaultValue(FALSE);
    $this->addFieldMapping('field_tags', 'field_tags');

    $this->addFieldMapping('field_image', 'field_image');
    $this->addFieldMapping('field_image:file_replace')->defaultValue(TRUE);
    $this->addFieldMapping('field_image_home_latest_news', 'field_image_home_latest_news');
    $this->addFieldMapping('field_image_home_latest_news:file_replace')->defaultValue(TRUE);

    $this->addFieldMapping('field_aditional_resources', 'field_aditional_resources');

    $this->removeFieldMapping('workbench_access', NULL);
    $this->addFieldMapping('workbench_access', 'workbench_access');

    $this->addUnmigratedDestinations(array(
      'field_tags:ignore_case',
      'field_expiration_date:rrule',
      'field_image:file_class',
      'field_image:preserve_files',
      'field_image:destination_dir',
      'field_image:destination_file',
      'field_image:source_dir',
      'field_image:urlencode',
      'field_image:alt',
      'field_image:title',

      'field_image_home_latest_news:file_class',
      'field_image_home_latest_news:preserve_files',
      'field_image_home_latest_news:destination_dir',
      'field_image_home_latest_news:destination_file',
      'field_image_home_latest_news:source_dir',
      'field_image_home_latest_news:urlencode',
      'field_image_home_latest_news:alt',
      'field_image_home_latest_news:title',

      'field_publication_date:rrule',
    ));
    $this->ignoreMetatagMigration();
  }

  protected function getManuallyMigratedFields() {
    return [
      'field_tags',
      'field_aditional_resources',
      'field_image_home_latest_news',
      'field_image',
    ];
  }

  /**
   * Implements Migration::prepare()
   */
  public function prepare($entity, stdClass $row) {
    parent::prepare($entity, $row);
    if ($row->field_image_image_captions_language) {
      foreach ($row->field_image_image_captions_language as $i => $lang) {
        $entity->field_image[LANGUAGE_NONE][$i]['image_field_caption']['value'] = $row->field_image_image_captions[$i];
        $entity->field_image[LANGUAGE_NONE][$i]['image_field_caption']['format'] = 'full_html';
      }
    }
  }

  function prepareRow($row) {

    $row->field_image_home_latest_news = $row->field_image;
    osha_migration_normalize_field_file($row, 'field_image_home_latest_news', NULL, NULL);
    osha_migration_normalize_field_file($row, 'field_image', NULL, NULL);
    $map = $this->getMap();
    if ($destid1 = $map->lookupDestinationID(array($row->nid))) {
      $node = node_load($destid1['destid1']);
      if (!empty($node->field_image_home_latest_news[LANGUAGE_NONE][0]['uri'])) {
        $row->field_image_home_latest_news[0] = $node->field_image_home_latest_news[LANGUAGE_NONE][0]['uri'];
      }
      if (!empty($node->field_image[LANGUAGE_NONE][0]['uri'])) {
        $row->field_image[0] = $node->field_image[LANGUAGE_NONE][0]['uri'];
      }
    }

    parent::prepareRow($row);

    $row->field_tags = osha_migration_normalize_migrated_term_reference($row->field_tags, 'tax_tags');
    $section = 'section';
    $map = $this->getMap();
    if ($destid1 = $map->lookupDestinationID(array($row->nid))) {
      $node = node_load($destid1['destid1']);
      reset($node->workbench_access);
      $section = current($node->workbench_access);
    }
    $row->workbench_access = [$section => $section];

    // field_aditional_resources.
    $fi = field_info_field('field_aditional_resources');
    osha_migration_normalize_field_entityreference($row, 'field_aditional_resources', $fi);
    $additional_resources = $row->field_aditional_resources;
    $row->field_aditional_resources = array();
    foreach ($additional_resources as $original_nid) {
      if ($destid1 = ncw_migration_find_additional_resource($original_nid)) {
        $row->field_aditional_resources[] = $destid1;
      }
    }
  }

}


class NCWNewsSource extends AbstractNCWNodeSource {

  /**
   * The list of available fields to map from the source, keyed by field name.
   */
  public function contentFields() {
    $fields = array(
      'title_field',
      'title_field_language',
      'body',
      'body_language',
      'body_summary',
      'body_format',
      'field_summary',
      'field_summary_format',
      'field_summary_language',
      'field_image_home_latest_news',
      'field_image_home_latest_news_language',
      'field_image',
      'field_image_language',
      'field_publication_date',
      'field_publication_date_timezone',
      'field_publication_date_value2',
      'field_expiration_date',
      'field_expiration_date_timezone',
      'field_expiration_date_value2',
      'field_tags',
      'field_archived',
      'field_character_count',
      'field_page_count',
      'field_aditional_resources',
      'field_migration_source',
    );
    return array_combine($fields, $fields);
  }

}
