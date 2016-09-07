jQuery(document).ready(function () {
//
//     //desplegable menu oira
//     if(jQuery("#edit-field-languagevalue").is(":visible")){
//         jQuery("label[for='edit-field-languagevalue']").addClass("area-shown");
//     };
//

	var windowWidth= jQuery(window).width();//window size

	jQuery(window).resize(function() {
	    windowWidth= jQuery(window).width();//window size, when resizing
	    if(windowWidth > 992){
	    	//jQuery("#block-search-form input").css("display", "block");
	    };
	    if(windowWidth <= 750){
	    	jQuery(".breadcrum-container").hide();
	    }else{
	    	jQuery(".breadcrum-container").show();
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

	

	/*specific functions for tablet and/or mobile */
	funcionesTabletMovil();

	funcionesMovil();

	function funcionesTabletMovil () {
		if(windowWidth <= 992){//<-----functions for tablet and/or mobile
			
			//search header al hacer hover
			jQuery("#block-search-form button").hover(function(){
				jQuery("#block-search-form input").stop().show({direction: 'left'}, 500);
			});
			jQuery("#block-search-form").mouseleave(function(){
				jQuery("#block-search-form input").stop().hide({direction: 'left'}, 500);
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
			//hide breadbrum when click menu icon
			jQuery(".navbar-toggle").click(function(){
				if(jQuery(".navbar-collapse.collapse").hasClass("in")){
					jQuery(".breadcrum-container").stop().show();
				}else{
					jQuery(".breadcrum-container").stop().hide();
				}
			});

		}//<-----End: functions for tablet and/or mobile
	}

	function funcionesMovil () {
		if(windowWidth <= 767){//<-----functions for mobile

		}
	}
	jQuery(".flickr-credit").hide();
	jQuery(".flickr-wrap").hover(function(){
		jQuery(".flickr-credit", this).stop().slideToggle('fast').show();
	});

});
