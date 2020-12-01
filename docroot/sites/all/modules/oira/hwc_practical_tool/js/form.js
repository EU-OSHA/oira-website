(function ($) {
    Drupal.behaviors.tool_form_submit = {
        attach: function (context, settings) {
            $('.oira-custom-faceted-search-form').once('tool_form_submit', function () {
                var $form = $('.oira-custom-faceted-search-form');
                $form.find('input[type=checkbox]').click(function () {
                    $form.submit();
                });
                $form.find('select').change(function () {
                    $form.submit();
                });
                $form.find('input[type=text]').focusout(function () {
                    $form.submit();
                });
            });
        }
    }
    Drupal.behaviors.tool_form_toggle_facets = {
        attach: function (context, settings) {
            $('.oira-custom-faceted-search-form').once('tool_form_toggle_facets', function () {
                $('.form-checkboxes.search-facet-field').hide();
                $('.form-checkboxes.search-facet-field').has('input:checked').show();
                $('.form-checkboxes.search-facet-field').siblings('label').on('click', function () {
                    var $checkboxes = $(this).parent().find('.form-checkboxes.search-facet-field');
                    if ($checkboxes.is(':visible')) {
                        $checkboxes.slideUp();
                        $(this).removeClass('area-shown');
                    }
                    else {
                        $(this).addClass('area-shown');
                        $checkboxes.slideDown();
                    }
                });
            });

        }
    }

    Drupal.behaviors.tool_form_toggle_filter = {
        attach: function (context, settings) {
            $('.oira-custom-faceted-search-form').once('tool_form_toggle_filter', function () {
                $toggle = $('.toggle-search-sidebar');
                $left_col = $('#edit-left-column');
                $right_col = $('.search-page-results-wrapper');

                $toggle.on('click', function () {
                    $left_col.toggle();
                });
                $right_col.on('click', function () {
                    if ($toggle.is(':visible') && $left_col.is(':visible')) {
                        $left_col.hide();
                    }
                });
            });
        }
    }

})(jQuery);

function getTrackPath(href) {
    var l = document.createElement("a");
    l.href = href;
    var path = l.pathname;
    var hostnames = [
        'oiraproject.eu',
        'test.oiraproject.eu',
    ];

    if (hostnames.includes(l.hostname)) {
        if (l.pathname.substring(0, 11) === "/oira-tools") {
            path = "/oira-tools" + l.pathname.substring(14);
        }
        else {
            path = l.pathname.substring(3);
        }
    }
    return 'https://' + l.hostname + path;
}

jQuery(document).ready(function ($) {
    if (typeof _paq != 'undefined') {
        jQuery('.page-oira-tools .field-name-field-tool-link a').click(function (e) {
            var path = getTrackPath(jQuery(this).attr('href'));
            _paq.push(['trackEvent', 'Button', 'Click', path]);
        });
    }
});
