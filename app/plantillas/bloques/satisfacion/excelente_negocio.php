<?php
use miId\fuente\Repositorio\SatisfacionRepositorio; // Ajax
require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/SatisfacionRepositorio.inc'; 

    $ref_negocioparaAjax=$_POST['ref_NegocioparaAjax'];

	$count_TuplasSatisfacion = (new SatisfacionRepositorio())->totalTuplasSatisfaciones($ref_negocioparaAjax);
	$num_TuplasTotalSatisfacion=$count_TuplasSatisfacion[0]->num_tuplas; 			

	//$count_TuplasSatisfacion5 = (new SatisfacionRepositorio())->satisfacionMuyBueno_5($ref_negocioparaAjax); 
	$count_TuplasSatisfacion5 = (new SatisfacionRepositorio())->satisfacionPorBarra($ref_negocioparaAjax,5); 
	
	$num_TuplasTotalSatisfacion5=$count_TuplasSatisfacion[0]->num_tuplas; 			
	$porcentaje5=(100 * $num_TuplasTotalSatisfacion5) / $num_TuplasTotalSatisfacion; 
	
	$n=array("tuplasSatisfacion"=>$count_TuplasSatisfacion[0]->num_tuplas, "tuplasSatisfacion5"=>$count_TuplasSatisfacion5[0]->num_tuplas);
	$n= json_encode($n);
	echo $n;
	
?>