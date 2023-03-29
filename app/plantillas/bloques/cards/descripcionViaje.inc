<!--Descripción de un ViajeOK--> 

<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/scripts/css_descripcionViaje.inc';?>
    <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">   
            <h5 class="destino">
                <div>
                    <div>
                        <a href="web/imagenes/destinos/<?php echo ($destino->nombre_Localidad); ?>.jpg" alt="descripción de la foto">
                        <?php echo ($localidad); ?></a>
                    </div>

                    <div>
                        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/destinos/elTiempo.inc'; ?>
                    </div>    
                </div>
            </h5>
    </div>

    <div class="col-xl-4 text-center col-lg-4 col-md-4 col-sm-4 col-4" style="padding: initial;">
        <div><!--Si paga-->
            <!-- <h3 style="background-color: cyan; border: 1px solid black; border-radius: 0.15em;" class="agencia"><a id="<?php echo $destino->ref_AgenciaViajes; ?> " href="#ventana96" onclick="horarios(this)" data-toggle="modal" >  <?php echo ($nombreAgenciaViajes); ?></a></h3>-->
            <a style="margin: auto;" id="<?php echo $destino->ref_AgenciaViajes; ?>" href="#ventana96" onclick="horarios(this)" data-toggle="modal" class="boton"><?php echo ($nombreAgenciaViajes); ?></a>
        </div>
        
        <?php  echo $numPlazasOcupadasBus; ?> / <?php echo $numPlazasTotalesBus; ?> plazas  &nbsp;
        <?php  echo $destino->euros .' €'; ?>

        <input type="submit" name="contratar" onclick="deselecionaTodosChecksDestinos(),selecciona('<?php echo ($ref_Destino); ?>')" value="Solicitar Reserva">

        <?php 
            if (!empty($_SESSION['perfil'])) {
                if ($_SESSION['perfil']['roll'] === "cliente" || $_SESSION['perfil']['roll'] === "agenciaviajes" || $_SESSION['perfil']['roll'] === "admin"){ ?>
                    <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/destinos/estadodestino.inc'; }       

            }else{
               // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/destinos/estadodestino.inc'; 
            } ?>
    </div>
    


<div class="row" style="margin-top: -0.5em; text-align: initial; padding-left: inherit;"><?php 
    if(!empty($_SESSION['perfil'])){
        if($_SESSION['perfil']['roll']=="agenciaviajes" || $_SESSION['perfil']['roll']=="cliente"){ ?>
            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12"><?php
        }else{ }
    }else{

    } ?>
       
       <input hidden id="<?php echo ($ref_Destino); ?>" class="checksdestinos" type="checkbox" name="datos[destinoseleccionado]" value="<?php echo ($ref_Destino); ?>">
      
        <?php
            
            if(empty($_SESSION['perfil'])){ // Solo sale el botón de 'Solicitar Reserva' y el de 'Comer en' ?>

               
                
                <?php // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/botones_Destino.inc'; ?>
                


    <div class="row" style="margin: auto;">
        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
            <?php // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/solicitarReserva.inc'; ?>
        </div>

        <?php /*
        <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">
            <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/desplegabledondecomer.inc'; ?>
        </div>
        */
        ?>




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
                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                    <input type="submit" name="contratar" onclick="deselecionaTodosChecksDestinos(),selecciona('<?php echo ($ref_Destino); ?>')" 
                    value="Hacer Reserva">
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
