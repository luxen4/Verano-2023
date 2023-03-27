<div class="col-xl-3 text-center col-lg-12 col-md-12 col-sm-12 col-12">
    <input id="<?php echo $ref_negocio; ?>" href="#ventana_modificarDescuento" data-toggle="modal"  type="button" value="Modificar Descuento!">   
</div>
<div class="modal fade" id="ventana_modificarDescuento" style="margin: 0 auto;">
    <div class="modal-dialog">
        <div class="modal-content" style="max-width: 380px;" >

            <!-- Header de la ventana-->
                <div class="modal-header">   
                    <h6 class="modal-title">Modificar Descuento: </h6>  
                    <button type="button" class="close" data-dismiss="modal" aria-hiddden="true">&times;</button>
                </div>       
                
            <!-- Contenido de la ventana-->
                <!-- <form method="post" action="/Verano-2022/app/plantillas/bloques/opinionnegocio.php">-->
                <form id="form_menu_descuento" action="" method="POST">     
                    <div class="row">
                        <div style="margin: auto;" class="col-xl-11 text-center col-lg-11 col-md-11 col-sm-11 col-11">
                                
                            <!-- <label for="descuento">Seleccione, por favor!</label>-->
                            <select id="" style="width: 50%; margin:0.5em;" name="datos[descuento]" >
                                <option value="" selected>Indique su valor!</option>
                                    <option <?php if(!empty($datos)){if(isset($datos["descuento"])){echo ($datos["descuento"] === "5")?"selected" : ""; }}?> value="5">5%</option>
                                    <option <?php if(!empty($datos)){if(isset($datos["descuento"])){echo ($datos["descuento"] === "10")?"selected" : "";}}?> value="10">10%</option>
                                    <option <?php if(!empty($datos)){if(isset($datos["descuento"])){echo ($datos["descuento"] === "15")?"selected" : "";}}?> value="15">15%</option>
                                    <option <?php if(!empty($datos)){if(isset($datos["descuento"])){echo ($datos["descuento"] === "20")?"selected" : "";}}?> value="20">20%</option>
                            </select>
                        </div>
                    </div>


                    <div class="row">
                        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                            <label for="asegura_modificar">
                            <input style="width: 1em;" id="asegura_modificar" type="checkbox" name="asegura_modificar"> Quiero modificar el Descuento.</label>
                        </div>
                    </div>

                    <div class="row">
                        
                            <div style="margin: auto;" class="col-xl-11 text-center col-lg-11 col-md-11 col-sm-11 col-6">
                                <input type="submit" class="btn btn-primary" name="modificardescuento" value="Crear Descuento">
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

<style>
   
</style>