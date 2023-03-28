
<?php
// $uri=$_SERVER["REQUEST_URI"];
    //    $partes = explode("ctl=", $uri);
       
//if (!empty($partes[1])) {
   // $ctl=$partes[1];

   // if ($ctl=="inicio/") { ?>
    
    <div id="carrusel1" class="container-fluid" style="padding:0em;">
      <div class="row">
            <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">  
                    <div id="carouselExampleSlidesOnly" class="carousel slide" data-ride="carousel">
                      <div class="carousel-inner">
                       
                        <div class="carousel-item active">
                          <img  class="d-block w-100" src="web/imagenes/carrusel/playa-noja1.jpg" alt="First slide">
                        </div>

                        <div class="carousel-item">
                            <img class="d-block w-100" src="web/imagenes/carrusel/playa-castro1.jpg" alt="First slide">
                        </div>

                        <div class="carousel-item">
                          <img class="d-block w-100" src="web/imagenes/carrusel/playa-zarautz1.jpg" alt="Zarautz slide">
                        </div>
                     
                        <div class="carousel-item">
                          <img class="d-block w-100" src="web/imagenes/carrusel/playa-sanjuandeluz.jpg" alt="Fourd slide">
                        </div>

                        <div class="carousel-item">
                          <img class="d-block w-100" src="web/imagenes/carrusel/playa-laredo2.jpg" alt="Second slide">
                        </div>
                        
                        <div class="carousel-item">
                          <img class="d-block w-100" src="web/imagenes/carrusel/zarautz_carrusel.jpg" alt="Zarautz slide">
                        </div>

                    <!-- <img class="d-block w-100" src="web/imagenes/Somo.jpg" alt="Third slide">-->
                    <!--
                        <div class="carousel-item active">
                              <picture>
                                <source media="(max-width:2100px)"srcset="web/imagenes/playa-noja1.jpg">
                                <source media="(max-width:650px)" srcset="web/imagenes/zarautz_carrusel.jpg">
                                <source media="(max-width:465px)" srcset="web/imagenes/Somo.jpg">
                                <img src="web/imagenes/fuenterrabia.jpg" alt="Flowers">
                              </picture>
                        </div>
                      -->
                    </div>
                  </div>
          </div>
      </div>
    </div>

 


    <div id="carrusel2" class="container" style="max-width:1600px;">

    <div class="row">
        <div class="col-xl-5 col-lg-5 col-md-5 col-sm-5 col-4 cont_foto"> 

          <?php $destinosLocalidad=array('Noja','Castro Urdiales','Zarautz','San Juán de Luz','Laredo'); ?>
          <?php $foto_destinosLocalidad=array('playa-noja1.jpg','playa-castro1.jpg','playa-zarautz1.jpg','playa-sanjuandeluz.jpg','playa-laredo2.jpg'); ?>

          <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/home/carruseles_pequenos.inc' ?>

         
        </div>

        <div class="col-xl-4 col-lg-4 col-md-4 col-sm-4 col-4 cont_foto"> 

        <?php 

        $destinosLocalidad=array('Santander','Fuenterrabía','Orio','Deba','Plentzia');    //var_dump($destinosLocalidad);?>
        <?php $foto_destinosLocalidad=array('Santander.jpg','Fuenterrabía.jpg','Orio.jpg','Deba.jpg','Plentzia.jpg'); //var_dump($destinosLocalidad);?>

        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/home/carruseles_pequenos2.inc' ?>


        </div>

        <div class="col-xl-3 col-lg-3 col-md-3 col-sm-3 col-4 cont_foto"> 

        <?php 
/*
$destinosLocalidad=array('Ajo','Sopelana','Comillas');    //var_dump($destinosLocalidad);?>
<?php $foto_destinosLocalidad=array('Ajo.jpg','Sopelana.jpg','Comillas.jpg'); //var_dump($destinosLocalidad);?>

<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/home/carruseles_pequenos2.inc' */?>




        <div id="carrusel" class="container-fluid">
              <div id="carouselExampleSlidesOnly" class="carousel slide" data-ride="carousel">
                  <div class="carousel-inner">
                    <div class="carousel-item active">
                        <img class="d-block w-100" src="web/imagenes/destinos/Ajo.jpg" alt="Ajo">
                        <h6>Ajo</h6>
                    </div>

                    <div class="carousel-item">
                        <img class="d-block w-100" src="web/imagenes/destinos/Sopelana.jpg" alt="Ajo">
                        <h6>Sopelana</h6>
                    </div>

                    <div class="carousel-item">
                        <img class="d-block w-100" src="web/imagenes/destinos/Comillas.jpg" alt="Ajo">
                        <h6>Comillas</h6>
                    </div>

                  </div>
              </div>
            </div>
        </div>
    </div>

<style>


.carousel-item{
    /*transition: none; margin: 0.5em;*/ padding : 0.5em;
  }

  h6{text-align: center;}


  @media only screen and (min-width: 1601px) and (max-width: 2999px) {
    #carrusel1{display: none;}
  }


 @media only screen and (min-width: 770px) and (max-width: 1600px) {
#carrusel1{display: none;}

  #carrusel2 img{height: 165px;}
  .cont_foto{padding: 0em;}
  .container-fluid{
    padding-right: 0em!important;
    padding-left: 0em!important;
 }

}
@media only screen and (max-width: 769px) {

 #carrusel2 {display: none;}}

 .container-fluid{padding: 0em;}
 

 
</style>


      <div class="row">
          <div class="col-xl-3 col-lg-3 col-md-3 col-sm-12 col-3 cont_foto" > 
            <div id="carrusel" class="container-fluid">
              <div id="carouselExampleSlidesOnly" class="carousel slide" data-ride="carousel">
                  <div class="carousel-inner">
                  
                    <div class="carousel-item active">
                      <img  class="d-block w-100" src="web/imagenes/destinos/Getaria.jpg" alt="Getaria">
                      <h6>Getaria</h6>
                    </div>

                    <div class="carousel-item">
                        <img class="d-block w-100" src="web/imagenes/destinos/Hendaya.jpg" alt="Hendaya">
                        <h6>Hendaya</h6>
                    </div>

                    <div class="carousel-item">
                        <img class="d-block w-100" src="web/imagenes/destinos/Ondarroa.jpg" alt="Hendaya">
                        <h6>Ondarroa</h6>
                    </div>

                  </div>
              </div>
            </div>
          </div>

          <div class="col-xl-3 col-lg-3 col-md-3 col-sm-12 col-3 cont_foto">
            <div id="carrusel" class="container-fluid">
              <div id="carouselExampleSlidesOnly" class="carousel slide" data-ride="carousel">
                  <div class="carousel-inner">
                  
                    <div class="carousel-item active">
                      <img  class="d-block w-100" src="web/imagenes/destinos/Isla.jpg" alt="Isla">
                      <h6>Isla</h6>
                    </div>

                    <div class="carousel-item">
                        <img class="d-block w-100" src="web/imagenes/destinos/Lekeitio.jpg" alt="Lekeitio">
                        <h6>Lekeitio</h6>
                    </div>

                    <div class="carousel-item">
                        <img class="d-block w-100" src="web/imagenes/destinos/Bakio.jpg" alt="Lekeitio">
                        <h6>Bakio</h6>
                    </div>

                  </div>
              </div>
            </div>
          </div>

          <div class="col-xl-3 col-lg-3 col-md-3 col-sm-12 col-3 cont_foto">  
            <div id="carrusel" class="container-fluid">
              <div id="carouselExampleSlidesOnly" class="carousel slide" data-ride="carousel">
                  <div class="carousel-inner">
                  
                    <div class="carousel-item active">
                      <img  class="d-block w-100" src="web/imagenes/destinos/Zumaia.jpg" alt="Zumaia">
                      <h6>Zumaia</h6>
                    </div>

                    <div class="carousel-item">
                        <img class="d-block w-100" src="web/imagenes/destinos/Zarautz.jpg" alt="Zarautz">
                        <h6>Zarautz</h6>
                    </div>

                    <div class="carousel-item">
                      <img class="d-block w-100" src="web/imagenes/destinos/Somo.jpg" alt="Somo">
                      <h6>Somo</h6>
                    </div>
                  </div>
              </div>
            </div>
          </div>

          <div class="col-xl-3 col-lg-3 col-md-3 col-sm-12 col-3 cont_foto">  
            <div id="carrusel" class="container-fluid">
              <div id="carouselExampleSlidesOnly" class="carousel slide" data-ride="carousel">
                  <div class="carousel-inner">
                  
                    <div class="carousel-item active">
                      <img class="d-block w-100" src="web/imagenes/destinos/Laredo.jpg" alt="Laredo">
                      <h6>Laredo</h6>
                    </div>

                    <div class="carousel-item">
                        <img class="d-block w-100" src="web/imagenes/destinos/Santoña.jpg" alt="Santoña">
                        <h6>Santoña</h6>
                    </div>

                    <div class="carousel-item">
                      <img class="d-block w-100" src="web/imagenes/destinos/Biarritz.jpg" alt="Biarritz">
                      <h6>Biarritz</h6>
                    </div>
                  </div>
              </div>
            </div>
          </div>

      </div>
    </div>

    <style>
      .foto_pequena, .carousel-item img{width: 100%; height: 200px; border-radius:0.25em ;}
    </style>

    <?php
   // }
//}
          ?>



<style>
  .carousel-item{width: 100%;}
</style>
