(function($){
    Drupal.behaviors.country_partner_list = {
        attach: function (context, settings) {
            $('.partner-logo-wrapper').once('country_partner_list', function() {
                $(this).click(function() {
                    $('.country-partner-wrapper').hide().removeClass('expanded');
                    var nid = $(this).attr('data-partner-nid');
                    var shown_wrapper = $('.country-partner-wrapper[data-partner-nid=' + nid + ']').show().addClass('expanded');
                    $('html, body').animate({
                        scrollTop: shown_wrapper.offset().top
                    }, 800);

                });
            });
        }
    };
})(jQuery);