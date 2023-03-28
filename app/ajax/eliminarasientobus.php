<?php
use miId\fuente\Repositorio\ViajarRepositorio; // Ajax
// require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ViajarRepositorio.inc'; 

 include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app\utilidades\constantes.inc';
 include $_SERVER['DOCUMENT_ROOT'] . VIAJARREPOSITORIO; 

 /*
if(!empty($username_cliente)){?>
  <script>alert("Haga login para votar")</script><?php
}else{
 }   
*/

    //"ref_Destino":ref_Destino, "asiento":asiento


$datos['ref_Destino']=$_POST['ref_Destino'];
$datos['asiento']=$_POST['asiento'];

	// Eliminar el asiento en la ref_Destino
	$eliminarReservaAsiento = (new ViajarRepositorio($datos))->desOcuparPlazaBus($datos);


    if($eliminarReservaAsiento==true){ 
      
       echo "Eliminado";

    }else{
      echo "No Eliminado";
    }


 

?>