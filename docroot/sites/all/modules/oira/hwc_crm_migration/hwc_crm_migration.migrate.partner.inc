<?php

/**
 * Class MigrateOshaBlog migrates blog.txt contents. The data
 * is stored inside the <em>Blog</em> content type.
 */
class PartnerMigration extends HwcCrmMigration {
  /**
   * {@inheritdoc}
   */
  public function __construct($arguments) {
    $this->source = new MigrateSourceList(
    new PartnerMigrateListXml(),
        new PartnerContentItemXML(),
        $this->exposedFields()
    );
    parent::__construct($arguments);
  }

  protected function getManuallyMigratedFields() {
    return array('field_mission_statement', 'field_collaborator');
  }

  public function exposedFields() {
    return array(
      'field_guid_organisation',
      'title',
      'title_field',
      'field_general_email',
      'field_general_phone',
      'field_website',
      'field_orgtype',
      'field_logo',
      'field_ph_address',
      'field_ph_cp',
      'field_ph_town',
      'field_country',
      'field_guid_main_contact',
      'field_main_contact',
      'field_main_contact_email',
      'field_category',
      'field_partner_type',
      'field_organisation_rep',
      'field_social_profile',
      'field_dedicated_oira_website',
      'field_partner_other_users',
    );
  }

  public function prepareRow($row) {
    if ($term = osha_workflow_get_partner_section_by_guid($row->field_guid_organisation)) {
      $row->workbench_access[$term->tid] = $term->tid;
      if (strtolower($term->name) != strtolower($row->title)) {
        $term->name = $row->title;
        taxonomy_term_save($term);
      }
    }
    else {
      if ($term = osha_workflow_create_section($row->title, $row->field_guid_organisation)) {
        $this->currentMigration()->displayMessage(
          strtr('Creating new section with GUID: @guid for partner \'@partner\'',
            array('@guid' => $row->field_guid_organisation, '@partner' => $row->title)
          ),
          'warning'
          );
        $row->workbench_access[$term->tid] = $term->tid;
      }
      else {
        $this->currentMigration()->displayMessage(
          strtr('Unable to create new section with GUID: @guid for partner \'@partner\'',
            array('@guid' => $row->field_guid_organisation, '@partner' => $row->title)
            ),
            'error'
          );
        return FALSE;
      }
    }
    if (!empty($row->field_country)) {
      $term = taxonomy_get_term_by_name($row->field_country);
      if (empty($term)) {
        $voc = taxonomy_vocabulary_machine_name_load('country');
        $term = new stdClass();
        $term->vid = $voc->vid;
        $term->name = ucwords(strtolower($row->field_country));
        $term->language = 'en';
        taxonomy_term_save($term);
        $row->field_country = $term->name;
      }
      if ($row->field_country == 'EU Level') {
        $ph_term = taxonomy_get_term_by_name($row->field_ph_country);
        if (!empty($ph_term)) {
          $row->field_ph_country = $ph_term->name;
        }
        else {
          $row->field_ph_country = ucwords(strtolower($row->field_ph_country));
        }
      }
      else {
        $row->field_ph_country = $term->name;
      }
    }
    return TRUE;
  }

  public function prepare($entity, $row) {
    // For some reason field collection it's lost when runing mibration update.
    // for mission statement, the manual added value it's kept.
    if (!empty($entity->nid)) {
      $old_entity = node_load($entity->nid);
      $entity->field_collaborator = $old_entity->field_collaborator;
    }

    // Handle aliases and redirects.
    $entity->path['pathauto'] = TRUE;
    if (!empty($entity->nid)) {
      $uri = entity_uri('node', $entity);
      module_load_include('inc', 'pathauto', 'pathauto');
      if ($existing_alias = _pathauto_existing_alias_data('node/' . $entity->nid, 'en')) {
        $new_alias = pathauto_create_alias('node', 'return', $uri['path'], array('node' => $entity), $entity->type, 'en');
        if ($new_alias != $existing_alias['alias']) {
          $existing_alias['alias'] = $new_alias;
          path_save($existing_alias);
        }
        // Remove if any redirect is added with the current alias
        // from a previous title change.
        $redirect = redirect_load_by_source($existing_alias['alias'], LANGUAGE_NONE);
        if (!empty($redirect)) {
          redirect_delete($redirect->rid);
        }
        $redirect = redirect_load_by_source($existing_alias['alias'], 'en');
        if (!empty($redirect)) {
          redirect_delete($redirect->rid);
        }
      }
    }
  }
}


class PartnerMigrateListXml extends AbstractCrmMigrateListXml {

  public function __construct() {
    $file = variable_get('hwc_crm_data_dir', '') . '/OIRA_GroupPublicProfile.xml';
    parent::__construct($file);
  }

  public function transliterateString($string) {
    if (function_exists('transliterator_transliterate')) {
      return transliterator_transliterate('Any-Latin; Latin-ASCII; [\u0080-\u7fff] remove', $string);
    }
    return iconv('UTF-8', 'ASCII//TRANSLIT//IGNORE', $string);
  }

  public function prepareFileName($data, $suf) {
    $filename = $this->transliterateString($data->title);
    $short_title = trim(substr($filename, 0, 20));
    return $short_title . $suf . '_' . $data->field_guid_organisation;
  }

  protected function parseSourceFile() {
    self::$data = array();
    if (!is_readable($this->file)) {
      watchdog('hwc_crm_migration', 'Cannot find migration files: @file (set `hwc_crm_data_dir` properly)', array('@file' => $this->file), WATCHDOG_WARNING);
      throw new MigrateException(strtr('Cannot find migration files: @file', array('@file' => $this->file)));
    }
    if ($xml = simplexml_load_file($this->file, 'SimpleXMLElement', LIBXML_COMPACT | LIBXML_PARSEHUGE)) {
      // Contact fields are attributes of Detail.
      foreach ($xml->xpath('//Details') as $item) {
        $data = new stdClass();
        $attributes = $item->attributes();
        $data->title = trim((string) $attributes['Textbox1']);
        $data->title_field = $data->title;
        $data->field_guid_organisation = (string) $attributes['Table0_Details1'];
        $data->field_general_email = (string) $attributes['Textbox2'];
        $data->field_general_phone = (string) $attributes['Textbox3'];
        $data->field_website = (string) $attributes['Textbox4'];
        $data->field_orgtype = (string) $attributes['Textbox23'];
        $logo_image = base64_decode((string) $attributes['Textbox5']);
        $logo_ext = (string) $attributes['Textbox6'];
        if (!empty($logo_image) && !empty($logo_ext)) {
          $data->field_logo = $logo_image;
          $filename = $this->prepareFileName($data, '_logo');
          $data->field_logo_file = file_munge_filename($filename . '.' . $logo_ext, '');
          $data->field_logo_mime = $logo_ext;
        }
        $data->field_social_profile[] = (string) $attributes['Textbox7'];
        $data->field_social_profile[] = (string) $attributes['Textbox8'];
        $data->field_social_profile[] = (string) $attributes['Textbox9'];
        $data->field_social_profile[] = (string) $attributes['Textbox10'];
        $data->field_social_profile[] = (string) $attributes['Textbox11'];

        $data->field_social_profile[] = (string) $attributes['Textbox19'];
        $data->field_social_profile[] = (string) $attributes['Textbox20'];

        $data->field_ph_address = (string) $attributes['Textbox12'];
        $data->field_ph_cp = (string) $attributes['Textbox13'];
        $data->field_country = (string) $attributes['Textbox14'];
        $data->field_ph_country = (string) $attributes['Textbox14'];
        $data->field_ph_town = (string) $attributes['Textbox21'];
        $data->field_guid_main_contact = (string) $attributes['Textbox15'];
        $data->field_main_contact = trim((string) $attributes['Textbox16'] . ' ' . (string) $attributes['Textbox17']);
        $data->field_main_contact_email = (string) $attributes['Textbox18'];
        $data->field_dedicated_oira_website = (string) $attributes['Textbox24'];

        // Other users.
        // In XML, the fields are First name, last name, email.
        for ($i = 26; $i <= 45; $i += 4) {
          if (empty($attributes['Textbox' . $i])) {
            continue;
          }
          $data->field_partner_other_users[] = implode("^",
            [
              $attributes['Textbox' . $i] . ' ' . $attributes['Textbox' . ($i + 1)],
              $attributes['Textbox' . ($i + 2)],
              $attributes['Textbox' . ($i + 3)],
            ]
          );
        }

        // Try to assign a valid partner type term.
        $partner_type = (string) $attributes['Textbox22'];
        $term = taxonomy_get_term_by_name($partner_type, 'partner_types');
        if (!empty($term)) {
          $term = current($term);
          // Sectorial partner has EU level country.
          if ($term->tid == OIRA_PARTNER_TYPE_SECTORIAL_TID) {
            $data->field_ph_town .= ', ' . ucwords(strtolower(trim($data->field_country)));
            $data->field_country = 'EU level';
          }
          $data->field_partner_type = $partner_type;
        }
        else {
          watchdog('hwc_crm_migration', 'Ignoring partner with type @type in the vocabulary for organisation @organisation',
            array(
              '@type' => $partner_type,
              '@organisation' => $data->title,
            ), WATCHDOG_WARNING);
          continue;
        }
        if (empty(self::$data[$data->field_guid_organisation])) {
          self::$data[$data->field_guid_organisation] = $data;
        }
      }
    }
  }
}

class PartnerContentItemXML extends MigrateItem {
  /**
   * {@inheritdoc}
   */
  public function getItem($item_id) {
    if (array_key_exists($item_id, PartnerMigrateListXml::$data)) {
      return (object) PartnerMigrateListXml::$data[$item_id];
    }
    return NULL;
  }
}
