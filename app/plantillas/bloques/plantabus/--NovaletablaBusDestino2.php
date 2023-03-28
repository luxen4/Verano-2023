
<link rel="stylesheet" type="text/css" href='web/css/plantasbuses/plantabus.css'/> <!--OK-->
<link rel="stylesheet" type="text/css" href='web/css/plantasbuses/bus_63plazas.css'/> 

<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades.inc'; ?>

<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/scripts/css_tablaBusDestino.inc';?>
<?php   // No va en el Servidor la llamada al ajax!  
        // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/scripts/js_tablaBusDestino.inc';?><?php
        $ref_Destino=$_SESSION['ref_Destino'];

        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/plazasOcupadas.inc'; ?>

<div class="row">  
    <div id="planta_bus" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">  
        <div id="todos_sientos_bloque">
            <div class="junto">
                <div class="filas">
                    <!--------------------------------------------------------------------------------------------------------------->   
                        <?php $plazaFinal=59; $plazaInicio=35; $incremento=4; ?> <?php  include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/conjuntoAsientos.php'; ?>
                    <!--------------------------------------------------------------------------------------------------------------->  
                    <!--------------------------------------------------------------------------------------------------------------->   
                        <?php $i=33; ?> <?php  include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/asientoUnico.php' ?>
                    <!--------------------------------------------------------------------------------------------------------------->   
                    <!--------------------------------------------------------------------------------------------------------------->   
                        <?php $plazaFinal=29; $plazaInicio=1; $incremento=4; ?> <?php  include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/conjuntoAsientos.php'; ?>
                    <!--------------------------------------------------------------------------------------------------------------->  
                </div>
            </div>

            <div class="junto">
                <div class="filas">
                    <!--------------------------------------------------------------------------------------------------------------->   
                        <?php $plazaFinal=60; $plazaInicio=36; $incremento=4; ?> <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/conjuntoAsientos.php' ?>
                    <!--------------------------------------------------------------------------------------------------------------->   
                        <?php $i=34; ?> <?php  include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/asientoUnico.php' ?>   
                    <!--------------------------------------------------------------------------------------------------------------->   
                        <?php $plazaFinal=30; $plazaInicio=2; $incremento=4; ?> <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/conjuntoAsientos.php' ?>
                    <!--------------------------------------------------------------------------------------------------------------->  
                </div>
            </div>

        
                <div class="filas">
                    <!---------------------------------------------------------------------------------------------------------------> 
                        <?php $i=61; ?> <?php  include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/asientoUnico.php' ?>
                    <!---------------------------------------------------------------------------------------------------------------> 
                </div>
                    
                <div class="filas" style="margin-top:-10em;">
                    <!---------------------------------------------------------------------------------------------------------------> 
                        <?php $i=62; ?><?php  include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/asientoUnico.php' ?>
                    <!--------------------------------------------------------------------------------------------------------------->   
                        <?php $plazaFinal=57; $plazaInicio=37; $incremento=4; ?> <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/conjuntoAsientos.php' ?>
                    <!--------------------------------------------------------------------------------------------------------------->  
                        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/asientoAsteriscos.php' ?>
                    <!--------------------------------------------------------------------------------------------------------------->   
                        <?php $plazaFinal=31; $plazaInicio=3; $incremento=4; ?> <?php  include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/conjuntoAsientos.php' ?>
                    <!--------------------------------------------------------------------------------------------------------------->  
                </div>

            <div class="filas" style="margin-top:-10em; margin-bottom: -4em;">
                <!---------------------------------------------------------------------------------------------------------------> 
                    <?php $i=63; ?><?php  include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/asientoUnico.php' ?>
                <!--------------------------------------------------------------------------------------------------------------->   
                    <?php $plazaFinal=58; $plazaInicio=38; $incremento=4; ?> <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/conjuntoAsientos.php' ?>
                <!--------------------------------------------------------------------------------------------------------------->  
                <!--------------------------------------------------------------------------------------------------------------->  
                    <?php  include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/asientoAsteriscos.php' ?> 
                <!--------------------------------------------------------------------------------------------------------------->      
                    <?php $plazaFinal=32; $plazaInicio=4; $incremento=4; ?> <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/conjuntoAsientos.php' ?>
                <!--------------------------------------------------------------------------------------------------------------->                      
            </div>
        </div>           
    </div>
</div>


  
<input id="ref_Destino" type="checkbox" name="datos[refdestino]" value="<?php echo ($_SESSION['ref_Destino']); ?>" checked  >

<?php include $_SERVER['DOCUMENT_ROOT'] . '\Verano-2023/app\plantillas\bloques\destinos\InfoDestino.inc';?>

    <!--Por comodidad se necesita volver a los formularios de inscripción-->
    <div id="inscribir_pasajeros" class="row">
        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
            <a href="index.php?ctl=motrarplantabus">Inscribir Pasajeros</a>                                             
        </div>
    </div>

    <div id="desplegar_tabla_Info_bus" style="margin: 1em" class="row">
        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
            <input id="" type="button" value="Información Bus">                                             
        </div>
    </div>

    <?php include $_SERVER['DOCUMENT_ROOT'] . '\Verano-2023/app\plantillas\bloques\destinos\rotuloSiNoPasajeros.inc';?>

