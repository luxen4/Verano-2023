<?php
    if(!empty($_SESSION['perfil'])){
        if($_SESSION['perfil']['roll']=='agenciaviajes'){
                include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/ver_fotos.inc';

        }elseif($_SESSION['perfil']['roll']=='cliente'){ ?><?php 
            include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/ver_fotos.inc';
        }
    }else{ 
            include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/ver_fotos.inc';
    }
?>








 

