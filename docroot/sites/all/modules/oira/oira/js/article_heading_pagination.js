(function($){
    Drupal.behaviors.oira_heading_pagination = {
        attach: function (context, settings) {
            $('.oira-heading-pagination-container').once('oira_heading_pagination', function() {
                var $body = $(this).closest('.field-name-body');
                $(this).appendTo($body);
                if ($body.find('h2').length) {
                    var $h2 = $body.find('h2');
                    var $pagination = $('<ul class="oira-heading-pagination-container"></ul>');
                    $h2.each(function(idx, value) {
                        var $li = $('<li></li>').text($(this).text());
                        $pagination.append($li);
                        if (idx > 0) {
                            $(this).nextUntil($h2[idx + 1]).andSelf().hide();
                        }
                    });
                    $(this).append($pagination);
                    var $lis = $pagination.find('li');
                    var $next = $('<span class="pagination-next-label"></span>').text(Drupal.t('Next'));
                    var $prev = $('<span class="pagination-prev-label"></span>').text(Drupal.t('Previous'));
                    oira_heading_pagination_set_next_prev($lis, $lis.eq(1), $lis.eq($lis.length - 1), $next, $prev);
                    $lis.click(function(){
                        var $this = $(this);
                        var index = $this.index();
                        switch(index) {
                            case 0:
                                oira_heading_pagination_set_next_prev($lis, $lis.eq(index + 1), $lis.eq($lis.length - 1), $next, $prev);
                                break;

                            case $lis.length - 1:
                                oira_heading_pagination_set_next_prev($lis, $lis.eq(0), $lis.eq(index - 1), $next, $prev);
                                break;

                            default:
                                oira_heading_pagination_set_next_prev($lis, $lis.eq(index + 1), $lis.eq(index - 1), $next, $prev);
                                break;
                        }
                        $h2.each(function(idx) {
                            if (idx != index) {
                                $(this).nextUntil($h2[idx + 1]).andSelf().hide();
                            }
                        });
                        $h2.eq(index).nextUntil($h2[index + 1]).andSelf().show();
                        $('html, body').animate({
                            scrollTop: $body.offset().top
                        }, 400);
                    });

                    function oira_heading_pagination_set_next_prev($lis, $li_next, $li_prev, $next, $prev) {
                        $lis.hide().removeClass('pagination-next').removeClass('pagination-prev');
                        $li_next.show().addClass('pagination-next').prepend($next);
                        $li_prev.show().addClass('pagination-prev').prepend($prev);
                    }

                }
            });
        }
    };
})(jQuery);