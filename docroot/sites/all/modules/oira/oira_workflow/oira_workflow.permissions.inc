<?php

function _oira_workflow_partner_permission() {
  return array(
    'create files',
    'view files',
    'use manualcrop',
    'access content',
    'view own unpublished content',
    'view the administration theme',
    'access workbench access by role',
    'use text format filtered_html',
    'access media browser',
    'use media wysiwyg',

//    'use workbench_moderation my drafts tab',
//    'access toolbar',

    // content
    'create practical_tool content',
    'edit own practical_tool content',
    'edit any practical_tool content',
    'delete own practical_tool content',

    'create promotional_material content',
    'edit own promotional_material content',
    'edit any promotional_material content',
    'delete own promotional_material content',

    'create strategic_documentation content',
    'edit own strategic_documentation content',
    'edit any strategic_documentation content',
    'delete own strategic_documentation content',

    'create news content',
    'edit own news content',
    'edit any news content',
    'delete own news content',

    'view osh my content tab',

    // moderation

    'view all unpublished content',

    'moderate content from draft to final_draft',
    'edit any content in draft',
    'delete any content in draft',
    'edit any content in final_draft',
    'access workbench access by role',

  );
}

function _oira_workflow_pm_permission() {
  return array(
    'create files',
    'view files',
    'use manualcrop',
    'access content',
    'view own unpublished content',
    'view the administration theme',
    'use text format filtered_html',
    'use text format full_html',
    'access media browser',
    'use media wysiwyg',

    'access toolbar',

    'access content overview',

    // content
    'create practical_tool content',
    'edit own practical_tool content',
    'edit any practical_tool content',
    'delete own practical_tool content',

    'create promotional_material content',
    'edit own promotional_material content',
    'edit any promotional_material content',
    'delete own promotional_material content',

    'create strategic_documentation content',
    'edit own strategic_documentation content',
    'edit any strategic_documentation content',
    'delete own strategic_documentation content',

    'create news content',
    'edit own news content',
    'edit any news content',
    'delete own news content',

    'view osh my content tab',

    // moderation
    'view osh approver needs review tab',

    'view all unpublished content',
    'view revisions',
    'edit any content in draft',
    'delete any content in draft',
    'edit any content in final_draft',
    'edit any content in needs_review',
    'edit any content in to_be_approved',
    'edit any content in published',

    'moderate content from draft to final_draft',
    'moderate content from draft to published',
    'moderate content from final_draft to needs_review',
    'moderate content from needs_review to to_be_approved',
    'moderate content from to_be_approved to published',
  );
}

function _oira_workflow_supervisor_permission() {
  return array(
    'create files',
    'view files',
    'use manualcrop',
    'access content',
    'view own unpublished content',
    'view the administration theme',
    'use text format filtered_html',
    'use text format full_html',
    'access media browser',
    'use media wysiwyg',

    'access toolbar',

    'access content overview',

    // content
//    'create practical_tool content',
//    'edit own practical_tool content',
    'edit any practical_tool content',

//    'create promotional_material content',
//    'edit own promotional_material content',
    'edit any promotional_material content',

//    'create strategic_documentation content',
//    'edit own strategic_documentation content',
    'edit any strategic_documentation content',

//    'create news content',
//    'edit own news content',
    'edit any news content',

    'view osh my content tab',

    // moderation
    'view osh approver needs review tab',

    'view all unpublished content',
    'view revisions',
    'edit any content in needs_review',

//    'moderate content from draft to final_draft',
//    'moderate content from draft to published',
    'moderate content from final_draft to needs_review',
    'moderate content from needs_review to to_be_approved',
  );
}
