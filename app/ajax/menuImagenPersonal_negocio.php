<?php
use miId\fuente\Repositorio\MenuPersonalRepositorio; // Ajax que extrae la foto del menú del día de un Negocio
    $ref_MenuPersonal=$_POST['ref_MenuPersonal'];
	require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/MenuPersonalRepositorio.inc'; 

	$nombreArchivoImagen = (new menuPersonalRepositorio())->nombreImagenMenuPersonal($ref_MenuPersonal);
		echo '<img src="./web/imagenes/archivos_MenusPersonalizados/' . $nombreArchivoImagen[0]->nombre_MenuPersonal . '">';

   	  	// echo "Marco";
?> 