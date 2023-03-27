<?php
use miId\fuente\Repositorio\SatisfacionRepositorio; // Ajax
require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/SatisfacionRepositorio.inc'; 

    $ref_negocioparaAjax=$_POST['ref_NegocioparaAjax'];

	$count_TuplasSatisfacion = (new SatisfacionRepositorio())->totalTuplasSatisfaciones($ref_negocioparaAjax);
	$num_TuplasTotalSatisfacion=$count_TuplasSatisfacion[0]->num_tuplas; 			

	//$count_TuplasSatisfacion3 = (new SatisfacionRepositorio())->satisfacionMuyBueno_3($ref_negocioparaAjax); 
	$count_TuplasSatisfacion3 = (new SatisfacionRepositorio())->satisfacionPorBarra($ref_negocioparaAjax,3); 
	$num_TuplasTotalSatisfacion3=$count_TuplasSatisfacion[0]->num_tuplas; 			
	$porcentaje3=(100 * $num_TuplasTotalSatisfacion3) / $num_TuplasTotalSatisfacion; 
	
	$n=array("tuplasSatisfacion"=>$count_TuplasSatisfacion[0]->num_tuplas, "tuplasSatisfacion3"=>$count_TuplasSatisfacion3[0]->num_tuplas);
	$n= json_encode($n);
	echo $n;
	
?>