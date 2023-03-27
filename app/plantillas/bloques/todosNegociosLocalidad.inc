<!-- Todos los negocios de una Localidad al 100%-->
<?php 
use miId\fuente\Repositorio\ComerRepositorio;
ob_start(); 
?>
<?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/utilidades/utilidades.inc'; ?>
    <div class="container" style="padding-bottom: 2em;">
        <div class="row">
            <?php
              require __DIR__ . '/../../../fuente/Modelo/busquedas.inc';
                require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/ComerRepositorio.inc';
                $nombreLocalidad = (new ComerRepositorio())->nombreLocalidad($cod_Localidad);?>

                <div class="col-xl-12 text-center ">
                    <h5>Te recomendamos en: <?php echo $nombreLocalidad[0]->nombre_Localidad; ?></h5>
                </div>
        </div>
    </div>


<?php if(!empty($negocios_localidad)){?>
    <div class="container" style="padding-bottom: 2em;">
                        <?php 
                            foreach ($negocios_localidad as $negocio_Localidad) {?>
                                <div class="row tarjeta_barrestaurante_localidad">

                                            <div class="row articulo" >

                                                <div class="col-xl-10 text-left col-lg-10 col-md-8 col-sm-6 col-6">
                                                    <div id="carrusel_restaurantes" id="carouselExampleSlidesOnly" class="carousel slide" data-ride="carousel">
                                                    <a href="<?php echo $negocio_Localidad->e_web;;?>">
                                                        <div class="carousel-inner">
                                                        
                                                            <div class="carousel-item active">
                                                        <!--<img class="d-block w-100" src="<?php echo "web/imagenes/restaurantes/" . $negocio_Localidad->ruta_imagen1; ?>" alt="Logo Restaurante">-->
                                                            <img src="<?php echo $negocio_Localidad->ruta_imagen1; ?>" alt="First Slide">
                                                        
                                                        </div>
                                                        
                                                            <div  class="carousel-item">
                                                                <img src="<?php echo $negocio_Localidad->ruta_imagen2; ?>" alt="Second Slide">
                                                            </div>

                                                            <div class="carousel-item">
                                                            <img src="<?php echo $negocio_Localidad->ruta_imagen3; ?>" alt="Third Slide">
                                                        </div>

                                                        </div>
                                                    </a>
                                                    </div>
                                                </div>

                                                <div class="col-xl-10 text-left col-lg-10 col-md-10 col-sm-6 col-6 info_negocio">
                                                        <h6 >   
                                                          <a style="font-size: 0.9em;" href="<?php echo $negocio_Localidad->e_web;?>"><?php echo $negocio_Localidad->nombre; ?></a>
                                                        </a>
                                                        
                                                        
                                                        
                                                        </h6>

                                                        <div class="descrip_negocio">
                                                            <p><?php echo pasarUtf8($negocio_Localidad->descripcion); ?></p>
                                                            <p><?php echo pasarUtf8($negocio_Localidad->direccion); ?></p>
                                                            <p><?php echo "Tel: " . $negocio_Localidad->telefono; ?></p> 
                                                        </div>

                                                        <div class="row">
                                                            <div class="col-xl-4 col-lg-4 col-md-4 col-sm-4 col-6 facebook">
                                                                <a href=<?php echo $negocio_Localidad->e_facebook;  ?>>Facebook</a>
                                                            </div>

                                                            <div style="    padding-left: 0em;" class="col-xl-4 text-right col-lg-4 col-md-4 col-sm-4 col-6">
                                                                <a href=<?php echo $negocio_Localidad->e_tripadvisor; ?>>Tripadvisor</a>
                                                            </div>
                                                        </div>
                                                </div>

                                            </div>
                                   
                                </div>   
                            <?php };?>       
                    

        <?php }else{?>
            
                <p id="nohay"><?php echo ("¡En espera de Sponsors!");?></p>



        <?php } ?>

    </div>
        
  

    </form>
    <script type="text/javascript" src="js/jquery-3-5.1.min.js"></script>
    <script type="text/javascript" src="js/boostrap.min.js"></script>
    <script type="text/javascript" src="js/boostrap-bundle.min.js"></script>
    

<?php $contenido = ob_get_clean() ?>

<?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/basefantasma.php';?>



<style>
.container{padding-left: 0.2em; padding-right: 0.2em;}
.tarjeta_barrestaurante{margin: 0 auto;}
.descrip_negocio p{font-size: 0.8em;}
.tarjeta_barrestaurante_localidad .articulo{margin-top: 0em;}

h2{color:#006293; text-decoration: underline; margin: 0.5em;}

#nohay{color:red; font: 1em sans-serif; text-align: center; margin-top: 1em;}
.facebook{padding-left: 0em;}
.articulo {
    text-align: left;
    border: 1px solid #006293;
    border-radius: 0.2em;
    margin: auto; 
    padding: 0.6em;
    padding-left: 0em;
    background-color: #f6f6f6;
    box-shadow: inset 0px 0px 20px 4px #c1c1c1; margin-top:0.3em; margin-bottom:0.3em;
}

.info_negocio{ padding-left:0em;}
.descrip_negocio{margin-top: 0.9em;}



h6{color: #006293; text-decoration: underline; }
p{font-size: 1em; margin-top: -0.5em; margin-bottom: 0.3em;}

.carousel-item {  transition: none;}
#carrusel_restaurantes .carousel-item img{width: 100%; height: 118px; border-radius: 0.2em;}
</style>


























   
