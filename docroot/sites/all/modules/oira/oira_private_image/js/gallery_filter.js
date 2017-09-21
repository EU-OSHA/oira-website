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
                process_form_gallery($view, $sector_field, $widget_container, $label, $list_filter, $ul)
            });

        $('#oira-private-image-sector-filter-form').once('gallery_filter', function(){
                var $form = $(this);
                var $sector_field = $('[name=sector]');
                var $widget_container = $sector_field.closest('.form-item-sector');
                var $label = $widget_container.find('label');
                var $list_filter = $('<div class="sector-filter-list-wrapper"></div>');
                var $ul = $('<ul></ul>');
                process_form_gallery($form, $sector_field, $widget_container, $label, $list_filter, $ul);


            });
        }
    }

    function process_form_gallery($form, $sector_field, $widget_container, $label, $list_filter, $ul) {
        $sector_field.hide();
        $label.hide();

        $list_filter.append($('<span class="sector-filter-label"></span>').html($label.html()));

        $sector_field.find('option').each(function(idx, elem) {
            var $elem = $(elem);
            var $li = $('<li></li>').attr('data-value', $elem.attr('value')).html($elem.html());
            if ($sector_field.val() == $elem.attr('value')) {
                $li.addClass('active');
            }
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
            $form.find('[type=submit]').click();
        });
    }
})(jQuery);
