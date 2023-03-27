<!-- Carrusel, de momento para el inicio-->
<!--Es tá preparado para que la foto vaya a su página web oficial-->

    <div id="carrusel_restaurantes" id="carouselExampleSlidesOnly" class="carousel slide" data-ride="carousel">
        <a 
        
        <?php if($bar_rest->e_web=="#"){ }else{?> href="<?php echo pasarUtf8($bar_rest->e_web);?>"<?php } ?>>  
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


<style>



@media only screen and (min-width: 400px) and (max-width: 1000px) {
.descrip_negocio p{font-size: 0.65em; font-weight: 600; color: #212721;}
#carrusel_restaurantes .carousel-item img{width: 100%; height: 136px; border-radius: 0.15em;}
}

@media only screen and (max-width: 400px){
.descrip_negocio p{font-size: 0.65em; font-weight: 600; color: #212721;}
#carrusel_restaurantes .carousel-item img{width: 100%; height: 115px; border-radius: 0.15em;}
}

@media only screen and (min-width: 1000px) and (max-width: 3000px) {
#carrusel_restaurantes .carousel-item img{width: 100%; height: 141px; border-radius: 0.15em;}
}
</style>