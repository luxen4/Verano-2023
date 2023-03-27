<?php // Consulta del tipo depubliciad //
    use miId\fuente\Repositorio\ComerRepositorio;
    require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/ComerRepositorio.inc';

    $vistaPublicidadGeneral=(new ComerRepositorio())->tipoPublicidadHome2(); 
    $vistaPublicidadGeneral=$vistaPublicidadGeneral[0]->posicion; 
    $ref_Localidad=$cod_Localidad;  
    $lugaresDondeComer = (new ComerRepositorio())->publicidadRestaurantes($ref_Localidad);
    //echo $lugaresDondeComer; die();
    $tipoPublicidadHome = (new ComerRepositorio())->tipoPublicidadHome($ref_Localidad);   
?> 