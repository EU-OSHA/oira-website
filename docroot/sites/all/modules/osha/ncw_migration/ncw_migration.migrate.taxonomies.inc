<?php

/* ----------------- MIGRATIONS ----------------- */
class NCWTaxonomyCountryMigration extends AbstractNCWTaxonomyTermMigration {

  public function __construct($arguments) {
    parent::__construct($arguments, 'CountryNCWTaxonomyTermSource', 'country');
    $this->description = 'Import taxonomy "country" from NCW';
  }
}

class NCWTaxonomyCountryStatusMigration extends AbstractNCWTaxonomyTermMigration {

  public function __construct($arguments) {
    parent::__construct($arguments, 'SimpleNCWTaxonomyTermSource', 'country_status');
    $this->description = 'Import taxonomy "country_status" from NCW';
  }
}

class NCWTaxonomyFOPLinkSectionsMigration extends AbstractNCWTaxonomyTermMigration {

  public function __construct($arguments) {
    parent::__construct($arguments, 'SimpleNCWTaxonomyTermSource', 'fop_link_sections');
    $this->description = 'Import taxonomy "fop_link_sections" from NCW';
  }
}

class NCWTaxonomyNewsletterSectionsMigration extends AbstractNCWTaxonomyTermMigration {

  public function __construct($arguments) {
    parent::__construct($arguments, 'SimpleNCWTaxonomyTermSource', 'newsletter_sections');
    $this->description = 'Import taxonomy "newsletter_sections" from NCW';
  }
}

class NCWTaxonomyPublicationTypeMigration extends AbstractNCWTaxonomyTermMigration {

  public function __construct($arguments) {
    parent::__construct($arguments, 'PublicationTypeNCWTaxonomyTermSource', 'publication_types');
    $this->description = 'Import taxonomy "publication_types" from NCW';
  }
}

class NCWTaxonomySegmentationMigration extends AbstractNCWTaxonomyTermMigration {

  public function __construct($arguments) {
    parent::__construct($arguments, 'SegmentationNCWTaxonomyTermSource', 'segment');
    $this->description = 'Import taxonomy "relevant_for" from NCW';
  }
}

class NCWTaxonomyTagsMigration extends AbstractNCWTaxonomyTermMigration {

  public function __construct($arguments) {
    parent::__construct($arguments, 'TagsNCWTaxonomyTermSource', 'tags');
    $this->description = 'Import taxonomy "tags" from NCW';
  }
}

class NCWTaxonomyWikiCategoriesMigration extends AbstractNCWTaxonomyTermMigration {

  public function __construct($arguments) {
    parent::__construct($arguments, 'SimpleNCWTaxonomyTermSource', 'wiki_categories');
    $this->description = 'Import taxonomy "wiki_categories" from NCW';
  }
}


class NCWTaxonomyNaceCodesMigration extends AbstractNCWTaxonomyTermMigration {

  public function __construct($arguments) {
    parent::__construct($arguments, 'NaceCodesNCWTaxonomyTermSource', 'nace_codes');
    $this->description = 'Import taxonomy "nace_codes" from NCW';
  }
}


/* ----------------- SOURCES ----------------- */
class SimpleNCWTaxonomyTermSource extends AbstractNCWTaxonomyTermSource {

  public function contentFields() {
    return array();
  }
}

class TagsNCWTaxonomyTermSource extends AbstractNCWTaxonomyTermSource {

  public function contentFields() {
    return array(
      'field_tags_code' => 'field_tags_code',
    );
  }
}

class SegmentationNCWTaxonomyTermSource extends AbstractNCWTaxonomyTermSource {

  public function contentFields() {
    return array();
  }
}

class PublicationTypeNCWTaxonomyTermSource extends AbstractNCWTaxonomyTermSource {

  public function contentFields() {
    return array(
      'field_publication_type_code' => 'field_publication_type_code',
    );
  }
}

class CountryNCWTaxonomyTermSource extends AbstractNCWTaxonomyTermSource {

  public function contentFields() {
    return array(
      'field_iso2' => 'field_iso2',
      'field_flag' => 'field_flag',
      'field_country_status' => 'field_country_status',
    );
  }
}

class NaceCodesNCWTaxonomyTermSource extends AbstractNCWTaxonomyTermSource {

  public function __construct(array $options) {
    parent::__construct($options);
    $data = $this->fileGetContents($this->endpoint_url);
    if ($data = json_decode($data)) {
      if (!empty($data->items)) {
        $data = $data->items;
        foreach ($data as $ob) {
          $ob = $ob->item;
          if (!empty($ob->parent_tid)) {
            $this->skip_ids[] = $this->itemIdentifier($ob);
          }
        }
      }
    }
    dpm($this->skip_ids);
  }

  public function contentFields() {
    return array(
      'field_nace_code' => 'field_nace_code',
      'field_nace_changes' => 'field_nace_changes',
      'field_nace_includes' => 'field_nace_includes',
      'field_nace_excludes' => 'field_nace_excludes',
      'field_nace_includes_also' => 'field_nace_includes_also',
    );
  }
}
