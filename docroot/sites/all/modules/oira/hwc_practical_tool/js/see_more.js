(function($){
    Drupal.behaviors.tools_see_more = {
        attach: function(context, settings) {
            $('.tools-see-more').once('tools_see_more', function() {
                var expander = Drupal.settings.tools_expander;
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
                //var $link = $wrapper.find('.field-name-field-tool-link');
                $body.expander({
                    slicePoint:       expander_setting.slice_point,
                    expandPrefix:     '...',
                    expandText:       '', // default is 'read more'
                    userCollapseText: ''
                });
                $(this).find('a').on('click', function(e){
                    e.preventDefault();
                    var show_less = expander_setting.show_less_text;
                    var show_more = expander_setting.show_more_text;
                    if ($(this).hasClass('show-less')) {
                        $body.find('.read-less a').trigger('click');
                        $(this).text(Drupal.t(show_more));
                        $partners.slideUp();
                        //$link.hide();
                    }
                    else {
                        $body.find('.read-more a').trigger('click');
                        $(this).text(Drupal.t(show_less));
                        $partners.slideDown();
                        //$link.show();
                    }
                    $(this).toggleClass('show-less');
                });
            });

        }
    };
})(jQuery);
