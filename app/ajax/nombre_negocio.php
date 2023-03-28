<?php
use miId\fuente\Repositorio\ComerRepositorio; // Ajax
    $ref_negocio=$_POST['ref_Negocio'];

	require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ComerRepositorio.inc'; 
	$datosNegocio = (new ComerRepositorio())->nombreNegocio($ref_negocio);
	
	
	
	echo $datosNegocio[0]->nombre_negocio . ", " . $datosNegocio[0]->nombre_Localidad;
	// echo"Marco";
    // font-family: "Neucha", sans-serif;
?>