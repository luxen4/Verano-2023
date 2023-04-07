<?php


// Función que codifica a utf8 un dato (String), valorando en qué servidor estamos
 function pasarUtf8($nombre){

    if($_SERVER['SERVER_NAME']=="localhost"){
      $dato=$nombre;
      return $dato;
    }else{   
      $dato= utf8_encode ($nombre);
      return $dato;
    }

}


 
?>

<script>
// Cuando cargue, va a calcular la tºC
    $(document).ready(function () {
      var latitudes = $("#latitud").val();
      var longitudes = $("#longitud").val(); 
      
    var parametros = {"latitude":latitudes, "longitude":longitudes};                

$.ajax({
  data: parametros, 
  url: "/Verano-2023/app/ajax/elTiempo.php",
  type: "POST",

  beforesend:function(){
      $('#mostrar_mensaje').html("Mensaje antes de enviar!");
  },

  success: function(mensaje)
  {
  //alert(mensaje);


    let arr = mensaje.split('_');
    $('#nombre_localidad').html(arr[0]);
    var img='<img src="http://openweathermap.org/img/w/';
    img=img + arr[1];
    img=img + '.png" class="weather-icon" />';

    $('#iconotiempo_localidad').html(img);
    $('#temperatura_localidad').html(arr[2]);
  }
 });
});





// Función que selecciona el checkbox cuando se ejecuta el submit
function selecciona(codigo){
  var seleccionar=document.getElementById(codigo).checked = true;
  $('#ref_Destino').value=codigo;
}

// Función que selecciona el checkbox cuando se ejecuta el submit
function seleccionaCheckLocalidadParaHoteles(codigo){
  var seleccionar=document.getElementById(codigo).checked = true;
  $('#ref_Destino').value=codigo;
}


// Función que selecciona el checkbox cuando se ejecuta el submit para seleccionar la Agencia de Viajes
function seleccionaRefAgenciaViajes(ref_AgenciaViajes){

  //var selector="popup_" + ref_AgenciaViajes;
  
  var selector=ref_AgenciaViajes
  var seleccionar=document.getElementById(selector).checked = true;
  
 // var seleccionar=document.getElementById(ref_AgenciaViajes.id).checked = true;
}

function seleccionaRefAgenciaViajes3(ref_AgenciaViajes){
var selector="popup_" + ref_AgenciaViajes;
var seleccionar=document.getElementById(selector).checked = true;

// var seleccionar=document.getElementById(ref_AgenciaViajes.id).checked = true;
}


// Función que selecciona el checkbox Agencia de Viajes e inserta nombre y horario en el Pop_Up
function seleccionaRefAgenciaViajes2(ref_AgenciaViajes, nombre_Agencia){
  //var seleccionar=document.getElementById(ref_AgenciaViajes.id).checked = true;
var seleccionar=document.getElementById('nombre_AgenciaViajes').innerHTML=nombre_Agencia;

var parametros = {"ref_AgenciaViajes":ref_AgenciaViajes.id};                // Hago un Ajax para meterlo en su id dentro del Pop-up 

  $.ajax({
    data: parametros, 
    url: "/Verano-2023/app/ajax/horario_AgenciaViajes.php",
    type: "POST",

    beforesend:function(){
        $('#mostrar_mensaje').html("Mensaje antes de enviar!");
    },

    success: function(mensaje)
    {
    //alert(mensaje);
      $('#horario_AgenciaViajes').html(mensaje);
    }
   });

}


// Función 
function desaparecerformpasajero(asiento){
  alert('jhgjkhgkjgh');
//var seleccionar=document.getElementById(ref_AgenciaViajes.id).checked = true; 
// $("#button_desaparecer").click(function() {	
//$("#formsentarpasajero").toggle();
     // alert('entro');
//$("#formsentarpasajero").css("display", "none");
//window.location.href="index.php?ctl=inicio";
//} );

// ref_Destino
/*
var ref_Destino=document.getElementById("ref_Destino").value;
alert(ref_Destino);  // Referencia del Destino
alert(asiento); //Nº de asiento

 
var parametros = {"ref_Destino":ref_Destino, "asiento":asiento};                // Hago un Ajax para meterlo en su id dentro del Pop-up 

  $.ajax({
    data: parametros, 
    url: "/Verano-2023/app/ajax/horario_AgenciaViajes.php",
    type: "POST",

    beforesend:function(){
        $('#mostrar_mensaje').html("Mensaje antes de enviar!");
    },

    success: function(mensaje)
    {
    //alert(mensaje);
      $('#horario_AgenciaViajes').html(mensaje);
    }
   });


*/
}


// Función que elimina la reserva de un asiento de bus
function eliminarReservaAsiento(asiento){

var ref_Destino=document.getElementById("ref_Destino").value;
alert(ref_Destino);  // Referencia del Destino
alert(asiento); //Nº de asiento

 
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
 
  window.location.href="index.php?ctl=informacionbusdestino";

     
    }
   });

}



function horarios(e){
       // alert(e.id); 


    var parametros = {"ref_AgenciaViajes":e.id};                // Hago un Ajax para meterlo en su id dentro del Pop-up 

  $.ajax({
    data: parametros, 
    url: "/Verano-2023/app/ajax/horario_AgenciaViajes.php",
    type: "POST",

    beforesend:function(){
        $('#mostrar_mensaje').html("Mensaje antes de enviar!");
    },

    success: function(mensaje)
    {
     // alert(mensaje);
      $('#horario_AgenciaViajes').html(mensaje);
    }
   });


 
   $.ajax({
    data: parametros, 
    url: "/Verano-2023/app/ajax/telefono_AgenciaViajes.php",
    type: "POST",

    beforesend:function(){
        $('#mostrar_mensaje').html("Mensaje antes de enviar!");
    },

    success: function(mensaje)
    {
     // alert(mensaje);
      $('#telefono_AgenciaViajes').html(mensaje);
    }
   });

    }



// Función que marca el checkbox de referencia de Negocio
function marcarReferencia(codigo){
  var codigo1="codigo0" + codigo.id 
  var seleccionar=document.getElementById(codigo1).checked = true;
}


// Función que al presionar en comer en, deselecciona los checkboxes que puedan estar seleccionados
// Seguridad cuando se vuelve para atrás no se quede seleccionado.
function deselecionaTodosChecks(){
  var seleccionar=document.getElementsByClassName('case');

  for (var i = 0; i < seleccionar.length; i+=1) {
    seleccionar[i].checked=false;
  }

}

// En la tabla de Destinos de una Agencia de Viajes
function deselecionaTodosChecksDestinos(){
  var seleccionar=document.getElementsByClassName('checksdestinos');

  for (var i = 0; i < seleccionar.length; i+=1) {
    seleccionar[i].checked=false;
  }
}

// Función que crea una Sesión de una referencia de DEstino
function ajaxSesion(ref_Destino){
  alert("ref_Destino " + ref_Destino);

var parametros = {"ref_Destino":ref_Destino};                // Hago un Ajax para meterlo en su id dentro del Pop-up 

$.ajax({
  data: parametros, 
  url: "/Verano-2023/app/ajax/sesion-ref_Destino.php",
  type: "POST",

  beforesend:function(){
     // $('#mostrar_mensaje').html("Mensaje antes de enviar!");
  },

  success: function(mensaje)
  {
    alert(mensaje);
    window.location.href="index.php?ctl=motrarplantabus";
  }
});
}



// Para cancelar Billetes de Viaje de un Cliente //

// Función que inserta en el campo el id de Destino cuando se ejecuta el submit de cancelar un billete en tabla
  function insertaIdDestino(codigo){
  var codigo=codigo+"cod";
  var seleccionar=document.getElementById(codigo).checked = true; 
}

// Función que selecciona el checkbox cuando se ejecuta el submit
function seleccionaPlaza(plaza){
  var plaza=plaza+"pla";
  var seleccionar2=document.getElementById(plaza).checked = true;
  
}




// Función que hace cambiar el color del asiento si se encuentra libre
  function selecciona2(codigo){

     if(document.getElementById(codigo).checked ==false){
         seleccionar=document.getElementById(codigo).checked = true;
         var asiento="asiento" + codigo;
         document.getElementById(asiento).style.background="green";
        
 
     }else if(document.getElementById(codigo).checked ==true){
       var seleccionar=document.getElementById(codigo).checked = false;
       var asiento="asiento" + codigo;
       document.getElementById(asiento).style.background="white";
     }
   }




   
</script>



<script>
// Ajax //

  
// Función Ajax que hace sumar un voto a un Negocio.
  function sumarVoto(r){

    var username= document.getElementById('username').value;  //alert(username);

    var parametros = {"nombre":"dostin","apellido":"hurtado",
        "username":username,
        "ref_Negocio":r.id
    };

    var mostrar_mensaje='.mostrar_mensaje'+r.id;   //alert(mostrar_mensaje);

  $.ajax({
    data: parametros, 
    url: "/Verano-2023/app/ajax/codigoSumar1Voto.php",
    type: "POST",

    beforesend:function(){
        $('#mostrar_mensaje').html("Mensaje antes de enviar!");
    },

    success: function(mensaje)
    {
        $(mostrar_mensaje).html(mensaje);
     
     // $(this).parent('.mostrar_mensaje').html(mensaje);;
    }
   });
}


// Función que extrae las opiniones de un Negocio.
function refNegocioOpiniones(r){

  var seleccionar=document.getElementById('refnegocioOpiniones').value = r.id;
  seleccionar=document.getElementById('refnegocioOpiniones').checked = true; 

var parametros = {"ref_Negocio":r.id};                // Hago un Ajax para meterlo dentro del Pop-up, le doy la referencia

$.ajax({
  data: parametros, 
  url: "/Verano-2023/app/ajax/opiniones_1negocio.php",
  type: "POST",

  beforesend:function(){
      $('#mostrar_mensaje').html("Mensaje antes de enviar!");
  },

  success: function(mensaje)
  {

    var string=""; 
    var mensaje = JSON.parse(mensaje);

        if(Object.getOwnPropertyNames(mensaje).length==0){// Sabemos si tiene propiedades, si está vacio
          $('#opinionesdeunnegocio').html('<span style="color:red"> No se ha comentado todavía sobre este establecimiento!</span>');  
        }else{

        for (var i = 0; i < mensaje.length; i++) {

                  string= string + '<h6>' + mensaje[i].username + ': <span id="carita' + mensaje[i].username + '"></span></h6>';
                  // Lamada al Ajax para su carita
                  var username=mensaje[i].username;
                  var ref_negocio=r.id;

                  caritaAjax(username, ref_negocio);
                  //as();
                  string= string + '<p style="margin-top:0.5em;">' + mensaje [i].texto_Opinion + '</p><hr>' 
            }


              $('#opinionesdeunnegocio').html(string);  

              
             
        }

  }
 });

gradoSatisfacionBarra(r.id, 5, "#barra_excelente", '#textoporcentaje5');
gradoSatisfacionBarra(r.id, 4, "#barra_muybueno", '#textoporcentaje4');
gradoSatisfacionBarra(r.id, 3, "#barra_normal", '#textoporcentaje3');
gradoSatisfacionBarra(r.id, 2, "#barra_malo", '#textoporcentaje2');
gradoSatisfacionBarra(r.id, 1, "#barra_pesimo", '#textoporcentaje1');

} 

// Función que devuelve el grado de satisfación de un cliente en un negocio
function caritaAjax(username, ref_negocioparaAjax){
  
  alert("Carita" + username);
  var parametros = {"ref_NegocioparaAjax":ref_negocioparaAjax, "username_cliente":username};                // Hago un Ajax para meterlo en su id dentro del Pop-up 

  $.ajax({
    data: parametros, 
    url: "/Verano-2023/app/ajax/satisfacion/gradoCaritaClienteNegocio.php",
    type: "POST",

    beforesend:function(){
        $('#mostrar_mensaje').html("Mensaje antes de enviar!");
    },

    success: function(mensaje)
    {
     
var carita='#carita' + username;
var mensajeCarita="";

if(mensaje==5){
mensajeCarita = '<i id="muybueno-4" style="padding-top: 0.1em;" class="fa-regular fa-face-grin-hearts fa-2x"></i>'; 
}

if(mensaje==4){
  //alert("entroooo");
  
  mensajeCarita = '<i id="muybueno-4" style="padding-top: 0.1em;" class="fa-regular fa-face-grin-wide fa-2x"></i>'; 
  //alert(carita);
  
} 

if(mensaje==3){
mensajeCarita = '<i id="muybueno-4" style="padding-top: 0.1em;" class="fa-regular fa-face-meh fa-2x"></i>'; 
} 

if(mensaje==2){
mensajeCarita = '<i id="muybueno-4" style="padding-top: 0.1em;" class="fa-regular fa-face-frown fa-2x"></i>'; 
}

if(mensaje==1){
mensajeCarita = '<i id="muybueno-4" style="padding-top: 0.1em;" class="fa-regular fa-face-angry fa-2x"></i>'; 
}


$(carita).html(mensajeCarita);



     
    }
   });

}



function gradoSatisfacionBarra(ref_negocioparaAjax, num_barra, nombre_barra, texto_barra){

var parametros = {"ref_NegocioparaAjax":ref_negocioparaAjax, "num_barra":num_barra};                // Hago un Ajax para meterlo en su id dentro del Pop-up 

  $.ajax({
    data: parametros, 
    url: "/Verano-2023/app/ajax/satisfacion/gradoSatisfacion.php",
    type: "POST",

    beforesend:function(){
        $('#mostrar_mensaje').html("Mensaje antes de enviar!");
    },

    success: function(mensaje)
    {
   // alert(mensaje);
      var mensaje = JSON.parse(mensaje);
      var porcentaje=(100 * mensaje.tuplasSatisfacionBarra) / mensaje.tuplasSatisfacion;
      
      $(nombre_barra).html('<div class="a-meter-bar" style="width:' + porcentaje + '%;"> </div>');

      if(isNaN(porcentaje)){
        $(texto_barra).html("0%");
       
      }else{
         $(texto_barra).html(porcentaje.toFixed(1) + "%");
      }
       
     
    }
   });
}



function as(){
  alert("as");
}




// Función que devuelve a un Pop-up el nombre de un Negocio
function nombreNegocioParaMenu(r){

var parametros = {"ref_Negocio":r.id};                // Hago un Ajax para meterlo en su id dentro del Pop-up 



  $.ajax({
    data: parametros, 
    url: "/Verano-2023/app/ajax/nombre_negocio.php",
    type: "POST",

    beforesend:function(){
        $('#mostrar_mensaje').html("Mensaje antes de enviar!");
    },

    success: function(mensaje)
    {   



        $('#nombre_negocio').html(mensaje);  
        $('#ref_negocio').val(r.id);  
  
        extraerMenu(r.id);
     
    }
   });
}
 
 
// Función que devuelve a un Pop-up el nombre de un Negocio y la foto del menú del día
function extraerMenu(ref_negocio){

var parametros = {"ref_Negocio":ref_negocio};                // Hago un Ajax para meterlo en su id dentro del Pop-up 

  $.ajax({
    data: parametros, 
    url: "/Verano-2023/app/ajax/menu_negocio.php",
    type: "POST",

    beforesend:function(){
        $('#mostrar_mensaje').html("Mensaje antes de enviar!");
    },

    success: function(mensaje)
    {


    var string=""; 
    var mensaje = JSON.parse(mensaje);

       

                  string= string + '<h6>' + mensaje[i].username + ': <span id="carita' + mensaje[i].username + '"></span></h6>';
                



      var mensaje='<img class="d-block w-100" src=' + mensaje + '>';





        $('#menu_negocio').html(mensaje);  
     
    }
   });


//$('#menu_negocio').html('<img class="d-block w-100" src="web/imagenes/carrusel/playa-zarautz1.jpg" alt="Zarautz slide">');  

//$('#menu_negocio').html('<img class="d-block w-100" src="https://media-cdn.tripadvisor.com/media/photo-w/12/64/5a/43/photo5jpg.jpg">');  
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Función que cambia las fotos de presentación de una Localidad en el Home
function mostrarImagenLocalidad(e){  
  var refLocalidad=e.id.split("-",3); 
  var nombreImagen=refLocalidad[0];
  var mensaje='<img style="" class="d-block w-100" src="web/imagenes/localidades/' + nombreImagen + '">';

  var selector='.cont_fotoLocalidad' + refLocalidad[1];
  $(selector).html(mensaje);  
 
}


// Función que cambia las fotos de presentación de una Localidad en el Home
function pasarImagenes(e){ 
  var partes = e.id.split("_");                         
  parte2=partes[1]; 
  

 var ref_Localidad = parte2;
 var selector="#posicionImagen_" + ref_Localidad;
 var valorInput="posicionImagen_" + ref_Localidad;
 var posicion=document.getElementById(valorInput);

if(partes[0]=="next"){
numPosicion=parseInt(posicion.value)+1; 

}else if(partes[0]=="previous"){
numPosicion=parseInt(posicion.value)-1;

}
$(selector).val(numPosicion); 

var parametros = {"localidad":ref_Localidad, "posicion_Siguiente":numPosicion};    

$.ajax({
    data: parametros, url: "/Verano-2023/app/ajax/imagenLocalidad.php", type: "POST",

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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 


// Función que devuelve a un Pop-up la imagen que debe mostrar de un menú del dia Personal
function imagen(ref_MenuPersonal){
    ref_MenuPersonal=ref_MenuPersonal.id;
    var parametros = {"ref_MenuPersonal":ref_MenuPersonal};                // Hago un Ajax para meterlo en su id dentro del Pop-up 

  $.ajax({
    data: parametros, 
    url: "/Verano-2023/app/ajax/menuImagenPersonal_negocio.php",
    type: "POST",

    beforesend:function(){ $('#mostrar_mensaje').html("Mensaje antes de enviar!");
    },

    success: function(mensaje)
    {
    
    //  $(mostrar_mensaje).html(mensaje);
     $('#aquui1').html(mensaje);  
    // $('#aquui').html('<img src="archivos/targ.png">');  
     
    }
   });

}
  


// Función que prepara los campos del formulario de menú del día
function prepararCamposMenu(e){
  alert("Preparando los campos");
 var aparecer=document.getElementById('menu_MOD-0');
 alert(
   

  
 );

}





 
  


// Función que devuelve a un Pop-up el nombre de un Negocio
function nombreNegocio(r){
//alert("voy");
var seleccionar=document.getElementById('refnegocio2').value = r.id;                 // Para la referencia en el checkbox
seleccionar=document.getElementById('refnegocio2').checked = true; 
//var refnegocioOpiniones=document.getElementById('refn').innerHTML="Ref: " + r.id;   // Para mostrar la referencia


var parametros = {"ref_Negocio":r.id};                // Hago un Ajax para meterlo en su id dentro del Pop-up 

  $.ajax({
    data: parametros, 
    url: "/Verano-2023/app/ajax/nombre_negocio.php",
    type: "POST",

    beforesend:function(){
        $('#mostrar_mensaje').html("Mensaje antes de enviar!");
    },

    success: function(mensaje)
    {

        $('#nombre_negocio_tuopinion').html(mensaje);  // si es un h6
        $('#nombre_negocio_todasopiniones').html(mensaje);
     
    
    }
   });

//setTimeout(() => {  document.getElementById(seleccionar).value = "uy";  }, 2000);

}



function restarVoto(r){
  //window.open("https://javascript.info/"); // Esto creo sustituiria a un enlace


/*  let newWin = window.open("about:blank", "hello", "width=200,height=200");
  newWin.document.write("Hello, world!");
  */

/*
  let newWindow = open("/", "example", "width=300,height=300");
newWindow.focus();

alert(newWindow.location.href); // (*) about:blank, loading hasn't started yet

newWindow.onload = function() {
  let html = `<div style="font-size:30px">Welcome!</div>`;
  newWindow.document.body.insertAdjacentHTML("afterbegin", html);
};
*/

/*
let newWin = window.open("about:blank", "hello", "width=200,height=200");

newWin.document.write(
  "<script>window.opener.document.body.innerHTML = 'Test'<\/script>"
);
*/

/*
let newWindow = open("/", "example", "width=300,height=300");

newWindow.onload = function () {
  newWindow.close();
  alert(newWindow.closed); // true
};
*/


/*
var result = window.confirm("message");

if (window.confirm("Do you really want to leave?")) {
  window.open("exit.html", "Thanks for Visiting!");
}
*/

/*
var resultado = window.confirm('Estas seguro?');
if (resultado === true) {
    window.alert('Okay, si estas seguro.');
} else { 
    window.alert('Pareces indeciso');
}
*/

/*

swal("Oops!", "Something went wrong on the page!", "error");

swal({
  title: "Are you sure?",
  text: "Your will not be able to recover this imaginary file!",
  type: "danger",
  showCancelButton: true,
  confirmButtonClass: "btn-danger",
  confirmButtonText: "Yes, delete it!",
  closeOnConfirm: false
});

swal("Deleted!", "Your imaginary file has been deleted.", "success");

swal({  icon: "error",});*/
/*
Swal
    .fire({
        title: "Tu nombre",
        input: "text",
        showCancelButton: true,
        confirmButtonText: "Guardar",
        cancelButtonText: "Cancelar",
        inputValidator: nombre => {
            // Si el valor es válido, debes regresar undefined. Si no, una cadena
            if (!nombre) {
                return "Por favor escribe tu nombre";
            } else {
                return undefined;
            }
        }
    })
    .then(resultado => {
        if (resultado.value) {
            let nombre = resultado.value;
            console.log("Hola, " + nombre);
        }
    });
    */

    var username= document.getElementById('username').value;  //alert(username);

    var parametros = {"ref_Negocio":r.id,"username":username};

    var mostrar_mensaje='.mostrar_mensaje'+r.id; //alert("Voy a restar voto");  alert(mostrar_mensaje);

  $.ajax({
    data: parametros, 
    url: "/Verano-2023/app/ajax/codigoRestar1Voto.php",
    type: "POST",

    beforesend:function(){
        $('#mostrar_mensaje').html("Mensaje antes de enviar!");
    },

    success: function(mensaje)
    {
        $(mostrar_mensaje).html(mensaje);
    }
   });
}
</script>

<script>


// Función que inserta en la tabla SATISFACIONUSERNAMERESTAURANTES el grado de satisfación del usuario "Caritas o estrellas"
    function satisfacion(r){

      // Username
      var username= document.getElementById('username').value;                //alert("Username-> " + username);
       
      if(username==""){
          alert("Debe loguearse para dar su opinión")
      }else{
            // Referencia del negocio
              var ref_negocio=document.getElementById('ref_negocio').value;   //alert("Ref. Negocio-> " + ref_negocio);

            // Grado de satisfación
          
              var grado_satisfacion = r.id.split("-");                         
              grado_satisfacion=grado_satisfacion[1];                         //alert("Grado de satisfación-> " + grado_satisfacion);


              var parametros = {"username":username,"ref_Negocio":ref_negocio,"grado_satisfacion":grado_satisfacion}; 
             
              $.ajax({
              data: parametros, 
              url: "/Verano-2023/app/ajax/codigoSatisfacion.php",
              type: "POST",

              beforesend:function(){
                  $('#mostrar_mensaje').html("Mensaje antes de enviar!");
              },

              success: function(mensaje)
              {
                  $('#gh').html(mensaje);
                
      }
      });
      }

    
}

    
//url("web/imagenes/localidades/imgLaredo1.jpg");
</script>




