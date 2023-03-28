<div class="col-xl-5 text-center col-lg-4 col-md-4 col-sm-4 col-4"> <!-- Número de Destinos por fila -->
                <article style="padding-right: 0.5em; padding-left:0em; ">
                    <div class="articulo">
                           
                           
                                <div class="col-xl-12 text-center col-lg-12 col-md-6 col-sm-12 col-12 ">
                            <!--    <p class="comunidad"><?php echo ($comunidad); ?></p>-->
                                    <div id="enlace_destino" style="margin-top:-2em">
                                        <p class="destino" style="margin-top: 0.5em;">
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

    
    <!--
            <a href="http://tiempoytemperatura.es/" target="_blank"><span style="color:red">El tiempo</span>
            </a>
                                            -->
      

                               
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
                                        <input class="apuntar front" type="submit" name="apuntar" value="Contratar" onclick="selecciona(<?php echo ($codDestino); ?>)">
                                        <input id="<?php echo ($codDestino); ?>" type="checkbox" name="datos[destinoseleccionado]"
                                                    value="<?php echo ($codDestino); ?>" hidden >
                                    </div>
                                    <div><p class="agencia"><?php echo ($nombreAgenciaViajes); ?></p></div><?php

                                    } else {?>

                                    <div id="boton_apuntar" class="col-xl-12 text-center" >
                                        <input class="apuntar2" type="submit" name="apuntar" value="Completo" onclick="selecciona(<?php echo ($codDestino); ?>)" disabled>
                                        <input id="<?php echo ($codDestino); ?>" type="checkbox" name="datos[destinoseleccionado]"
                                                    value="<?php echo ($codDestino); ?>" hidden >
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

 <!--Tarjeta a la derecha un solo negocio-->

        <div class='col-xl-6 text-center col-lg-4 col-md-4 col-sm-4 col-8 negociopublicitado' >
            
            <div class="row" ><?php
                //foreach ($lugaresDondeComer as $bar_rest) {

                  $bar_rest=$lugaresDondeComer[0];
              
                    if($bar_rest->habilitado=="SI"){?>
                            
                          

                                <div class='col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12'>
                                    
                                    <h6 class="nombrenegocio" style="text-align:center; margin-bottom:0.4em;">

                                        <a style=" color: #006293;" href="<?php echo $bar_rest->e_web;?>">
                                            <?php echo pasarUtf8($bar_rest->nombre); ?> <!-- . "<br> (" . pasarUtf8($bar_rest->nombreLocalidad) . ")"-->
                                        
                                        </a>
                                    </h6>

                                    

                                </div>




<?php   require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/estrellas1negocioderecha.inc';?>

<?php // require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/windex.php';?>
    
    
   





                        
                                <div class='col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12' style="margin: auto;">
                                    <div id="carrusel_restaurantes" id="carouselExampleSlidesOnly" class="carousel slide" data-ride="carousel"
                                       >
                                        <a href="<?php echo $bar_rest->e_web;?>">
                                            <div class="carousel-inner">

                                            
                                            <div class="carousel-item active">
                                               
                                        <!--    <img class="d-block w-100" src="<?php echo "web/imagenes/restaurantes/" . $bar_rest->ruta_imagen1; ?>" alt="Logo Restaurante">-->
                                                
                                                    <img class="text-center" src="<?php echo $bar_rest->ruta_imagen1; ?>" alt="First Slide">
                                    
                                               
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
                  
       
                              
                                    <div class='col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12'>
                                        <div class="info_restaurante" style="padding: 0em;">                                              
                                                <!--
                                                    <h6 style="text-align: left;">
                                                        <?php echo pasarUtf8($bar_rest->descripcion); ?>
                                                    </h6>
                                                -->
                                            <div style="">

                                                <div class="row">
                                                        <div class='col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12' style="padding: 0em;">
                                                            <p style="text-align: center; margin-bottom: 0em; "><?php  echo pasarUtf8( $bar_rest->direccion); ?></h6>
                                                            
                                                        </div>

                                                        <div class='col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12'>
                                                            <p style="text-align: center;"><?php echo "Tel: " . $bar_rest->telefono; ?></p>
                                                        </div>

                                                        <?php  $veces=0;

                                                        if ($veces<2) {
                                                            if ($bar_rest->e_tripadvisor=="#"){
                                                            }else{?>
                                                            <div class='col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6' >
                                                                <a style="font-size: 0.7rem;" href=<?php echo $bar_rest->e_tripadvisor; ?>>Tripadvisor</a>
                                                            </div><?php
                                                        } $veces++;}?>

                                                        <?php
                                                        if ($veces<2) {
                                                            if($bar_rest->e_facebook=="#"){
                                                            }else{?>
                                                            <div class='col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6'>
                                                                <a style="font-size: 0.7rem;" href=<?php echo $bar_rest->e_facebook;?>>Facebook</a>
                                                            </div><?php 
                                                            $veces++;
                                                        } 
                                                        }?>
                                                   
                                                    <?php  

                                                        if ($veces<2) {
                                                    if($bar_rest->e_restaurantGuru=="#"){
                                                
                                                    }else{?>
                                                    <div class='col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6 rest_guru'>
                                                        <a style="font-size: 0.7rem;" href=<?php echo $bar_rest->e_restaurantGuru;?>>restauranteguru.com</a>
                                                        </div><?php $veces++;
                                                        } 
                                                        }?>


                                                    <?php 
                                                      if ($veces<2) {
                                                    if($bar_rest->e_theFork=="#"){

                                                    }else{?>
                                                        <div class='col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6'>
                                                            <a style="font-size: 0.7rem;" href=<?php echo $bar_rest->e_theFork;?>>thefork.es</a>
                                                        </div><?php $veces++;
                                                        } 
                                                        }?>
                                                   

                                                    <div class='col-xl-12 text-center col-lg-6 col-md-6 col-sm-6 col-12'>
                                                        <a href="#ventana1" data-toggle="modal"><i class="fas fa-umbrella-beach"></i>Tu opinión!</a>
                                                    </div>



<?php  require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/tuopinion.php';?>









































                                                    <!--
                                                    <div class='col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6'>
                                                            <i id="<?php echo $bar_rest->ref_negocio;?>" type="button" style="margin-left: 0.5em; color:#EABE00;" class="fa-solid fa-thumbs-up" onclick="saludame(this)">
                                                            <span class="mostrar_mensaje<?php echo $ref_negocio;?>" ><?php echo($relacion_Votos[0]->veces_Positivo); ?></span>
                                                            </i>
                                                        </div>
                                                    -->
                                                </div>
                                                
                                            
                                                
                                                   
                                                    
                                                        
                                                <!--
                                                    <div>
                                                        <input style="padding: 0.1rem 0.3rem;" class="btn btn-success" type="submit" name="generapdf"  value="Dto." onclick="insertaIdDestino(<?php echo($codDes);?>); seleccionaPlaza(<?php echo($plaza);?>)"       >                
                                                    </div>
                                                -->
                                                    </div>
                                        </div>
                                    </div>
                              
                                                    
                

                    <!--  <div id="" class='col-xl-12 col-lg-6 col-md-6 col-sm-6 col-3 negocio' >
                            Mas restaurantes en ;
                        </div>
                    -->

                                    <?php    };?>
                                    
                                    <?php //};?>    
            </div>  
        </div>
        
                                                   

    <!--
<div>
        <div><input id="<?php echo $bar_rest->ref_negocio;?>" type="button" value="Saludame" name="yo" onclick="saludame(this)"></div> 

        <div class="mostrar_mensaje" ></div>
</div>
                                                    -->




<script>








</script>







        <style>
  
  .negociopublicitado{
      /*background-color: #F8F9FA; */
      border-radius:  0.3em 0.3em 0.3em 0.3em;
      border: 1px solid #c1c1c1; 
      padding: 0.45em;   
      /* box-shadow: 5px 5px 5px #888888; */
      /*box-shadow: inset 0px 0px 20px 4px #c1c1c1;*/
  }
  
  .negociopublicitado:hover{
       box-shadow: 1px 1px 10px 1px #888888; 
       border-radius:  0.6em;
       background-color: white;
       box-shadow: inset 0px 0px 20px 4px #c1c1c1;
  }
  
  
  .nombrenegocio a{
      font-size: 0.95em;
  }
  


  .carousel-item {width: 90%; height: 90%; transition: none;}
  #carrusel_restaurantes .carousel-item img{width: 75%; height: 88px; border-radius: 0.2em; max-width: 180px;}
  
      #carrusel_restaurantes{
          margin: auto;  width: 100%;
      }
  
  
  .w-100{border-radius: 0.2em;}
  
  #redes_sociales a{margin-right: 0.5em;}
  .info_restaurante h5{text-align: left; color: #006293; /*border-bottom: 1px solid #006293;*/}
  
  #caja {
      text-align: left;
      border: 1px solid #006293;
      border-radius: 5px;
      margin: auto;
      padding: 1em;
     /* background-color: #f6f6f6;*/
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
  
  */

  @media only screen and (min-width: 401px) and (max-width: 3000px) {
  .rest_guru{margin-left: -1.7em;}
}

  @media (max-width: 800px){
    .rest_guru{margin-left: -1em;}
  }
  
  </style>       
  
  
  
  <!--<span style="background-position: 200px 800px;
          background-image: url(web/imagenes/icons/iconos.png)"></span>
  -->







  <!--  https://www.zalando.es/jack-and-jones-joranka-hood-cardigan-chaqueta-de-punto-light-grey-melange-ja222q10b-c11.html
<div style="display: flex;">

<svg class="zds-icon RC794g X9n9TI DlJ4rT pVrzNP H3jvU7" height="1em" width="1em" focusable="false" fill="currentColor" viewBox="0 0 24 24" aria-hidden="true">
<path d="m12.441 18.984-5.75 4.178a1.74 1.74 0 0 1-1.028.34 1.737 1.737 0 0 1-1.025-.34 1.72 1.72 0 0 1-.636-1.954l2.028-6.241L.72 11.11a1.748 1.748 0 
0 1 1.027-3.162H8.31l2.028-6.24a.75.75 0 0 1 .948-.476c.39.129 1.491 17.508 1.156 17.752z">
</path>

<path d="M22.253 7.948h-6.562l-2.028-6.242a1.749 1.749 0 0 0-3.326 0c-.127.394.887 17.034 1.222 17.278l5.75 4.178c.298.22.658.339 1.028.34.369 
0 .728-.12 1.025-.34.621-.438.88-1.233.636-1.953l-2.028-6.242 5.31-3.857a1.748 1.748 0 0 0-1.027-3.162z">
</path>

</svg>

<svg class="zds-icon RC794g X9n9TI DlJ4rT pVrzNP H3jvU7" height="1em" width="1em" focusable="false" fill="currentColor" viewBox="0 0 24 24" aria-hidden="true">
<path d="m12.441 18.984-5.75 4.178a1.74 1.74 0 0 1-1.028.34 1.737 1.737 0 0 1-1.025-.34 1.72 1.72 0 0 1-.636-1.954l2.028-6.241L.72 11.11a1.748 1.748 0 
0 1 1.027-3.162H8.31l2.028-6.24a.75.75 0 0 1 .948-.476c.39.129 1.491 17.508 1.156 17.752z">
</path>

<path d="M18.337 23.502c-.37-.001-.73-.12-1.028-.34l-5.75-4.178a.75.75 0 0 1 .882-1.213l5.75 4.178a.235.235 0 0 0 
.291 0 .23.23 0 0 0 .09-.277l-2.196-6.76a.749.749 0 0 1 .272-.838l5.75-4.177a.248.248 0 0 0-.146-.449h-7.107a.75.75 0 0 1-.714-.518l-2.196-6.76c-.092
-.282-.378-.282-.47 0a.75.75 0 0 1-1.427-.463 1.748 1.748 0 0 1 3.324 0l2.028 6.24h6.562a1.748 1.748 0 0 1 1.028 3.163l-5.309 3.857L20 21.209a1.72 1.72 0 0 
1-.635 1.953c-.297.22-.657.339-1.027.34z">
</path>


</svg>              

<svg class="zds-icon RC794g X9n9TI DlJ4rT nXkCf3 pVrzNP H3jvU7" height="1em" width="1em" focusable="false" fill="currentColor" viewBox="0 0 24 24" aria-hidden="true">
<path d="M5.663 23.502c-.37-.001-.73-.12-1.027-.34A1.722 1.722 0 0 1 4 21.208l2.028-6.241L.72 11.11a1.748 1.748 0 0 1 1.028-3.162H8.31l2.028-6.24a.75.75 0 0 1 1.427.462L9.569 8.93a.75.75 0 0 1-.714.518H1.748a.248.248 0 0 0-.146.449l5.75 4.177c.263.19.373.529.272.838l-2.196 6.76a.247.247 0 0 0 .381.277l5.75-4.178a.75.75 0 0 1 .882 1.213l-5.75 4.178c-.298.22-.657.339-1.028.34z"></path>

<path d="M18.337 23.502c-.37-.001-.73-.12-1.028-.34l-5.75-4.178a.75.75 0 0 1 .882-1.213l5.75 4.178a.235.235 0 0 0 
.291 0 .23.23 0 0 0 .09-.277l-2.196-6.76a.749.749 0 0 1 .272-.838l5.75-4.177a.248.248 0 0 0-.146-.449h-7.107a.75.75 0 0 1-.714-.518l-2.196-6.76c-.092
-.282-.378-.282-.47 0a.75.75 0 0 1-1.427-.463 1.748 1.748 0 0 1 3.324 0l2.028 6.24h6.562a1.748 1.748 0 0 1 1.028 3.163l-5.309 3.857L20 21.209a1.72 1.72 0 0 
1-.635 1.953c-.297.22-.657.339-1.027.34z">
</path>
</svg>

<svg class="zds-icon RC794g X9n9TI DlJ4rT pVrzNP H3jvU7" height="1em" width="1em" focusable="false" fill="currentColor" viewBox="0 0 24 24" aria-labelledby="favoritos-2902679" role="img" aria-hidden="false"><title id="favoritos-2902679">Favoritos</title><path d="M17.488 1.11h-.146a6.552 6.552 0 0 0-5.35 2.81A6.57 6.57 0 0 0 6.62 1.116 6.406 6.406 0 0 0 .09 7.428c0 7.672 11.028 15.028 11.497 15.338a.745.745 0 0 0 .826 0c.47-.31 11.496-7.666 11.496-15.351a6.432 6.432 0 0 0-6.42-6.306zM12 21.228C10.018 19.83 1.59 13.525 1.59 7.442c.05-2.68 2.246-4.826 4.934-4.826h.088c2.058-.005 3.93 1.251 4.684 3.155.226.572 1.168.572 1.394 0 .755-1.907 2.677-3.17 4.69-3.16h.02c2.7-.069 4.96 2.118 5.01 4.817 0 6.089-8.429 12.401-10.41 13.8z"></path></svg>
        

</div>
-->















<!-- Para el dedo hacia arriba, es del youtube -->
<!--
  <div class='col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12' style="padding: 0em;">

                                        <svg style="transform: scale(0.1);" viewBox="0 0 24 24" preserveAspectRatio="xMidYMid meet" focusable="false" class="style-scope yt-icon" style="pointer-events: none; display: block; width: 100%; height: 100%;">
                                            <g class="style-scope yt-icon">
                                                <path d="M3,11h3v10H3V11z M18.77,11h-4.23l1.52-4.94C16.38,5.03,15.54,4,14.38,4c-0.58,0-1.14,
                                                        0.24-1.52,0.65L7,11v10h10.43 c1.06,0,1.98-0.67,
                                                        2.19-1.61l1.34-6C21.23,12.15,20.18,11,18.77,11z" class="style-scope yt-icon">
                                                </path>
                                            </g>
                                        </svg>
                                        
                            </div>

-->   