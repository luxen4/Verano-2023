<?php use miId\fuente\Repositorio\DestinoRepositorio;
include_once $_SERVER['DOCUMENT_ROOT'] . DESTINOREPOSITORIO; 
$destino = (new DestinoRepositorio())->infoDestino($ref_Destino); ?>
<?php /*
<input id="ref_Destino" type="checkbox" name="datos[refdestino]" value="<?php echo ($ref_Destino); ?>" checked>
    <div class="container">
        <div class="row">
            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                <div class="table-responsive"> 
                    <table class="table table-bordered table-hover">
                        <thead class="table-active">
                            <th>Destino</th><th>Agencia</th><th>Distancia</th><th>Matricula</th><th>Precio</th>
                        </thead>
                        
                        <tbody>
                            <tr>
                                <td><?php echo pasarUtf8($destino[0]->nombre_Localidad)?> <br>
                                <?php echo pasarUtf8($destino[0]->fecha_Viaje) . ", " . pasarUtf8($destino[0]->dia_Semana)?></td>
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
 */ ?>



    <input id="ref_Destino" type="checkbox" name="datos[refdestino]" value="<?php echo ($ref_Destino); ?>" hidden checked>
    <div id="info_viaje" class="container">
        <div class="row" style="    max-width: 439px;">
            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                <div class="table-responsive"> 
                    <table class="table table-bordered table-hover">
                        <thead class="table-active">
                            <th><?php echo pasarUtf8($destino[0]->nombre_Localidad)?><br><?php echo (pasarUtf8($destino[0]->kilometrosIdaVuelta) . "Km.")?></th><th><span><?php echo pasarUtf8($destino[0]->nombre_Agencia) ;?></span> <br> <span>Tel: <?php echo $info_DestinoTelefonoImeil[0]->telefono_Agencia; ?></span></th><th><?php echo pasarUtf8(round($destino[0]->euros,2) . "€")?></th>
                        </thead>

                        <tbody>
                            <tr>
                                <td><?php echo pasarUtf8($destino[0]->fecha_Viaje) . ", " . pasarUtf8($destino[0]->dia_Semana)?></td>
                                <td><span>emeil: <?php echo $info_DestinoTelefonoImeil[0]->email; ?></span></td>
                                <td style="padding:0.5em"><?php echo $destino[0]->matricula; ?></td>
                            </tr>
                        </tbody>
                    </table>
                </div>
            </div>
        </div>
    </div>

<style>
    #info_viaje{margin: 0.5em;}
    td{vertical-align: middle;}
</style>

