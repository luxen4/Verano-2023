<?php
    for($i=$plazaFinal; $i>=$plazaInicio; $i=$i -$incremento){ ?><?php   // Para cada una de las plazas, que compare si está ocupada
    $entra=0; 
    for ($k=0; $k<count($plazasOcupadas); $k++) {
        $entra=0; 
        if ($plazasOcupadas[$k]==$i) {
            if ($entra==0) {
                $entra=1; ?>
                <?php  include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/plantabus/asiento.php' ?><?php break;
            }
        } 
    }

    if ($entra==0) {?>
            <?php  include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/plantabus/asientoVacio.php' ?>
    <?php }} 
?>