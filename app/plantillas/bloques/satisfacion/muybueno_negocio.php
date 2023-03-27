<?php
use miId\fuente\Repositorio\SatisfacionRepositorio; // Ajax
require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/SatisfacionRepositorio.inc'; 

    $ref_negocioparaAjax=$_POST['ref_NegocioparaAjax'];

	$count_TuplasSatisfacion = (new SatisfacionRepositorio())->totalTuplasSatisfaciones($ref_negocioparaAjax);
	$num_TuplasTotalSatisfacion=$count_TuplasSatisfacion[0]->num_tuplas; 			

	//$count_TuplasSatisfacion4 = (new SatisfacionRepositorio())->satisfacionMuyBueno_4($ref_negocioparaAjax); 
	$count_TuplasSatisfacion4 = (new SatisfacionRepositorio())->satisfacionPorBarra($ref_negocioparaAjax,4); 
	$num_TuplasTotalSatisfacion4=$count_TuplasSatisfacion[0]->num_tuplas; 			
	$porcentaje4=(100 * $num_TuplasTotalSatisfacion4) / $num_TuplasTotalSatisfacion; 
	
	$n=array("tuplasSatisfacion"=>$count_TuplasSatisfacion[0]->num_tuplas, "tuplasSatisfacion4"=>$count_TuplasSatisfacion4[0]->num_tuplas);
	$n= json_encode($n);
	echo $n;
	
?>