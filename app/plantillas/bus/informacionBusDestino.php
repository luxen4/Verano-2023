<?php ob_start(); ?>                             

  <div id="infobus">
      <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/tablaBusDestino.php'; ?>
  </div>

<?php $contenido = ob_get_clean(); ?>
<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA .  BASE;?>





