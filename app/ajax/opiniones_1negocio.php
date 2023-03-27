<?php
use miId\fuente\Repositorio\OpinionesRepositorio; // Ajax

    $datos=$_POST['ref_Negocio']; 
    $ref_negocio=$datos;
  
    require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/OpinionesRepositorio.inc'; 
    $numOpiniones = (new OpinionesRepositorio())->todasOpinionesNegocio($ref_negocio);

    if(empty($numOpiniones)){
     // echo "No hay opiniones, de momento!";
      $n= '{}'; 
      echo $n;
    }else{

      
      $n= json_encode($numOpiniones);
      echo $n;
    }

   // echo "Marco";

?>


