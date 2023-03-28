<?php
use miId\fuente\Repositorio\SatisfacionRepositorio; // Ajax
require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/SatisfacionRepositorio.inc'; 

    $ref_negocioparaAjax=$_POST['ref_NegocioparaAjax'];
	$num_barra=$_POST['num_barra'];
	
	$count_TuplasSatisfacionTotal = (new SatisfacionRepositorio())->totalTuplasSatisfaciones($ref_negocioparaAjax);
	$num_TuplasTotalSatisfacion=$count_TuplasSatisfacionTotal[0]->num_tuplas; 
		
	$count_TuplasSatisfacionBarra = (new SatisfacionRepositorio())->satisfacionPorBarra($ref_negocioparaAjax,$num_barra); 
	
	$n=array("tuplasSatisfacion"=>$count_TuplasSatisfacionTotal[0]->num_tuplas, "tuplasSatisfacionBarra"=>$count_TuplasSatisfacionBarra[0]->num_tuplas);
	$n= json_encode($n);
	echo $n;
	
?>