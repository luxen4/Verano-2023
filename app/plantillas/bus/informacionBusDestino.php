<?php ob_start(); ?>                             
<?php // Tabla del estado de Ocupación del Bus que va a un Destino ?>

<div id="infobus"><?php 
    
    if(!empty($_SESSION['ref_Destino'])){ ?>
      <?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/plantabus/tablaBusDestino.php'; ?><?php
    }else{ ?>
      <?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/plantabus/tablaBusDestino.php'; ?><?php
    } ?>
    
</div>

<?php $contenido = ob_get_clean(); ?>
<?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/basefantasma.php';?>





