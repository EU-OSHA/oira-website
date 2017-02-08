var customTableDrag = customTableDrag || {};

(function($) {
    Drupal.behaviors.customTableDrag = {
        attach: function(context, settings) {
            customTableDrag.hideShowRowWeights();
        }
    };

    /**
    * Remove "Hide/Show row weights" toggle in tabledrag.
    */
    customTableDrag.hideShowRowWeights = function() {
    var initColumns = Drupal.tableDrag.prototype.initColumns;
    Drupal.tableDrag.prototype.initColumns = function() {
        initColumns.call(this);

        $('a.tabledrag-toggle-weight').unbind('click')
            .parents('div.tabledrag-toggle-weight-wrapper')
            .remove();
        };
    };
})(jQuery);