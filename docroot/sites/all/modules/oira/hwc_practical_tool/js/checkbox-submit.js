(function($){
    Drupal.behaviors.osha_publication = {
        attach: function(context, settings) {
            var $form = $('#hwc-practical-tool-menu-tools-form');
            $form.find('input[type=checkbox]').click(function(){
                $form.submit();
            });
            $form.find('input[type=select]').change(function(){
                $form.submit();
            });
            $form.find('input[type=text]').focusout(function(){
                $form.submit();
            });
        }
    }
})(jQuery);
