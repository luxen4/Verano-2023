<?php
use miId\fuente\Repositorio\ViajarRepositorio;
use miId\fuente\Repositorio\DestinoRepositorio;
use miId\fuente\Repositorio\BusRepositorio;

include_once $_SERVER['DOCUMENT_ROOT'] . VIAJARREPOSITORIO;
 $plazasOcupadas=[]; 


 //var_dump($ref_Destino); die();


 $infoPlazas = (new ViajarRepositorio())->infoOcupacionBus($ref_Destino);                        // Para buscar los nombres de los ocupantes de un bus.
 for($i=0; $i<count($infoPlazas); $i++){
     array_push($plazasOcupadas,$infoPlazas[$i]->plaza_Bus);
 }

 $ref_Destino=$_SESSION['datos']['destinoseleccionado'];  

 // Telefono e imeil de la Agencia de Viajes que hace ese Destino
 include_once $_SERVER['DOCUMENT_ROOT'] . DESTINOREPOSITORIO;
 $info_DestinoTelefonoImeil=(new DestinoRepositorio())->info_DestinoTelefonoImeil($ref_Destino);

 // Necesito las plazas totales del bus
 include_once $_SERVER['DOCUMENT_ROOT'] . BUSREPOSITORIO;
 $plazasBusTotales = (new BusRepositorio())->plazasTotalesBus($ref_Destino); 
 $plazasBusTotales=($plazasBusTotales[0]->plazas); ?><?php
 
 
 if(count($infoPlazas)==$plazasBusTotales){ ?>
     <script>alert("EL BUS SE HA COMPLETADO")</script><?php

     $cartelCompleto = (new DestinoRepositorio())->noMasPlazasCompleto($ref_Destino); ?>

     <script>//window.location.href="index.php?ctl=motrarplantabus";</script><?php 
 }else{

 }
?>