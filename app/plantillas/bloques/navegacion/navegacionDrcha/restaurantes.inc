<?php 
use miId\fuente\Repositorio\ComerRepositorio; 
use miId\fuente\Repositorio\LocalidadRepositorio; ?>


<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/scripts/css_restaurantes.inc';?>

<details>
    <summary>Restaurantes</summary>
        <?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/LocalidadRepositorio.inc'; ?> 
        <?php $localidades = (new LocalidadRepositorio())->todasLocalidades_ReferenciaYnombre(); 

    $ref_LocalidadTitulo="";
    foreach($localidades as $localidad){ 
        if($ref_LocalidadTitulo!=$localidad->ref_Localidad){
            $ref_LocalidadTitulo=$localidad->ref_Localidad;
            $nombre_Localidad=$localidad->nombre_Localidad;
        }else{
            $ref_LocalidadTitulo=$localidad->ref_Localidad;
        } ?>
        
        <?php // Si no hay Restaurantes en esa Localidad, no pinta esa Localidad ?>
        <?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ComerRepositorio.inc'; ?>
        <?php $bar_restaurantes = (new ComerRepositorio())->nombreYenlace($ref_LocalidadTitulo);
        if(!empty($bar_restaurantes)){ ?>
            <details>
                <summary style="margin-left: 1em"><?= $nombre_Localidad; ?></summary>
                    <ul id="navegacion_restaurantes" style="text-align: left; padding: 0em; "><?php
                        foreach($bar_restaurantes as $bar_restaurante){ ?>
                            <li><?php 
                                if($bar_restaurante->e_web=="#"){ ?>
                                    <h6><?= $bar_restaurante->nombre; ?></h6><?php
                                }else{ ?>
                                    <a style="text-decoration: underline;" class="botttton" target="blank" href="<?= $bar_restaurante->e_web; ?>"><?= $bar_restaurante->nombre; ?><span style="font-size: 0.5em; color:#212721;"> (Web)</span></a><?php 
                                }?>
                            </li><?php 
                        } ?>
                    </ul>
            </details><?php
        } 
    } ?>
</details>


