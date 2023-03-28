<!--Viene de destinosconsultados.inc-->
<?php ob_start();?>
<div class="col-xl-3 text-center col-lg-3 col-md-2 col-sm-6 col-4"> <!-- Número de Destinos por fila 

<?php $destinos = $_SESSION['destinos'];?>

<div class="row text-center">
    <div class="col-xl-6 text-center col-lg-12 col-md-12 col-sm-12 col-12 ">
        <a href="#">Todos los Destinos a: <br> <?php echo  ($destinos[0])->nombre_Localidad; ?></a>
    </div>
</div>



                   <?php $destinos=  $_SESSION['destinos'];?>
          <div class="container" style="margin-bottom:1em ;"> 

                        <div class="row text-center">
                       <?php for ($i = 0; $i < count($destinos); $i++) {
                           $codDestino = $destinos[$i]->cod_Destino;
                           $cod_Localidad=$destinos[$i]->ref_Localidad;
                           $localidad=$destinos[$i]->nombre_Localidad;
                           //  $localidad = $destinos[$i]->nombre;
                           $comunidad = $destinos[$i]->comunidad;
                           $fechaDestino = $destinos[$i]->fecha_Viaje;
                           $diaSemana = $destinos[$i]->dia_Semana;
                           $euros = $destinos[$i]->euros;
                           $urloficial = $destinos[$i]->ruta_imagen1;
                           // $codAgenciaViajes= $destinos[$i]->cod_AgenciaOferta;
                           $nombreAgenciaViajes = $destinos[$i]->nombre_Agencia;
                           //$nombreAgenciaViajes=utf8_encode($destinos[$i]->nombre);?>
        
                            <article>
                                
                                
                                    <div class="col-xl-6 text-center col-lg-12 col-md-12 col-sm-12 col-6 articulo">
                                            


                                            <?php $fechaDestino = date("d-m-Y", strtotime($fechaDestino)); ?>
                                            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12 textodestino">
                                                <p class="fecha"><?php echo($fechaDestino . ', ' . $diaSemana ); ?></p> 
                                            </div>

                                            <div class="row">
                                                <div><!--Si paga-->
                                                    <p class="agencia"><?php echo($nombreAgenciaViajes); ?></p>
                                                </div>
                                            </div>
                                    </div>
                                   
                               

                            </article>
        

                   <?php
                       }
                   
                       
                   
                    ?></div>




</div>
<?php $contenido = ob_get_clean() ?>

<?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA .  BASE;?>




<style>

 </style>