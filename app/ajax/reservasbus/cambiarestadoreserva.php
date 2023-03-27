<?php
use miId\fuente\Repositorio\ViajarRepositorio; // Ajax
 include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022\app\utilidades\constantes.inc';
 include $_SERVER['DOCUMENT_ROOT'] . VIAJARREPOSITORIO;
    $ref_Destino=$_POST['ref_Destino'];
    $plaza_Bus=$_POST['asiento'];
    $pagado=$_POST['pagado'];

        $pagadoFinal="";
        if($pagado=='SI'){ $pagadoFinal='NO';}elseif($pagado=='NO'){ $pagadoFinal='SI';}
	    $obj = (new ViajarRepositorio())->cambiarEstadoReserva($ref_Destino, $plaza_Bus, $pagadoFinal);
    // echo"Marco";
?>