<div>

<?php /*
    <!--
    <div class="row">
        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
            <?php $fechaDestino = date("d-m-Y", strtotime($fechaDestino));?>
                <h5 class="fecha" style="border: none;"><?php // echo ($fechaDestino . ', ' . $diaSemana); ?></h5> 
        </div>
    </div>
    -->
    */ ?>

    <div class="modal fade" id="ventana96" style="margin: 0 auto;">
        <div class="modal-dialog">
            <div class="modal-content" style="max-width: 409px;" >
                <!-- Header de la ventana-->
                    <div style="margin: auto;" class="modal-header">
                        <div class="row"> 
                            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                <h4 class="modal-title"><?php echo $nombreAgenciaViajes; ?> </h4>  
                            </div>
                            
                        </div> 
                        <!--<button style="margin-left: 9em;" type="button" class="close" data-dismiss="modal" aria-hiddden="true">&times;</button>-->
                        
                    </div>       
                    
                <!-- Contenido de la ventana-->
                    <div class="modal-body">
                        <div class="row">
                            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                <h5>Horario: <br><span id="horario_AgenciaViajes" style="margin-left: 0.5em;"></span></h5>
                            </div>
                        </div>

                        <div class="row">
                            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                <h5>Teléfono: <br><span id="telefono_AgenciaViajes" style="margin-left: 0.5em;"></span></h5>
                            </div>
                        </div>

                        <div class="row">
                            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                            <input id="<?php echo ("popup_" . $destino->ref_AgenciaViajes); ?>" type="checkbox" name="datos[ref_AgenciaViajes]" hidden value="<?=$destino->ref_AgenciaViajes; ?>" >
                            <input class="boton_VerHorario btn btn-primary"  onclick='seleccionaRefAgenciaViajes3("<?php echo ($destino->ref_AgenciaViajes); ?>")' type="submit" name="ver_folleto" value="Ver Follneto">
                            </div>
                        </div>
                    </div>
                <!-- Footer de la ventana -->
                    <div class="modal-footer">
                        <button type="button" class="btn btn-default" data-dismiss="modal">Cerrar</button>
                        <!-- <button type="button" class="btn btn-primary" >Guardar cambios</button>  -->
                    </div>


            </div>
        </div>
    </div>
</div>

         
<style>
    .modal-header,.modal-body{padding: 0em;}
    .row{margin: 0.5em;}
    h5{text-align: center; border: none;}
</style>