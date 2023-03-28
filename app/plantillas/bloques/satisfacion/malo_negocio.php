<?php
use miId\fuente\Repositorio\SatisfacionRepositorio; // Ajax
require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/SatisfacionRepositorio.inc'; 

    $ref_negocioparaAjax=$_POST['ref_NegocioparaAjax'];

	$count_TuplasSatisfacion = (new SatisfacionRepositorio())->totalTuplasSatisfaciones($ref_negocioparaAjax);
	$num_TuplasTotalSatisfacion=$count_TuplasSatisfacion[0]->num_tuplas; 			

	//$count_TuplasSatisfacion2 = (new SatisfacionRepositorio())->satisfacionMuyBueno_2($ref_negocioparaAjax); 
	$count_TuplasSatisfacion2 = (new SatisfacionRepositorio())->satisfacionPorBarra($ref_negocioparaAjax,2); 
	$num_TuplasTotalSatisfacion2=$count_TuplasSatisfacion[0]->num_tuplas; 			
	$porcentaje2=(100 * $num_TuplasTotalSatisfacion2) / $num_TuplasTotalSatisfacion; 
	
	$n=array("tuplasSatisfacion"=>$count_TuplasSatisfacion[0]->num_tuplas, "tuplasSatisfacion2"=>$count_TuplasSatisfacion2[0]->num_tuplas);
	$n= json_encode($n);
	echo $n;
	
?>