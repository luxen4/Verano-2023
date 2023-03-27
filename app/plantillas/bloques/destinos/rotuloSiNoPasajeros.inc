
<?php use miId\fuente\Repositorio\ViajarRepositorio;
// La info del BUS se hace solo por medio de la Agencia de Viajes Y SI HAY ASIENTOS OCUPADOS
//require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/ViajarRepositorio.inc';   // Para el host
include_once $_SERVER['DOCUMENT_ROOT'] . VIAJARREPOSITORIO;
    $infoBus = (new ViajarRepositorio())->infoOcupacionBus($ref_Destino);  var_dump($ref_Destino); ?>

<!--<input type="button" value="Redistribuir Bus">--><?php
    if(!empty($infoBus)){ ?>
        <?php include $_SERVER['DOCUMENT_ROOT'] . '\Verano-2022\app\plantillas\bloques\destinos\tablaInfoBusDestino.inc';?><?php
        
    }else{ ?>
        <div id="bus_vacio" class="row">
            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                <h6>El Bus no tiene ningún pasajero!</h6>
            </div>
        </div><?php 
    }
?>