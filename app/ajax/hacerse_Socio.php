<?php
use miId\fuente\Repositorio\ClienteRepositorio; // Ajax
use phpDocumentor\Reflection\DocBlock\Tags\Var_;
require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/utilidades/constantes.inc'; 
include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS; 
 	$ref_agenciaViajes=$_POST['ref_AgenciaViajes'];
    $ref_Cliente=$_POST['ref_Cliente'];

    require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/ClienteRepositorio.inc'; 
	$obj = (new ClienteRepositorio())->hacerseSocioAgenciaViajes($ref_agenciaViajes, $ref_Cliente);

          if (!$obj==true) {
                echo "Ya era Socio";
          } else{
            echo "Nuevo Socio de la Agencia de Viajes";
          }
        
?> 