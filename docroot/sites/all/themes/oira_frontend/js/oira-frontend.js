jQuery(document).ready(function () {
//
//     //desplegable menu oira
//     if(jQuery("#edit-field-languagevalue").is(":visible")){
//         jQuery("label[for='edit-field-languagevalue']").addClass("area-shown");
//     };
//

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

});
