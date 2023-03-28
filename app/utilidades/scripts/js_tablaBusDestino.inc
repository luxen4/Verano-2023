
<script>
    // Función que elimina la reserva de un asiento de bus
function eliminarReservaAsiento(asiento){

var ref_Destino=document.getElementById("ref_Destino").value;


 
var parametros = {"ref_Destino":ref_Destino, "asiento":asiento};                // Hago un Ajax para meterlo en su id dentro del Pop-up 

  $.ajax({
    data: parametros, 
    url: "/Verano-2023/app/ajax/eliminarasientobus.php",
    type: "POST",

    beforesend:function(){
        $('#mostrar_mensaje').html("Mensaje antes de enviar!");
    },

    success: function(mensaje)
    {
 
  window.location.href="index.php?ctl=motrarplantabus";

     
    }
   });

}



//--------------------------------------------------------------------------------------------------------------
// Función previa al cambio de estado de una Reserva de Bus
function cambiar(e){
    
    /* $(selector).css("background-color", "cyan");*/
    /* $(selector).html('NO'); */
     
    // $(".bg").css("background-image", "url('/css/images/css.jpg')");
    // https://fernetjs.github.io/2012/04/dom-obteniendo-y-asignando-texto-con-jquery/

    var selector='#plaza_'+e;  
    var textoEstado= $(selector).html();

    var ref_Destino=document.getElementById("ref_Destino").value;
    var asiento=e; 
    
    var estado= textoEstado.replace(/ /g, "");          // Elimina los espacios
    estado= estado.replace(/[\n\r]/g, '');              // Elininar el retorno de carro
    //alert(estado);

    var parametros = {"ref_Destino":ref_Destino, "asiento":asiento, "pagado":estado}; 

    if(estado=='NO'){ 
               alert('Billete Pagado');                                                           
        cambioDeEstado(parametros);
 
    }else{
alert('Billete No Pagado');
        cambioDeEstado(parametros);
        
    }

}


// Función que cambia el estado de una reserva de Bus
function cambioDeEstado(parametros){
$.ajax({
  data: parametros, 
  url: "/Verano-2023/app/ajax/reservasbus/cambiarestadoreserva.php",
  type: "POST",

  beforesend:function(){
      $('#mostrar_mensaje').html("Mensaje antes de enviar!");
  },

  success: function(mensaje)
  {
     // alert(mensaje);
        window.location.href="index.php?ctl=motrarplantabus";
  }});
}
//------------------------------------------------------------------------------------------------------------




    // Función que elimina la Reserva a varios asientos
    function eliminarVariasReservas(){
        alert('entro al ajax');
    }








</script>