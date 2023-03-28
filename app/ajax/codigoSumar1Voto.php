<?php
use miId\fuente\Repositorio\OpinionesRepositorio; // Ajax
	$username_cliente=$_POST['username'];
    $ref_negocio=$_POST['ref_Negocio'];


require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/OpinionesRepositorio.inc'; 
// Número de registros
$num_RegistrosVotos = (new OpinionesRepositorio())-> numRegistrosVotos();
$num_RegistrosVotos = $num_RegistrosVotos[0]->num_RegistrosVotos;
$ref_votosusernamerestaurantes="Vot" . $num_RegistrosVotos;

		

	$obj = (new OpinionesRepositorio())->calificacionUsuarioNegocio($username_cliente, $ref_negocio);
    //var_dump($username_cliente);


if(empty($username_cliente)){?>
  <script>alert("Haga login para votar")</script><?php
}else{
	if(!$obj==true){ 
			// Insertar Positivo, sumar voto"
				$obj = (new OpinionesRepositorio())->insertVotosUsernameNegocio($ref_votosusernamerestaurantes, $username_cliente, $ref_negocio, 'Positivo');
				$obj = (new OpinionesRepositorio())->dar1voto($ref_negocio);

		}elseif($obj[0]->calificacion=="Positivo"){?>

			<script>//alert("No puede votar 2 veces positivo!");</script><?php

		}elseif($obj[0]->calificacion=="Negativo"){
			// Borrar calificación, Insertar Positivo, sumar voto
				$obj = (new OpinionesRepositorio())->deleteVotosUsernameNegocioNegativo($username_cliente, $ref_negocio,'Negativo');
				$obj = (new OpinionesRepositorio())->insertVotosUsernameNegocio($ref_votosusernamerestaurantes, $username_cliente, $ref_negocio, 'Positivo');
				$obj = (new OpinionesRepositorio())->dar1voto($ref_negocio);

		}
}


		

		$relacion_Votados = (new OpinionesRepositorio())->votos1Negocio($ref_negocio);
		echo $relacion_Votados[0]->veces_Positivo;
		//echo"Marco";

?><script>alert("ruytruytr");</script>

<!-- 2:34:30 sacar canción https://www.youtube.com/watch?v=IGv83kOjdHc -->