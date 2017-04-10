jQuery(document).ready(function () {
//
//     //desplegable menu oira
//     if(jQuery("#edit-field-languagevalue").is(":visible")){
//         jQuery("label[for='edit-field-languagevalue']").addClass("area-shown");
//     };
//

	jQuery('.trim-title').not('[data-partner-nid="91"] .trim-title').dotdotdot({
		ellipsis: '...',
		height: 45,
		watch: true,
		wrap: 'word',
	});


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

	/*fixing sticky menu*/
	/*hight of page*/
	var num = 150; //number of pixels before modifying styles
	if(jQuery("body").height()>=1300){
		jQuery(window).bind('scroll', function () {
		    if (jQuery(window).scrollTop() > num) {
		        jQuery("header").addClass("sticky-menu");
		    } else {
		        jQuery('header').removeClass('sticky-menu');
		    }
		});
	}
	/*end hight of page*/

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
});
