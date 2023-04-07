<?php use miId\fuente\Repositorio\DestinoRepositorio;?>

<article style="padding: 0.5em; background-color: #EFEFEF; border: solid 1px black; border-radius: 0.5em;">

    <div><?php 
        // preguntar en qué estado está el viaje
        require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/DestinoRepositorio.inc';
        $estadoDestino = (new DestinoRepositorio())-> estadoDestino($ref_Destino); ?>
    
        <input  <?php  
        
        if($estadoDestino[0]->estado=='DISPONIBLE'){ ?>style="width: 100%; font: bold; border-radius: 0.25em;background-color: #CFE7AD;"<?php 
            
        }else if($estadoDestino[0]->estado=='NO DISPONIBLE'){ ?>style="width: 100%; font: bold; border-radius: 0.25em;background-color: red;"<?php 
            
        }else if($estadoDestino[0]->estado=='COMPLETO'){ ?> style="background-color: cyan;"<?php } ?>
                class="boton_suspenderviajeeee" type="submit" 
                
                

                <?php 
                    if($estadoDestino[0]->estado=='DISPONIBLE'){ ?> name="cerrarviaje" <?php
                    }else{ ?> name="abrirviaje" <?php } 
                
            if($estadoDestino[0]->estado=='DISPONIBLE'){ ?>  value="DISPONIBLE" <?php
            }else if($estadoDestino[0]->estado=='NO DISPONIBLE'){ ?> value="NO DISPONIBLE"  <?php

            }else if($plazasOcupadas[$i]->num_PlazasOcupadas==$destino->plazas){
                    ?> value="COMPLETO" <?php
            }else{
                ?> value="DISPONIBLE"<?php
            } ?>
            
            onclick="deselecionaTodosChecksDestinos(),selecciona('<?php echo($ref_Destino);?>')">  
    </div>

    <hr class="letra">
                                   
                                
    <h4><?php echo $destino->fecha_Viaje . ", " . $destino->dia_Semana;?><br>
        <?php echo $destino->nombre_Localidad . ', ' . $destino->kilometrosIdaVuelta . " Km"; ?>
        <?php echo $destino->matricula;?>
    </h4>
            

    <h4><?php echo round($destino->euros, 2) . '€/billete' ?></h4>
    <h4><?php echo $plazasOcupadas[$i]->num_PlazasOcupadas . " / "; ?><?php echo $destino->plazas; ?><span style="background-color: #AFE0E0;"> / <?php echo $destino->plazas - $plazasOcupadas[$i]->num_PlazasOcupadas . " Libres"; ?></span></h4>
                            
    <h4>Pagadas: <?php echo $plazasOcupadasPagadas[$i]->num_PlazasOcupadasPagadas; ?><span style="background-color: #AFE0E0;"><?php echo "  Recaudado: " . $destino->euros * $plazasOcupadasPagadas[$i]->num_PlazasOcupadasPagadas . "€"; ?></span></h4> 
    
    <h4  ><span <?php if($plazasOcupadasNoPagadas[$i]->num_PlazasOcupadasNoPagadas>0){ ?>style="background-color:red; border-radius: 0.25em; padding: 0em 0.25em;"<?php


} ?> >No Pagadas: <?php echo $plazasOcupadasNoPagadas[$i]->num_PlazasOcupadasNoPagadas; ?> 
    


    
    
    
    
    
        <?php echo "Faltan: " . $destino->euros * $plazasOcupadasNoPagadas[$i]->num_PlazasOcupadasNoPagadas . "€"; ?></span></h4>

    <?php include_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades.inc'; ?>
    <?php $ref_Destino=$destino->ref_Destino; ?>
    <?php // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/botones_Destino.inc'; ?>
    
    <hr class="letra">
        <input type="submit" name="contratar" onclick="deselecionaTodosChecksDestinos(),selecciona('<?php echo ($ref_Destino); ?>')" value="Reservas" <?php

        if($estadoDestino[0]->estado=='NO DISPONIBLE'){ ?>disabled<?php } ?> >

        <input type="submit" name="modificardestino" value="Modificar" onclick="deselecionaTodosChecksDestinos(),selecciona('<?php echo($ref_Destino);?>')">                    
        <input class="boton_suspenderviaje" disabled type="submit" name="cancelardestino" value="Suspender Viaje" onclick="deselecionaTodosChecksDestinos(),selecciona('<?php echo($ref_Destino);?>')">                
        <input class="checksdestinos" id="<?php echo($destino->ref_Destino);?>" type="checkbox" name="datos[destinoseleccionado]" hidden value="<?php echo($destino->ref_Destino);?>" >
               
</article>   

<!--https://getbootstrap.com/docs/5.0/components/buttons/-->