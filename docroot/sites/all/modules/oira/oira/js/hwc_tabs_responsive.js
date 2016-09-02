(function($){
    Drupal.behaviors.hwc_tabs_responsive = {
        attach: function (context, settings) {
            $('.hwc-alpha-pager-view').once('hwc_tabs_responsive', function() {
                $('ul.quicktabs-tabs > li a').on('click', function() {
                    if ($('.quicktabs-toggle').is(':visible')) {
                        $('.quicktabs-tabs-container').toggle();
                    }
                });
                $('.quicktabs-toggle').click(function(){
                    $('.quicktabs-tabs-container').toggle();
                });
            });
        }
    };
})(jQuery);