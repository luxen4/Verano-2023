<?php
    $entra=0;
    for ($k=0; $k<count($plazasOcupadas); $k++) {
        $entra=0;
        if ($plazasOcupadas[$k]==$i) {
            if ($entra==0) {
                $entra=1; ?>
                <?php  include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/asiento.php' ?>
    <?php break;
            }
        } 
    }

    if ($entra==0) {?>
    <?php  include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/asientoVacio.php' ?>
            


    <?php }
?>