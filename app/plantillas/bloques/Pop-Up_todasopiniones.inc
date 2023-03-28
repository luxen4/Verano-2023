
<?php
use miId\fuente\Repositorio\ComerRepositorio;
use miId\fuente\Repositorio\SatisfacionRepositorio;


require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/SatisfacionRepositorio.inc'; ?>
  <!--Pop-Up de todas la Opiniones de un negocio-->
  
  <div class="modal fade" id="ventana2" style="max-width: 800px;">
        <div class="modal-dialog">
                    <div class="modal-content">

                        <!-- Header de la ventana-->
                                <div class="modal-header">
                                        
                                        <!--  <h4 class="modal-title">Opinión</h4>-->
                                        <div class="row">
                                            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                                <h6 class="modal-title">Todas las Opiniones</h6>  
                                            </div>

                                            
                                        </div>

                                        <button type="button" class="close" data-dismiss="modal" aria-hiddden="true">&times;</button>
                                </div>   

                    
                        <!-- Contenido de la ventana-->

                                <div class="row" style="margin-top: 1em;">
                                        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                            <!--<h6 class="modal-title">Establecimiento: <br> -->
                                           <h5><span id="nombre_negocio_todasopiniones"></span></h5> <!-- Viene de función Ajax -->
                                        </div>
                                </div>
                    
                                <input id="refnegocioOpiniones" type="checkbox" name=datos[ref_negocio] hidden value="<?php echo $ref_negocio;?>"/>

                                <div class="modal-body">

                                    <hr>

                                    <div class="row" style="margin-top: 0.5em;">
                                            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                                <div id="opinionesdeunnegocio"> </div> 
                                            </div>
                                    </div>

                                    <hr>
                                    
                                    <div id="satisfacionclientenegocio"> </div>  


                                    
                                    <!-- function refNegocioOpiniones(r) {AJAX}-->
                                </div>


                                <?php  require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/popUp_gradoSatisfacion.inc'; ?>
                             

                        <!-- Footer de la ventana-->
                                <div class="modal-footer">

                                    <button type="button" class="btn btn-default" data-dismiss="modal">Cerrar</button>
                                    <!--<button type="button" class="btn btn-primary" >Guardar cambios</button>-->

                                </div>

                    </div>
        </div>
    </div>
    
