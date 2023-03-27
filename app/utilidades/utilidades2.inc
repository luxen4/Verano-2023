<script>

// Función que selecciona el checkbox cuando se ejecuta el submit
function selecciona(codigo){
 alert(codigo.id);
  var seleccionar=document.getElementById(codigo.id).checked = true;
  $('#ref_Destino11').val(codigo.id);
 var a=document.getElementById('ref_Destino');
 alert(a);
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

// Función que hace cambiar a true el checkbox de Localidad en "Tabla: Agenda Verano 2022"
function marcarLocalidad(ref_Localidad){
  //alert(ref_Localidad);
    var seleccionar=document.getElementById(ref_Localidad).checked = true;
}
</script>