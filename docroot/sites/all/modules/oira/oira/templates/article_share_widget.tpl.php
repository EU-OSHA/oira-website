<?php
/**
 * @file
 * Social share widgets
 *
 * Available variables:
 * - $url: URL to the page
 * - $node: Current node
 * - $tweet_url: Twitter share URL
 * - $language: Current language
 * - $options: Additional configuration options
 *
 * Additional configuration options variables:
 * - rss_url: URL to the RSS feed
 * - rss_hide: Set to TRUE to hide the RSS link
 * @see template_process()
 */
?>
<div class="hwc-share-widget">
  <ul>
    <li class="share-this-article">
      <?php print $label; ?>
    </li>
    <li class="hwc-share-widget-button hwc-share-widget-facebook">
      <a onclick="window.open(this.href, 'hwc-share', 'left=20,top=20,width=500,height=500,toolbar=1,resizable=0'); return false;"
        href="https://www.facebook.com/sharer/sharer.php?u=<?php print $url ?>">Facebook</a>
    </li>
    <li class="hwc-share-widget-button hwc-share-widget-twitter">
      <a href="<?php print $tweet_url; ?>">Twitter</a>
    </li>
    <li class="napo-share-widget-button napo-share-widget-linkedin">
      <a href="https://www.linkedin.com/shareArticle?mini=true&url=<?php print $url; ?>">Linked in</a>
    </li>
    <li class="napo-share-widget-button napo-share-widget-google-plus">
      <a onclick="window.open(this.href, 'hwc-share', 'left=20,top=20,width=500,height=500,toolbar=1,resizable=0'); return false;"
         href="https://plus.google.com/share?url=<?php print $url; ?>">Google+</a>
    </li>
  </ul>
</div>
<script>
  (function($) {

    $(window).ready(function(){
        $('.hwc-share-widget-button.hwc-share-widget-twitter a').click(function(event) {
          var width  = 575,
            height = 400,
            left   = ($(window).width()  - width)  / 2,
            top    = ($(window).height() - height) / 2,
            opts   = 'status=1' +
              ',width='  + width  +
              ',height=' + height +
              ',top='    + top    +
              ',left='   + left;
          window.open(this.href, 'twitter', opts);
          return false;
        });
        $('.napo-share-widget-button.napo-share-widget-linkedin a').click(function() {
          var width  = 575,
            height = 400,
            left   = ($(window).width()  - width)  / 2,
            top    = ($(window).height() - height) / 2,
            opts   = 'status=1' +
              ',width='  + width  +
              ',height=' + height +
              ',top='    + top    +
              ',left='   + left;
          window.open(this.href, 'Linked In', opts);
          return false;
        });
    });
  })(jQuery);

</script>
