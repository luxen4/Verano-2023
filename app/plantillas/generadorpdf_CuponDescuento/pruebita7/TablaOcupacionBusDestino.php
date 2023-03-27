
<?php 
use miId\fuente\Repositorio\DestinoRepositorio;
use miId\fuente\Repositorio\ViajarRepositorio; 
use miId\fuente\Repositorio\PasajeroRepositorio;
use miId\fuente\Repositorio\ClienteRepositorio;

$todosAsientos=$_SESSION['datos_busdestino'];
$ref_Destino=$_SESSION['datos_busdestino'][0]->ref_Destino; 
include_once $_SERVER['DOCUMENT_ROOT'] . DESTINOREPOSITORIO; 
include_once $_SERVER['DOCUMENT_ROOT'] . VIAJARREPOSITORIO; 
include_once $_SERVER['DOCUMENT_ROOT'] . CLIENTEREPOSITORIO;
include_once $_SERVER['DOCUMENT_ROOT'] . PASAJEROREPOSITORIO;


?>

    <link rel="stylesheet" type="text/css" href="web/css/bootstrap.min.css">
    <link rel="stylesheet" type="text/css" href="web/css/bootstrap-grid.min.css">
    <link rel="stylesheet" type="text/css" href="web/css/bootstrap-reboot.min.css">
    <link rel="stylesheet" type="text/css" href="bootstrap/css/bootstrap.min.css">

<?php include_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/utilidades/utilidades.inc'; ?>

<?php 


$destino = (new DestinoRepositorio())->infoDestino($ref_Destino);
$info_DestinoTelefonoImeil=(new DestinoRepositorio())->info_DestinoTelefonoImeil($ref_Destino);
?>

    <div class="container">
        <h2>Información del Viaje</h2>
        <div class="row">
            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                <div class="table-responsive"> 
                    <table class="table table-bordered table-hover">
                        <thead class="table-active">
                            <th>Destino</th><th>Fecha</th><th>Agencia</th><th>Distancia</th><th>Matricula</th><th>Precio</th>
                        </thead>
                        
                        <tbody>
                            <tr>
                                <td><?php echo pasarUtf8($destino[0]->nombre_Localidad)?></td>
                                <td><?php echo pasarUtf8($destino[0]->fecha_Viaje) . ", " . pasarUtf8($destino[0]->dia_Semana)?></td>
                            <td>
                                <span><?php echo pasarUtf8($destino[0]->nombre_Agencia) ;?></span><br>
                                <span>Teléfono: <?php echo $info_DestinoTelefonoImeil[0]->telefono_Agencia; ?></span><br>
                                <span>emeil: <?php echo $info_DestinoTelefonoImeil[0]->email; ?></span>
                            </td>
                                <td><?php echo (pasarUtf8($destino[0]->kilometrosIdaVuelta) . "Km.")?></td>
                                <td><?php echo $destino[0]->matricula; ?></td>
                                <td><?php echo pasarUtf8(round($destino[0]->euros,2) . "€")?></td>
                            </tr>
                        </tbody>
                    </table>
                </div>
            </div>
        </div>
    </div>

    <div class="container-fluid">
        <h2>Ocupación del Bus</h2>
        <div class="table-responsive"> 

            <table class="table table-striped table-bordered table-hover">
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
                $nomenclatura = substr($ref_Persona, 0, 3);
            }


            if ($nomenclatura=="CLI") {
                // Si es Cliente que consulte sus datos

                $infoCliente = (new ClienteRepositorio())->infoCliente($ref_Destino, $plaza_Bus);
                                
                // Debe consultar si es SOCIO de la Agencia de Viajes
                $ref_AgenciaViajes=$_SESSION["perfil"]["ref_AgenciaViajes"];
                $esSocioAgenciaViajes = (new ClienteRepositorio())->esSocio($ref_Persona, $ref_AgenciaViajes);

            } elseif ($nomenclatura=="PAS") {

                // Si es Pasajero que va a una ref_Destino y se sienta en el asiento ($asiento) que consulte sus datos

                $ref_Pasajero = $ref_Persona;
                $infoNoCliente = (new PasajeroRepositorio())->infoPasajero($ref_Destino, $plaza_Bus);

            } else { } ?>

                            <tr>
                                <td><div><?php echo $plaza_Bus; ?></div></td>

                                <td><?php 
                                    if ($nomenclatura=="CLI") {
                                        if (!empty($esSocioAgenciaViajes)) { ?>
                                            <h6>Socio <br> <?= $_SESSION["perfil"]["name"]?></h6><?php
                                        } else { ?>
                                            <h6>Cliente Plataforma</h6><?php
                                        } 
                                        }elseif($nomenclatura=="PAS"){ ?>
                                            <h6> Pasajero</h6><?php
                                    }else{ } ?>
                                </td><?php    
                                
                                if ($nomenclatura=="CLI") {   $infoPersona=$infoCliente; ?>
                                
                                <td><?php 
                
                                if(!empty($infoPersona[0]->nombre)){ ?>
                                <h6><?php echo(pasarUtf8($infoPersona[0]->nombre) . " ". pasarUtf8($infoPersona[0]->apellidos)); ?> 
                                
                                <span><?php if(!empty($infoPersona[0]->nombre)){
                                    $firstDate  = new DateTime();
                                    $secondDate = new DateTime($infoPersona[0]->fNacimiento);
                            
                                    $intvl = $firstDate->diff($secondDate);
                                    echo "(" . $intvl->y . " Años) ";
                                    // echo $intvl->y . " year, " . $intvl->m." months and ".$intvl->d." day"; 
                                    // echo "\n";
                                    // Total amount of days
                                    // echo $intvl->days . " days "; 
                                    echo "<br>Tel: " . pasarUtf8($infoPersona[0]->TlfnoParticular."<br>email: ". pasarUtf8($infoPersona[0]->email));?>
                            <?php
                                }?></span>
                                
                                </h6><?php
                                }else{ ?>
                                <h6><?php echo(pasarUtf8($infoPersona[0]->nombreApellidos));?><br>
                                
                                <span><?php if(!empty($infoPersona[0]->nombre)){
                                    $firstDate  = new DateTime();
                                    $secondDate = new DateTime($infoPersona[0]->fNacimiento);
                            
                                    $intvl = $firstDate->diff($secondDate);
                                    echo "(" . $intvl->y . " Años) ";
                                    // echo $intvl->y . " year, " . $intvl->m." months and ".$intvl->d." day"; 
                                    // echo "\n";
                                    // Total amount of days
                                    // echo $intvl->days . " days "; 
                                    echo "<br>Tel: " . pasarUtf8($infoPersona[0]->TlfnoParticular."<br>email: ". pasarUtf8($infoPersona[0]->email));

                                }?></span></h6><?php
                                } ?>
                            
                                
                            
                            
                                    
                            </td>
                            
                            
                            <td id="<?php echo "plaza_" . $plaza_Bus; ?>"<?php 
                                if($infoPersona[0]->pagado=="NO"){ ?>style="background-color: red;" 
                                    <?php $pendienteRecaudar= $pendienteRecaudar+($infoPersona[0]->embolso);
                                            $plazasSinCobrar=$plazasSinCobrar+1;
                                    ?>  <?php 
                                    }else{?>style="background-color: #99FE97;"<?php $total=$total+$infoPersona[0]->embolso; $plazasCobradas=$plazasCobradas+1; } ?> onclick="cambiar(<?php echo $plaza_Bus; ?>)" 
                                    >
                            
                                    <?php echo "Pagado: " . pasarUtf8($infoPersona[0]->pagado); ?><br>
                                
                                    <?php echo (pasarUtf8($infoPersona[0]->embolso) . "€" );?>
                                    </td><?php
                                
                                
                                }elseif($nomenclatura=="PAS"){ $infoPersona=$infoNoCliente; 
                                } 
                                else { ?><td></td><td></td> <?php } ?>    
                            </tr>
                            <?php $asiento++;
                        } ?>                                 
                    </tbody>

            </table>
        </div>
    </div>

    <script src="bootstrap/js/jquery-3.5.1.slim.min.js"></script>
    <script src="boostrap/js/popper.min.js"></script>
    <script src="bootstrap/js/bootstrap.min.js"></script>
    <script src="web/js/sweetAlert/libreria_sweetAlert.js"></script>
    <script
  src="https://code.jquery.com/jquery-3.4.1.min.js"
  integrity="sha256-CSXorXvZcTkaix6Yvo6HppcZGetbYMGWSFlBw8HfCJo="
  crossorigin="anonymous"></script>

  <script src="https://unpkg.com/sweetalert/dist/sweetalert.min.js"></script>
             


<?php
use Dompdf\Dompdf;
USE Dompdf\Options;
 

require_once 'dompdf/autoload.inc.php';
$Options=new Options();
$Options->set('chroot',realpath(''));



$dompdf= new Dompdf($Options);
$content='AAAAAA';

$dompdf->loadHtml($content );
$dompdf->setPaper('A4','landscape');
$dompdf->render();
$pdf = $dompdf->output();
$dompdf->stream("re");

/*
$dompdf->render();
$pdf = $dompdf->output();
$dompdf->stream("a.pdf", ['Attachment' => false]);*/
exit(0);


?>































































<style>
    h6{font-size: 1em;}
    td{border: solid 1px black; text-align: center; vertical-align: middle;}
</style>


