<?php
use miId\fuente\Repositorio\AgenciaViajesRepositorio; // Ajax

    $ref_AgenciaViajes=$_POST['ref_AgenciaViajes'];
	require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/AgenciaViajesRepositorio.inc'; 
	$horario_AgenciaViajes = (new AgenciaViajesRepositorio())->horarioAgenciaViajes($ref_AgenciaViajes);
	
	echo $horario_AgenciaViajes[0]->horario_Agencia;
    // echo"Marco";
   
?><script>// alert("Ya tengo los datos de nombre y Localidad del negocio!");</script>