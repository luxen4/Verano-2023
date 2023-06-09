 <?php use miId\fuente\Repositorio\ViajarRepositorio; 
 use miId\fuente\Repositorio\DestinoRepositorio;
 use miId\fuente\Repositorio\EventoRepositorio;
        $ref_Destino=$destino->ref_DestinoEvento;
        require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ViajarRepositorio.inc';
        $plazasOcupadas = (new ViajarRepositorio())-> numPlazasOcupadas($ref_Destino,'VIAJAREVENTO','ref_DestinoEvento'); 
        $plazasOcupadasPagadas = (new ViajarRepositorio())-> numPlazasOcupadasPagadas($ref_Destino); 
        $plazasOcupadasNoPagadas = (new ViajarRepositorio())-> numPlazasOcupadasNoPagadas($ref_Destino); ?>
<tr>
    <td>
        <input type="submit" name="modificardestino" value="Modificar" onclick="deselecionaTodosChecksDestinos(),selecciona('<?php echo($ref_Destino);?>')">                    

        <h6>
            <span><?php echo $destino->nombre_Evento; ?></span>,<?php 
            
            if($destino->nombre_Evento!=$destino->nombre_Localidad){ ?>
                <span><?php echo $destino->nombre_Localidad; ?> </span><?php
            } ?><br>
            
            <span><?php echo $destino->kilometros . " Km"; ?> </span>
        </h6>               
                                
        <h6><?php echo $destino->fecha_Viaje . ", " . $destino->dia_Semana; ?></h6>
        <?php echo $destino->matricula; ?><br>

        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12 g">
            <input class="boton_suspenderviaje" disabled type="submit" 
            name="cancelardestino" value="Suspender Viaje" onclick="deselecionaTodosChecksDestinos(),selecciona('<?php echo($ref_DestinoEvento);?>')">                
        </div>
                                
                                    
        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12 g"><br><?php 
            // preguntar en qué estado está el viaje al Evento
            require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/DestinoRepositorio.inc';
            $estadoDestino = (new DestinoRepositorio())-> estado($ref_Destino,'DESTINOEVENTO','ref_DestinoEvento'); ?>
        </div>
    </td>

    <td>
        <div class="container">           
            <div class="row">
                <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6" style="padding: 0em;">
                    <input   <?php  
                    if($estadoDestino[0]->estado=='DISPONIBLE'){ ?>style="background-color: green;"<?php 
                    }else if($estadoDestino[0]->estado=='NO DISPONIBLE'){ ?>style="background-color: red;"<?php 
                    }else if($estadoDestino[0]->estado=='COMPLETO'){ ?> style="background-color: cyan;"<?php } ?>
                        class="boton_suspenderviajeeee" type="submit" <?php 
                        
                            if($estadoDestino[0]->estado=='DISPONIBLE'){ ?> name="cerrarviaje" <?php
                            }else{ ?> name="abrirviaje" <?php } 
                        
                    if($estadoDestino[0]->estado=='DISPONIBLE'){ ?>  value="DISPONIBLE" <?php
                    }else if($estadoDestino[0]->estado=='NO DISPONIBLE'){ ?> value="NO DISPONIBLE" <?php

                    }else if($plazasOcupadas[$i]->num_PlazasOcupadas == $destino->plazas){
                            ?> value="COMPLETO" <?php
                    }else{
                        ?> value="DISPONIBLE"<?php
                    } ?>
                        
                        onclick="deselecionaTodosChecksDestinos(),selecciona('<?php echo($ref_Destino);?>')">  
                </div>

                <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6" style="padding: 0em;">
                    <input type="submit" name="contratar" onclick="deselecionaTodosChecksDestinos(),selecciona('<?php echo ($ref_Destino); ?>')" value="Realizar Reserva"
                    <?php

                    if($estadoDestino[0]->estado=='NO DISPONIBLE'){ ?>disabled<?php } ?> >
                </div>
            </div> 
            
        </div>

        <h6><?php echo round($destino->euros, 2) . '€/billete' ?></h6>
        <h6><?php echo $plazasOcupadas[$i]->num_PlazasOcupadas . " / "; ?><?php echo $destino->plazas; ?><span style="background-color: cyan;"><?php echo $destino->plazas - $plazasOcupadas[$i]->num_PlazasOcupadas . " Libres"; ?></span></h6>                 
                                                                                
        <h6>Pagadas: <?php echo $plazasOcupadasPagadas[$i]->num_PlazasOcupadasPagadas; ?><span style="background-color: cyan;"><?php echo "  Recaudado: " . $destino->euros * $plazasOcupadasPagadas[$i]->num_PlazasOcupadasPagadas . "€"; ?></span></h6> 
        
        <h6>No Pagadas: <?php echo $plazasOcupadasNoPagadas[$i]->num_PlazasOcupadasNoPagadas; ?><span  style="background-color:red;">
            <?php echo "Falta: " . $destino->euros * $plazasOcupadasNoPagadas[$i]->num_PlazasOcupadasNoPagadas . "€"; ?></span></h6>

        <!--  <input class="btn btn-primary" type="submit" name="modificardestino" value="Modificar" 
        onclick="selecciona(<?php echo($destino->ref_Destino);?>)">-->

        <input class="checksdestinos" id="<?php echo($destino->ref_DestinoEvento);?>" type="checkbox" name="datos[destinoseleccionado]" hidden value="<?php echo($destino->ref_DestinoEvento);?>" >
        <!--
        <input class="btn btn-danger" type="submit" name="cancelardestino" value="Cancelar" onclick="selecciona(<?php echo($destino->ref_Destino);?>)">-->
        <!--https://getbootstrap.com/docs/5.0/components/buttons/-->


        <?php include_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades.inc'; ?>
        <?php $ref_DestinoEvento=$destino->ref_DestinoEvento; ?>
        <?php // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/botones_Destino.inc'; ?>

    </td>
</tr>