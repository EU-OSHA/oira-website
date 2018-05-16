<?php

/**
 * Class NCWWikiPagesMigration migrates news
 *
 * Set hwc_migration_wiki_pages_url variable for explicit source URL.
 */
class NCWWikiPagesMigration extends AbstractNCWNodeMigration {

  public function __construct($arguments) {
    parent::__construct($arguments, 'NCWWikiPagesSource', 'wiki_page');
    $this->description = 'Import wiki pages from NCW';
  }

  function addFieldMappings() {
    parent::addFieldMappings();

    $this->addFieldMapping('field_wiki_categories:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_wiki_categories:create_term')->defaultValue(FALSE);
    $this->addFieldMapping('field_wiki_categories', 'field_wiki_categories');

    $this->addFieldMapping('field_tags:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_tags:create_term')->defaultValue(FALSE);
    $this->addFieldMapping('field_tags', 'field_tags');
    $this->addFieldMapping('field_revised_date', 'field_updated');

    $this->addUnmigratedDestinations(array(
      'field_tags:ignore_case',
      'field_updated:rrule',
      'field_wiki_categories:ignore_case',
      'field_revised_date:timezone',
      'field_revised_date:rrule',
      'field_revised_date:to',

      'metatag_rating',
      'metatag_referrer',
      'metatag_prev',
      'metatag_next',
      'metatag_geo.position',
      'metatag_geo.placename',
      'metatag_geo.region',
      'metatag_icbm',
      'metatag_refresh',
      'metatag_pragma',
      'metatag_cache-control',
      'metatag_expires',

      'field_image',
      'field_image:file_class',
      'field_image:preserve_files',
      'field_image:destination_dir',
      'field_image:destination_file',
      'field_image:file_replace',
      'field_image:source_dir',
      'field_image:urlencode',
      'field_image:alt',
      'field_image:title',
    ));
    $this->ignoreMetatagMigration();
  }

  protected function getManuallyMigratedFields() {
    return array(
      'field_tags',
      'field_wiki_categories',
    );
  }

  function prepareRow($row) {
    parent::prepareRow($row);
    $row->field_wiki_categories = osha_migration_normalize_migrated_term_reference($row->field_wiki_categories, 'wiki_categories');
    $row->field_tags = osha_migration_normalize_migrated_term_reference($row->field_tags, 'tax_tags');
  }
}


class NCWWikiPagesSource extends AbstractNCWNodeSource {

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
      'field_updated',
      'field_tags',
      'field_wiki_categories',
      'field_wiki_page_url',
      'field_migration_source',
    );
    return array_combine($fields, $fields);
  }
}
