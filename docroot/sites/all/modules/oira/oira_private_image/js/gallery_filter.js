(function($){
    Drupal.behaviors.gallery_filter = {
        attach: function(context, settings) {
            $('.view-private-images').once('gallery_filter', function(){
                var $view = $(this);
                var $sector_field = $('[name=field_multiple_sector_tid]');
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
