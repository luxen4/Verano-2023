

<!--Tarjetas pequeñas a la derecha de los destinos-->
<!--Tipo2 Preparado para Slider-->
    
<div class="col-xl-9 text-left col-lg-10 col-md-10 col-sm-12 col-12">
<h1>Bars and Restaurants in  <?php echo $bar_rest->nombre_Lugar;?></h1>
<h2>Aquí Google maps de todos los sitios</h2>
<div class="container">
    <div class="row tarjeta_barrestaurante">
        <?php
//var_dump($lugaresDondeComer);
    foreach ($lugaresDondeComer as $bar_rest) {
        if($bar_rest->habilitado=="NO"){?>

            <div id="caja" class='col-xl-4 col-lg-6 col-md-6 col-sm-6 col-12 articulo' style="margin: 0.5em;">

                <div class="row">

                    <div style="display: flex; padding: 1em;">                         
                        <div>
                            <div class="col-xl-12 text-left">
                                <div id="carouselExampleSlidesOnly" class="carousel slide" data-ride="carousel">
                                    <div class="carousel-inner">
                                    
                                        <div class="carousel-item active">
                                            <!--<img class="d-block w-100" src="<?php echo "web/imagenes/restaurantes/" . $bar_rest->ruta_imagen1; ?>" alt="Logo Restaurante">-->
                                        </div>
                                    
                                        <div  class="carousel-item">
                                            <img class="d-block w-100" 
                                            src="<?php echo "web/imagenes/restaurantes/" . $bar_rest->ruta_imagen2; ?>" alt="First slide">
                                        </div>

                                        <div class="carousel-item">
                                            <!--<img class="d-block w-100" src="<?php echo "web/imagenes/restaurantes/" . $bar_rest->ruta_imagen3; ?>" alt="Second slide">-->
                                            <img src="https://media-cdn.tripadvisor.com/media/photo-w/1a/3a/ef/b4/photo1jpg.jpg" alt="">
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
                                </div>

                                <div class="info_restaurante">

                                    <h5>
                                    <?php echo $bar_rest->nombre . " (" . $bar_rest->nombre_Lugar . ")"; ?> </h5>
                                    <h6 style="text-align: left;"><?php echo $bar_rest->descripcion; ?></h6>



                                    <p><?php // echo "Dirección: " . $bar_rest->direccion; ?></p>
                                    

                                    <h4 style="text-align: left;"><?php echo "Teléfono: " . $bar_rest->telefono; ?></h4>

                                    <div  style="display: flex;">

                                        <div id="redes_sociales" style="text-align: left; display:flex;">
                                            <a href=<?php echo $bar_rest->e_tripadvisor;?>>Tripadvisor</a>
                                            <a href=<?php echo $bar_rest->e_facebook;?>>Facebook</a> 
                                        </div>

                                        <div style="text-align: left;">
                                            <input style="padding: 0.1rem 0.3rem;" class="btn btn-success" type="submit" name="generapdf"  value="Generar Descuento" onclick="insertaIdDestino(<?php echo($codDes);?>); seleccionaPlaza(<?php echo($plaza);?>)"       >                
                                        </div>
                                    </div>
                                </div>

                            </div>
                        </div>
                    </div>

                </div>

            </div> 


                        <?php    };?>
                            

                        

                        <?php };?>    
                </div>    
            </div>
</div>





<style>
.w-100{border-radius: 0.2em;}

#redes_sociales a{margin-right: 0.5em;}

.info_restaurante h5{text-align: left; color: #006293; border-bottom: 1px solid #006293; }

#caja {
    text-align: left;
    border: 1px solid #006293;
    border-radius: 5px;
    margin: auto;
    padding: 1em;
    background-color: #f6f6f6;
    box-shadow: inset 0px 0px 20px 4px #c1c1c1;
}

/*
.tarjeta_foto img{
vertical-align: middle;
width: 150px;
}

p{
font-size: 0.8em; text-align: left;
}


@media (min-width: 576px){
.col-sm-12 {
flex: 0 0 auto;

}
}
*/
</style>       



<!--<span style="background-position: 200px 800px;
        background-image: url(web/imagenes/icons/iconos.png)"></span>
-->