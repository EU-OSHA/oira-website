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
  }

  protected function getManuallyMigratedFields() {

  }

  function prepareRow($row) {
    parent::prepareRow($row);
  }
}


class NCWWikiPagesSource extends AbstractNCWNodeSource {

  /**
   * The list of available fields to map from the source, keyed by field name.
   */
  public function contentFields() {
    $fields = array(

    );
    return array_combine($fields, $fields);
  }
}
