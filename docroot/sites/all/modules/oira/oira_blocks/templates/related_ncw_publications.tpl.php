<?php if (!empty($publications)): ?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
<?php foreach ($publications as $publication): ?>
  <div class="publication-item">
    <a href="<?php print $publication['url']; ?>">
      <?php print $publication['title']; ?>
    </a>
  </div>
  <?php endforeach; ?>
  <div class="view-all-url">
    <a href="<?php print $view_all_url; ?>">
      <?php print t('View all'); ?>
    </a>
  </div>
</div>
<?php endif; ?>
