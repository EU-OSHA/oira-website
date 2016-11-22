(function($){
    function scrollToCtypeGroup(ctype) {
        if (ctype) {
            var open_group = $('.group-' + ctype);
            var open_link = $('.tab-title-' + ctype).closest('a');
            if (open_group.length && open_link.length) {
                // open_link.trigger('click');
                $('html, body').animate({
                    scrollTop: open_group.offset().top
                }, 800);

            }
        }
    }

    Drupal.behaviors.partner_tabs_hash = {
        attach: function (context, settings) {
            $('.view-id-country_partner_content').once('partner_tabs_hash', function() {
                if (window.location.hash) {
                    var ctype = window.location.hash.replace('#','');
                    scrollToCtypeGroup(ctype);
                }
            });
            $('.open-group-button').click(function() {
                var url = $(this).attr('href');
                var ctype = url.split('#')[1];
                scrollToCtypeGroup(ctype);
            });
        }
    };
})(jQuery);
