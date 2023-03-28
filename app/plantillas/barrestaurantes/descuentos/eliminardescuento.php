<div class="col-xl-3 text-center col-lg-12 col-md-12 col-sm-12 col-12">
    <input id="<?php echo $ref_negocio; ?>" href="#ventana_eliminarDescuento" data-toggle="modal"  type="button" value="Eliminar Descuento!">   
</div>
<div class="modal fade" id="ventana_eliminarDescuento" style="margin: 0 auto;">
    <div class="modal-dialog">
        <div class="modal-content" style="max-width: 380px;" >

            <!-- Header de la ventana-->
                <div class="modal-header">   
                    <h6 class="modal-title">Eliminar Descuento: </h6>  
                    <button type="button" class="close" data-dismiss="modal" aria-hiddden="true">&times;</button>
                </div>       
                
            <!-- Contenido de la ventana-->
                <!-- <form method="post" action="/Verano-2023/app/plantillas/bloques/opinionnegocio.php">-->
                <form id="form_menu_descuento" action="" method="POST">     
                    <div class="row">
                        
                    </div>


                    <div class="row">
                        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                            <label for="asegura_eliminar">
                            <input style="width: 1em;" id="asegura_eliminar" type="checkbox" name="asegura_eliminar"> Quiero eliminar mi Descuento.</label>
                        </div>
                    </div>

                    <div class="row">
                        
                            <div style="margin: auto;" class="col-xl-11 text-center col-lg-11 col-md-11 col-sm-11 col-6">
                                <input type="submit" class="btn btn-primary" name="eliminardescuento" value="Eliminar Descuento">
                            </div>

                        <!--<div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-12 cont">
                                <input type="reset" value="Limpiar">
                            </div>
                        -->
                    </div>



                </form>            

            <!-- Footer de la ventana-->
            

                <div style="margin: 0.5em;" class="modal-footer">
                    <button type="button" class="btn btn-default" data-dismiss="modal">Cerrar</button>
                    <!-- <button type="button" class="btn btn-primary" >Guardar cambios</button> -->
                </div>

        </div>
    </div>
</div>
                            
