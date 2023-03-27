<?php
namespace miId\fuente\Controlador;
use miId\fuente\Repositorio\ViajarRepositorio;
        
use miId\fuente\Repositorio\DestinoRepositorio;

use miId\fuente\Repositorio\PasajeroRepositorio;
use miId\fuente\Repositorio\ClienteRepositorio;

class excelController
{
    
        // Función que genera un archivo Excel de Ocupaciçon de un Bus.    
        public function generaExcelOcupacionbus (){ 
          $ref_Destino=$_SESSION['ref_Destino'];
          require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/ViajarRepositorio.inc';
          $datosBusDestino = (new ViajarRepositorio())->infoOcupacionBus($ref_Destino);
          $_SESSION['datos_busdestino']=$datosBusDestino; 
        // include __DIR__ . '/../../../Verano-2022\app\plantillas\bus\generaexcel\excelOcupacionBusOK.php';


        
        $todosAsientos=$_SESSION['datos_busdestino'];
        $ref_Destino=$_SESSION['datos_busdestino'][0]->ref_Destino; 
        include_once $_SERVER['DOCUMENT_ROOT'] . DESTINOREPOSITORIO; 
        include_once $_SERVER['DOCUMENT_ROOT'] . VIAJARREPOSITORIO; 
        include_once $_SERVER['DOCUMENT_ROOT'] . CLIENTEREPOSITORIO;
        include_once $_SERVER['DOCUMENT_ROOT'] . PASAJEROREPOSITORIO;
        
        $destino = (new DestinoRepositorio())->infoDestino($ref_Destino);
        $info_DestinoTelefonoImeil=(new DestinoRepositorio())->info_DestinoTelefonoImeil($ref_Destino); ?>
        
        
        <?php
        $file="exportarww.xls";
        header("Content-Type: application/vnd.ms-excel charset=iso-8859-1");
        header("Content-Disposition: attachment; filename=$file");
        ?>
        
        <html>
        <head>
        <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
        </head>
        <body>
        
        
        <?php include_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/utilidades/utilidades.inc'; ?>
        
        <!DOCTYPE html>
        <html lang="en">
        <head>
            <meta charset="UTF-8">
            <meta name="viewport" content=
             "width=device-width,initial-scale=1.0">
        
             <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
          
        
        </head>
          
        <body>
        
        <style>
    table{ border: solid 1px #CECFE1}
    thead tr{ background-color: #E5E5E5;}
    thead tr td{ font-size: 1.5em;}
    th{ background-color: #E5E5E5; border: solid 1px #CECFE1;}
    td{ border: solid 1px #DEE2E6; vertical-align: middle; text-align: center; }
    h2{text-decoration: underline;}

</style>

<div id="info-bus">
    <div class="container">
        <h2>Información del Viaje</h2>
        <div class="row">
            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                <div class="table-responsive"> 
                    <table style="margin:0em;" class="table table-bordered table-hover" border="1"  cellspacing="0" cellpadding="5">
                        <thead class="table-active">
                            <tr>
                                <th>Destino</th><th><span><?php echo pasarUtf8($destino[0]->nombre_Agencia) ;?></span></th><th>Distancia</th><th>Matricula</th><th>Precio</th>
                            </tr>
                        </thead>
                        
                        <tbody>
                            <tr>
                                <td><?php echo pasarUtf8($destino[0]->nombre_Localidad) . '<br>'. pasarUtf8($destino[0]->dia_Semana) . ", " . pasarUtf8($destino[0]->fecha_Viaje); ?></td>
                            <td>
                                
                                <span>Teléfono: <?php echo $info_DestinoTelefonoImeil[0]->telefono_Agencia; ?></span><br>
                                <span>emeil: <?php echo $info_DestinoTelefonoImeil[0]->email; ?></span>
                            </td>
                                <td><?php echo (pasarUtf8($destino[0]->kilometrosIdaVuelta) . "Km.")?></td>
                                <td><?php echo $destino[0]->matricula; ?></td>
                                <td><?php echo pasarUtf8(round($destino[0]->euros,2) . "&euro;")?></td>
                            </tr>
                        </tbody>
                    </table>
                </div>
            </div>
        </div>
    </div>



    <div id="ocupacion-bus" class="container-fluid">
        <h2>Ocupación del Bus</h>
        <div class="table-responsive"> 

            <table class="table table-striped table-bordered table-hover"  border="1"  cellspacing="0" cellpadding="5">
                <thead class="table-active">
                    <th style="width: 5%;">Plaza</th>
                    <th style="width: 20%;">Tipo</th>
                    <th style="width: 35%;">Contacto</th>
                    <th style="width: 15%;">Cobrado</th>
                    <th style="width: 50%;">Obserbaciones</th>
                </thead>

                <tbody><?php
                        $total=0; $pendienteRecaudar=0; $plazasCobradas=0; $plazasSinCobrar=0;
                        $asiento=1; $esOnoCliente=""; $infoCliente=""; $plaza_Bus=1;    

                        for ($i = 1; $i <= 63; $i++) { ?>
                            <?php //include $_SERVER["DOCUMENT_ROOT"] . "/Verano-2022\app\plantillas\bloques\partesRepositorios\datos_PersonasBus.inc"; ?>
                            <?php
                                                $plaza_Bus=$i;  

                            $clienteOPasajero = (new ViajarRepositorio())->clienteOpasajero($ref_Destino, $plaza_Bus);
                          
                            $nomenclatura="";
                            if (!empty($clienteOPasajero)) {
                                $ref_Persona = $clienteOPasajero[0]->ref_Persona;
                                $nomenclatura = substr($ref_Persona, 0, 3); }


                            if ($nomenclatura=="CLI") { // Si es Cliente consulta sus datos
                                    $infoCliente = (new ClienteRepositorio())->infoCliente($ref_Destino, $plaza_Bus);
                                    $ref_AgenciaViajes=$_SESSION["perfil"]["ref_AgenciaViajes"]; // Es SOCIO o no de la Agencia de Viajes
                                    $esSocioAgenciaViajes = (new ClienteRepositorio())->esSocio($ref_Persona, $ref_AgenciaViajes);
                            } elseif ($nomenclatura=="PAS") { // Si es Pasajero, consulta sus datos
                                    $ref_Pasajero = $ref_Persona;
                                    $infoNoCliente = (new PasajeroRepositorio())->infoPasajero($ref_Destino, $plaza_Bus);
                            } else { } ?>

                    <tr  
                    
                    <?php if( $plaza_Bus % 2 ==0 ){?> style="background-color:#F5F5F5;" <?php } ?> >
                        
                        <td><div><?php echo $plaza_Bus; ?></div></td>

                        <td><?php if ($nomenclatura=="CLI") {
                                      if (!empty($esSocioAgenciaViajes)) { ?><h6>Socio <br> <?= $_SESSION["perfil"]["name"]?></h6><?php
                                      } else { ?><h6>Cliente Plataforma</h6><?php } 
                                  }elseif($nomenclatura=="PAS"){ ?><h6> Pasajero</h6><?php
                                      }else{ } ?>
                        </td><?php    
                        
                        if ($nomenclatura=="CLI") { $infoPersona=$infoCliente; ?>
                        
                            <td><?php 
            
                                if(!empty($infoPersona[0]->nombre)){ ?>
                                <h5><?php echo(pasarUtf8($infoPersona[0]->nombre) . " ". pasarUtf8($infoPersona[0]->apellidos)); ?> 
                                
                                <span><?php if(!empty($infoPersona[0]->nombre)){
                                                $firstDate  = new \DateTime();
                                                $secondDate = new \DateTime($infoPersona[0]->fNacimiento);
                                        
                                                $intvl = $firstDate->diff($secondDate);
                                                echo "(" . $intvl->y . " Años) ";
                                                // echo $intvl->y . " year, " . $intvl->m." months and ".$intvl->d." day"; 
                                                // echo "\n";
                                                // Total amount of days
                                                // echo $intvl->days . " days "; 
                                                echo "<br>Tel: " . pasarUtf8($infoPersona[0]->TlfnoParticular."<br>email: ". pasarUtf8($infoPersona[0]->email));?><?php
                                            }?></span></h5><?php
                                }else{ ?>
                                  <h6><?php echo(pasarUtf8($infoPersona[0]->nombreApellidos));?><br>
                                  
                                    <span><?php if(!empty($infoPersona[0]->nombre)){
                                      $firstDate  = new \DateTime();
                                      $secondDate = new \DateTime($infoPersona[0]->fNacimiento);
                              
                                      $intvl = $firstDate->diff($secondDate);
                                      echo "(" . $intvl->y . " Años) ";
                                      // echo $intvl->y . " year, " . $intvl->m." months and ".$intvl->d." day"; 
                                      // echo "\n";
                                      // Total amount of days
                                      // echo $intvl->days . " days "; 
                                      echo "<br>Tel: " . pasarUtf8($infoPersona[0]->TlfnoParticular."<br>email: ". pasarUtf8($infoPersona[0]->email)); } ?>
                                    </span>
                                  </h6><?php
                                } ?>
                            
                            </td>
                                           
                            <td id="<?php echo "plaza_" . $plaza_Bus; ?>"<?php 
                                if($infoPersona[0]->pagado=="NO"){ ?>style="background-color: red;" 
                                    <?php $pendienteRecaudar= $pendienteRecaudar+($infoPersona[0]->embolso);
                                            $plazasSinCobrar=$plazasSinCobrar+1;
                                    ?>  <?php 
                                    }else{?>style="background-color: #99FE97;"<?php $total=$total+$infoPersona[0]->embolso; $plazasCobradas=$plazasCobradas+1; } ?> onclick="cambiar(<?php echo $plaza_Bus; ?>)" 
                                    >
                            
                                    <?php echo "Pagado: " . pasarUtf8($infoPersona[0]->pagado); ?>
                                
                                    <?php echo (pasarUtf8($infoPersona[0]->embolso) . "€" );?>
                            </td><td></td><td></td><td></td><?php        
                                    
                        }elseif($nomenclatura=="PAS"){ $infoPersona=$infoNoCliente; ?>
                            <td>
                                <h6><?php echo(pasarUtf8($infoPersona[0]->nombreApellidos)); ?> 
                                    <span><?php 
                                        echo "(" . $infoPersona[0]->anos . " Años)"; 
                                        echo "<br>Tel: " . pasarUtf8($infoPersona[0]->TlfnoParticular."<br>email: ". pasarUtf8($infoPersona[0]->email));?><?php ?>
                                    </span>
                                </h6>
                            </td>
                                
                            <td style="border: solid 1px #99FE97; vertical-align: middle;" id="<?php echo "plaza_" . $plaza_Bus; ?>"<?php 
                                if($infoPersona[0]->pagado=="NO"){ ?>style="background-color: red;" 
                                    <?php $pendienteRecaudar= $pendienteRecaudar+($infoPersona[0]->embolso);
                                            $plazasSinCobrar=$plazasSinCobrar+1;
                                    }else{?>style="background-color: #99FE97;"<?php $total=$total+$infoPersona[0]->embolso; $plazasCobradas=$plazasCobradas+1; } ?> onclick="cambiar(<?php echo $plaza_Bus; ?>)">
                                        <?php echo "Pagado: " . pasarUtf8($infoPersona[0]->pagado); ?>
                                        <?php echo (pasarUtf8($infoPersona[0]->embolso) . "€" );?>
                            </td><?php
                        } 
                        else { ?><td></td><td></td><td></td><td></td><td></td> <?php } ?>    
                    </tr><?php $asiento++;
                        } ?>                                 
                </tbody>
            </table>
        </div>
    </div>
</div> 
        </body>
        </html><?php

      }
}




