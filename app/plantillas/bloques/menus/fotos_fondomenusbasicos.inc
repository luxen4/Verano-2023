<?php
use miId\fuente\Repositorio\MenuRepositorio;

require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/MenuRepositorio.inc';
$todosModelosMenusBasicos = (new MenuRepositorio())->todosModelosMenus2("Basico"); ?>
<div style="" class="row"><?php
    $posicionMenu=0;
    foreach ($todosModelosMenusBasicos as $modeloMenu) {
        $clase="MOD-".$posicionMenu; ?>

            <div id="<?php echo $clase; ?>" style="padding: 0em;" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                <div>
                    <img id="<?php echo $clase?>" class='foto_fondomenu MOD-7' 
                    onmouseover="fotoEjemplo(this)" 
                    onclick="marcarModeloFormulario(this)" 
                    src="web/imagenes/<?php echo $modeloMenu->nombre_modelomenu ?>" alt="Fondo menu" 
                    onclick="esconder(this)">
                </div> 
                <div class="" style="margin-top: -1.5em; margin-left:-5em; ">
                            <a href="../Verano-2023/web/imagenes/<?php echo $modeloMenu->nombre_modelomenu; ?>"><i style="color:white;" class="fa-solid fa-magnifying-glass"></i></a>
                        </div>
                <div>
                    <label  style="margin:1em;" for="<?= $modeloMenu->ref_modelomenu?>"> <?php echo $modeloMenu->ref_modelomenu?></label>
                </div>
            </div>
        
        <?php $posicionMenu++;
    }?>
</div>