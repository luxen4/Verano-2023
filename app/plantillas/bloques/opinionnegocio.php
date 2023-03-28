<?php
use miId\fuente\Repositorio\OpinionesRepositorio; // Ajax

    $datos=$_POST['datos']; 
    //var_dump($datos);
    $ref_negocio=$datos['ref_negocio2'];

    require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/OpinionesRepositorio.inc'; 
    $numOpiniones = (new OpinionesRepositorio())->numOpiniones($ref_negocio);
    
    $datos['num_Opiniones']=$numOpiniones[0]->num_Opiniones;

    $obj = (new OpinionesRepositorio())->insertarOpinion($datos);

    if($obj==true){?>
        <script>//alert("Su opinión la haremos pública lo antes posible!");
        window.location.href="/Verano-2023/index.php";</script><?php
    }else{?>
        <script>alert("Borre su opinión anterior!");
         window.location.href="/Verano-2023/index.php";
        </script><?php
}

?>


