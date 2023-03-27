<!-- Todos los negocios de una Localidad al 100%-->
<?php ob_start(); ?>
 
<?php include_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/utilidades/utilidades.inc'; ?>
<?php require      $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/ficha/info_negocioFicha.inc'; ?>

<?php $contenido = ob_get_clean() ?>
<?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/basefantasma.php';?>

