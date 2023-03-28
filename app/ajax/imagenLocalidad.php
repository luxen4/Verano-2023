<?php
use miId\fuente\Repositorio\LocalidadRepositorio; // Ajax
include_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2023/app/utilidades/constantes.inc'; 

    $ref_Localidad=$_POST['localidad'];
	$posicion_Siguiente=$_POST['posicion_Siguiente'];

	require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/LocalidadRepositorio.inc'; 
	//include $_SERVER['DOCUMENT_ROOT'] . LOCALIDADREPOSITORIO;
	$nombreImagen = (new LocalidadRepositorio())->nombreImagen($ref_Localidad,$posicion_Siguiente);

if(empty($nombreImagen[0]->nombre_Img)){?>

<script>
	$(".input_posicion").val('1'); 
</script><?php
	$nombreImagen = (new LocalidadRepositorio())->nombreImagen($ref_Localidad,'1');
}

if(!empty($nombreImagen)){
	echo '<img style="" class="d-block w-100" src="web/imagenes/localidades/' . $nombreImagen[0]->nombre_Img .  '">';
}else{
	echo '<img style="" class="d-block w-100" src="https://fhimasa.com/wp-content/uploads/2020/02/dsc00190.jpg" alt="Foto de un destino">';
}

?> 