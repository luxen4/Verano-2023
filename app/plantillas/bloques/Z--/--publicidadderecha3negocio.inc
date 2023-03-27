<div class="col-xl-5 text-center col-lg-4 col-md-4 col-sm-4 col-4"  > <!-- Número de Destinos por fila -->
                            <article style="padding-right: 0.5em;">
                                <div class="articulo">
                            <?php // var_dump($nombreDestinoTitulo);?>
                                        <div class="row" >
                                            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12 ">
                                        <!--    <p class="comunidad"><?php echo ($comunidad); ?></p>-->
                                                <div id="enlace_destino" >
                                                    <p class="destino" style="margin-top:-0.5em">
                                                        <a href="web/imagenes/destinos/<?php echo ($nombreDestinoTitulo) ?>.jpg" alt="descripción de la foto"> 
                    
                                                        <?php echo ($localidad); ?></a>
                                                    </p>
                                                </div>
                    
                                                                    <!-- #5f5f5f color -->
                                                                <?php /*
                    
                                                            $ch = curl_init();
                    
                                                            curl_setopt($ch, CURLOPT_HEADER, 0);
                                                            curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
                                                            curl_setopt($ch, CURLOPT_URL, $googleApiUrl);
                                                            curl_setopt($ch, CURLOPT_FOLLOWLOCATION, 1);
                                                            curl_setopt($ch, CURLOPT_VERBOSE, 0);
                                                            curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, false);
                                                            $response = curl_exec($ch);
                    
                                                            curl_close($ch);
                    
                                                            /* Decode and check cod 
                                                            $data = json_decode($response);
                                                            //var_dump($data);
                    
                                                            if (!$data == null) {
                    
                                                            if ($data->cod != 200) { //exit("An error has occurred: ".$data->message);
                                                            $data = json_decode($response);
                                                            }
                                                            if (in_array($nombreDestino, $_SESSION['fotosLugares'])) {
                                                            //var_dump(($data->main->temp)-273);//die();?>
                    
                                                                <div class="weather-forecast">
                                                                    <img src="http://openweathermap.org/img/w/<?=pasarUtf8($data->weather[0]->icon);?>.png" class="weather-icon" /> 
                                                                    <?=round(($data->main->temp) - 273, 0, PHP_ROUND_HALF_ODD)?>º
                                                                </div><?php
                                                            } else {?>
                                                                <div class="weather-forecast">
                                                                    <img src="http://openweathermap.org/img/w/03n.png" class="weather-icon" /> ??º
                                                                </div><?php
                                                            }}
                                                            ;   */?>
                    
                                            </div>
                                        </div>
                    
                                            <?php
                                            if ($estado == "DISPONIBLE") {
                                            ?><!-- <h4 style="color: #006293;"><?php echo ($estado); ?></h4> -->
                                            <!-- <img class="fotodestino" src="web/imagenes/destinos/<?php echo ($foto) ?>.jpg" alt="Foto de un destino">-->
                    
                                                <img class="fotodestino" src="<?php echo $urloficial; ?>" alt="Foto de un destino">
                                                
                                                
                                                <?php
                                            } else {
                                            ?>
                                                <img class="fotodestino" src="web/imagenes/destinos/completo.png" alt="Foto de un destino"><?php
                                            }?>
                    
                    
                                        
                                        <!--https://www.laurachuburu.com.ar/tutoriales/enlaces-html.php-->
                    
                    
                                        <?php $fechaDestino = date("d-m-Y", strtotime($fechaDestino));?>
                                        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12 textodestino">
                                            <p class="fecha"><?php echo ($fechaDestino . '<br>' . $diaSemana); ?></p> 
                                        </div>
                    
                                        <div class="row">
                    
                                            <!--<div class="col-xl-12 text-center">
                                                
                                                    <p class="info_plazas">Total: <?php echo ($results1[0]->plazas); ?>
                                                    plazas;<br>Ocupadas: <?php echo ($results2[0]->plazas) . " plazas"; ?></p>
                                                
                                                    <?php $quedan = ($results1[0]->plazas) - ($results2[0]->plazas);
                                                    
                                                    if($quedan<5){?>
                                                        <p style="background-color: red;" class="info_plazas">Menos de 5 plazas</p>
                                                    <?php }else{?>
                                                        <p class="info_plazas">Quedan: <?php echo ($quedan) . " plazas"; ?></p>
                                                    <?php }?>
                                                </div>
                                            -->
                    
                                            <!--
                                                <div class="col-xl-12 text-center textoprecio">
                                                    <p class="precio"><?php echo (round($euros, 2, PHP_ROUND_HALF_DOWN) . "€"); ?></p>
                                                </div>
                                            -->
               
                    
                                                <?php if (!empty($_SESSION['perfil'])) {
                    
                                                if ($_SESSION['perfil']['roll'] === "cliente"){
                    
                                                if ($estado == "DISPONIBLE") {?>
                    
                                                <div id="boton_apuntar" class="col-xl-12 text-center " >
                                                    <input class="apuntar front" type="submit" name="apuntar" value="Contratar" onclick="seleccionar(<?php echo ($codDestino); ?>)">
                                                    <input id="<?php echo ($codDestino); ?>" type="checkbox" name="datos[destinoseleccionado]"
                                                                value="<?php echo ($codDestino); ?>" hidden >
                                                </div>
                                                <div><p class="agencia"><?php echo ($nombreAgenciaViajes); ?></p></div><?php
                    
                                                } else {?>
                    
                                                <div id="boton_apuntar" class="col-xl-12 text-center" >
                                                    <input class="apuntar2" type="submit" name="apuntar" value="Completo" onclick="selecciona(<?php echo ($codDestino); ?>)" disabled>
                                                    <input id="<?php echo ($codDestino); ?>" type="checkbox" name="datos[destinoseleccionado]"
                                                                value="<?php echo ($codDestino); ?>" hidden  >
                                                </div>
                                                <div><p class="agencia"><?php echo ($nombreAgenciaViajes); ?></p></div><?php
                    
                                                }
                                                }
                    
                                                
                                                if ($_SESSION['perfil']['roll'] === "admin") {?>
                    
                                            <!--   <div id="boton_apuntar" class="col-xl-12 text-center" >
                                                    <input class="apuntar" type="submit" name="apuntar" value="Informacion" onclick="selecciona(<?php echo ($codDestino); ?>)">
                                                    <input id="<?php echo ($codDestino); ?>" type="checkbox" name="datos[destinoseleccionado]" value="<?php echo ($codDestino); ?>" hidden >
                                                </div>
                                            -->
                    
                                                
                    
                                                <?php   }
                    
                                                }?>
                    
                                                <div><!--Si paga-->
                                                    <p class="agencia"><?php echo ($nombreAgenciaViajes); ?></p>
                                                </div>
                                        </div>
                                </div>
                            </article>
                        </div>
                        <!--3Tarjetitas a la derecha-->
                        <div class="col-xl-7 text-left col-lg-8 col-md-8 col-sm-8 col-8 articulo3"><?php
                    
                                    foreach ($lugaresDondeComer as $bar_rest) {
                                        if($bar_rest->habilitado=="SI"){?>
                    
                                        <div class="row articulito" style="margin-top: 0.3em;">
                                            <div class="col-xl-6 text-left col-lg-4 col-md-4 col-sm-4 col-5"><!--Foto de 3 a la derecha-->
                    
                                                <div id="tarjetitapequena" id="carouselExampleSlidesOnly" class="carousel slide" data-ride="carousel">
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
                    
                                            <div class="col-xl-6 text-left col-lg-8 col-md-8 col-sm-6 col-7" style="padding: 0em;"><!--Descripción-->
                    
                                                <div class="info_restaurantederecha3">
                    
                                                    <h6 style="margin-bottom:0.2em; font-weight:600">
                                                        <a style="font-size: 0.9em;" href="<?php echo $bar_rest->e_web;?>">
                                                            <?php echo pasarUtf8($bar_rest->nombre); ?> 
                                                            <!--. " (" . pasarUtf8($bar_rest->nombreLocalidad) . ")"-->
                                                        </a>
                                                    </h6>
                                                    
                                                    <!--
                                                        <h6 style="text-align: left;">
                                                            <?php echo pasarUtf8($bar_rest->descripcion); ?>
                                                        </h6>
                                                    -->
                    
                                                    <div style="margin-top: 0.3em; ">
                                                        <h6 style="font-size: 0.6rem;"><?php  echo pasarUtf8( $bar_rest->direccion); ?></h6>
                                                        <h6 style="text-align: left; font-size: 0.6rem;"><?php echo "Tel: " . $bar_rest->telefono; ?></h6>
                                                    </div>
                                                        <div id="redes_sociales" style="display: flex;">

<?php
$veces=0;

if($veces<2){?>
<a style="font-size: 0.7rem;" href=<?php echo $bar_rest->e_tripadvisor;?>>Tripadvisor</a>
<?php $veces++; }

if ($veces<2) {
if ($bar_rest->e_facebook=="#") {
} else {?>
<a style="font-size: 0.7rem;" href=<?php echo $bar_rest->e_facebook; ?>>Facebook</a>
<?php $veces++;
}
}


if($veces<2){
if ($bar_rest->e_restaurantGuru=="#") {
} else {?>
<a style="font-size: 0.7rem;" href=<?php echo $bar_rest->e_restaurantGuru;?>>restauranteguru.com</a>
<?php $veces++;
}
}

if($veces<2){
if ($bar_rest->e_theFork=="#") {
} else {?>
<a style="font-size: 0.7rem;" href=<?php echo $bar_rest->e_theFork;?>>theFork.com</a>
<?php $veces++;
}
}




?>
                                                                




                                                            </div>
                                                        <div>
                                                            <!--
                                                                <div>
                                                                    <input style="padding: 0.1rem 0.3rem;" class="btn btn-success" type="submit" name="generapdf"  value="Dto." onclick="insertaIdDestino(<?php echo($codDes);?>); seleccionaPlaza(<?php echo($plaza);?>)"       >                
                                                                </div>
                                                            -->
                                                        </div>
                                                </div>
                    
                                            </div>
                    
                    
                                        </div>
                    
                            <?php       };?>
                            <?php   };?>    
                             
                        </div>



                        

<style>

/* Cards */
.modelo_publicitario3 h6{text-align: center;}
.articulo, .publicidad{
  /*background-color: #F8F9FA; */
  border-radius: 0.4em; border: 2px solid #c1c1c1; 
  /*padding: 0.5em 0.3em 0.3em; */
  /*box-shadow: 5px 5px 5px #888888;*/ 
  box-shadow: inset 0px 0px 20px 4px #c1c1c1;}


  .articulito:hover{
       box-shadow: 1px 1px 10px 1px #888888; 
       box-shadow: inset 0px 0px 20px 4px #c1c1c1;
       background-color: white;
       border-radius:  0.2em;
  }

h6{text-align: left; margin-bottom: 0em;}

.carousel-item { transition: none;}
#tarjetitapequena .carousel-item img{width: 90px; height: 65px; border-radius: 0.2em; margin-left: 0.5em;}

.w-100{border-radius: 0.2em;}

#redes_sociales a{margin-right: 0.5em;}
.info_restaurantederecha3{padding-left: 0em; padding-left: 0.3em;}
.info_restaurante h5{text-align: left; color: #006293; border-bottom: 1px solid #006293;}

.articulo3 {
   /* border-left: 1px solid #c1c1c1; */
}


@media only screen and (min-width: 450px) and (max-width: 3000px) {
    .info_restaurantederecha3{margin-left: -0.5em;}
}




</style>