(function($){
    Drupal.behaviors.oira_heading_pagination = {
        attach: function (context, settings) {
            $('.oira-heading-pagination-container').once('oira_heading_pagination', function() {
                var $body = $(this).closest('.field-name-body');
                if ($body.find('h2').length) {
                    var $h2 = $body.find('h2');
                    var $pagination = $('<ul></ul>');
                    $h2.each(function(idx, value) {
                        var $li = $('<li></li>').text($(this).text());
                        $pagination.append($li);
                        if (idx > 0) {
                            $(this).nextUntil($h2[idx + 1]).andSelf().hide();
                        }
                    });
                    var $lis = $pagination.find('li');
                    $lis.hide();
                    $lis.eq(1).show();
                    $lis.click(function(){
                        var $this = $(this);
                        var index = $this.index();
                        $lis.hide().removeClass('pagination-next').removeClass('pagination-prev');
                        switch(index) {
                            case 0:
                                $lis.eq(index + 1).show().addClass('pagination-next');
                                break;

                            case $pagination.length:
                                $lis.eq(index - 1).show().addClass('pagination-prev');

                            default:
                                $lis.eq(index + 1).show().addClass('pagination-next');
                                $lis.eq(index - 1).show().addClass('pagination-prev');
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
                    $body.append($pagination);
                }
            });
        }
    };
})(jQuery);