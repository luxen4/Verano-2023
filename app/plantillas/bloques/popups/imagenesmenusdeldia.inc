
<?php
    use miId\fuente\Repositorio\ComerRepositorio;

// Debe consultar si tenemos menú personalizado    
require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/ComerRepositorio.inc';

$infoMenuPremium=(new ComerRepositorio())->comprobarMenuPersonal($ref_negocio);
if(!empty($infoMenuPremium[0]->nombre_MenuPersonal)){?>

<div class="row">
    <div class="col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-12">


    <img style="max-width: 320px;" src="web\imagenes\MenusDefinitivos\<?php echo $infoMenuPremium[0]->nombre_MenuPersonal; ?>"/>
    </div>
</div>


<?php

}else{
if($infoMenu[0]->ref_modelomenu=="MOD-0"){?><?php require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/menus/menuAmano0.inc'; ?><?php } 
if($infoMenu[0]->ref_modelomenu=="MOD-1"){?><?php require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/menus/menuAmano1.inc'; ?><?php } 
if($infoMenu[0]->ref_modelomenu=="MOD-2"){?><?php require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/menus/menuAmano2.inc'; ?><?php } 
if($infoMenu[0]->ref_modelomenu=="MOD-3"){?><?php require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/menus/menuAmano3.inc'; ?><?php } 
if($infoMenu[0]->ref_modelomenu=="MOD-4"){?><?php require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/menus/menuAmano4.inc'; ?><?php } 
if($infoMenu[0]->ref_modelomenu=="MOD-5"){?><?php require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/menus/menuAmano5.inc'; ?><?php } 
if($infoMenu[0]->ref_modelomenu=="MOD-6"){?><?php require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/menus/menuAmano6.inc'; ?><?php } 
if($infoMenu[0]->ref_modelomenu=="MOD-7"){?><?php require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/menus/menuAmano7.inc'; ?><?php } 
if($infoMenu[0]->ref_modelomenu=="MOD-8"){?><?php require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/menus/menuAmano8.inc'; ?><?php } 
if($infoMenu[0]->ref_modelomenu=="MOD-9"){?><?php require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/menus/menuAmano9.inc'; ?><?php } 
if($infoMenu[0]->ref_modelomenu=="MOD-10"){?><?php require $_SERVER['DOCUMENT_ROOT'] .'/Verano-2022/app/plantillas/bloques/menus/menuAmano10.inc';?><?php } 
    
}

?>


<style>

</style>

