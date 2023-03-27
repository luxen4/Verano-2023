<?php
use miId\fuente\Repositorio\SatisfacionRepositorio; // Ajax
require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/SatisfacionRepositorio.inc'; 

    $ref_negocioparaAjax=$_POST['ref_NegocioparaAjax'];
	$username_cliente=$_POST['username_cliente'];

	//var_dump($username_cliente);
	
	$satisfacionClienteNegocio = (new SatisfacionRepositorio())->totalTuplasCaritaClienteNegocio($ref_negocioparaAjax, $username_cliente);

	$grado_SatisfacionClienteNegocio=$satisfacionClienteNegocio[0]->grado_Satisfacion; 

    //var_dump($grado_SatisfacionClienteNegocio);

	echo $grado_SatisfacionClienteNegocio;
	
?> 