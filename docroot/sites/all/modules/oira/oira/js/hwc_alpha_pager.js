(function($){
    Drupal.behaviors.hwc_alpha_pager = {
        attach: function (context, settings) {
            $('.hwc-alpha-pager-view').once('hwc_alpha_pager', function() {
                var quicktab_page = $('.hwc-alpha-pager-view .quicktabs-tabpage');
                if (quicktab_page.length > 0) {
                    quicktab_page.each(function(idx, container) {
                        hwc_alpha_pager_parse_container(container, idx, '.quicktabs-views-group');
                    });
                }
                else {
                    $('.hwc-alpha-pager-view').each(function(idx, container){
                        hwc_alpha_pager_parse_container(container, idx, '.views-row');
                    });
                }
                $('<span class="toggle-alpha-pager">Toggle pager</span>').appendTo('.quicktabs-toggle-buttons');

                $('body').on('click', '.hwc-char-link:not(.toggle-alpha-pager)', function(e) {
                    e.preventDefault();
                    $('html, body').animate({
                        scrollTop: $($(this).attr('href')).offset().top - 60
                    }, 400);
                });

                
                $('.toggle-alpha-pager').on('click', function() {
                    $('.hwc-alphabet-container').toggle();
                });
            });
        }
    };

    function hwc_alpha_pager_parse_container(container, idx, group_wrapper) {
        var chars = [];
        var char = '';
        var titles = $(container).find('.hwc-alpha-pager-view-title-field .field-content');
        titles.each(function(index, elem){
            var first_char = $(elem).text()[0].toLowerCase();
            if (first_char != char) {
                char = first_char;
                chars.push(char);
                $(elem).closest(group_wrapper).before(hwc_alpha_pager_format_char(idx, char));
            }
            if (index > 0 && index == titles.length) {
                $(elem).closest(group_wrapper).before(hwc_alpha_pager_format_char(idx, char));
            }
        });
        $(container).prepend(hwc_alpha_pager_format_alphabet(chars, idx));
    }

    function hwc_alpha_pager_format_char(idx, char) {
        return '<div id="hwc-char-' + idx + '-' + char + '" class="char-anchor">' + char + '</div>';
    }
    function hwc_alpha_pager_format_alphabet(chars, prefix) {
        var alphabet = "abcdefghijklmnopqrstuvwxyz".split("");
        var output = '<div class="hwc-alphabet-container">';
        $.each(alphabet, function(idx, char) {
            if ($.inArray(char, chars) != -1) {
                output += '<a class="hwc-char-link" href="#hwc-char-' + prefix + '-' + char + '">' + char + '</a>';
            }
            else {
                //HCW-950: Only the letters with content must be shown.
                //output += '<a class="hwc-char-link disabled" href="javascript:void(0);">' + char + '</span>';
            }
        });
        output += '<a class="hwc-char-link toggle-alpha-pager visible-xs visible-sm" href="javascript:void(0)">' + Drupal.t('Close') + '</a>';
        output += '</div>';
        return output;
    }

})(jQuery);