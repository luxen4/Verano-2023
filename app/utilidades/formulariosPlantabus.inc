          
<script>
        // Función que muestra un formulario de Cliente o No Cliente
        function marcarCheckAsiento(e){alert('entro');
    
    // Marcar el check
    var selector="#asiento_" + e;
    
    
    var marcarCheckAsiento= document.querySelector(selector).checked = true;
      alert(marcarCheckAsiento);
    
        }
    
         // Función que muestra un formulario de Cliente o No Cliente
         function esconderFormPasajero(){
           
            //$(".sentar").toggle();
            $("#formsentarpasajero").toggle();
    
        }
    
// Función que hace desaparecer todos los formularios de Persona
function desaparecerFormulario(e){ //var tipoForm=e.id.indexOf("_");
    
    $(".sentar").css("display", "none");
    var tipoForm=e.id.substring(7);
    aparecerFormularioTipoPersona(tipoForm);
    
}

function asd2(){ //var tipoForm=e.id.indexOf("_");
    alert("entro");
    $("#formnocliente").css("display", "none");
    
}



// Función que hace aparecer el formulario adecuado
function aparecerFormularioTipoPersona(tipoForm){
    var boton="button_"+tipoForm;
    var selector="#" + tipoForm;
    var aparece= document.getElementById(boton).value; 
        
        if(tipoForm=="formnocliente"){
            if(aparece=='Aparecer Pasajero'){
                document.getElementById(boton).value='Esconder Pasajero';
                $(selector).css("display", "block");

            }else if(aparece=='Esconder Pasajero'){
                document.getElementById(boton).value='Aparecer Pasajero';  
            }
        }
        
        if(tipoForm=="formclienteplataforma"){
            if(aparece=='Aparecer Cliente Plataforma'){
                document.getElementById(boton).value='Esconder Cliente Plataforma';
                $(selector).css("display", "block");

            }else if(aparece=='Esconder Cliente Plataforma'){
                document.getElementById(boton).value='Aparecer Cliente Plataforma';  
            }
        }


        if(tipoForm=="formsocioagenciaviajes"){
            if(aparece=='Aparecer Socios Agencia Viajes'){
                document.getElementById(boton).value='Esconder Socios Agencia Viajes';
                $(selector).css("display", "block");

            }else if(aparece=='Esconder Socios Agencia Viajes'){
                document.getElementById(boton).value='Aparecer Socios Agencia Viajes';  
            }
        }
                 
}




// Función que hace apaecer o desaparecer las Reservas de un Bus
function apareceInfoBus(){
    $('#infobus').toggle();
}

    </script>