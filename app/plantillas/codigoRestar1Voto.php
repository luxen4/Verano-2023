<?php
use miId\fuente\Repositorio\ComerRepositorio; // Ajax
    $ref_negocio=$_POST['ref_Negocio'];
	$accion=$_POST["restar1_Voto"];

	require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ComerRepositorio.inc'; 
	$obj = (new ComerRepositorio())->modificarVotos($ref_negocio, $accion);
	
	
	$relacion_Votados = (new ComerRepositorio())->votos1Negocio($ref_negocio);

	echo ($relacion_Votados[0]->veces_Negativo); //die();

	//echo"Marco";

?><script>alert("Quedaría de que solo votase una vez por persona");</script>

