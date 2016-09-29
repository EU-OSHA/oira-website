jQuery(document).ready(function () {
//
//     //desplegable menu oira
//     if(jQuery("#edit-field-languagevalue").is(":visible")){
//         jQuery("label[for='edit-field-languagevalue']").addClass("area-shown");
//     };
//

	jQuery('.trim-title').dotdotdot({
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
	    };
	    if(windowWidth <= 750){
	    	jQuery(".breadcrum-container").hide();
	    }else{
	    	jQuery(".breadcrum-container").show();
	    	jQuery(".flickr-credit").show();
	    	//show partners info for tablet and pc
	    	jQuery(".pane-contact-information-partner > .pane-content, .pane-node-field-social-profile > .pane-content, .pane-node-field-collaborator > .pane-content").show();
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

	

	/*specific functions for tablet and/or mobile */
	funcionesPC();

	funcionesTabletMovil();

	funcionesMovil();

	function funcionesPC () {
		if(windowWidth > 992){//<-----functions for PC
			jQuery(".flickr-credit").hide();
			jQuery(".flickr-wrap").hover(function(){
				jQuery(".flickr-credit", this).stop().slideToggle('fast').show();
			});
		}
	}

	function funcionesTabletMovil () {
		if(windowWidth <= 992){//<-----functions for tablet and/or mobile
			
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
			jQuery(".char-anchor:odd").css("background-color", "white");
			jQuery(".char-anchor:odd").next().css("background-color", "white");
			
		}
	}
	
	jQuery(".page-country-profile-eu .country-partner-wrapper").addClass("col-sm-6");
	jQuery(".page-country-profile-eu .country-partner-wrapper").click(function(){
		jQuery(".page-country-profile-eu .country-partner-wrapper").removeClass("active");
		jQuery(".page-country-profile-eu .country-partner-wrapper").addClass("has-open-partner");
		jQuery(this).addClass("active");
		jQuery(this).removeClass("has-open-partner");
	    jQuery("html, body").animate({ scrollTop: 290 }, 600);
	});
	


});
