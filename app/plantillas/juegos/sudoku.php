<?php 
use miId\fuente\Repositorio\ComerRepositorio;
ob_start();?>

<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Todos los destinos</title>
  <link rel="stylesheet" type="text/css" href="web/css/bootstrap.min.css">
  <link rel="stylesheet" type="text/css" href="web/css/bootstrap-grid.min.css">
  <link rel="stylesheet" type="text/css" href="web/css/bootstrap-reboot.min.css">
  <link rel="stylesheet" type="text/css" href="web/css/stylesmostrarfiltrados.css">
</head>
<body>
<?php include_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades.inc'; ?> 


<?php
require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ComerRepositorio.inc';
// Necesito el nombre de las localidades que son del dia de hoy
$localidades = (new ComerRepositorio())->localidadesViajarHoy();



$numLocalidades=count($localidades);?>


<!--
<div class="container"><?php

    for($i=0; $i<$numLocalidades; $i++){
        $ref_Localidades=$localidades[$i];
        $ref_Localidad=$ref_Localidades->ref_Localidad;
        $lugaresDondeComerHoy =  (new ComerRepositorio())->publicidadRestaurantes($ref_Localidad);
        $negocio_Localidad=$lugaresDondeComerHoy; 
      ?>

     <?php
            for($j=0; $j<count($negocio_Localidad); $j++ ){?>
                 
                      <div class=" tarjeta_barrestaurante_localidad">

                      <div class="row">

                          <div class="col-xl-10 text-left col-lg-10 col-md-8 col-sm-6 col-6">
                            
                          </div>


                          <div class="col-xl-10 text-left col-lg-10 col-md-8 col-sm-6 col-6">

                          </div>

                      </div>
                              
                                  <div class="row articulo" >

                                      <div class="col-xl-10 text-left col-lg-10 col-md-8 col-sm-6 col-6">
                                          <div id="carrusel_restaurantes" id="carouselExampleSlidesOnly" class="carousel slide" data-ride="carousel">
                                          <a href="<?php echo $negocio_Localidad[$j]->e_web; ?>">
                                              <div class="carousel-inner">
                                              
                                                  <div class="carousel-item active">
                                              <!--<img class="d-block w-100" src="<?php echo "web/imagenes/restaurantes/" . $negocio_Localidad->ruta_imagen1; ?>" alt="Logo Restaurante">
                                                  <img src="<?php echo $negocio_Localidad[$j]->ruta_imagen1; ?>" alt="First Slide">
                                              
                                              </div>
                                              
                                                  <div  class="carousel-item">
                                                      <img src="<?php echo $negocio_Localidad[$j]->ruta_imagen2; ?>" alt="Second Slide">
                                                  </div>

                                                  <div class="carousel-item">
                                                  <img src="<?php echo $negocio_Localidad[$j]->ruta_imagen3; ?>" alt="Third Slide">
                                              </div>

                                              </div>
                                          </a>
                                          </div>
                                      </div>

                                      <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-6 info_negocio">
                                              <h6 >   
                                              <a href="<?php echo $negocio_Localidad[$j]->e_web;?>"><?php echo $negocio_Localidad[$j]->nombre; ?></a>
                                              </a>
                                              
                                              </h6>

                                              <div class="descrip_negocio">
                                                  <p><?php echo pasarUtf8($negocio_Localidad[$j]->descripcion); ?></p>
                                                  <p><?php echo pasarUtf8($negocio_Localidad[$j]->direccion); ?></p>
                                                  <p><?php echo "Tel: " . $negocio_Localidad[$j]->telefono; ?></p> 
                                              </div>

                                              <div class="row redes_sociales">
                                                  <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-6 facebook">
                                                      <a href=<?php echo $negocio_Localidad[$j]->e_facebook;  ?>>Facebook</a>
                                                  </div>

                                                  <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-6">
                                                      <a href=<?php echo $negocio_Localidad[$j]->e_tripadvisor; ?>>Tripadvisor</a>
                                                  </div>
                                              </div>
                                      </div>

                                  </div>
                     
                </div> 
            <?php } ?>
                                <?php }?>

</div>
            -->






<iframe src="app/plantillas/Sudoku/index.php" height="500" width="300" title="Iframe Example"></iframe>

<!--
src="web/imagenes/zarautz_carrusel.jpg"
-->
    <script type="text/javascript" src="js/jquery-3-5.1.min.js"></script>
    <script type="text/javascript" src="js/boostrap.min.js"></script>
    <script type="text/javascript" src="js/boostrap-bundle.min.js"></script>
</body>
</html>


 <?php $contenido = ob_get_clean() ?>

 <?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/basefantasma.php';?>

 <style>
    /* .articulo{margin: 0.5em;}
     img{height: 110px;}
     p{font-size: 0.7em; margin: 0em;}
     a{font-size: 0.9em;}*/
 </style>

