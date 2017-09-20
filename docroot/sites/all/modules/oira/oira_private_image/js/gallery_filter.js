(function($){
    Drupal.behaviors.gallery_filter = {
        attach: function(context, settings) {
            $('.view-private-images').once('gallery_filter', function(){
                var $view = $(this);
                var $sector_field = $('[name=field_multiple_sector_tid]');
                var $widget_container = $sector_field.closest('.views-exposed-widget');
                var $label = $widget_container.find('label');
                var $list_filter = $('<div class="sector-filter-list-wrapper"></div>');
                var $ul = $('<ul></ul>');

                $sector_field.hide();
                $label.hide();

                $list_filter.append($('<span class="sector-filter-label"></span>').html($label.html()));

                $sector_field.find('option').each(function(idx, elem) {
                    var $elem = $(elem);
                    var $li = $('<li></li>').attr('data-value', $elem.attr('value')).html($elem.html());
                    $ul.append($li);
                    $li.on('click', function(){
                        $sector_field.val($(this).attr('data-value')).trigger('change');
                    });
                });
                $list_filter.append($ul);
                $widget_container.append($list_filter);

                $('.filter-show-all').click(function(){
                    $sector_field.val('All').trigger('change');
                });
                $sector_field.on('change', function(){
                    $view.find('[type=submit]').click();
                });
            });
        }
    }
})(jQuery);
