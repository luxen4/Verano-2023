 <?php use miId\fuente\Repositorio\AgenciaViajesRepositorio; ?> 
<div class="modal fade" id="Pop_UP_horario_AgenciaViajes" style="max-width: 800px;">
    <!--Pop-Up de horario de una Agencia de Viajes-->
    <!--Tire una Consulta para extraer el atributo de Horario--><?php
        $obj = (new AgenciaViajesRepositorio())->horarioAgenciasDeViajes($ref_AgenciaViajes); ?>
            <div class="modal-dialog">
                <div class="modal-content">

                    <!-- Header de la ventana-->
                            <div class="modal-header">
                                    
                                    <div style="margin:auto" class="row">
                                        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                            <h6 class="modal-title">Horario de: <br> 
                                            <h3 id="nombre_AgenciaViajes"></h3>
                                            
                                        </h6> 
                                        </div>
                                        
                                    </div>

                                    <!--<button type="button" class="close" data-dismiss="modal" aria-hiddden="true">&times;</button>-->
                            </div>   
                
                    <!-- Contenido de la ventana-->

                            <div class="modal-body">
                                <div style="margin:auto" class="row">
                                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                        <div id="horario_AgenciaViajes">

                                        </div>
                                    </div>
                                </div>
                            </div>

                    <!-- Footer de la ventana-->
                            <div class="modal-footer">

                                <button type="button" class="btn btn-primary" data-dismiss="modal">Cerrar</button>
                                <!--<button type="button" class="btn btn-primary" >Guardar cambios</button>  btn btn-secondary-->

                            </div>

                </div>
            </div>
    </div>