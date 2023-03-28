<!-- Todos los negocios de una Localidad al 100% desde la programación de Viajes-->
<?php 
use miId\fuente\Repositorio\ComerRepositorio;
ob_start(); ?>
<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades.inc';

   $negocios_Localidad =$_SESSION['negocios_Localidad']; $ref_Localidad=$negocios_Localidad[0]->ref_Localidad; 
   if(empty($ref_Localidad)){?><script>window.location.href="index.php?ctl=inicio/#situarprimerarticulo";</script><?php } ?>

    <div class="container">
        <div class="row">
            <?php
                require __DIR__ . '/../../../fuente/Modelo/busquedas.inc';
                require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ComerRepositorio.inc';
                $nombreLocalidad = (new ComerRepositorio())->nombreLocalidad($ref_Localidad);?>

                <div id="recomendamos" class="col-xl-12 text-center ">
                    <h5>Te recomendamos en: <?php echo pasarUtf8($nombreLocalidad[0]->nombre_Localidad); ?></h5>
                </div>
        </div>
    </div><?php

    if(!empty($negocios_Localidad) || empty($_SESSION['negocios_Localidad'])){?>
        <div class="container">
                <div class="row"><?php 
                    foreach ($negocios_Localidad as $bar_rest) {?>
                        <div class="col-xl-2 text-left col-lg-4 col-md-4 col-sm-6 col-6" >
                            <div class="tarjeta_barrestaurante_localidad"style="padding: 0.2em; ">
                                <div class="row articulo" style="padding: initial;">


                <div class="row">
                    <?php  require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/nombreRestaurante.inc';?> 
                </div>

                <div class="row" style="margin: auto; padding:0em;">

                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12 info_negocio" >
                        <?php  require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/carruselTodos.inc';?> 
                    </div>

                </div>


                <div class="row">

                    <div class="col-xl-11 text-center col-lg-11 col-md-11 col-sm-11 col-11 info_negocio">

                        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/menu_deldia.inc'; ?>
                                
                    <?php // require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/estrellas1negocioderecha.inc';?><?php  

                                if(empty($bar_rest->e_menu)){?>
                                    <div class="descrip_negocio" style="margin-top: 1.2em;"><?php
                                }else{?>   
                                    <div class="descrip_negocio" style="margin-top: 0.5em;"><?php } ?>
                                            <?php require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/descripcion.inc';?>
                                    </div>
                                </div>

                            <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/leerMas.inc'; ?>
                        </div>


                <div class="col-xl-1 text-center col-lg-1 col-md-1 col-sm-1 col-1">
                <?php require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/cupon_descuento.inc';?>
                </div>



                </div>

                                </div>
                            </div>   
                                <?php };?>     
                        </div>
                </div>
        </div>
                    

<?php }else{?>
        <p id="nohay"><?php echo ("¡En espera de Sponsors!");?></p>
<?php } ?>

    </div>
        
    </form>
    <!--
    <script type="text/javascript" src="js/jquery-3-5.1.min.js"></script>
    <script type="text/javascript" src="js/boostrap.min.js"></script>
    <script type="text/javascript" src="js/boostrap-bundle.min.js"></script>-->
    

<?php $contenido = ob_get_clean() ?>
<?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA .  BASE;?>



<style>

#carrusel{display: none;}
.tarjeta_barrestaurante_localidad .articulo{margin-top: 0em;  max-width: 200px;}
h5{border-bottom: 1px solid #006293; text-align: center; margin-top: 1em; padding-bottom: 0.1em;}
h5, h6{color: #006293;}
#nohay{color:red; font: 1em sans-serif; text-align: center; margin-top: 1em;}

.articulo {
    text-align: left; border: 1px solid #006293; border-radius: 0.2em; padding: 0.5em; background-color: #f6f6f6;
    box-shadow: inset 0px 0px 20px 4px #c1c1c1; margin-top:0.3em; margin-bottom:0.3em;

    /* background-image: url("	https://cdn.pixabay.com/photo/2018/10/27/06/10/wood-3775893__340.jpg");
    background-size: cover;*/
}
.articulo:hover{  box-shadow: 1px 1px 10px 1px #888888; border-radius:  0.2em;}
.descrip_negocio p{font-size: 0.6em; margin-bottom: 0em;}
.descrip_negocio .telefono{font-size: 1em; margin-top: 0.2em; text-decoration: underline; }
</style>



<style>
/*
.tripadvisor_img, .facebook_img, .thefork_img{
float: left;    
background-image: url(//www.kerico.es/kerico/assets/css/../images/sprite-valoraciones-low.png);    
margin-right: 10px;width: 26px;
}
.redes_sociales{margin-top: 0.4em; max-height: 1.5em;}
.tripadvisor_img{ height: 27px; background-position: 1px 0;}
.facebook_img{ height: 24px; background-position: 1px -220px;}
.redes1_restGuru{ transform: scale(0.25); margin-top: -3.5em;}
.redes2_restGuru{ margin-top:-3em; margin-left:0.5em; transform: scale(0.25);}  
.redes3_restGuru{margin-top: -0.7em; margin-left:0em; transform: scale(1);}
.redes4_restGuru{margin-top: -0.5em; margin-left: 0.2em; transform: scale(1);}
.thefork_img{ height: 29px; background-position: 1px -80px;}
*/
</style>


























   
