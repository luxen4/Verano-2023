<?php use miId\fuente\Repositorio\DestinoRepositorio; 

//include_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/DestinoRepositorio.inc'; 
// include $_SERVER['DOCUMENT_ROOT'] . DESTINOREPOSITORIO; 
$destino = (new DestinoRepositorio())->infoDestino($ref_Destino);?>
    <div class="row">
        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
            <div class="table-responsive"> 
                <table class="table table-bordered table-hover">
                    <thead class="table-active">
                        <th>Destino</th>
                        <th>Fecha</th>
                        <th>Agencia</th>
                        <th>Distancia</th>
                        <th>Matricula</th>
                        <th>Precio</th>
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

<style>
    td{vertical-align: middle;}
</style>