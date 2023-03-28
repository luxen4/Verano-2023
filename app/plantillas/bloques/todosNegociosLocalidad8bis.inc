<!-- Todos los negocios de una Localidad al 100%-->
<?php 
use miId\fuente\Repositorio\ComerRepositorio;
ob_start(); 
?>
<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades.inc'; ?>
   
<?php $negocios_Localidad =$_SESSION['negocios_Localidad'];

    if(!empty($negocios_Localidad)){
        $ref_Localidad=$negocios_Localidad[0]->ref_Localidad; ?>

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
            </div>

            <div class="container" style="padding: 1em;">
                <div class="row" style="padding: 0em;">
                    <?php 
                        foreach ($negocios_Localidad as $bar_rest) {?>
                        
                            
                                <div class="col-xl-2 text-left col-lg-4 col-md-3 col-sm-4 col-6">
                                    <div class=" tarjeta_barrestaurante_localidad">
                                            
                                                <div class="row articulo" >

                                                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                                        <div id="carrusel_restaurantes" id="carouselExampleSlidesOnly" class="carousel slide" data-ride="carousel">
                                                        <a href="<?php echo pasarUtf8($bar_rest->e_web);?>">
                                                            <div class="carousel-inner">
                                                            
                                                                <div class="carousel-item active">
                                                            <!--<img class="d-block w-100" src="<?php echo pasarUtf8("web/imagenes/restaurantes/" . $bar_rest->ruta_imagen1); ?>" alt="Logo Restaurante">-->
                                                                <img src="<?php echo pasarUtf8($bar_rest->ruta_imagen1); ?>" alt="First Slide">
                                                            
                                                            </div>
                                                            
                                                                <div  class="carousel-item">
                                                                    <img src="<?php echo pasarUtf8($bar_rest->ruta_imagen2); ?>" alt="Second Slide">
                                                                </div>

                                                                <div class="carousel-item">
                                                                <img src="<?php echo pasarUtf8($bar_rest->ruta_imagen3); ?>" alt="Third Slide">
                                                            </div>

                                                            </div>
                                                        </a>
                                                        </div>
                                                    </div>



                                                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12 info_negocio">
                                                            <h6>
                                                            <a 
                                                                <?php   
                                                            if(!$bar_rest->e_web=="#"){?>
                                                                href="<?php echo pasarUtf8($bar_rest->e_web); ?>"<?php
                                                            }?>>
                                                                <?php echo pasarUtf8($bar_rest->nombre); ?>

                                                            </a>
                                                            
                                                            </h6>

                                                            <?php // require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/estrellas1negocioderecha.inc';?>

                                                          
                                                            <div class="descrip_negocio">
                                                                <p><?php echo pasarUtf8($bar_rest->descripcion); ?></p>
                                                                <p><?php echo pasarUtf8($bar_rest->direccion); ?></p>
                                                                <p><?php echo pasarUtf8("Tel: " . $bar_rest->telefono); ?></p> 
                                                            </div>



                                                            <div class="row redes_sociales">

                                                            <?php $veces=0;

                                                         if ($veces<2) {
                                                            if($bar_rest->e_tripadvisor=="#"){
                                                            }else{?>
                                                            <div class='col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6'>
                                                                <a style="font-size: 0.7rem;" href=<?php echo pasarUtf8($bar_rest->e_tripadvisor);?>>Tripadvisor</a>
                                                            </div><?php 
                                                            $veces++;
                                                        } 
                                                        }    
                                                            
                                                        if ($veces<2) {
                                                            if($bar_rest->e_facebook=="#"){
                                                            }else{?>
                                                            <div class='col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6'>
                                                                <a style="font-size: 0.7rem;" href=<?php echo pasarUtf8($bar_rest->e_facebook);?>>Facebook</a>
                                                            </div><?php 
                                                            $veces++;
                                                        } 
                                                        }

                                                        if ($veces<2) {
                                                            if($bar_rest->e_restaurantGuru=="#"){

                                                            }else{
                                                                if($veces==1 && $bar_rest->e_theFork=="#"){?>

                                                                    <div class='col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6'>
                                                                    <a style="font-size: 0.7rem;" href=<?php echo $bar_rest->e_restaurantGuru;?>>r-guru.com</a>
                                                                </div><?php $veces++;

                                                                }else{?>
                                                                <div class='col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-12'>
                                                                    <a style="font-size: 0.7rem;" href=<?php echo $bar_rest->e_restaurantGuru;?>>r-guru.com</a>
                                                                </div><?php $veces++;

                                                                }
                                                                
                                                                
                                                                
                                                            } 
                                                        }


                                                        if ($veces<2) {
                                                            if($bar_rest->e_theFork=="#"){

                                                            }else{
                                                                if($veces==1){?>

                                                                    <div class='col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6'>
                                                                    <a style="font-size: 0.7rem;" href=<?php echo $bar_rest->e_theFork;?>>thefork.es</a>
                                                                </div><?php $veces++;

                                                                }else{?>
                                                                <div class='col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-12'>
                                                                    <a style="font-size: 0.7rem;" href=<?php echo $bar_rest->e_theFork;?>>thefork.es</a>
                                                                </div><?php $veces++;

                                                                }
                                                                
                                                                
                                                                
                                                            } 
                                                        }?>
                                                   
                                                    <!--
                                                    <div class='col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-12'>
                                                        <a  href="index.php?ctl=mostrartodosdestinos"><i class="fas fa-umbrella-beach"></i>Tu opinión!</a>
                                                    </div>
                                                    -->

                                                                
                                                            </div>
                                                    </div>

                                                </div>
                                    </div>
                                </div>   
                        <?php };?>     
                </div>
                    

<?php }else{?>
        <p id="nohay"><?php echo ("¡En espera de Sponsors!");?></p>
<?php } 

//unset($_SESSION['negocios_Localidad']);
//var_dump($_SESSION['negocios_Localidad']);

?>

    </div>
        
  

    </form>
    <script type="text/javascript" src="js/jquery-3-5.1.min.js"></script>
    <script type="text/javascript" src="js/boostrap.min.js"></script>
    <script type="text/javascript" src="js/boostrap-bundle.min.js"></script>
    

<?php $contenido = ob_get_clean() ?>

<?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/basefantasma.php';?>



<style>
#recomendamos{/*margin-bottom: 0.5em;*/}
.descrip_negocio p{font-size: 0.65em;}
.tarjeta_barrestaurante_localidad .articulo{margin-top: 0em;}
.redes_sociales a{font-size: 0.8em;}
.row .articulo{padding-left: 0em; /*padding-right: 0em;*/}

.info_negocio{ margin-top: 0.5em;}
.info_negocio h6 a{font-size: 0.95em;}
.info_negocio a{font-size: 0.7em;}

h5{
color: #006293;
    border-bottom: 1px solid #006293;
    text-align: left; margin-top: 1em; padding-bottom: 0.1em;}

#nohay{color:red; font: 1em sans-serif; text-align: center; margin-top: 1em;}
.facebook{padding-left: 0em;}
.articulo {
    text-align: left;
    border: 1px solid #006293;
    border-radius: 0.2em;
    padding: 0.5em;
    background-color: #f6f6f6;
    box-shadow: inset 0px 0px 20px 4px #c1c1c1; margin-top:0.3em; margin-bottom:0.3em;

  
     /* background-image: url("	https://cdn.pixabay.com/photo/2018/10/27/06/10/wood-3775893__340.jpg");
      background-size: cover;*/

}

.articulo:hover{  box-shadow: 1px 1px 10px 1px #888888; border-radius:  0.2em;}
.descrip_negocio{margin-top: 0.9em;}
h6{color: #006293; text-decoration: underline; }
p{font-size: 1em; margin-top: -0.5em; margin-bottom: 0.3em;}
.carousel-item {  transition: none;}
#carrusel_restaurantes .carousel-item img{width: 100%; height: 118px; border-radius: 0.15em;}






</style>


























   
