<!--Inicio carrusel todos-->

    <div id="carrusel_restaurantes" id="carouselExampleSlidesOnly" class="carousel slide" data-ride="carousel">
        <a <?php if($bar_rest->e_web=="#"){ }else{?> href="<?php echo pasarUtf8($bar_rest->e_web);?>"<?php  } ?> >
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

    <div class="redes">
            <?php //require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/redesSocialesIconosLargo.inc';?>
          
                <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                    <?php require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/redesSocialesIconosPrincipal.inc';?>   
                </div>
           
    </div>



    <!--

    <div class="row">
    
    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-7 mas_fotos">
        <a target="blanc" 
            href="https://www.tripadvisor.es/Restaurant_Review-g187457-d989163-Reviews-Bar_Bergara-San_Sebastian_Donostia_Province_of_Guipuzcoa_Basque_Country.html#photos;aggregationId=101&albumid=101&filter=7&ff=186829580">
            Ver más fotos
        </a>
    </div>

    </div>

    -->

    <!-- Fín carrusel todos -->
<style>
.carousel-item {  transition: none;}
#carrusel_restaurantes .carousel-item img{width: 100%; height: 118px; border-radius: 0.15em;}
</style>