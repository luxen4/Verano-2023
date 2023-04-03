<?php use miId\fuente\Repositorio\ViajarRepositorio; 
use miId\fuente\Repositorio\DestinoRepositorio;
use SebastianBergmann\CodeCoverage\Report\PHP;

?>

<?php ob_start() ?>

    <title>Todos los Destinos de una Agencia de Viajes Logueada</title>

<div class="container-fluid" style="padding: 0em;"> 
    <div class="row">
        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
            <hr class="letra">
        </div>
    </div>

    <div class="row">
        <div class="col-xl-12 text-center">
            <h5 style="text-align: center;"><?php echo $_SESSION['perfil']['name']; ?><br> All Destinations of your Travel-Agency</h5><br>
        </div>
    </div>

    <div class="container">
        <div style="margin: 1em;" class="row">
            <div id="crear_nuevodestino" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                <a class="dropdown-item" href="index.php?ctl=nuevodestino"><i class="fas fa-umbrella-beach"></i> Crear Nuevo Destino</a> 
            </div>
        </div>    
    </div>



</div>

<form action="" method="post" style="text-align: center;"> 
<input class="botones_disparadores" type="button" value="Activar Suspender Viajes" onclick="asdf(this)">
<hr class="letra">
<div class="container">
        <div class="col-xl-6 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                <?php $i=0;
                    if (!empty($destinos)) {
                        foreach ($destinos as $destino) { 



                        $ref_Destino=$destino->ref_Destino;
                            require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ViajarRepositorio.inc';
                            $plazasOcupadas = (new ViajarRepositorio())-> numPlazasOcupadasDestino($ref_Destino); 
                            $plazasOcupadasPagadas = (new ViajarRepositorio())-> numPlazasOcupadasPagadas($ref_Destino); 
                            $plazasOcupadasNoPagadas = (new ViajarRepositorio())-> numPlazasOcupadasNoPagadas($ref_Destino); ?>
                           
                               <div class="col-xl-6 text-center col-lg-12 col-md-12 col-sm-12 col-12"><?php 
                                        // preguntar en qué estado está el viaje
                                        require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/DestinoRepositorio.inc';
                                        $estadoDestino = (new DestinoRepositorio())-> estadoDestino($ref_Destino); ?>
                                    </div>
                                   
                                    <div>  
                                            
                                        <input <?php  if($estadoDestino[0]->estado=='DISPONIBLE'){ ?>style="background-color: green;"<?php 
                                                        }else if($estadoDestino[0]->estado=='NO DISPONIBLE'){ ?>style="background-color: red;"<?php 
                                                        }else if($estadoDestino[0]->estado=='COMPLETO'){ ?> style="background-color: cyan;"<?php } ?>
                                                            class="boton_suspenderviajeeee" type="submit" 
                                                            
                                                            

                                                            <?php 
                                                                if($estadoDestino[0]->estado=='DISPONIBLE'){ ?> name="cerrarviaje" <?php
                                                                }else{ ?> name="abrirviaje" <?php } 
                                                            
                                                        if($estadoDestino[0]->estado=='DISPONIBLE'){ ?>  value="DISPONIBLE" <?php
                                                        }else if($estadoDestino[0]->estado=='NO DISPONIBLE'){ ?> value="NO DISPONIBLE" <?php

                                                        }else if($plazasOcupadas[$i]->num_PlazasOcupadas==$destino->plazas){
                                                                ?> value="COMPLETO" <?php
                                                        }else{
                                                            ?> value="DISPONIBLE"<?php
                                                        } ?>
                                                        
                                                        onclick="deselecionaTodosChecksDestinos(),selecciona('<?php echo($ref_Destino);?>')">  
                                    </div>
                                    <h4><?php echo $destino->fecha_Viaje . ", " . $destino->dia_Semana;?><br>

                                        <?php echo $destino->nombre_Localidad . ', ' . $destino->kilometrosIdaVuelta . " Km"; ?>
                                    </h4>
                                        <?php echo $destino->matricula;?><br> 

                                <h4><?php echo round($destino->euros, 2) . '€/billete' ?></h4>
                                <h4><?php echo $plazasOcupadas[$i]->num_PlazasOcupadas . " / "; ?><?php echo $destino->plazas; ?><span style="background-color: cyan;"><?php echo $destino->plazas - $plazasOcupadas[$i]->num_PlazasOcupadas . " Libres"; ?></span></h4>
                                                        
                                <h4>Pagadas: <?php echo $plazasOcupadasPagadas[$i]->num_PlazasOcupadasPagadas; ?><span style="background-color: cyan;"><?php echo "  Recaudado: " . $destino->euros * $plazasOcupadasPagadas[$i]->num_PlazasOcupadasPagadas . "€"; ?></span></h4> 
                                
                                <h4>No Pagadas: <?php echo $plazasOcupadasNoPagadas[$i]->num_PlazasOcupadasNoPagadas; ?><span  style="background-color:red;">
                                    <?php echo "Falta: " . $destino->euros * $plazasOcupadasNoPagadas[$i]->num_PlazasOcupadasNoPagadas . "€"; ?></span></h4>
                                
                                    <input type="submit" name="contratar" onclick="deselecionaTodosChecksDestinos(),selecciona('<?php echo ($ref_Destino); ?>')" value="Realizar Reserva"
                                            <?php

                                            if($estadoDestino[0]->estado=='NO DISPONIBLE'){ ?>disabled<?php } ?> >

                                    <input type="submit" name="modificardestino" value="Modificar" onclick="deselecionaTodosChecksDestinos(),selecciona('<?php echo($ref_Destino);?>')">                    

                                   
                                    <input class="boton_suspenderviaje" disabled type="submit" name="cancelardestino" value="Suspender Viaje" onclick="deselecionaTodosChecksDestinos(),selecciona('<?php echo($ref_Destino);?>')">                
               
                                    <hr class="letra">
                                    
                    
                                <!--  <input class="btn btn-primary" type="submit" name="modificardestino" value="Modificar" 
                                onclick="selecciona(<?php echo($destino->ref_Destino);?>)">-->

                                <input class="checksdestinos" id="<?php echo($destino->ref_Destino);?>" type="checkbox" name="datos[destinoseleccionado]" hidden value="<?php echo($destino->ref_Destino);?>" >
                                <!--
                                <input class="btn btn-danger" type="submit" name="cancelardestino" value="Cancelar" onclick="selecciona(<?php echo($destino->ref_Destino);?>)">-->
                                <!--https://getbootstrap.com/docs/5.0/components/buttons/-->


                                <?php include_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades.inc'; ?>
                                <?php $ref_Destino=$destino->ref_Destino; ?>
                                <?php // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/botones_Destino.inc'; ?>

                                                        <?php   
                                                }
                                            } ?>

  
                                    </tbody>

                                </table>
                            </div>
                            <style>
                               #crear_nuevodestino a{background-color:#EFEFEF ; border:1px solid #006293; border-radius:1em;}
                            </style>



<?php /*
    <div class="row">
        <div id="seg" class="col-xl-12 text-center">
            <label for="estaseguro"><input id="estaseguro" type="checkbox" name="asegura"> I´m sure.</label>
        </div>
    </div> */ ?>

</div>
</div>

    <div class="row">
        <div class="col-xl-12 text-center"><hr class="letra"></div>
    </div>


</form>
     
</div>






<?php $contenido = ob_get_clean() ?>

<?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA .  BASE;?>


<style>
    .table-responsive{max-width: 1200px;margin: auto;}
    #contenido{padding: 0em;}
    .btn{font-size: 0.5rem; padding: 0.2em;}
    td{vertical-align: middle; font-size: 1em;}

</style>

<script>
    function asdf(e){
        if(e.value=="Aparecer"){
            $('.boton_suspenderviaje').prop("disabled", false); 
            $('.botones_disparadores').val('Desaparecer');

        }else{
            $('.boton_suspenderviaje').prop("disabled", true); 
            $('.botones_disparadores').val('Aparecer');
        }
        
    }
   
</script>



