(function($){
    Drupal.behaviors.tools_see_more = {
        attach: function(context, settings) {
            $('.tools-see-more').once('tools_see_more', function() {
                var expander = Drupal.settings.tools_expander;
                console.log(expander);
                var key = $(this).attr('data-nid');
                var expander_setting = {};
                $.each(expander, function(idx, value) {
                    if (value.delta == key) {
                        expander_setting = value;
                    }
                });
                var $wrapper = $(this).closest(expander_setting.parent_selector);
                var $body = $wrapper.find('.field-name-body');
                var $partners = $wrapper.find('.field-name-related-partners');
                $body.expander({
                    slicePoint:       expander_setting.slice_point,
                    expandPrefix:     '...',
                    expandText:       '', // default is 'read more'
                    userCollapseText: ''
                });
                $(this).on('click', function(){
                    var show_less = expander_setting.show_less_text;
                    var show_more = expander_setting.show_more_text;
                    if ($(this).hasClass('show-less')) {
                        $body.find('.read-less a').trigger('click');
                        $(this).text(Drupal.t(show_more));
                        $partners.slideUp();
                    }
                    else {
                        $body.find('.read-more a').trigger('click');
                        $(this).text(Drupal.t(show_less));
                        $partners.slideDown();
                    }
                    $(this).toggleClass('show-less');
                });
            });

        }
    };
})(jQuery);
