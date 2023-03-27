<?php
//index.php
session_start();
error_reporting(E_ALL);

require_once __DIR__ . '/app/conf/rutas.inc'; /*Ubicación del archivo de rutas*/



/* Cosntantes */
include_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/utilidades/constantes.inc'; 


/*controladores */
require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Controlador/defaultController.inc'; 
require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Controlador/destinoController.inc'; 


require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Controlador/PerfilController.inc';

require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Controlador/clienteController.inc'; 
require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Controlador/agenciaViajesController.inc';
require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Controlador/busController.inc';
require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Controlador/agenciaBusesController.inc';
require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Controlador/pdfController.inc';
require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Controlador/excelController.inc';
require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Controlador/comerController.inc';
require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Controlador/hotelesController.inc';
require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Controlador/buscadoresController.inc';
require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Controlador/juegosController.inc';

require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Controlador/menuController.inc';
require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Controlador/descuentoController.inc';
require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Controlador/propietarioController.inc';
require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Controlador/usuariosController.inc';

// Parseo de la ruta
if (isset($_GET['ctl']))
{ if (isset($mapeoRutas[$_GET['ctl']]))
  { $ruta = $_GET['ctl'];
  }else
  { header('Status: 404 Not Found');
    echo '<html><body><h1>Error 404: No existe la ruta <i>' .
          $_GET['ctl'] .
          '</p></body></html>';
    exit; 
  }
}else
{ $ruta = 'inicio/';
}

$controlador = $mapeoRutas[$ruta];
// Ejecución del controlador asociado a la ruta

if (method_exists($controlador['controller'],$controlador['action']))
{ call_user_func(array(new $controlador['controller'], $controlador['action']));
}else
{ header('Status: 404 Not Found');
  echo '<html><body><h1>Error 404: El controlador <i>' .
       $controlador['controller'] .
       '->' . $controlador['action'] .
       '</i> no existe</h1></body></html>';
}
