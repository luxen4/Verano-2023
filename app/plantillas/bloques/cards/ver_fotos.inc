<div class="col-xl-4 text-center col-lg-6 col-md-12 col-sm-12 col-12 av" >
    <article style="padding: 0em;">  
    
        <div class="row articuloconboton">
            <h6><?= $destino->fecha_Viaje . ', ' . $destino->dia_Semana; ?></h6> 

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
                <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/descripcionViaje.inc'; ?>
        </div>
    </article>
</div>

<style>
    .w-100{height: 300px;}
</style>

<style>
.av{margin:auto; margin-bottom:0.5em;}

@media only screen and (min-width: 101px) and (max-width: 800px) {
  .av{padding: 0em;}
}

</style>