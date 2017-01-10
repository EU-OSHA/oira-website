(function($){
    $.fn.textareaCounter = function(options) {
        // setting the defaults
        // $("textarea").textareaCounter({ limit: 100 });
        var defaults = {
            limit: 100
        };
        var dictionary = {
            words  : Drupal.t('words'),
            words_left : Drupal.t('words left'),
            word_left  : Drupal.t('word left'),
            max  : Drupal.t('Max.')
        };

        var options = $.extend(defaults, options);

        // and the plugin begins
        this.each(function() {

            var obj, text, wordcount, limited, obj_id, words_left;
            obj = $(this);

            obj_id = obj.attr('id');

            text = obj.val();
            if(text === "") {
                wordcount = 0;
            } else {
                wordcount = $.trim(text).split(" ").length;
            }

            if(wordcount > options.limit) {
                obj.after('<p class="help-block">' + dictionary.max + ' ' + options.limit + ' ' + dictionary.words + '<br/><span id="' + obj_id + '-counter-text"> 0 ' + dictionary.words_left + '</span></p>');
			}else{

                words_left = (options.limit - wordcount);
                if(words_left == 1){
                    obj.after('<p class="help-block">' + dictionary.max + ' ' + options.limit + ' ' + dictionary.words + '<br/><span id="' + obj_id + '-counter-text">1 ' + dictionary.word_left + '</span></p>');
                }else{
                    obj.after('<p class="help-block">' + dictionary.max + ' ' + options.limit + ' ' + dictionary.words + '<br/><span id="' + obj_id + '-counter-text">' + words_left + ' ' + dictionary.words_left + '</span></p>');
                }
			}

            obj.keyup(function() {
                text = obj.val();
                if(text === "") {
                    wordcount = 0;
                } else {
                    wordcount = $.trim(text).split(" ").length;
                }

                if(wordcount > options.limit) {
                    $("#" + obj_id + "-counter-text").html('0 ' + dictionary.words_left);
                    limited = $.trim(text).split(" ", options.limit);
                    limited = limited.join(" ");
                    $(this).val(limited);
                } else {
                    words_left = (options.limit - wordcount);
                    if(words_left == 1){
                        $("#" + obj_id + "-counter-text").html('1 ' + dictionary.word_left);
                    }else{
                        $("#" + obj_id + "-counter-text").html(words_left + ' ' +dictionary.words_left);
                    }
                }
            });
        });
    };
})(jQuery);