  <?php 
// Viene de rotuloSiNoPasajeros
  $beneficio=0; ?>
    <div id="tabla_info_bus" class="container" style="padding: 0em; max-width:1200px;">
            <div class="row">
                <div class="col-xl-12 text-center">
                <form action="" method="POST">
                    <input id="ref_Destino" type="checkbox" name="datos[refdestino]" value="<?php echo ($ref_Destino); ?>" checked>
                        <div class="row">
                

                            <div id="" class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">
                                <input class="btn btn-success" type="submit" name="generaexcelocupacionbus" value="Imprimir Excel"> 
                                <input class="btn btn-success" type="submit" name="generapdfocupacionbus"  value="Ver pdf (html2pdf)" onclick="insertaIdDestino(<?php echo($codDes);?>); seleccionaPlaza(<?php echo($plaza);?>)">
                            <!-- <li><a href="index.php?ctl=destinoscondescuentos"><i style="color:red;" class="fa-solid fa-percent"></i><span> Escribe tu sugerencia</span></a></li>-->                                                                        
                            </div>
                        </div>

                    
                       <?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/destinos/tablaOcupacionBus.inc'; ?>
                </div>
            </div>
        </form>
     </div>




     