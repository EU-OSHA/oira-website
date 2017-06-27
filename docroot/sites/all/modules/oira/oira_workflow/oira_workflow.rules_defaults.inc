<?php
/**
 * @file
 * oira_workflow.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function oira_workflow_default_rules_configuration() {
  $items = array();
  $items['rules_oira_workflow_notif_his_content_published'] = entity_import('rules_config', '{ "rules_oira_workflow_notif_his_content_published" : {
      "LABEL" : "Notify partner when his content published",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "oira_workflow", "workbench_moderation" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "new-state" ], "value" : "published" } },
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "news" : "news" } }
          }
        },
        { "node_has_partner_section" : { "entity" : [ "node" ] } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_wf_notification" } },
        { "data_is_empty" : { "data" : [ "node:field-wf-notification" ] } }
      ],
      "DO" : [
        { "oira_mail_to_users_of_partner" : {
            "node" : [ "node" ],
            "subject" : "OiRA: New content has been published for your organisation",
            "message" : "\\u003Cp\\u003EDear Partner,\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThe [node:type] item that you submitted for publication on your organisation\\u2019s profile has been validated by EU-OSHA and has now been published.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u003Ca href=\\u0022[node:url]\\u0022\\u003E[node:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThank you for your participation in the OiRA project.\\u003C\\/p\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_oira_workflow_notif_partner_to_be_reviewed'] = entity_import('rules_config', '{ "rules_oira_workflow_notif_partner_to_be_reviewed" : {
      "LABEL" : "Notification partners users when to be reviewed",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "oira_workflow", "workbench_moderation" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "new-state" ], "value" : "needs_review" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_wf_notification" } },
        { "data_is_empty" : { "data" : [ "node:field-wf-notification" ] } }
      ],
      "DO" : [
        { "oira_mail_to_users_of_partner" : {
            "node" : [ "node" ],
            "subject" : "OiRA: New content has been sent for validation",
            "message" : "\\u003Cp\\u003EDear Partner,\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThank you for submitting a [node:type] item for publication on your organisation\\u2019s profile on OiRA website. Once validated by EU-OSHA, this update will be visible on your public profile. You will be informed when the update has been published.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u003Ca href=\\u0022[node:url]\\u0022\\u003E[node:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThank you for your participation in the Healthy Workplaces for All Ages campaign.\\u003C\\/p\\u003E\\r\\n\\r\\n"
          }
        }
      ]
    }
  }');
  $items['rules_oira_workflow_notification_partner_content_created'] = entity_import('rules_config', '{ "rules_oira_workflow_notification_partner_content_created" : {
      "LABEL" : "Notification partner content created",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "oira_workflow" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "events" : "events", "news" : "news" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_wf_notification" } },
        { "data_is_empty" : { "data" : [ "node:field-wf-notification" ] } }
      ],
      "DO" : [
        { "oira_mail_to_users_of_partner" : {
            "node" : [ "node" ],
            "subject" : "OiRA: New content added for your organisation",
            "message" : "\\u003Cp\\u003EDear partner,\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EYour [node:type] is currently in the \\u201cdraft\\u201d status which means that you can still edit it before you decide to \\u201csubmit\\u201d it for validation\\u201d\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u003Ca href=\\u0022[node:url]\\u0022\\u003E[node:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThank you for your participation in the OiRA project.\\u003C\\/p\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_oira_workflow_notification_partner_content_published'] = entity_import('rules_config', '{ "rules_oira_workflow_notification_partner_content_published" : {
      "LABEL" : "Notification when published",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "oira_workflow", "workbench_moderation" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "new-state" ], "value" : "published" } },
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : {
                "news" : "news",
                "practical_tool" : "practical_tool",
                "promotional_material" : "promotional_material",
                "strategic_documentation" : "strategic_documentation"
              }
            }
          }
        },
        { "node_has_partner_section" : { "entity" : [ "node" ] } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_wf_notification" } },
        { "data_is_empty" : { "data" : [ "node:field-wf-notification" ] } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "3" : "3", "12" : "12", "14" : "14" } },
            "subject" : "OiRA - [node:type] - Published",
            "message" : "\\u003Cp\\u003EA new [node:type] added by [node:author:name] ([node:author:mail]) has been published.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EYou can see it by going to this link [node:url]\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u003Ca href=\\u0022[node:url]\\u0022\\u003E[node:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_oira_workflow_notification_to_be_approved'] = entity_import('rules_config', '{ "rules_oira_workflow_notification_to_be_approved" : {
      "LABEL" : "Notification when to be approved",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "workbench_moderation" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "new-state" ], "value" : "to_be_approved" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_wf_notification" } },
        { "data_is_empty" : { "data" : [ "node:field-wf-notification" ] } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "12" : "12" } },
            "subject" : "OiRA - [node:type] - To be approved",
            "message" : "\\u003Cp\\u003EYou have a new [node:type] to approve, added by [node:author:name] ([node:author:mail]).\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EYou can approve it by going to this link [node:url]\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u003Ca href=\\u0022[node:url]\\u0022\\u003E[node:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_oira_workflow_notification_to_be_reviewed'] = entity_import('rules_config', '{ "rules_oira_workflow_notification_to_be_reviewed" : {
      "LABEL" : "Notification when to be reviewed for Project Manager.",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "workbench_moderation" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "new-state" ], "value" : "needs_review" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_wf_notification" } },
        { "data_is_empty" : { "data" : [ "node:field-wf-notification" ] } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "14" : "14" } },
            "subject" : "OiRA - [node:type] - To be reviewed",
            "message" : "\\u003Cp\\u003EYou have a new [node:type] to review, added by [node:author:name] ([node:author:mail]).\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EYou can review it by going to this link [node:url]\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u003Ca href=\\u0022[node:url]\\u0022\\u003E[node:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E"
          }
        }
      ]
    }
  }');
  return $items;
}
