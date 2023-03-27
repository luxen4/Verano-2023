 
 <!-- Vista de los negocios con redes en palabra-->
 <?php
        foreach ($lugaresDondeComer as $bar_rest) {
                if($bar_rest->habilitado=="SI"){?>
                    
                    <div class="col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-12 articulo" style="padding:1em; margin: 0.1em;">
                        <div class="row">
                            <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6" style="padding: 0em;">

                                <div id="tarjetitapequenaoculta" id="carouselExampleSlidesOnly" class="carousel slide" data-ride="carousel">
                                    <a href="<?php echo $bar_rest->e_web;?>">
                                        <div class="carousel-inner">
                                            <div class="carousel-item active">
                                            <!--<img class="d-block w-100" src="<?php echo "web/imagenes/restaurantes/" . $bar_rest->ruta_imagen1; ?>" alt="Logo Restaurante">-->
                                                <img src="<?php echo $bar_rest->ruta_imagen1; ?>" alt="First Slide">
                                            </div>
                                        
                                            <div  class="carousel-item">
                                                <img src="<?php echo $bar_rest->ruta_imagen2; ?>" alt="Second Slide">
                                            </div>

                                            <div class="carousel-item">
                                                <img src="<?php echo $bar_rest->ruta_imagen3; ?>" alt="Third Slide">
                                            </div>
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
                                    </a>
                                </div>
                            </div>

                            <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">
                                <div class="info_restaurante">

                                    <div class="row">
                                        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                            <p >
                                                <a style="font-weight: 700;" href="<?php echo $bar_rest->e_web;?>">
                                                    <?php echo pasarUtf8($bar_rest->nombre); ?> 
                                                    <!--. " (" . pasarUtf8($bar_rest->nombreLocalidad) . ")"-->
                                                </a>
                                            </p>
                                        </div>
                                    </div>
                                            
                                            
                                    <div class="row" style="margin-top: 0.1em; margin-bottom: 0.1em;">
                                        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                                <p style="font-size: 0.73em;"><?php echo pasarUtf8($bar_rest->descripcion); ?></p>
                                                <p style="font-size: 0.73em;"><?php echo pasarUtf8( $bar_rest->direccion); ?></p>
                                                <p style="font-size: 0.73em;"><?php echo "Tel: " . $bar_rest->telefono; ?></p>
                                        </div>
                                    </div>

                                    
                                    <div class="row">
                                        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                            <div id="redes_sociales">
                                                <div class="row">
                                                
                                                        <?php
                                                            $veces=0;

                                                            if($veces<4){
                                                                if ($bar_rest->e_tripadvisor=="#") {
                                                                } else {?>
                                                                <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">
                                                                    <p> <a href=<?php echo $bar_rest->e_tripadvisor; ?>>Tripadvisor</a></p> 
                                                                </div>
                                                        <?php $veces++;}}


                                                        if($veces<4){
                                                                if ($bar_rest->e_facebook=="#") {
                                                                } else {?>
                                                                <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">
                                                                    <p> <a href=<?php echo $bar_rest->e_facebook;?>>Facebook</a></p>
                                                                </div>
                                                        <?php $veces++;}}

                                                
                                                        if($veces<4){
                                                                if ($bar_rest->e_restaurantGuru=="#") {
                                                                } else {
                                                                    
                                                                    ?>
                                                                <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">
                                                                    <p> <a href=<?php echo $bar_rest->e_restaurantGuru;?>>erestauranteguru.com</a></p>
                                                                </div> 
                                                        <?php $veces++;}}

                                                        if($veces<4){
                                                                if ($bar_rest->e_theFork=="#") {
                                                                } else {?> 
                                                                <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">
                                                                    <p> <a href=<?php echo $bar_rest->e_theFork;?>>theFork.com</a></p>
                                                                </div>
                                                        <?php $veces++;}}?>
                                                    
                                                </div>
                                            </div>
                                        </div>
                                    </div>
                                </div>
                            </div>
                        </div>    
                    </div>

                <?php };?>
                        
<?php   };?> 


<style>
    #tarjetitapequenaoculta .carousel-item img{width: 100%; height: 100px; border-radius: 3px;}
    .carousel-item {width: 90%; height: 90%; transition: none;}
    p{text-align: left; margin-bottom: 0em;}
    .info_restaurante h5{text-align: left; color: #006293; border-bottom: 1px solid #006293;}



</style>