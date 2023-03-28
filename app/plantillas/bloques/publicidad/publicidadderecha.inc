 <?php
//foreach ($lugaresDondeComer as $lugar) {

    if (!empty($tipoPublicidadHome)) {
        
        if ($tipoPublicidadHome[0]->modo_Apariencia==1) {
            include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/publicidadderecha1negocio.inc';
        }

        if ($tipoPublicidadHome[0]->modo_Apariencia==3) {
            include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/publicidadderecha3negocio.inc';
        }

        if ($tipoPublicidadHome[0]->modo_Apariencia==0) {
            include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/sinhuecos.inc';
        }
    }
// }
?>