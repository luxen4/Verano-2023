<?php use miId\fuente\Repositorio\DestinoRepositorio; ?>
<?php ob_start(); ?> 

    <link rel="stylesheet" type="text/css" href='web/css/plantasbuses/plantabus.css'/> <!--OK-->
    <link rel="stylesheet" type="text/css" href='web/css/plantasbuses/bus_63plazas.css'/>  

    <?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/utilidades/utilidades.inc'; ?>
    <?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/utilidades/utilidades2.inc'; ?>

        <?php   include_once $_SERVER['DOCUMENT_ROOT'] . DESTINOREPOSITORIO;
                $destino = (new DestinoRepositorio())->infoDestino($ref_Destino); ?>

        <?php $_SESSION['ref_Destino']= $destino; ?>
            <div class="container fondoplantabus"> 
                <form action="" method="POST">
                    <div class="row">
                        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                            <h1>Distribución Bus <?= $destino[0]->plazas; ?> Plazas</h1>
                        </div>
                    </div>

                    <?php //include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022\app\plantillas\bus\plano63plazas.inc' ?>
                    <?php 
                    // Podría haber de 61 plazas más de un Bus, lo determinará la matricula
                    if($destino[0]->matricula=='0063 LOG'){
                        include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022\app\plantillas\bus\plano_Logrobus_63plazas_0063LOG.inc'; 
                   
                    }elseif($destino[0]->matricula=='0061 LOG'){
                        include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022\app\plantillas\bus\plano_Logrobus_61plazas_0061LOG.inc'; 
                   
                   }elseif($destino[0]->matricula=='0055 LOG'){
                       include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022\app\plantillas\bus\plano_Logrobus_55plazas_0055LOG.inc'; 
                   
                   }elseif($destino[0]->matricula=='0051 LOG'){
                       include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022\app\plantillas\bus\plano_Logrobus_51plazas_0051LOG.inc'; 
                   
                   }elseif($destino[0]->matricula=='0028 LOG'){  //  27 
                       include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022\app\plantillas\bus\plano_Logrobus_28plazas_0028LOG.inc'; 
                   
                   }elseif($destino[0]->matricula=='0024 LOG'){  
                       include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022\app\plantillas\bus\plano_Logrobus_24plazas_0024LOG.inc'; 
                   
                   }elseif($destino[0]->matricula=='0019 LOG'){  
                       include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022\app\plantillas\bus\plano_Logrobus_19plazas_0019LOG.inc'; 
                   
                      
                      
                    
                    
                    }else {
                        ?><script>alert("No tenemos todavia la planta de Bus diseñada!");</script><?php
                    }?>
         
                        <?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022\app\plantillas\bloques\destinos\InfoDestino.inc' ?>

                            <?php 
                            if(empty($_SESSION['perfil'])){?>
                                    <a style="text-decoration: underline;" class="nav-link" href="index.php?ctl=loginusuarios" ><i class="fas fa-users"></i> Haga Loguin para reservar!</a>
                                   <!-- <p>Información Agencia de Viajes :</p>
                                    <p>Teléfono: <?php echo $info_DestinoTelefonoImeil[0]->telefono_Agencia; ?><br> emeil:<?php echo $info_DestinoTelefonoImeil[0]->email; ?></p>-->  <?php
                            }else{ ?>
                                    <div><?php   
                                        if($_SESSION['perfil']['roll']=='cliente'){ ?>
                                            <div class="row">
                                                <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                                    <div>
                                                        <?php $nombreCompleto=$_SESSION['perfil']['nombre'] . " " . $_SESSION['perfil']['apellidos']; ?>
                                                        <?php echo "Cliente<br>" . $nombreCompleto;?>
                                                    </div>
                                                    
                                                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                                        Precio estandar <br>
                                                        <input style="width: 6em;" id="importepasajero" type="number" name="datos[importepasajero]" value="" placeholder="<?php echo $precioBilleteNormal[0]->euros . ' euros'; ?>" size="15" readonly required min="10" max="50"> <br>
                                                       <!-- <label for="importepasajero">Importe Predeterminado del Viaje (podría tener descuento) </label><?php if(isset($datos)){if(isset($errores['importepasajero'])){?><span class="error"><?= $errores['importepasajero'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>-->
                                                    </div>

                                                    <?php  include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/plantabus/formulariospartefinal.php' ?>

                                                </div>
                                            </div><?php

                                        }else{ ?> 
                                            <?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/plantabus/formularios.php' ?><?php 
                                        } ?>

                                   
                                        
                                    <div><?php 
                                        if($_SESSION['perfil']['roll']=='agenciaviajes'){ ?>
                                            <?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/plantabus/infoOcupacionBus.php' ?><?php  
                                        } ?>              
                                    </div>
                                </div><?php
                            } ?>
                </form>
            </div>
           

<?php $contenido = ob_get_clean() ?>
<?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/basefantasma.php';?>









