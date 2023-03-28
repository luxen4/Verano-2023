<script>
       
// Función que reserva un Billete de Viaje a un Cliente de la Plataforma o a un Socio de la Agencia de Viajes logueada
function reservar(e){


// Referencia del Destino
var ref_Destino=document.getElementById("ref_Destino").value;
if(e=='clienteplataforma'){ 
    var ref_Cliente=document.getElementById('nombrecliente').value; 
}else if(e=='socio'){ 
    var ref_Cliente=document.getElementById('nombresocio').value;
}
   
// pillar los asientos
//var asientos= $('.checkasiento:checked'); 
var asientos= $('[name="datos[]"]:checked');

var numAsientosSeleccionados=asientos.length;
alert(numAsientosSeleccionados);

var numPlazas=[];

for (var i = 0; i < numAsientosSeleccionados; i++) {
numPlazas.push(asientos[i].value);
}
asientos=numPlazas;

//var pagadono=($('input:radio[name=apellidos]:checked').val());
var pagadosi=($('input:radio[id=pagadosi]:checked').val());
    if(pagadosi=='SI'){ pagado='SI'; }else{ pagado='NO';}

/*
$('.checkasiento:checked').each(function(){
alert(a.value);
})
*/
 
var parametros = {"ref_Destino":ref_Destino, "ref_Cliente":ref_Cliente, "asientos":asientos, "pagado":pagado};

  $.ajax({
    data: parametros, url: "/Verano-2023/app/ajax/reservasbus/reservarAsientosBus.php", type: "POST",
    beforesend:function(){
        $('#mostrar_mensaje').html("Mensaje antes de enviar!");
    },

    success: function(mensaje)
    {
        //var estado= mensaje.replace(/ /g, "");          // Elimina los espacios
        var mensaje= mensaje.replace(/[\n\r]/g, '');        // Elininar el retorno de carro
        alert(mensaje);
        window.location.href="index.php?ctl=motrarplantabus";
    }
   }); 

}

</script>