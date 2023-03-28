<?php
use miId\fuente\Repositorio\ComerRepositorio; // Ajax
    $ref_negocio=$_POST['ref_Negocio'];
	require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ComerRepositorio.inc'; 
	$obj = (new ComerRepositorio())->dar1voto($ref_negocio);
	
	
	$relacion_Votados = (new ComerRepositorio())->votos1Negocio($ref_negocio);
	echo $relacion_Votados[0]->veces_Positivo;
	//echo"Marco";

?><script>alert("Quedaría de que solo votase una vez por persona");</script>

