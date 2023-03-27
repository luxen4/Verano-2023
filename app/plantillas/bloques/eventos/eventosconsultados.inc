<?php
namespace miId\fuente\Controlador;
use miId\fuente\Repositorio\EventoRepositorio; 
?>

<link rel="stylesheet" type="text/css" href="app/utilidades/scripts/css_cardDestinoHome.inc">
<?php include_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/utilidades/scripts/js_cardDestinoHome.inc'; ?>

<?php $destinos = $_SESSION['destinos']; ; ?>
    <div class="container" style="padding: 0em;"> 
       
<?php
    if (!empty($_SESSION['perfil'])) {
        if ($_SESSION['perfil']['roll']=='agenciaviajes') { ?>
                
            <div class="row directos_gestionar">
                
                <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">
                    <a class="dropdown-item" href="index.php?ctl=nuevodestino"><i class="fas fa-umbrella-beach"></i> Crear Nuevo Destino</a> 
                </div>

                <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">
                    <a class="dropdown-item" href="index.php?ctl=nuevoevento"><i class="fas fa-umbrella-beach"></i> Crear Nuevo Evento</a> 
                </div>

                <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">
                    <a class="dropdown-item" href="index.php?ctl=motrartodosdestinosdeagenciaviajeslogeada">Gestionar</a> 
                </div>
            
                
            </div><?php
        }
    }
        ?>

       

<div class="row">
            <?php $arrayRestaurantesPintar=array(); 

require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/EventoRepositorio.inc';

$eventos = (new EventoRepositorio())->todosEventosHome(); 
//var_dump($eventos);

                foreach ($eventos as $evento) {  
                
                include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/info_busEvento.inc';     // Info del bus que va a un Destino
               // include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/info_tipoPublicidad.inc'; // Este archivo es para los "Donde Comer desplegable"


            

              if(!empty($_SESSION['perfil'])){
if ($_SESSION['perfil']['roll']=='agenciaviajes') {
    if ($_SESSION['perfil']['name']==$nombreAgenciaViajes) {  ?>
                          <div class="col-xl-4 text-center col-lg-12 col-md-12 col-sm-12 col-12" style="margin:auto; margin-bottom:0.5em;">
                              <article style="padding: 0em;">  
                                  <div class="row articuloconboton"><h6><?= $evento->fecha_Viaje . ', ' . $evento->dia_Semana; ?></h6> 
                                      <div class="col-xl-2 text-center col-lg-2 col-md-2 col-sm-2 col-2" style="padding: 0em;"><!--Foto -->
                                          <!-- <img class="fotodestino" src="web/imagenes/destinos/completo.png" alt="Foto de un destino"-->
                                              <div>
                                                  <a style="font-size: 0.7em; filter: invert(20%) sepia(68%) saturate(2767%) hue-rotate(181deg) brightness(99%) contrast(101%);" href="#ventana2<?php echo $destino->ref_Localidad;?>" class="btn btn-successsss btn-lg" data-toggle="modal"> <img style="width: 50px;" src="web/imagenes/icons/camera.svg" alt="camera"> <br> <span>Ver Fotos</span> </a>
                                              </div>  
                                          
                                          <!--Pop-Up de todas las Fotos de una Localidad-->
                                                  <div class="modal fade" id="ventana2<?php echo $destino->ref_Localidad;?>" style="max-width: 800px;">
                                                      <div class="modal-dialog">
                                                          <div class="modal-content">
                                                              <!-- Header de la ventana-->
                                                                  <div class="modal-header">
                                                                          <div class="row">
                                                                              <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                                                                  <h6 class="modal-title">Fotos de <?php echo $destino->nombre_Localidad; ?></h6>  
                                                                              </div>
                                                                          </div>
                                                                          <button type="button" class="close" data-dismiss="modal" aria-hiddden="true">&times;</button>
                                                                  </div>   
                                                      
                                                              <!-- Contenido de la ventana-->
                                                                  <div class="modal-body row">
                                                                      <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12 " style="padding: 0em;"><!--Foto -->
                                                                          <div id="imagenLocalidad" class="cont_fotoLocalidad<?php echo $ref_Localidad; ?>">
                                                                              <img class="fotodestino" style="" src="<?php echo $urloficial; ?>" alt="Foto de un destino"> 
                                                                          </div>
                                                                      
                                                                          <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12 botones_mostrarFotosLocalidad">
                                                                              <?php $ref_Localidad=$destino->ref_Localidad; ?>
                                                                                  <input id="posicionImagen_<?php echo $destino->ref_Localidad; ?>" hidden class="input_posicion" type="checkbox" name="" value="1">
                                                                                  <i id='previous_<?php echo $destino->ref_Localidad; ?>' class="fa-solid fa-angles-left previous" onclick="pasarImagenes78(this)"></i>
                                                                                  <i id='next_<?php echo $destino->ref_Localidad; ?>' class="fa-solid fa-angles-right next" onclick="pasarImagenes78(this)"></i>
                                                                          </div>    
                                                                      </div>
                                                                  </div>   
          
                                                              <!-- Footer de la ventana-->
                                                                  <div class="modal-footer">
                                                                      <button type="button" class="btn btn-default" data-dismiss="modal">Cerrar</button>
                                                                      <!--<button type="button" class="btn btn-primary" >Guardar cambios</button>-->
          
                                                                  </div>
                                                          </div>
                                                      </div>
                                                  </div>
                                      </div>
                                          <?php  include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/cards/descripcionEvento.inc'; ?>
                                  </div>
                              </article>
                          </div><?php
    }
}










    if ($vistaPublicidadGeneral=="derecha") {?><?php

        if (!empty($lugaresDondeComer)) {?> 
                            <div class="row">
                                <?php  //include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/publicidad/publicidadderecha.inc';?>
                            </div><?php
        } else {
                           // include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/sinhuecos.inc';?>

                                <?php

        }
    } elseif ($vistaPublicidadGeneral=="abajo") {
        if (empty($lugaresDondeComer)) {
            //echo "Lugares donde Comer Vacio";
        } else {
        }


        if ($destino->estado=='DISPONIBLE') {
            // include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/cards/cardDestinoHome.inc';
        } elseif ($destino->estado=='COMPLETO') {
            // include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/cards/cardDestinoHome.inc';
        }
    }
}

                }
                
                ?>
        </div>                          
        <div class="row">
            <?php $arrayRestaurantesPintar=array(); 
                foreach ($destinos as $destino) {  
                
                include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/info_busDestino.inc';     // Info del bus que va a un Destino
                include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/info_tipoPublicidad.inc'; // Este archivo es para los "Donde Comer desplegable"

                    if ($vistaPublicidadGeneral=="derecha") {?><?php

                        if (!empty($lugaresDondeComer)) {?> 
                            <div class="row">
                                <?php  include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/publicidad/publicidadderecha.inc'; ?>
                            </div><?php
                        } else {
                            include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/sinhuecos.inc'; ?>
                            
                            <?php
                            if (empty($tipoPublicidadHome)) {?>

                                <div><?php
                                        if($tipoPublicidadHome[0]->modo_Apariencia==1){
                                            include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/--negociovacio1.inc';
                                        }  ?>
                                </div> 

                                <div >
                                    <?php
                                        if($tipoPublicidadHome[0]->modo_Apariencia==2){
                                                include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/--negociovacio3.inc';
                                        } ?>
                                </div><?php
                            } else {} ;
                        }
                    } elseif($vistaPublicidadGeneral=="abajo") {
                        if (empty($lugaresDondeComer)) {
                            //echo "Lugares donde Comer Vacio";
                        } else {}
                    

                        if($destino->estado=='DISPONIBLE'){ 
                            
                            include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/cards/cardDestinoHome.inc';  
                        
                        }else if($destino->estado=='COMPLETO'){
                            include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/cards/cardDestinoHome.inc';  
                                            
                        }             
                    } 
                }
                
                ?>
        </div>
    
    </div>

<style>

/* Cards */
.directos_gestionar a{ border:1px solid #006293; border-radius:1em; color:#006293}
.destinos_cards{padding-top:1em}
.modelo_publicitario1 h6{text-align: center; margin-bottom: 0.5em;}

.comunidad,.destino,.fecha,.info_plazas,.precio,.agencia {text-align: center;}
.fecha{margin-top: 0.5em;}



.articulo, .publicidad{
 /* background-color: #F8F9FA; */
  border-radius: 0.4em; border: 2px solid #c1c1c1; 
 /* padding: 0.5em 0.3em 0.3em; */
  /*box-shadow: 5px 5px 5px #888888;*/ 
  box-shadow: inset 0px 0px 20px 4px #c1c1c1;}


.comunidad{color: #006293; font-weight: bold; margin-bottom: 0.5em; font-size: 0.8em;}

.destino{color: #212721; font-weight: bold;}  
.destino a {/*font-size: 0.36em;*/ text-decoration: underline; }


.info_plazas{font-size: 0.7em; margin-top: -1.4em;}
.precio{margin-top: -1em; margin-bottom: -0.1em; } 
.textoprecio{font-size: 1.3em; float: right; text-align: right; }
.apuntar, .apuntar2{ border-radius:0.3em;}
.apuntar{ border: 1px solid #006293;}
.apuntar2{ color: red; border: 1px solid red;}
#boton_apuntar{ padding-top: -2em; border-radius: 0.5em; margin: auto;}


@media only screen and (min-width: 1400px) and (max-width: 3000px) {
.precio{font-size: 1.5em; margin-top: -0.6em; margin-bottom: 0.05em;}
}
 

@media only screen and (min-width: 970px) and (max-width: 1400px) {
.comunidad{ font-size: 0.8em; margin: auto;}
.destino a {font-size: 0.3em; text-decoration: underline;}
.fecha{ font-size: 0.6em;}
.info_plazas{font-size: 0.7em; text-align: center; margin-top: -1.4em;} 
}

@media only screen and (min-width: 970px) and (max-width: 1400px) {
.comunidad{ font-size: 0.8em; margin: auto;}
.destino a {/*font-size: 0.45em; */text-decoration: underline;}
.fecha{ font-size: 0.6em;}
.info_plazas{font-size: 0.7em; text-align: center; margin-top: -1.4em;} 
}


.fotodestino{border-radius: 0.3em; z-index: -1; width: 100%; height: 270px; }
@media only screen and (min-width: 740px) and (max-width: 2000px) {
.destino a{font-size: 1em;}
header img{padding: 0px; height: 550px; }
.a{width: 375px; height:140px; margin-top: 7.5em;}
.plaza{font-size: 1em;} 
h2{font-size: 1.3em;}
header img{height:402px;}
.fotoplantabus{margin-top: 6em; }
.fecha {font-size: 1em; font-weight: bold;}
.agencia{font-weight: bold; font-size: revert;}
.info_plazas {font-size: 0.6em; font-weight: bold}
}

@media only screen and (min-width: 740px) and (max-width: 1000px) {
    .fotodestino{height: 300px;}
}

@media only screen and (min-width: 1000px) and (max-width: 1200px) {
    .fotodestino{height: 300px;}
}

@media only screen and (min-width: 1201px) and (max-width: 2900px) {
    .fotodestino{height: 300px;}
}
/*--------------------------------*/

@media (min-width: 576px){}
.container, .container-sm {/*max-width: 800px;*/}

.row>*{}

.container{padding: 0em;}
 </style>












