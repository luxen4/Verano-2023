<?php
use miId\fuente\Repositorio\SatisfacionRepositorio; // Ajax
require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/SatisfacionRepositorio.inc'; 

    $ref_negocioparaAjax=$_POST['ref_NegocioparaAjax'];

	$count_TuplasSatisfacion = (new SatisfacionRepositorio())->totalTuplasSatisfaciones($ref_negocioparaAjax);
	$num_TuplasTotalSatisfacion=$count_TuplasSatisfacion[0]->num_tuplas; 			

	//$count_TuplasSatisfacion1 = (new SatisfacionRepositorio())->satisfacionMuyBueno_1($ref_negocioparaAjax); 
	$count_TuplasSatisfacion1 = (new SatisfacionRepositorio())->satisfacionPorBarra($ref_negocioparaAjax,1); 
	$num_TuplasTotalSatisfacion1=$count_TuplasSatisfacion[0]->num_tuplas; 			
	$porcentaje1=(100 * $num_TuplasTotalSatisfacion1) / $num_TuplasTotalSatisfacion; 
	
	$n=array("tuplasSatisfacion"=>$count_TuplasSatisfacion[0]->num_tuplas, "tuplasSatisfacion1"=>$count_TuplasSatisfacion1[0]->num_tuplas);
	$n= json_encode($n);
	echo $n;
	
?>