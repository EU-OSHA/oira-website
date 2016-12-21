<?php
/**
 * @file
 * Display Suite Partner edit form template.
 *
 * Available variables:
 *
 * Layout:
 * - $classes: String of classes that can be used to style this layout.
 * - $contextual_links: Renderable array of contextual links.
 * - $layout_wrapper: wrapper surrounding the layout.
 *
 * Regions:
 *
 * - $about_organization__top: Rendered content for the "About organization - top" region.
 * - $about_organization__top_classes: String of classes that can be used to style the "About organization - top" region.
 *
 * - $about_organization__left: Rendered content for the "About organization - left" region.
 * - $about_organization__left_classes: String of classes that can be used to style the "About organization - left" region.
 *
 * - $about_organization__right: Rendered content for the "About organization - right" region.
 * - $about_organization__right_classes: String of classes that can be used to style the "About organization - right" region.
 *
 * - $about_organization__bottom: Rendered content for the "About organization - bottom" region.
 * - $about_organization__bottom_classes: String of classes that can be used to style the "About organization - bottom" region.
 *
 * - $general_contact_information__top: Rendered content for the "General contact information - top" region.
 * - $general_contact_information__top_classes: String of classes that can be used to style the "General contact information - top" region.
 *
 * - $general_contact_information__left: Rendered content for the "General contact information - left" region.
 * - $general_contact_information__left_classes: String of classes that can be used to style the "General contact information - left" region.
 *
 * - $general_contact_information__right: Rendered content for the "General contact information - right" region.
 * - $general_contact_information__right_classes: String of classes that can be used to style the "General contact information - right" region.
 *
 * - $general_contact_information__bottom: Rendered content for the "General contact information - bottom" region.
 * - $general_contact_information__bottom_classes: String of classes that can be used to style the "General contact information - bottom" region.
 *
 * - $other_collaborators__top: Rendered content for the "Other collaborators - top" region.
 * - $other_collaborators__top_classes: String of classes that can be used to style the "Other collaborators - top" region.
 *
 * - $other_collaborators__left: Rendered content for the "Other collaborators - left" region.
 * - $other_collaborators__left_classes: String of classes that can be used to style the "Other collaborators - left" region.
 *
 * - $other_collaborators__right: Rendered content for the "Other collaborators - right" region.
 * - $other_collaborators__right_classes: String of classes that can be used to style the "Other collaborators - right" region.
 *
 * - $other_collaborators__bottom: Rendered content for the "Other collaborators - bottom" region.
 * - $other_collaborators__bottom_classes: String of classes that can be used to style the "Other collaborators - bottom" region.
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?> clearfix">

  <!-- Needed to activate contextual links -->
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

    <div class="ds-about-organization"><div class="col-sm-12"><h1><?php print t('About your organization')?></h1></div></div>

    <<?php print $about_organization__top_wrapper; ?> class="group-header<?php print $about_organization__top_classes; ?>">
      <?php print $about_organization__top; ?>
    </<?php print $about_organization__top_wrapper; ?>>

    <<?php print $about_organization__left_wrapper; ?> class="group-left<?php print $about_organization__left_classes; ?>">
      <?php print $about_organization__left; ?>
    </<?php print $about_organization__left_wrapper; ?>>

    <<?php print $about_organization__right_wrapper; ?> class="group-right<?php print $about_organization__right_classes; ?>">
      <?php print $about_organization__right; ?>
    </<?php print $about_organization__right_wrapper; ?>>

    <<?php print $about_organization__bottom_wrapper; ?> class="group-footer<?php print $about_organization__bottom_classes; ?>">
      <?php print $about_organization__bottom; ?>
    </<?php print $about_organization__bottom_wrapper; ?>>

    <div class="ds-general-contact-information"><div class="col-sm-12"><h1><?php print t('General contact information')?></h1></div></div>

    <<?php print $general_contact_information__top_wrapper; ?> class="group-header<?php print $general_contact_information__top_classes; ?>">
      <?php print $general_contact_information__top; ?>
    </<?php print $general_contact_information__top_wrapper; ?>>

    <<?php print $general_contact_information__left_wrapper; ?> class="group-left<?php print $general_contact_information__left_classes; ?>">
      <?php print $general_contact_information__left; ?>
    </<?php print $general_contact_information__left_wrapper; ?>>

    <<?php print $general_contact_information__right_wrapper; ?> class="group-right<?php print $general_contact_information__right_classes; ?>">
      <?php print $general_contact_information__right; ?>
    </<?php print $general_contact_information__right_wrapper; ?>>

    <<?php print $general_contact_information__bottom_wrapper; ?> class="group-footer<?php print $general_contact_information__bottom_classes; ?>">
      <?php print $general_contact_information__bottom; ?>
    </<?php print $general_contact_information__bottom_wrapper; ?>>

    <div class="ds-other-collaborators"><div class="col-sm-12"><h1><?php print t('Other collaborators')?></h1></div></div>

    <<?php print $other_collaborators__top_wrapper; ?> class="group-header<?php print $other_collaborators__top_classes; ?>">
      <?php print $other_collaborators__top; ?>
    </<?php print $other_collaborators__top_wrapper; ?>>

    <<?php print $other_collaborators__left_wrapper; ?> class="group-left<?php print $other_collaborators__left_classes; ?>">
      <?php print $other_collaborators__left; ?>
    </<?php print $other_collaborators__left_wrapper; ?>>

    <<?php print $other_collaborators__right_wrapper; ?> class="group-right<?php print $other_collaborators__right_classes; ?>">
      <?php print $other_collaborators__right; ?>
    </<?php print $other_collaborators__right_wrapper; ?>>

    <<?php print $other_collaborators__bottom_wrapper; ?> class="group-footer<?php print $other_collaborators__bottom_classes; ?>">
      <?php print $other_collaborators__bottom; ?>
    </<?php print $other_collaborators__bottom_wrapper; ?>>

</<?php print $layout_wrapper ?>>

<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
