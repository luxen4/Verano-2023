<?php
use miId\fuente\Repositorio\SatisfacionRepositorio; // Ajax
 require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/SatisfacionRepositorio.inc'; 

if(!empty($username_cliente)){?>
  <script>alert("Haga login para votar")</script><?php
}else{

	$datos['username_cliente']=$_POST['username'];
    $datos['ref_Negocio']=$_POST['ref_Negocio'];
	$datos['grado_satisfacion']=$_POST['grado_satisfacion'];

	// Número de registros para nº de referencia
	$numRegistrosSatisfacion = (new SatisfacionRepositorio())->numRegistrosSatisfacionMenu();
	$datos['ref_Satisfacionusernamerestaurantes']="Sat-" . $numRegistrosSatisfacion[0]->num_tuplas;

	$obj = (new SatisfacionRepositorio())->deleteTuplaSatisfacionUsernameNegocioMenu($datos);
	$insertSatisfacion = (new SatisfacionRepositorio())-> insertSatisfacionMenu($datos);

}

	//echo"Marco";

?>