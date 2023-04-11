<?php 
use miId\fuente\Repositorio\ViajarRepositorio;
use miId\fuente\Repositorio\DestinoRepositorio;

include_once $_SERVER['DOCUMENT_ROOT'] . DESTINOREPOSITORIO; 
$destino = (new DestinoRepositorio())->infoDestino($ref_Destino); 

?>




<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades.inc'; ?>
<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/scripts/css_tablaBusDestino.inc';?>

<?php // Falla include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/scripts/js_tablaBusDestino.inc';?><?php

$ref_Destino=$_SESSION['ref_Destino'];
include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/plazasOcupadas.inc'; ?>

<?php // Botones include $_SERVER['DOCUMENT_ROOT'] . '\Verano-2023/app\plantillas\bloques\destinos\inscribirPasajeros_desplegarInfo.inc';?>
<?php // include $_SERVER['DOCUMENT_ROOT'] . '\Verano-2023/app\plantillas\bloques\destinos\rotuloSiNoPasajeros.inc'; ?>

<?php include_once $_SERVER['DOCUMENT_ROOT'] . VIAJARREPOSITORIO;
        $infoBus = (new ViajarRepositorio())->infoOcupacionBus($ref_Destino); ?>




<?php /*<input type="button" value="Redistribuir Bus">*/
        if(!empty($infoBus)) {  ?>
            <?php // include $_SERVER['DOCUMENT_ROOT'] . '\Verano-2023/app\plantillas\bloques\destinos\tablaInfoBusDestino.inc'; no va en el servidor?><?php

                    // Viene de rotuloSiNoPasajeros
                    $beneficio=0; ?>
                    <div id="tabla_info_bus" class="container" style="padding: 0em; max-width:1200px;">
                        <div class="row">
                            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                <form action="" method="POST">
                                    <input id="ref_Destino" type="checkbox" name="datos[refdestino]" value="<?php echo($ref_Destino); ?>" hidden checked>
                                    <div class="row">

                                   

                                        <div id="" class="col-xl-12 text-center col-lg-4 col-md-4 col-sm-4 col-12">
                                            <input style="padding: 0.1em 4em; margin:0.5em;" class="btn btn-success" type="submit" name="generaexcelocupacionbus" value="-Excel-"> 
                                        </div>

                                        <?php // include $_SERVER['DOCUMENT_ROOT'] . '\Verano-2023/app\plantillas\bloques\destinos\paraImprimir.inc';?>
                                        
                                        <?php 
                                        // NO FUNCIONA EN SERVIDOR GRATUITO
                                        // include $_SERVER['DOCUMENT_ROOT'] . '\Verano-2023/app\plantillas\bloques\destinos\InfoDestino.inc';?>
                                            <input id="ref_Destino" type="checkbox" name="datos[refdestino]" value="<?php echo ($ref_Destino); ?>" hidden checked>
                                            <div id="info_viaje" class="container">
                                                <div class="row">
                                                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                                        <div class="table-responsive"> 
                                                            <table class="table table-bordered table-hover">
                                                                <thead class="table-active">
                                                                    <th><?php echo pasarUtf8($destino[0]->nombre_Localidad)?><br><?php echo (pasarUtf8($destino[0]->kilometrosIdaVuelta) . "Km.")?></th><th><span><?php echo pasarUtf8($destino[0]->nombre_Agencia) ;?></span> <br> <span>Tel: <?php echo $info_DestinoTelefonoImeil[0]->telefono_Agencia; ?></span></th><th><?php echo pasarUtf8(round($destino[0]->euros,2) . "€")?></th>
                                                                </thead>

                                                                <tbody>
                                                                    <tr>
                                                                        <td><?php echo pasarUtf8($destino[0]->fecha_Viaje) . ", " . pasarUtf8($destino[0]->dia_Semana)?></td>
                                                                        <td><span>emeil: <?php echo $info_DestinoTelefonoImeil[0]->email; ?></span></td>
                                                                        <td style="padding:0.5em"><?php echo $destino[0]->matricula; ?></td>
                                                                    </tr>
                                                                </tbody>
                                                            </table>
                                                        </div>
                                                    </div>
                                                </div>
                                            </div>

<style>
    #info_viaje{/*margin: 0.5em;*/}
    td{/*vertical-align: middle;*/}
</style>











                                    </div>

                                    <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/destinos/tablaOcupacionBus.inc'; ?> 
                                </form>
                            </div> 
                        </div>
                    </div><?php


        } else { ?>
                <div id="bus_vacio" class="row">
                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                        <h6>El Bus no tiene ningún pasajero!</h6>
                    </div>
                </div><?php
        }
?>



    

