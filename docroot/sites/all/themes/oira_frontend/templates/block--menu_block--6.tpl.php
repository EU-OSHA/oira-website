<?php
/**
 * @file
 * Returns the HTML for a block.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728246
 *
 */
?>
<?php
$translated = osha_tmgmt_literal_get_translation($title);
?>
<div id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php print render($title_prefix); ?>
  <?php if ($translated): ?>
    <h2<?php print $title_attributes; ?>><?php print $translated; ?></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <div class="toogle-content-switcher container" data-toggle="collapse" data-target="#private-zone-block-content">
    <span class="hide-link"><?php print t('Hide menu'); ?></span>
    <span class="show-link"><?php print t('Show menu'); ?></span>
  </div>
  <div id="private-zone-block-content" class="collapse in">
  <?php print $content; ?>
  </div>
</div>
