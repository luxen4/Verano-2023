<?php
use miId\fuente\Repositorio\AgenciaViajesRepositorio; // Ajax

    $ref_AgenciaViajes=$_POST['ref_AgenciaViajes'];
	require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/AgenciaViajesRepositorio.inc'; 
	$telefono_AgenciaViajes = (new AgenciaViajesRepositorio())->telefonoAgenciaViajes($ref_AgenciaViajes);
	
	echo $telefono_AgenciaViajes[0]->telefono_Agencia;
    // echo"Marco";
   
?><script>// alert("Ya tengo los datos de nombre y Localidad del negocio!");</script>