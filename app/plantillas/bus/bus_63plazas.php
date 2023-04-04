<?php use miId\fuente\Repositorio\DestinoRepositorio; 

?>
<?php ob_start(); ?> 
      <!--  <link rel="stylesheet" type="text/css" href='web/css/plantasbuses/plantabus.css'/> OK
        <link rel="stylesheet" type="text/css" href='web/css/plantasbuses/bus_63plazas.css'/>  -->



        <?php include_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades.inc'; ?>
        <?php include_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades2.inc'; ?>





            <div class="container fondoplantabus" style=" max-width: fit-content;margin: auto;"> 
                <form action="" method="POST">
                        <div class="row">
                            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                <h1>Distribución Bus 63 Plazas</h1>
                            </div>
                        </div><?php  

                        include_once $_SERVER['DOCUMENT_ROOT'] . DESTINOREPOSITORIO; 
                        $destino = (new DestinoRepositorio())->infoDestino($ref_Destino); ?>

                    <?php 
                    if ($destino[0]->matricula=='4729 HWW') {  ?>
                        <?php  include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app\plantillas\bus\plano_Logrobus_63plazas_0063LOG.inc';?><?php

                    }else{ // Si hago el include, en movil no se representa
                       // echo "No es autobus de diseño especial"; ?>
                        <div class="container">
                            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                <div id="ojo" class="table-responsive">  
                                    <table class="table table-bordered table-hover">
                                        <div id="fondo_tabla">
                                            <div class="fila_asientos" style="display: flex;"><?php
                                                $filaIzdaVentana=array(59,55,51,47,43,39,35,33,29,25,21,17,13,9,5,1);
                                                $numFilaIzdaVentana=count($filaIzdaVentana);
                                                    for($k=0; $k<$numFilaIzdaVentana; $k++){ ?>
                                                        <?php $i=$filaIzdaVentana[$k]; ?>
                                                        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/plantaBusAMedida/butacacompleta2.php' ?><?php } ?>
                                            </div>

                                            <div class="fila_asientos" style="display: flex;"><?php
                                                $filaIzdaPasillo=array(60,56,52,48,44,40,36,34,30,26,22,18,14,10,6,2); $numFilaIzdaPasillo=count($filaIzdaPasillo);
                                                    for($k=0; $k<$numFilaIzdaPasillo; $k++){ ?>
                                                        <?php $i=$filaIzdaPasillo[$k]; ?>
                                                        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/plantaBusAMedida/butacacompleta2.php' ?><?php } ?>
                                            </div>

                                            <div class="fila_asientos" style="display: flex;"><?php
                                                $filaCentral=array(61,'pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo'); $numFilaCentral=count($filaCentral);
                                                    for($k=0; $k<$numFilaCentral; $k++){ ?>
                                                        <?php $i=$filaCentral[$k]; ?>
                                                        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/plantaBusAMedida/butacacompleta2.php' ?><?php } ?>
                                            </div>

                                            <div class="fila_asientos" style="display: flex;"><?php 
                                                $filaDrchaVentana=array(62,57,53,49,45,41,37,'escalera','bano',31,27,23,19,15,11,7,3); $numFilaDrchaVentana=count($filaDrchaVentana);
                                                    for($k=0; $k<$numFilaDrchaVentana; $k++){ ?>
                                                        <?php $i=$filaDrchaVentana[$k]; ?>
                                                        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/plantaBusAMedida/butacacompleta2.php' ?><?php } ?>
                                            </div>

                                            <div class="fila_asientos" style="display: flex;"><?php
                                                $filaDrchaPasillo=array(63,58,54,50,46,42,38,'escalera','bano',32,28,24,20,16,12,8,4); $numFilaDrchaPasillo=count($filaDrchaPasillo);
                                                    for($k=0; $k<$numFilaDrchaPasillo; $k++){ ?>
                                                        <?php $i=$filaDrchaPasillo[$k]; ?>
                                                        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/plantaBusAMedida/butacacompleta2.php' ?><?php } ?>
                                            </div>
                                        </div>
                                    </table>
                                </div>
                            </div>
                        </div><?php     
                    } ?> 
            </div>     
             
             <?php // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app\plantillas\bloques\destinos\InfoDestino.inc' ; No me deja el include para el movil ?>            

             <?php 
include_once $_SERVER['DOCUMENT_ROOT'] . DESTINOREPOSITORIO; 
$destino = (new DestinoRepositorio())->infoDestino($ref_Destino); ?>

    <?php include_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades.inc'; ?>
    <?php include_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades2.inc'; ?>

    <input id="ref_Destino" type="checkbox" name="datos[refdestino]" value="<?php echo ($ref_Destino); ?>" hidden checked>
    <div id="info_viaje" class="container" style="margin: auto;">
        <div class="row">
            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                <div class="table-responsive"> 
                    <table class="table table-bordered table-hover">
                        <thead class="table-active">
                            <th><?php echo pasarUtf8($destino[0]->nombre_Localidad)?>,<?php echo (pasarUtf8($destino[0]->kilometrosIdaVuelta) . "Km.")?></th><th><span><?php echo pasarUtf8($destino[0]->nombre_Agencia) ;?></span>  <span>Tel: <?php echo $info_DestinoTelefonoImeil[0]->telefono_Agencia; ?></span></th><th><?php echo pasarUtf8(round($destino[0]->euros,2) . "€")?></th>
                        </thead>

                        <tbody>
                            <tr>
                                <td><?php echo pasarUtf8($destino[0]->fecha_Viaje) . ", " . pasarUtf8($destino[0]->dia_Semana)?></td>
                                <td><span>emeil: <?php echo $info_DestinoTelefonoImeil[0]->email; ?></span></td>
                                <td><?php echo $destino[0]->matricula; ?></td>
                            </tr>
                        </tbody>
                    </table>
                </div>
            </div>
        </div>
    </div>























    

<style>
    td{vertical-align: middle;}
</style>




                            <?php 
                            if(empty($_SESSION['perfil'])){?>
                                    <a style="text-decoration: underline;" class="nav-link" href="index.php?ctl=loginusuarios" ><i class="fas fa-users"></i> Haga Loguin para reservar!</a>
                                   <!-- <p>Información Agencia de Viajes :</p>
                                    <p>Teléfono: <?php echo $info_DestinoTelefonoImeil[0]->telefono_Agencia; ?><br> emeil:<?php echo $info_DestinoTelefonoImeil[0]->email; ?></p>-->  <?php
                            }else{ ?>
                                    <div><?php   
                                        if($_SESSION['perfil']['roll']=='cliente'){ ?>
                                            <div class="row">
                                                <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                                    <div>
                                                        <?php $nombreCompleto=$_SESSION['perfil']['nombre'] . " " . $_SESSION['perfil']['apellidos']; ?>
                                                        <?php echo "Cliente<br>" . $nombreCompleto;?>
                                                    </div>
                                                    
                                                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                                        Precio estandar <br>
                                                        <input style="width: 6em;" id="importepasajero" type="number" name="datos[importepasajero]" value="" placeholder="<?php echo $precioBilleteNormal[0]->euros . ' euros'; ?>" size="15" readonly required min="10" max="50"> <br>
                                                       <!-- <label for="importepasajero">Importe Predeterminado del Viaje (podría tener descuento) </label><?php if(isset($datos)){if(isset($errores['importepasajero'])){?><span class="error"><?= $errores['importepasajero'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>-->
                                                    </div>

                                                    <?php  include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/formulariospartefinal.php' ?>

                                                </div>
                                            </div><?php

                                        }else{ ?> 
                                            <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/formularios.php' ?><?php 
                                        } ?>

                                   
                                        
                                    <div><?php 
                                        if($_SESSION['perfil']['roll']=='agenciaviajes'){ ?>
                                            <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/infoOcupacionBus.php' ?><?php  
                                        } ?>              
                                    </div>
                                </div><?php
                            } ?>
                </form>
            </div>


            

           
<?php $contenido = ob_get_clean() ?>
<?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA .  BASE;?>










<style> 

/*.container{ max-width: fit-content !important;}*/

@media only screen and (min-width: 1440px) and (max-width: 2559px) {
   
    .fila_asientos{margin: auto; height: 100px;}
    .butacacompleta2{transform: scale(0.75);
    margin-left: -0.5em;}
}


@media only screen and (min-width: 1024px) and (max-width: 1439px) {
    .fila_asientos{margin-left: 5em; height: 85px;}
    .butacacompleta2{transform: scale(0.6);
    margin-left: -2em;}
}

@media only screen and (min-width: 768px) and (max-width: 1023px) {
   
    .fila_asientos{margin-left: 1em; height: 85px;}
    .butacacompleta2{transform: scale(0.6);
    margin-left: -2em;}
}

@media only screen and (min-width: 425px) and (max-width: 767px) {
    .fila_asientos{margin-left: 3em; height: 55px;}  
      .butacacompleta2{transform: scale(0.3);
    margin-left: -3.5em;}
}

@media only screen and (max-width: 424px){
    .fila_asientos{margin-left: 3em; height: 55px;}
    .butacacompleta2{transform: scale(0.25);
    margin-left: -4.1em;}
}

form{margin: 0em;}
   .butacacompleta2 img,.butacacompleta2 .check_plaza{border: solid 1px black;}

</style>