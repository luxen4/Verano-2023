
<script>
// Función que cambia las fotos de presentación de una Localidad en el Home
    function pasarImagenes78(e){ 
        
    var partes = e.id.split("_");                         
    parte2=partes[1]; 
    

    var ref_Localidad = parte2;
    var selector="#posicionImagen_" + ref_Localidad;
    var valorInput="posicionImagen_" + ref_Localidad;
    var posicion=document.getElementById(valorInput);

    if(partes[0]=="next"){//alert('next');
    numPosicion=parseInt(posicion.value)+1; 

    }else if(partes[0]=="previous"){
    numPosicion=parseInt(posicion.value)-1;

    }
    $(selector).val(numPosicion); 

    var parametros = {"localidad":ref_Localidad, "posicion_Siguiente":numPosicion};    

    $.ajax({
        data: parametros, url: "/Verano-2022/app/ajax/imagenLocalidad.php", type: "POST",

        beforesend:function(){
            $('#mostrar_mensaje').html("Mensaje antes de enviar!");
        },

        success: function(mensaje)
        {   
    
    var selector='.cont_fotoLocalidad' + ref_Localidad;
    $(selector).html(mensaje); 

        }
    });

    }
</script>