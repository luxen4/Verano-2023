<?php
use miId\fuente\Repositorio\ComerRepositorio; // Ajax que extrae la foto del menú del día de un Negocio

    $ref_negocio=$_POST['ref_Negocio'];
	require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ComerRepositorio.inc'; 

	$datosNegocio = (new ComerRepositorio())->menuNegocioAmano($ref_negocio);
	if(empty($datosNegocio)){
		 $n= '{}'; 
		 echo $n;
	   }else{
		 $n= json_encode($datosNegocio);
		 echo $n;
	   }

	//	echo '<img src="web/imagenes/menu2.jpg"/>';
   	//  echo"Marco";
   
?> 