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
                $body.find('div>div').css({ "display": "inline" });
                $body.find('div>div>p').css({ "display": "inline" });
                $body.find('.read-more').css({ "display": "inline" });
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

                    // Check if is OiRA Tools page
                    if ($(".oira-tools-search-page")[0]){
                       // Toggle class active on body of the link
                       var parent = $(this).closest(".node-practical-tool");
                       $(" .field-name-body", parent).toggleClass("active");
                    }

                });
            });

            if ( $('body')[0].className.indexOf("page-oira-tools") >= 0){
                
                $( ".node-teaser.view-mode-teaser" ).each(function( index ) {
                    var groupRight = $('>.group-right',this );
                    var link = $('.field-name-field-tool-link', this);
                    var relatedPartners = $('.field-name-related-partners',this);
                    var groupRightPartners = $('>.group-right .field-type-text-with-summary',this); 
                    $('>.group-center',this).remove(); 

                    $(groupRight).prepend(link );
                    $(groupRightPartners).append(relatedPartners );  

                    $('.field-name-tools-see-more').remove();
                    $('.field-name-node-link').remove();

                });

                $('.field-name-title-field').on('click', function(e){
                    $(this).toggleClass('show-less');
                    // Check if is OiRA Tools page
                    if ($(".oira-tools-search-page")[0]){
                       // Toggle class active on body of the link
                       var parent = $(this).closest(".node-practical-tool");
                       $(" .field-name-body", parent).toggleClass("active");
                    }
                });
            }

        }
    };
})(jQuery);
