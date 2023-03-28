<?php use miId\fuente\Repositorio\DestinoRepositorio; 
use miId\fuente\Repositorio\ViajarRepositorio;?>

<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades.inc'; ?>
<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/scripts/css_tablaBusDestino.inc';?>

<?php   // No va en el Servidor la llamada al ajax!  
        // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/scripts/js_tablaBusDestino.inc';?><?php
       
        $ref_Destino=$_SESSION['ref_Destino'];
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/plazasOcupadas.inc'; ?>



<div id="" class="row">
    <div id="" style="margin-bottom: 1em;"  class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
        <a class="" style="text-decoration:none; border: 1px solid black; border-radius:0.25em; padding:0.25em 0.5em; background-color:#EFEFEF;" href="index.php?ctl=motrarplantabus">Inscribir Pasajeros</a> 
    </div>

    <div id="desplegar_tabla_Info_bus" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
        <input id="" type="button" value="Desplegar Información Bus">                                       
    </div>

    
</div>

    <?php // include $_SERVER['DOCUMENT_ROOT'] . '\Verano-2023/app\plantillas\bloques\destinos\rotuloSiNoPasajeros.inc'; no funciona en el servidor ?>
  
    <?php //use miId\fuente\Repositorio\ViajarRepositorio;
// La info del BUS se hace solo por medio de la Agencia de Viajes Y SI HAY ASIENTOS OCUPADOS
//require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ViajarRepositorio.inc';   // Para el host
include_once $_SERVER['DOCUMENT_ROOT'] . VIAJARREPOSITORIO;
    $infoBus = (new ViajarRepositorio())->infoOcupacionBus($ref_Destino); ?>

<!--<input type="button" value="Redistribuir Bus">--><?php
    if(!empty($infoBus)){  ?>
        <?php // include $_SERVER['DOCUMENT_ROOT'] . '\Verano-2023/app\plantillas\bloques\destinos\tablaInfoBusDestino.inc'; no va en el servidor ?><?php
        
        
        // Viene de rotuloSiNoPasajeros
          $beneficio=0; ?>
            <div id="tabla_info_bus" class="container" style="padding: 0em; max-width:1200px;">
                    <div class="row">
                        <div class="col-xl-12 text-center">
                            <form action="" method="POST">
                                <input id="ref_Destino" type="checkbox" name="datos[refdestino]" value="<?php echo ($ref_Destino); ?>" hidden checked>
                                    <div class="row">
                            
            
                                        <div id="" class="col-xl-12 text-center col-lg-4 col-md-4 col-sm-4 col-12">
                                            <input style="padding: 0.1em 4em; margin:0.5em;" class="btn btn-success" type="submit" name="generaexcelocupacionbus" value="Excel"> 
                                        </div>

                                        <?php include $_SERVER['DOCUMENT_ROOT'] . '\Verano-2023/app\plantillas\bloques\destinos\InfoDestino.inc';?>

<?php /*
                                        <div id="" class="col-xl-12 text-center col-lg-4 col-md-4 col-sm-4 col-4">
                                            <input class="btn btn-success" type="submit" name="generapdfocupacionbus"  value="html2pdf" onclick="insertaIdDestino(<?php echo($codDes);?>); seleccionaPlaza(<?php echo($plaza);?>)">
                                        </div>

                                        <div id="" class="col-xl-12 text-center col-lg-4 col-md-4 col-sm-4 col-4">
                                            <input class="btn btn-success" onclick="descargarPDF('reporte2','Archivo')" type="submit" name="" value="jquery">
                                        </div>
                                            <!-- <li><a href="index.php?ctl=destinoscondescuentos"><i style="color:red;" class="fa-solid fa-percent"></i><span> Escribe tu sugerencia</span></a></li>-->                                                                        
*/ ?>
                                            </div>
                        </div>
        
                            
                               <?php 
                              
                               include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/destinos/tablaOcupacionBus.inc'; ?>
                        </div>
                    </div>
                </form>
             </div>
         
        
        
        <?php


    }else{ ?>
        <div id="bus_vacio" class="row">
            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-42 col412">
                <h6>El Bus no tiene ningún pasajero!</h6>
            </div>
        </div><?php 
    }
?>
<style>

#controles_infobusdestino{}
#enlaces_paginas a{
        border: 1px solid black; padding:0.5em; background:#EFEFEF; color:#212721; border:0.2em
    }

 
</style>



    

