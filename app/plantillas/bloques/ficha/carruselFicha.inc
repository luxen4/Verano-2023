<!--Carrusel para la Ficha-->
    <div id="carrusel_restaurantes" id="carouselExampleSlidesOnly" class="carousel slide" data-ride="carousel">
        <a href="<?php echo $bar_rest[0]->e_web;?>">
            <div class="carousel-inner">
            
                    <div class="carousel-item active">
                    <!--<img class="d-block w-100" src="<?php echo "web/imagenes/restaurantes/" . $bar_rest[0]->ruta_imagen1; ?>" alt="Logo Restaurante">-->
                        <img src="<?php echo $bar_rest[0]->ruta_imagen1; ?>" alt="First Slide">
                    </div>
                
                    <div  class="carousel-item">
                        <img src="<?php echo $bar_rest[0]->ruta_imagen2; ?>" alt="Second Slide">
                    </div>

                    <div class="carousel-item">
                        <img src="<?php echo $bar_rest[0]->ruta_imagen3; ?>" alt="Third Slide">
                    </div>

            </div>
        </a>
    </div>
  
<style>
#carrusel{display: none;  }
#carrusel_restaurantes{/*transition: none;*/ text-align: center;}

@media only screen and (min-width: 300px) and (max-width: 399px) {
    #carrusel_restaurantes .carousel-item img{width: 100%; height: 200px; border-radius: 0.15em; margin-top: 1em;}
}

@media only screen and (min-width: 400px) and (max-width: 600px) {
    #carrusel_restaurantes .carousel-item img{width: 100%; height: 300px; border-radius: 0.15em; margin-top: 1em;}
}

@media only screen and (min-width: 601px) and (max-width:749px) {
    #carrusel_restaurantes .carousel-item img{width: 90%; height: 400px; border-radius: 0.15em; margin-top: 1em;}
}



@media only screen and (min-width: 750px) and (max-width: 1050px) {
    #carrusel_restaurantes .carousel-item img{width: 80%; height: 400px; border-radius: 0.15em; margin-top: 1em;}
}
@media only screen and (min-width: 1051px) and (max-width: 1300px) {
    #carrusel_restaurantes .carousel-item img{width: 80%; height: 500px; border-radius: 0.15em; margin-top: 1em;}
}
@media only screen and (min-width: 1301px) and (max-width: 1700px) {
    #carrusel_restaurantes .carousel-item img{width: 70%; height: 600px; border-radius: 0.15em; margin-top: 1em;}
}
@media only screen and (min-width: 1701px) and (max-width: 2500px) {
    #carrusel_restaurantes .carousel-item img{width: 50%; height: 550px; border-radius: 0.15em; margin-top: 1em;}
}
</style>