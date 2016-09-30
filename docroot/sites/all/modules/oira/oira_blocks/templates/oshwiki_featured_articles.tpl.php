<?php if (!empty($tagged_wikis)): ?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
<?php
  foreach ($tagged_wikis as $wiki) {
    print render($wiki);
  }
?>
<div class="view-all-url">
  <a href="https://oshwiki.eu/wiki/Category:E-tools" target="_blank">
    <?php print t('View all'); ?>
  </a>
</div>
</div>
<?php endif; ?>
