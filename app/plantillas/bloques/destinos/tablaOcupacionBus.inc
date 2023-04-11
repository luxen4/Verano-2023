<?php   
    use miId\fuente\Repositorio\ViajarRepositorio; 
    use miId\fuente\Repositorio\PasajeroRepositorio;
    use miId\fuente\Repositorio\ClienteRepositorio;
use PhpParser\Node\Stmt\Echo_;

?>
<div class="table-responsive"> 

    <table class="table table-bordered table-hover">
        <thead class="table-active">
            <th style="width: 15%;">Plazas</th>
            <th style="width: 45%;">Contacto</th>
            <th style="width: 30%;">Cobrado</th>
        </thead>
 
        <tbody><?php
            $total=0; $pendienteRecaudar=0; $plazasCobradas=0; $plazasSinCobrar=0;
            $asiento=1; $esOnoCliente=""; $infoCliente=""; $plaza_Bus=1;                                  
            for ($i = 1; $i <= 63; $i++) { //var_dump($ref_Destino);?>
                <?php // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app\plantillas\bloques\partesRepositorios\--datos_PersonasBus.inc'; ?>

                <?php


                $plaza_Bus=$i;  
                include_once $_SERVER['DOCUMENT_ROOT'] . VIAJARREPOSITORIO; 
                $clienteOPasajero = (new ViajarRepositorio())->clienteOpasajero($ref_Destino, $plaza_Bus);

                $nomenclatura="";

                if (!empty($clienteOPasajero)) {
                    $ref_Persona = $clienteOPasajero[0]->ref_Persona;
                    $nomenclatura = substr($ref_Persona, 0, 3);
                }


                if ($nomenclatura=='CLI') {
                    // Si es Cliente que consulte sus datos
                    include_once $_SERVER['DOCUMENT_ROOT'] . CLIENTEREPOSITORIO;
                    $infoCliente = (new ClienteRepositorio())->infoCliente($ref_Destino, $plaza_Bus);
                                    
                    // Debe consultar si es SOCIO de la Agencia de Viajes
                    $ref_AgenciaViajes=$_SESSION['perfil']['ref_AgenciaViajes'];
                    $esSocioAgenciaViajes = (new ClienteRepositorio())->esSocio($ref_Persona, $ref_AgenciaViajes);

                } elseif ($nomenclatura=='PAS') {

                    // Si es Pasajero que va a una ref_Destino y se sienta en el asiento ($asiento) que consulte sus datos
                    include_once $_SERVER['DOCUMENT_ROOT'] . PASAJEROREPOSITORIO;
                    $ref_Pasajero = $ref_Persona;
                    $infoNoCliente = (new PasajeroRepositorio())->infoPasajero($ref_Destino, $plaza_Bus);

                } else { } 
                ?>

                <tr>
                    <td>
                        <div style="display: flex;">
                            <label style="margin: auto;" for="<?php echo $plaza_Bus; ?>"><?php 
                                if(!empty($clienteOPasajero)){ ?>

                                    <input style="transform:scale(1.5)" id="<?php echo $plaza_Bus; ?>" type="checkbox" name="plazaseliminar[]" 
                                    value="<?= /*$esSocioAgenciaViajes[0]->cod_SociosAgenciaViajes . '_' .*/ $plaza_Bus ?>">
                                    <span style="font-weight: bold; font-size:2em"><span style="margin-left: 0.5em"><?php echo pasarUtf8($asiento); ?></span></span></label><?php
                                }?>
                        <!-- <h5 style="margin-left: 1em; margin-top: -0.5em;"><?php echo pasarUtf8($asiento); ?></h5>-->

                        </div>
                    
                        <?php // Es mutua a cualquiera ?>
                        <?php // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app\plantillas\bloques\destinos\InfoTablaBusDestino\--celda_plaza.inc'; ?>
                    
                        <input id="<?php echo ("asiento_" . $asiento); ?>" type="checkbox" name="datos[asiento]" value="<?php echo ($asiento); ?>" hidden >

                                            <?php /*
                                                if ($nomenclatura=="CLI") {
                                                    if (!empty($esSocioAgenciaViajes)) { ?>
                                                        <h6>Socio de <?= $_SESSION['perfil']['name']?></h6>
                                                        <?php
                                                    } else { ?>
                                                        <h6>Cliente Plataforma</h6><?php
                                                    } ?>
                                                    <input type="button" onclick="eliminarReservaAsiento(<?php echo ($asiento); ?>)" value="Eliminar esta plaza"<?php
                                                }elseif($nomenclatura=='PAS'){ ?>
                                                    <h6> Pasajero</h6>
                                                    <input type="button" onclick="eliminarReservaAsiento(<?php echo ($asiento); ?>)" value="Eliminar esta plaza"><?php

                                                }else{ } 
                                                */
                                            ?>
                    </td><?php 
                    
                    if ($nomenclatura=="CLI") {   $infoPersona=$infoCliente; ?>
                        <?php // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app\plantillas\bloques\destinos\InfoTablaBusDestino\--celdas_ContactoCobrado.inc'; ?><?php
                   ?> <td><?php 
    
                    if(!empty($infoPersona[0]->nombre)){ ?>
                    <h6><?php echo(pasarUtf8($infoPersona[0]->nombre) .' '. pasarUtf8($infoPersona[0]->apellidos)); ?></h6><?php
                    }else{ ?>
                    <h6><?php echo(pasarUtf8($infoPersona[0]->nombreApellidos));?></h6><?php
                    }
                
                    
                    if(!empty($infoPersona[0]->nombre)){
                        $firstDate  = new DateTime();
                        $secondDate = new DateTime($infoPersona[0]->fNacimiento);
                
                        $intvl = $firstDate->diff($secondDate);
                        echo '(' . $intvl->y . " Años) ";
                        // echo $intvl->y . " year, " . $intvl->m." months and ".$intvl->d." day"; 
                        // echo "\n";
                        // Total amount of days
                        // echo $intvl->days . " days "; 
                    }?>
                
                        <?php echo 'Tel: ' . pasarUtf8($infoPersona[0]->TlfnoParticular.'<br>email: '. pasarUtf8($infoPersona[0]->email));?>
                
                </td>
                
                
                <td id='<?php echo 'plaza_' . $plaza_Bus; ?>'<?php 



                    if($infoPersona[0]->pagado=='NO'){ ?>style="background-color: red;" 
                        <?php $pendienteRecaudar= $pendienteRecaudar+($infoPersona[0]->embolso);
                                $plazasSinCobrar=$plazasSinCobrar+1;
                        ?>  <?php 
                        }else{?>style="background-color: #99FE97;"<?php $total=$total+$infoPersona[0]->embolso; $plazasCobradas=$plazasCobradas+1; } ?> onclick="cambiar(<?php echo $plaza_Bus; ?>)" 
                        >
                
                        <?php echo "Pagado: " . pasarUtf8($infoPersona[0]->pagado); ?>
                        <!--<?php echo pasarUtf8(round($destino[0]->euros,2) . "€")?>-->
                        <input type="text" name="preciobillete[<?=$plaza_Bus . '_' . $infoPersona[0]->embolso ?>]" value="<?php echo (pasarUtf8($infoPersona[0]->embolso) . '€' );?>" placeholder="<?php echo (pasarUtf8($infoPersona[0]->embolso) . '€' );?>"><br>
                        <label for="">Modificar</label>
                            <label for="pagado_si<?=$plaza_Bus ?>">
                            <input type="radio" id="pagado_si<?=$plaza_Bus ?>" name="datos[pagado_<?=$plaza_Bus ?>]" value="SI"> SI</label>
                
                            <label for="pagado_no<?=$plaza_Bus ?>" style="margin-left:2em">
                            <input type="radio" id="pagado_no<?=$plaza_Bus ?>" name="datos[pagado_<?=$plaza_Bus ?>]" value="NO"> NO</label> 
                </td>
                
                <?php
                    
                    }elseif($nomenclatura=="PAS"){ $infoPersona=$infoNoCliente; ?>
                        <?php // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app\plantillas\bloques\destinos\InfoTablaBusDestino\--celdas_ContactoCobrado.inc'; ?><?php
                  ?>  
                  

                  <?php 
                
                  
                  // NO FUNCIONA EN EL SERVIDOR GRATUITO 
                  // BUENO include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/destinos/infoTablaBusDestino/info_contacto_pasajero.inc'; 
                  // include ('../Verano-2023/app/plantillas/bloques/destinos/infoTablaBusDestino/info_contacto_pasajero.inc'); ?>

                    <td><?php 

                    if(!empty($infoPersona[0]->nombre)){ ?>
                    <h6><?php echo(pasarUtf8($infoPersona[0]->nombre) .' '. pasarUtf8($infoPersona[0]->apellidos)); ?></h6><?php
                    }else{ ?>
                    <h6><?php echo(pasarUtf8($infoPersona[0]->nombreApellidos));?></h6><?php
                    }


                    if(!empty($infoPersona[0]->nombre)){
                        $firstDate  = new DateTime();
                        $secondDate = new DateTime($infoPersona[0]->fNacimiento);

                        $intvl = $firstDate->diff($secondDate);
                        echo '(' . $intvl->y . " Años) ";
                        // echo $intvl->y . " year, " . $intvl->m." months and ".$intvl->d." day"; 
                        // echo "\n";
                        // Total amount of days
                        // echo $intvl->days . " days "; 
                    }?>

                        <?php echo 'Tel: ' . pasarUtf8($infoPersona[0]->TlfnoParticular.'<br>email: '. pasarUtf8($infoPersona[0]->email));?>

                    </td>
                  
                  
                        <?php //include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/destinos/infoTablaBusDestino/info_contacto_pasajero_cobrado.inc'; ?>


                    <td
                        <?php 
                        // NO FUNCIONA EN EL SERVIDOR GRATUITO 
                        // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app\plantillas\bloques\destinos\InfoTablaBusDestino\celda_Cobrado.inc'; ?><?php
                        if($infoPersona[0]->pagado=='NO'){ ?>style="background-color: red;" 
                        <?php $pendienteRecaudar= $pendienteRecaudar+($infoPersona[0]->embolso);
                                $plazasSinCobrar=$plazasSinCobrar+1;
                        ?>  <?php 
                        }else{?>style="background-color: #C7EFAD;"<?php $total=$total+$infoPersona[0]->embolso; $plazasCobradas=$plazasCobradas+1; } ?> onclick="cambiar(<?php echo $plaza_Bus; ?>)" 
                        >

                        <?php echo "Pagado: " . pasarUtf8($infoPersona[0]->pagado); ?>
                        <!--<?php echo pasarUtf8(round($destino[0]->euros,2) . "€")?>-->
                        <input type="text" name="preciobillete[<?=$plaza_Bus . '_' . $infoPersona[0]->embolso ?>]" value="<?php echo (pasarUtf8($infoPersona[0]->embolso) . '€' );?>" placeholder="<?php echo (pasarUtf8($infoPersona[0]->embolso) . '€' );?>"><br>
                        <label for="">Modificar</label><br>
                            <label for="pagado_si<?=$plaza_Bus ?>">
                            <input type="radio" id="pagado_si<?=$plaza_Bus ?>" name="datos[pagado_<?=$plaza_Bus ?>]" value="SI"> SI</label>

                            <label for="pagado_no<?=$plaza_Bus ?>" style="margin-left:2em">
                            <input type="radio" id="pagado_no<?=$plaza_Bus ?>" name="datos[pagado_<?=$plaza_Bus ?>]" value="NO"> NO</label> 
                    </td><?php
                } 
                    else { ?><td></td><td></td> <?php } ?> 

                </tr>
                <?php $asiento++;
            } ?>                                 
        </tbody>
    </table>
   
</div>

    <script src="web/bootstrap/js/jspdf.debug.js"></script>
     

<script>
    //DescargarPDF(reporte,Archivo);
    function descargarPDF(ContenidoID,nombre){
        alert("entro");
        var pdf =new jsPDF('p','pt','letter');
                html=$('#'+ContenidoID).html();
                especialElementsHandlers={};
                margins={top:10, bottom:20, left:20, width:522};
                pdf.fromHTML(
                    html, margins.left, margins.top, {'width':margins.width},
                    function(dispose){pdf.save(nombre+'.pdf');}, margins);
                
    }
</script>

    <?php   // NO FONCIONA EN SERVIDOR GRATUITO
            // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/destinos/infoTablaBusDestino/controles.inc'; ?>
          <?php  //include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/destinos/infoTablaBusDestino/--modificarEstadosReservas.inc'; ?>
    <div class="table-responsive"> 
        <table class="table table-bordered table-hover">
            <thead class="table-active">
                <th><div id="" style="margin-top: 0.5em;" class="row"> 
                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                        <input type="submit" onclick="eliminarVariasReservasssssss()" name="eliminarvariasreservas" value="Eliminar Reservas">    
                    </div> 
                </th>

                <th style="width: 50%;">
                    <div class="row">
                        <div id="" class="col-xl-12 text-center">
                            <label style="font-size: 0.7em;" for="estaseguroa">
                            <input  id="estaseguroa" type="checkbox" name="asegura"> Estoy seguro de hacer los cambios.</label>
                        </div>
                    </div>

                    <div id="botones" class="row" style="margin-bottom: 0.5em;">

                        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-6">
                            <input type="submit" name="guardarcambiosbilletes" value="Guardar">
                        </div>

                        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-6">
                            <input type="reset" value="Limpiar">
                        </div>

                    </div>

                </th>
            </thead>
        </table>
    </div>



    <?php // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app\plantillas\bloques\destinos\--info_Recaudado.inc'; ?>
    
    
    <?php // NO FONCIONA EN SERVIDOR GRATUITO
          //include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/destinos/infoTablaBusDestino/info_recaudado.inc'; ?>
          <div class="row">
            <div id="plazas_totales" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                <?php echo "Plazas Totales " . $plazasBusTotales; ?><br>
                <?php echo "Plazas Libres " . $plazasBusTotales-$plazasCobradas-$plazasSinCobrar; ?>
            </div>



                <div id="recaudado" class="col-xl-6 text-center col-lg-12 col-md-12 col-sm-6 col-6">
                    <h6>Recaudado: <?php echo $total . '€'; ?></h6>
                    <h6>Cobradas: <?php echo $plazasCobradas . 'plaza/s'; ?></h6>
                </div>

                <div id="norecaudado" class="col-xl-6 text-center col-lg-12 col-md-12 col-sm-6 col-6">
                    <h6>Por Recaudar: <?php echo $pendienteRecaudar . '€'; ?></h6>
                    <h6>Sin Cobrar: <?php echo $plazasSinCobrar . ' plazas/s'; ?></h6>
                </div>
        </div>



<style>
    td h6{/*margin-bottom: 0em;*/}
                
    #recaudado, #norecaudado, #plazas_totales{border:1px solid #006293; background-color:#F6F6F6; padding:0.5em}
    #recaudado_plazas{margin: 0.5em;}
    #recaudado_plazas, h6{color: #006293; text-decoration: underline;}
    th{font-size: 1em;}
</style>

