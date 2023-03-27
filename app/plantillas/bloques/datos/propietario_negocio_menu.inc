
<?php 
use miId\fuente\Repositorio\PropietarioRepositorio;
use miId\fuente\Repositorio\ComerRepositorio;

$ref_negocio=$_SESSION['perfil']['ref_negocio'];
require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/PropietarioRepositorio.inc';

$infoPropietario = (new PropietarioRepositorio())->infoPropietario($ref_negocio);


$infoNegocioPropietario = (new PropietarioRepositorio())->infoNegocio($ref_negocio);

$nombreNegocio = (new PropietarioRepositorio())->nombreNegocio($ref_negocio);

require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/ComerRepositorio.inc';
$tieneMenu = (new ComerRepositorio())->tieneMenu($ref_negocio);

$menu_premium=$tieneMenu[0]->menu_premium;

?>