jQuery(document).ready(function () {

    //dropdown OIRA TOOLS search menu
    var visibleTool1= true;
    var visibleTool2= true;
    var visibleTool3= true;
    
    jQuery("#edit-field-country, #edit-field-languagevalue, #edit-field-sector").hide();
    
    jQuery("label[for='edit-field-country']").click(function(){
        jQuery("#edit-field-country").slideToggle();
        if(visibleTool1){
            visibleTool1= false;
            jQuery(this).addClass("label-row");
            
        }else{
            visibleTool1= true;
            jQuery(this).removeClass("label-row");
        }
        
    });
    jQuery("label[for='edit-field-languagevalue']").click(function(){
        jQuery("#edit-field-languagevalue").slideToggle();
        if(visibleTool2){
            visibleTool2= false;
            jQuery(this).addClass("label-row");
            
        }else{
            visibleTool2= true;
            jQuery(this).removeClass("label-row");
        }
    });
    jQuery("label[for='edit-field-sector']").click(function(){
        jQuery("#edit-field-sector").slideToggle();
        if(visibleTool3){
            visibleTool3= false;
            jQuery(this).addClass("label-row");
            
        }else{
            visibleTool3= true;
            jQuery(this).removeClass("label-row");
        }
    });
    //end dropdown Search menu
});
