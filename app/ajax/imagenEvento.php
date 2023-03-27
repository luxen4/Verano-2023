<?php
use miId\fuente\Repositorio\EventoRepositorio; // Ajax
    $ref_Evento=$_POST['ref_Evento'];
	$posicion_Siguiente=$_POST['posicion_Siguiente'];



	require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/EventoRepositorio.inc'; 
	//include $_SERVER['DOCUMENT_ROOT'] . EVENTOREPOSITORIO;
	$nombreImagen = (new EventoRepositorio())->rutaImagen($ref_Evento,$posicion_Siguiente);
	


if(empty($nombreImagen[0]->nombre_ImagenEvento)){?>

<script>
	$(".input_posicion").val('1'); 
</script><?php
	//$nombreImagen = (new LocalidadRepositorio())->nombreImagen($ref_Localidad,'1');
}

if(!empty($nombreImagen)){
	echo '<img style="" class="d-block w-100" src="web/imagenes/eventos/' . $nombreImagen[0]->nombre_Carpeta . '/' . $nombreImagen[0]->nombre_ImagenEvento . '">';
}else{
	
	$nombreCarpeta = (new EventoRepositorio())->carpetaImagen($ref_Evento,1);
	$nombreImagen = (new EventoRepositorio())->rutaImagen($ref_Evento,1);

	echo '<img style="" class="d-block w-100" src="web/imagenes/eventos/' . $nombreCarpeta[0]->nombre_Carpeta . '/' . $nombreImagen[0]->nombre_ImagenEvento . '">';
}

?> 