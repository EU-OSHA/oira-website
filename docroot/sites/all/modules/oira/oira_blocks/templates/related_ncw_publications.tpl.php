<?php if (!empty($publications)): ?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
<?php foreach ($publications as $publication): ?>
  <div class="publication-item">
    <a href="<?php print $publication['url']; ?>" target="_blank">
      <?php print $publication['title']; ?>
    </a>
  </div>
  <?php endforeach; ?>
  <?php if (!empty($view_all_url)): ?>
  <div class="view-all-url">
    <a href="<?php print $view_all_url; ?>" target="_blank">
      <?php print t('View all'); ?>
    </a>
  </div>
  <?php endif; ?>
</div>
<?php endif; ?>
