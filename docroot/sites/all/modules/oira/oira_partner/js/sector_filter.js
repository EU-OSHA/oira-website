(function($){
    Drupal.behaviors.tool_sector_filter = {
        attach: function (context, settings) {
            $('.view-id-country_partner_content').once('tool_sector_filter', function() {
                var sectors = [];
                var used = [];
                $('.sector-filter-tab-content > .node-teaser').each(function(){
                    var sector_tid = $(this).attr('data-sector-tid');
                    var sector_label = $(this).attr('data-sector-label');
                    if ($.inArray(sector_tid, used) < 0) {
                        used.push(sector_tid);
                        sectors.push({sector_tid: sector_tid, sector_label: sector_label});
                    }
                });
                var $ul = $('<ul class="partner-content-sector-filter"></ul>');
                $ul.append('<li class="filter-active">' + Drupal.t("Any") + '</li>');
                $.each(sectors, function(idx, value) {
                    $ul.append('<li data-filter="' + value.sector_tid + '">' + value.sector_label + '</li>');
                });
                var tab = $('.sector-filter-tab-content').closest('.quicktabs-tabpage');
                var index = tab.index('.view-id-country_partner_content .quicktabs_main > div');
                $('ul.quicktabs-tabs > li').eq(index).append($ul);
                $('.partner-content-sector-filter > li').on('click', function(e){
                    e.preventDefault();
                    $(this).closest('ul').closest('li').find('a').trigger('click');
                    $(this).siblings('li').removeClass('filter-active');
                    $(this).addClass('filter-active');
                    var tid = $(this).attr('data-filter');
                    if (typeof tid != 'undefined') {
                        tab.find('.node-practical-tool.node-teaser').hide();
                        tab.find('.node-practical-tool.node-teaser[data-sector-tid="' + tid + '"]').show();
                    }
                    else {
                        tab.find('.node-practical-tool.node-teaser').show();
                    }
                });
            });
        }
    };
})(jQuery);