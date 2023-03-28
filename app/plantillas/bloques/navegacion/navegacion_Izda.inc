<?php
use miId\fuente\Repositorio\LocalidadRepositorio; 
use miId\fuente\Repositorio\ComerRepositorio; 
use miId\fuente\Repositorio\HotelesRepositorio; 

    if (!empty($_SESSION['perfil'])) {
        if ($_SESSION['perfil']['roll'] == "cliente" ) { ?><div class="col-xl-12 text-center col-lg-2 col-md-12 col-sm-12 col-12"><?php }
    }else{
       ?>
            <div class="col-xl-12 text-center col-lg-2 col-md-12 col-sm-12 col-12"><?php

                    if (!empty($_SESSION['perfil'])) {   
                      if ($_SESSION['perfil']['roll'] == "cliente" ) { ?><?php
                        // Cuando esté desarrollado para usuario sin loguear, copiar aquí

                      }

                    }else{ ?>

                      <nav class="navbar navbar-expand-lg navbar-light"><!--bg-light-->
                          <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarNavDropdown_izda" aria-controls="navbarNavDropdown" aria-expanded="false" aria-label="Toggle navigation">
                            <span class="navbar-toggler-icon"></span>
                          </button>

                          <div class="collapse navbar-collapse" id="navbarNavDropdown_izda" style="text-align: center;">
                            <div id="navegacion_filtros" class="cuadros_navegacion">
                              <!--Filtros-->
                                <details><summary>Filtros</summary>
                                      <ul id="filtro_destinos" class="navbar-nav">
                                          <li><a href="index.php?ctl=destinosfavoritos"><i class="fas fa-home"></i><span> Favoritos</span></a></li>
                                          <li><a href="index.php?ctl=destinoscondescuentos"><i style="color:red;" class="fa-solid fa-percent"></i><span> Con descuento</span></a></li>
                                          <li><a href="index.php?ctl=destinosmasvendidos"><i class="fas fa-check"></i> Más vendidos(nº de plazas de cada destino)</a></li>
                                          <li><a href="index.php?ctl=destinosquedan3dias"><i class="fas fa-clock"></i> Quedan 3 días</a></li>
                                          <li><a href="index.php?ctl=destinosproximasemana"><i class="fa fa-calendar"></i> Proxima semana</a></li>
                                          <li><a href="index.php?ctl=destinosmaseconomicos"><i class="fas fa-euro-sign"></i> Más económicos (14)</a></li><br>
                                          <li><a href="index.php?ctl=destinosmaseconomicos"><i class="fas fa-euro-sign"></i> Destinos de más de 1 dia</a></li>
                                          <!--Cliente que más viaja-->
                                      </ul>
                                </details>


                              <!--Localidades en fotos-->
                                <details>
                                  <summary>Localidades en Fotos</summary>
                                      <ul id="filtro_destinos" class="navbar-nav">
                                          <li><a href="index.php?ctl=destinosfavoritos"><i class="fas fa-home"></i><span> Laredo</span></a></li>
                                          <li><a href="index.php?ctl=destinoscondescuentos"><i style="color:red;" class="fa-solid fa-percent"></i><span> Noja</span></a></li>
                                      </ul>
                                </details>

                              <!--HightLights-->
                                <details><summary>HightLights</summary>
                                  <ul id="filtro_destinos" class="navbar-nav">
                                      <li><a href="index.php?ctl=destinosfavoritos"><i class="fas fa-home"></i><span> Laredo</span></a>
                                    
                                        <details>
                                          <summary>Como aportar calcio a las plantas con cáscara de huevo</summary><!--Para rotulos y enlaces de publicidad o noticias, etc-->
                                            <div class="row" style="margin: auto;">
                                              <div class="col-xl-12 text-center  col-lg-12 col-md-12 col-sm-12 col-12 cuadros_navegacion">
                                                
                                                <p>Dentro del jkbkdfnv.kdf vfhkjdfhvkldfj hikejhkle heorhjkler eoh ñehrklej ehveiojhvek ehrlifvjeh hejh eñoeiñrh eréoijeoñ </p>
                                              </div>
                                            </div> 
                                        </details>
                                      </li>
                                      
                                      <li><a href="index.php?ctl=destinoscondescuentos"><i style="color:red;" class="fa-solid fa-percent"></i><span> Noja</span></a></li>
                                    </ul>
                                </details>


                              <!--Restaurantes-->
                                <details><summary>Restaurantes</summary>
                                    <?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/LocalidadRepositorio.inc'; ?> 
                                    <?php $localidades = (new LocalidadRepositorio())->todasLocalidades_ReferenciaYnombre(); 

                                    $ref_LocalidadTitulo="";
                                    foreach($localidades as $localidad){ 
                                        if($ref_LocalidadTitulo!=$localidad->ref_Localidad){
                                            $ref_LocalidadTitulo=$localidad->ref_Localidad;
                                            $nombre_Localidad=$localidad->nombre_Localidad;
                                        }else{
                                            $ref_LocalidadTitulo=$localidad->ref_Localidad;
                                        } ?>
                                        
                                        <?php // Si no hay Restaurantes en esa Localidad, no pinta esa Localidad ?>
                                        <?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ComerRepositorio.inc'; ?>
                                        <?php $bar_restaurantes = (new ComerRepositorio())->nombreYenlace($ref_LocalidadTitulo);
                                        if(!empty($bar_restaurantes)){ ?>
                                            <details>
                                                <summary style="margin-left: 1em"><?= $nombre_Localidad; ?></summary>
                                                    <ul id="navegacion_restaurantes" style="text-align: left; padding: 0em; "><?php
                                                        foreach($bar_restaurantes as $bar_restaurante){ ?>
                                                            <li><?php 
                                                                if($bar_restaurante->e_web=="#"){ ?>
                                                                    <h6><?= $bar_restaurante->nombre; ?></h6><?php
                                                                }else{ ?>
                                                                    <a style="text-decoration: underline;" class="botttton" target="blank" href="<?= $bar_restaurante->e_web; ?>"><?= $bar_restaurante->nombre; ?><span style="font-size: 0.5em; color:#212721;"> (Web)</span></a><?php 
                                                                }?>
                                                            </li><?php 
                                                        } ?>
                                                    </ul>
                                            </details><?php
                                        } 
                                    } ?>
                                </details>


                              <!--Queremos oirte-->
                                <details><summary>Queremos oirte</summary>
                                    <ul id="filtro_destinos" class="navbar-nav">
                                        <li><a href="index.php?ctl=destinosfavoritos"><i class="fas fa-home"></i><span> Déjanos tu sujerencia</span></a></li>
                                        <li><a href="index.php?ctl=destinoscondescuentos"><i style="color:red;" class="fa-solid fa-percent"></i><span> Cuadro de texto text area con "Tus sujerencias</span></a></li>
                                        <li><a href="index.php?ctl=destinosfavoritos"><i class="fas fa-home"></i><span> Todas las sujerencias</span></a></li>
                                        <li><a href="index.php?ctl=destinoscondescuentos"><i style="color:red;" class="fa-solid fa-percent"></i><span> Escribe tu sugerencia</span></a></li>
                                    </ul>
                                </details>

                              <!--Hoteles-->
                                <details><summary>Hoteles</summary>

                    <?php 

                    foreach($localidades as $localidad){ 
                      if($ref_LocalidadTitulo!=$localidad->ref_Localidad){
                          $ref_LocalidadTitulo=$localidad->ref_Localidad;
                          $nombre_Localidad=$localidad->nombre_Localidad;
                      }else{
                          $ref_LocalidadTitulo=$localidad->ref_Localidad;
                      } ?>
                      
                      <?php // Si no hay Restaurantes en esa Localidad, no pinta esa Localidad ?>
                      <?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/HotelesRepositorio.inc'; ?>
                      <?php $hoteles_Localidad = (new HotelesRepositorio())->hotelesLocalidad($ref_LocalidadTitulo);
                    //var_dump($hoteles_Localidad);
                      if(!empty($hoteles_Localidad)){ ?>
                          <details>
                              <summary style="margin-left: 1em"><?= $nombre_Localidad; ?></summary>

                                  <ul id="navegacion_restaurantes" style="text-align: left; padding: 0em; "><?php
                                      foreach($hoteles_Localidad as $hotel){  ?>
                                          <li><?php 
                                              if($hotel->e_web=="#"){ ?>
                                                  <h6><?= $hotel->nombre_Hotel; ?></h6><?php
                                              }else{ ?>
                                                  <a style="text-decoration: underline;" class="botttton" target="blank" href="<?= $hotel->e_web; ?>"><?= $hotel->nombre_Hotel; ?><span style="font-size: 0.5em; color:#212721;"> (Web)</span></a><?php 
                                              }?>
                                          </li><?php 
                                      } ?>
                                  </ul>

                                  Buscador de Hoteles <br>
                                  Nuevo Hotel


                          </details><?php
                      } 
                    }

                  ?>



                                  <ul id="filtro_destinos" class="navbar-nav">
                                      <li>
                                        <input id="" type="checkbox" name="localidad_parahoteles" value="Laredo">
                                        <a id="" href="index.php?ctl=hoteleslocalidad" onclick="seleccionaCheckLocalidadParaHoteles()"><i class="fas fa-home"></i><span> Laredo</span>
                                      </a></li>
                                      <li><a href="index.php?ctl=destinoscondescuentos"><i style="color:red;" class="fa-solid fa-percent"></i><span> Noja</span></a></li>
                                  </ul>
                                </details>

                              <!--Noticias-->
                                <details><summary>Noticias</summary>
                                      <ul id="filtro_destinos" class="navbar-nav">
                                          <li><a href="index.php?ctl=destinosfavoritos"><i class="fas fa-home"></i><span> Déjanos tu sujerencia</span></a></li>
                                          <li><a href="index.php?ctl=destinoscondescuentos"><i style="color:red;" class="fa-solid fa-percent"></i><span> Cuadro de texto text area con "Tus sujerencias</span></a></li>
                                          <li><a href="index.php?ctl=destinosfavoritos"><i class="fas fa-home"></i><span> Todas las sujerencias</span></a></li>
                                          <li><a href="index.php?ctl=destinoscondescuentos"><i style="color:red;" class="fa-solid fa-percent"></i><span> Escribe tu sugerencia</span></a></li>
                                      </ul>
                                </details>
                            </div>
                          </div>
                        </nav><?php
                    }?>

            </div><?php  
          
        }
     ?>


      
      
    

  
  
  
  <style>
    summary{text-align: left; margin: 0.5em auto; border: 1px solid #00629A;}
  </style>