 <?php 
 use miId\fuente\Repositorio\ComerRepositorio; 
$lugaresDondeComer1= (new ComerRepositorio())->todosNegociosLocalidad($ref_Localidad); ?>

<div clas="row">
    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
        <input href="#ventana_mostrarnegocios<?php echo $destino->ref_Destino; ?>" 
        data-toggle="modal" class="deselecionaaaaa" onclick="deselecionaTodosChecks()" type="button" 
        value="Restaurantes <?php // echo ($localidad); ?>">
    </div>
</div>

<div class="modal fade" id="ventana_mostrarnegocios<?php echo $destino->ref_Destino; ?>" style="padding: 0em;">
    <div class="modal-dialog">
        <div class="modal-content">

            <!-- Header de la ventana-->
                <div class="modal-header">   
                    <h6 class="modal-title">Restaurantes de: </h6>  
                    <button type="button" class="close" data-dismiss="modal" aria-hiddden="true">&times;</button>
                </div>       
                
            <!-- Contenido de la ventana-->
                <div class="modal-body">
                    <input id="ref_Localidad" type="checkbox" name=datos[ref_Localidad] value="<?php echo $ref_Localidad;?>"/>  
                       
                    <?php $negocios_Localidad1=$lugaresDondeComer1;
                    foreach ($negocios_Localidad1 as $bar_rest) { ?>
                        <div class="row articulo" style="padding-top: 0.8em;">
                            <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">
                                <?php require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/carruselFotosNegocio.inc';?>

                                <div class="row">
                                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12 mas_fotos">
                                        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/redesSocialesIconosPrincipal.inc'; ?>
                                        <?php // require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/redes_sociales.inc';?>
                                        <?php // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/redesSocialesIconos.inc'; ?>
                                        
                            
                                    </div>     
                                </div>
                            </div><?php 
                            
                            if(empty($bar_rest->dto)){?>
                                <div class="col-xl-6 text-left col-lg-6 col-md-6 col-sm-6 col-6 mas_fotos"><?php
                            }else{?>
                                <div class="col-xl-6 text-left col-lg-6 col-md-6 col-sm-6 col-6 mas_fotos"><?php
                            }?>
                                <?php    require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/info_negocioSimple.inc';?><!--Este es el definitivo-->
                                <?php // require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/info_negocio.inc';?>
                                <?php require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/cupon_descuento.inc';?>
                            </div>

                        </div><?php    
                    }; ?>                                             
                </div>

            <!-- Footer de la ventana-->
                <div style="margin: 0.5em;" class="modal-footer">
                    <button type="button" class="btn btn-default" data-dismiss="modal">Cerrar</button>
                    <!-- <button type="button" class="btn btn-primary" >Guardar cambios</button> -->
                </div>
        </div>
    </div>
</div>

