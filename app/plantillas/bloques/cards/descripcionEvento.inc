 <!--Descripción de un Evento--> 
<?php use miId\fuente\Repositorio\LocalidadRepositorio; 
use miId\fuente\Repositorio\EventoRepositorio; 
?>
<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/scripts/css_descripcionViaje.inc';?>
    <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">   
            <h5 class="destino">
                <div>
                    <div>
                   
                        <?php  require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/EventoRepositorio.inc';
                                $nombreCarpeta = (new EventoRepositorio())->carpetaImagen($ref_Evento,1);
                                $nombreImagen = (new EventoRepositorio())->rutaImagen($ref_Evento,1); 
                                ?>

                        <a href="/Verano-2023/web/imagenes/eventos/<?=$nombreCarpeta[0]->nombre_Carpeta; ?>/<?=$nombreImagen[0]->nombre_ImagenEvento; ?>" alt="descripción de la foto">
                        <?php echo ($evento->nombre_Evento ); ?> <br>
                        <?php 



                        if($evento->nombre_Evento!=$evento->nombre_Localidad){
                            echo ($localidad); 
                        }else{
                            $ref_Localidad2=$evento->ref_Localidad;
                            require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/LocalidadRepositorio.inc';    
                            $provincia = (new LocalidadRepositorio())->provincia($ref_Localidad2); 
                            echo ($provincia[0]->provincia);
                        }
                        
                        
                        
                        ?>
                    </a>


                
                    </div>

                    <div>
                        <?php // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/destinos/elTiempo.inc'; ?>
                    </div>    
                </div>
            </h5>
    </div>

    <div class="col-xl-4 text-center col-lg-4 col-md-4 col-sm-4 col-4">
        <div><!--Si paga-->
            <!-- <h3 style="background-color: cyan; border: 1px solid black; border-radius: 0.15em;" class="agencia"><a id="<?php echo $destino->ref_AgenciaViajes; ?> " href="#ventana96" onclick="horarios(this)" data-toggle="modal" >  <?php echo ($nombreAgenciaViajes); ?></a></h3>-->
            <a style="margin: auto;" id="<?php echo $evento->ref_AgenciaViajes; ?>" href="#ventana96" onclick="horarios(this)" data-toggle="modal" class="boton"><?php echo ($nombreAgenciaViajes); ?></a>
        </div><?php 
            if (!empty($_SESSION['perfil'])) {
                if ($_SESSION['perfil']['roll'] === "cliente" || $_SESSION['perfil']['roll'] === "agenciaviajes" || $_SESSION['perfil']['roll'] === "admin"){ ?>
                    <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/eventos/estadoEvento.inc'; }       

            }else{
               // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/destinos/estadodestino.inc'; 
            } ?>
    </div>


<div class="row" style="margin-top: -1em;"><?php 
    if(!empty($_SESSION['perfil'])){
        if($_SESSION['perfil']['roll']=="agenciaviajes" || $_SESSION['perfil']['roll']=="cliente"){ ?>
            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12"><?php
        }else{ }
    }else{

    } ?>
       
       <input hidden id="<?php echo ($ref_Destino); ?>" class="checksdestinos" type="checkbox" name="datos[destinoseleccionado]" value="<?php echo ($ref_Destino); ?>">
      
        <?php
            
            if(empty($_SESSION['perfil'])){ // Solo sale el botón de 'Solicitar Reserva' y el de 'Comer en' ?>

                <div class="row" style="margin: auto;">
                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/destinos/estadodestino.inc'; ?>
                    </div>
                </div>
                
                <?php // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/botones_Destino.inc'; ?>
                
                <div class="row" style="margin: auto;">
                    <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">
                        <input type="submit" name="contratar" onclick="deselecionaTodosChecksDestinos(),selecciona('<?php echo ($ref_Destino); ?>')" 
                            value="Solicitar Reserva">
                    </div>

                    <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">
                        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/desplegabledondecomer.inc'; ?>
                    </div>
                </div>


                <?php
                    
                    
                    
            }else{


                if ($_SESSION['perfil']['roll']=='cliente') { // Solo sale el botón de 'Solicitar Reserva' y el de 'Comer en'?>
                    <div class="row">
                        <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">
                            <input type="submit" name="contratar" onclick="deselecionaTodosChecksDestinos(),selecciona('<?php echo ($ref_Destino); ?>')" 
                                value="Solicitar Reserva">
                        </div>

                        <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">
                            <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/desplegabledondecomer.inc'; ?>
                        </div>
                    </div><?php 

                } elseif($_SESSION['perfil']['roll']=='agenciaviajes'){ // Aparecen los botones de 'Reservar', 'Modificar' y 'Suspender Viaje'  ?>
<!--
                    <div class="row">
                        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                        <a class="dropdown-item" href="index.php?ctl=motrartodosdestinosdeagenciaviajeslogeada"></a> 
                        <div>
                    </div>

                    <div class="row">
                        <div class="col-xl-4 text-center col-lg-4 col-md-4 col-sm-4 col-4">
                          
                        <?php

                        if($estado=="COMPLETO"){ ?>
                        <a class="dropdown-item" href="index.php?ctl=motrartodosdestinosdeagenciaviajeslogeada"><i class="fas fa-eye"></i> Destinos de <?= $_SESSION['perfil']['name']; ?></a> 
                        <?php
                        }else{ ?>
                            <input type="submit" name="contratar" onclick="deselecionaTodosChecksDestinos(),selecciona('<?php echo ($ref_Destino); ?>')" 
                                    value="Reservar"><?php
                        } ?>
              

                    -->  
<div class="row">
   


    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
        <input type="submit" name="contratar" onclick="deselecionaTodosChecksDestinos(),selecciona('<?php echo ($ref_Destino); ?>')" 
        value="Hacer Reserva">
    </div>
</div><?php
                }else{ ?>
                        <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">
                            <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/desplegabledondecomer.inc'; ?>
                        </div><?php
                }
            
            } ?>
</div>
<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/popups/horariosAgencias.inc'; ?>


 
   
<!--Fin Descripción de un Viaje-->  
