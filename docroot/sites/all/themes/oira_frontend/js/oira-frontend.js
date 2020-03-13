jQuery(document).ready(function () {
//
//     //desplegable menu oira
//     if(jQuery("#edit-field-languagevalue").is(":visible")){
//         jQuery("label[for='edit-field-languagevalue']").addClass("area-shown");
//     };
//
	/*Move h2 title position in EU-OSHA Files MDR-2846*/
	jQuery( "#block-system-main .bm-content-panel h2" ).insertBefore( jQuery( "#block-system-main .bm-content-panel div.view-content article.views-row-first" ) );
	jQuery( "#block-system-main .bm-content-panel-gallery h2" ).insertBefore( jQuery( "#block-system-main .bm-content-panel-gallery  div.view-content article.views-row-first" ) );
	
	jQuery('.trim-title').not('[data-partner-nid="91"] .trim-title').dotdotdot({
		ellipsis: '...',
		height: 45,
		watch: true,
		wrap: 'word',
	});
	
	if (jQuery(window).width() < 760){
		
		var newstitle = jQuery('.front .view-news .field-name-title-field h4 a').text();
		if (newstitle.length > 80){
			var shortTextTitle = jQuery.trim(newstitle).substring(0, 80)+"...";
			jQuery('.front .view-news .field-name-title-field h4 a').text(shortTextTitle);
		}

		var newsbody = jQuery('.front .view-news .field-name-body .field-item').text();
		if (newsbody.length > 130){
			var shortText = jQuery.trim(newsbody).substring(0, 130)+"...";
			var $button = jQuery('.front .view-news .views-row .field-name-body .field-item .more-link').clone();
  			jQuery('.front .view-news .field-name-body .field-item').text(shortText);
			jQuery(".front .view-news .views-row .field-name-body").append('<span></span>');
			jQuery('.front .view-news .views-row .field-name-body span').html($button);
		}
	}

	var windowWidth= jQuery(window).width();//window size

	jQuery(window).resize(function() {
	    windowWidth= jQuery(window).width();//window size, when resizing
	    if(windowWidth > 992){
	    	//jQuery("#block-search-form input").css("display", "block");
	    	jQuery("#block-search-form input").show();
	    	jQuery(".quicktabs-tabs-container").show();
	    	jQuery(".input-search-display").css("display" , "none");
	    	//jQuery(".hwc-alphabet-container").css("display", "block");
	    }
	    if(windowWidth <= 750){
	    	jQuery(".breadcrum-container").hide();
	    }else{
	    	jQuery(".breadcrum-container").show();
	    	jQuery(".flickr-credit").show();
	    	//show partners info for tablet and pc
	    	jQuery(".pane-contact-information-partner > .pane-content, .pane-node-field-social-profile > .pane-content, .pane-node-field-collaborator > .pane-content").show();
	    	//jQuery(".hwc-alphabet-container").css("display", "none");
	    }

	});

	//slidedown partners info for mobile only
	jQuery(".partner-contact-container, .partner-social-container, .partner-colaborators-container").click(function(){
		if(windowWidth <= 750){
			jQuery( ".pane-contact-information-partner, .pane-node-field-social-profile, .pane-node-field-collaborator",this).children().eq(1).toggle();
			if(jQuery( ".pane-contact-information-partner, .pane-node-field-social-profile, .pane-node-field-collaborator",this).children().eq(1).is(':visible')){
				jQuery( ".pane-contact-information-partner, .pane-node-field-social-profile, .pane-node-field-collaborator",this).children().eq(0).addClass("arrow-up");
			}else{
				jQuery( ".pane-contact-information-partner, .pane-node-field-social-profile, .pane-node-field-collaborator",this).children().eq(0).removeClass("arrow-up");
			}
		}
	});

	//bordes en articulos segun contenido de columnas
	var nColumnas=jQuery("#mini-panel-related_content > .panels-flexible-new-inside > div").length;
	var nWiki=jQuery("#mini-panel-related_content > .panels-flexible-new-inside > .panels-flexible-column-new-1").length;
	var nPubli=jQuery("#mini-panel-related_content > .panels-flexible-new-inside > .panels-flexible-column-new-main").length;
	var nNew=jQuery("#mini-panel-related_content > .panels-flexible-new-inside > .panels-flexible-column-new-2").length;

	switch (nColumnas){
		case 0:
			break;
		case 1:
			break;
		case 2:
			if(nWiki == 1){
				jQuery("#mini-panel-related_content > .panels-flexible-new-inside .panels-flexible-column-new-1").css("border-right", "10px solid white");	
			}
			if(nPubli == 1 && nNew == 1){
				jQuery("#mini-panel-related_content > .panels-flexible-new-inside .panels-flexible-column-new-main").css("border-right", "10px solid white");
			}
			break;
		case 3:
			jQuery("#mini-panel-related_content > .panels-flexible-new-inside .panels-flexible-column-new-1").css("border-right", "10px solid white");
			jQuery("#mini-panel-related_content > .panels-flexible-new-inside .panels-flexible-column-new-main").css("border-right", "10px solid white");
			break;
	}

	//add bootstrap when are 2 partners in a country
	jQuery(".page-country-profile .pane-oira-partner-oira-partner-country .partners-no-2 > div").addClass('col-sm-6');
	jQuery(".focal-poin-partner-text").removeClass('col-md-12').removeClass('col-sm-6');

	//add generic class for pages that contains more than 2 partners
	if ( jQuery(".country-more-partners").length ) {
		jQuery("body").addClass("more-than-two-partners");
	}

	//country spain layout
	jQuery("div[data-partner-nid*='91']").appendTo(".page-taxonomy-term-40.page-country-profile .partners-no-2");
	
	//zoom images esener
	jQuery('.pop').on('click', function() {
		jQuery('.imagepreview').attr('src', jQuery(this).find('img').attr('src'));
		jQuery('.modal.fade').modal('show');   
	});

	//display menu of pz
	jQuery('.toogle-content-switcher .show-link').hide();
	jQuery('.toogle-content-switcher .hide-link').click(function(){
		jQuery('.toogle-content-switcher .show-link').show();
		jQuery('.toogle-content-switcher .hide-link').hide();
		jQuery('h2.block-title').css({"border-bottom":"2px solid #786586", "margin-bottom": "0px", "padding-bottom":"22px"});
	});
	jQuery('.toogle-content-switcher .show-link').click(function(){
		jQuery('.toogle-content-switcher .hide-link').show();
		jQuery('.toogle-content-switcher .show-link').hide();
	});
 
 	/*specific functions for pc, tablet and mobile */
	funcionesPc();

	funcionesPcTablet();

	funcionesTabletMovil();

	funcionesMovil();

	function funcionesPc () {
		if(windowWidth > 992){//<-----functions for Pc
			jQuery(".flickr-credit").hide();
			jQuery(".flickr-wrap").hover(function(){
				jQuery(".flickr-credit", this).stop().slideToggle('fast').show();
			});
		}
	}

	function funcionesPcTablet () {
		if(windowWidth > 750){//<-----functions for Pc and/or tablet

			//add automatic scroll for eu partners
			jQuery(".page-country-profile-eu .country-partner-wrapper").addClass("col-sm-6");
			jQuery(".page-country-profile-eu .country-partner-wrapper").click(function(){
				jQuery(".page-country-profile-eu .country-partner-wrapper").removeClass("active");
				jQuery(".page-country-profile-eu .country-partner-wrapper").addClass("has-open-partner");
				jQuery(this).addClass("active");
				jQuery(this).removeClass("has-open-partner");
			    jQuery("html, body").animate({ scrollTop: 290 }, 600);
			});
		}
	}

	function funcionesTabletMovil () {
		if(windowWidth <= 992){//<-----functions for tablet and/or mobile
			jQuery(".input-search-display").css("display" , "block");
			//search header al hacer click
			jQuery(".input-search-display").click(function(){
				//e.preventDefault();
				jQuery("#block-search-form input").stop().show({direction: 'left'}, 500);
				jQuery(".input-search-display").css("display" , "none");
				//return false;
			});
			jQuery("#block-search-form").mouseleave(function(){
				jQuery("#block-search-form input").stop().hide({direction: 'left'}, 500);
				jQuery(".input-search-display").css("display" , "block");
			});


			//menu dropdown
			jQuery(".dropdown-menu").hide();
			jQuery(".expanded.dropdown").click(function(){
				jQuery(".dropdown-menu").slideUp();
				if(jQuery(".dropdown-menu", this).is(":visible")){
					jQuery(".dropdown-menu", this).slideUp();
					jQuery(".dropdown-toggle").removeClass("down-arrow");
				}
				else{
					jQuery(".dropdown-menu", this).slideDown();
					jQuery(".dropdown-toggle").removeClass("down-arrow");
					jQuery(".dropdown-toggle", this).addClass("down-arrow");
				};
			});
			//hide breadcrum when click menu icon
			jQuery(".navbar-toggle").click(function(){
				if(windowWidth <= 992 && windowWidth >750){
					if(jQuery(".navbar-collapse.collapse").hasClass("in")){
						jQuery(".breadcrum-container").stop().show();
					}else{
						jQuery(".breadcrum-container").stop().hide();
					}
				}
			});

		}//<-----End: functions for tablet and/or mobile
	}

	function funcionesMovil () {
		if(windowWidth <= 750){//<-----functions for mobile

			//change background to alphabet partners list
			//jQuery(".char-anchor:odd").css("background-color", "white");
			//jQuery(".char-anchor:odd").next().css("background-color", "white");
		
			//add automatic scroll for eu partners
			jQuery(".page-country-profile-eu .country-partner-wrapper").addClass("col-sm-6");
			jQuery(".page-country-profile-eu .country-partner-wrapper").click(function(){
				jQuery(".page-country-profile-eu .country-partner-wrapper").removeClass("active");
				jQuery(".page-country-profile-eu .country-partner-wrapper").addClass("has-open-partner");
				jQuery(this).addClass("active");
				jQuery(this).removeClass("has-open-partner");
			    jQuery("html, body").animate({ scrollTop: jQuery(this).offset().top }, 300);
			});

			//hide filters buttons on clik and show on select filter
			jQuery(".quicktabs-toggle").click(function(){
				jQuery(this).hide();
				jQuery(".toggle-alpha-pager").hide();
				jQuery(".quicktabs-filters-clear").hide();
			});
			jQuery(".toggle-alpha-pager").click(function(){
				jQuery(this).hide();
				jQuery(".quicktabs-toggle").hide();
			});
			jQuery(".quicktabs-tabs-container li a").click(function(){
				jQuery(".quicktabs-toggle").show();
				jQuery(".toggle-alpha-pager").show();
				jQuery(".quicktabs-filters-clear").show();
				jQuery(".quicktabs-tabs-container").hide();
				//jQuery(".hwc-alphabet-container").hide();
			});
			jQuery(".hwc-alphabet-container").click(function(){
				jQuery(".quicktabs-toggle").show();
				jQuery(".toggle-alpha-pager").show();
				jQuery(this).hide();
				//jQuery(".quicktabs-tabs-container").hide();
			});
		}
	}
	
	/*
	jQuery("input[type=file]").filestyle({ 
	     image: "../images/icons/choose-file.png",
	     imageheight : 32,
	     imagewidth : 82
	 });
	*/

	jQuery(".partner-edit-form input, .partner-edit-form textarea").attr("disabled","disabled").css("cursor", "default");

	// jQuery('.menu-name-menu-private-zone ul.menu').slick({
	//   infinite: true,
	//   slidesToShow: 4,
	//   slidesToScroll: 1
	// });


	// function and variables, 'unslick' while window size reach maximum width (641px)
    var maxWidth = 991,
     maxWidth2= 991,
      slickVar = {
        lazyLoad: 'progressive',
        dots: false,
        infinite: true,
        slidesToShow: 4,
        slidesToScroll: 1,
        mobileFirst: true,
        centerMode: true,
        initialSlide: 0,
        responsive: [
          {
            breakpoint: maxWidth,
            settings: 'unslick'
          }
        ]
      },
      runSlick = function() {
        jQuery('.menu-name-menu-private-zone ul.menu').slick(slickVar);
      };

      // slick initialization while document ready
      runSlick();

      // listen to jQuery's window resize
      jQuery(window).on('resize', function(){
        var width = jQuery(window).width();
        if(width < (maxWidth-16)) {
          // reinit slick while window's width is less than maximum width (641px)
          runSlick();
        }
      });

	jQuery('.page-node-collaboration-area-private-images ul.private-images li .views-field-field-oira-private-image-1 a').each(
		function(){
			var idx = jQuery(this).attr('href').lastIndexOf("/") + 1;
			var filename = jQuery(this).attr('href').substr(idx);
			jQuery(this).prop('download',filename);
		}
	);

	jQuery('.page-node-bulk-upload .page-content > div:eq(1)').addClass("bulk-upload");

});
	


jQuery(document).ready(function () {
	/* Hide IRAT parnet description */
	//hide type field
	jQuery('.pane-node-field-partner-type').hide();
	//if type field is IRAT partners we hide focal point text
	if (jQuery('.field-name-field-partner-type div div').text().indexOf('IRAT partners') > -1) {
		jQuery('.pane-focal-point-text').hide();
		jQuery('.panels-flexible-row-last').css('padding-bottom','0');
	}
});


/* Sticky menu */
// Menu scroll
/* Sticky menu revamp desing */
(function( $ ){
	$(document).ready(function() {

		var prevScrollpos = $(window).offset.top;
		
		$('header').addClass('fixedHeader');


		$(window).scroll(function(){
	    var currentScrollPos = $(window).scrollTop();
      if(prevScrollpos > currentScrollPos)
      {
        $('header').removeClass('hide-header');
      }
      else
      {
				$('header').addClass('hide-header');
				if( ($(this).scrollTop() <= 80) )
				{
					$('header').removeClass('hide-header');
				}		        
      }
	    prevScrollpos = currentScrollPos;
	  });
	
	});
})( jQuery );


