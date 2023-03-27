<?php
namespace miId\fuente\Controlador;
use miId\fuente\Repositorio\ClienteRepositorio;
use miId\fuente\Repositorio\DestinoRepositorio;
use miId\fuente\Repositorio\AgenciaViajesRepositorio;
use miId\fuente\Repositorio\AgenciaBusesRepositorio;


class JuegosController{
  
  // Función que muestra los destinos a los que se ha apuntado un cliente.
public function sudoku(){
            /*require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/DestinoRepositorio.inc';
            $cod_Cliente=$_SESSION['perfil']["cod_Cliente"];
            $destinosContratados = (new DestinoRepositorio())->destinosDeUnClienteLogueado($cod_Cliente); */ 

 
    require __DIR__ . '/../../app/plantillas/juegos/sudoku.php';
  
  }

}

    //var_dump($obj[0]->roll']);die();
    //var_dump($_SESSION['perfil']);die();
    //header('Location: https://www.youtube.com/watch?v=V-CYJ3wbWOQ');
    //echo($_SESSION['perfil']); die();

    
/*
<iframe src="demo_iframe.htm" height="200" width="300" title="Iframe Example"></iframe>
*/
