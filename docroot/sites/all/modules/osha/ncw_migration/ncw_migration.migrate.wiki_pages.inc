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
    );
    return array_combine($fields, $fields);
  }
}
