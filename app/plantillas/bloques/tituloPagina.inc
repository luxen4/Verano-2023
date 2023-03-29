<?php  // Para el título de la página
use miId\fuente\Repositorio\ComerRepositorio;
    require __DIR__ . '/../../../fuente/Modelo/busquedas.inc';
        require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ComerRepositorio.inc';
        $nombreLocalidad = (new ComerRepositorio())->nombreLocalidad($ref_Localidad);?>

        <div id="recomendamosss" class="col-xl-12 text-center ">
            <h5>Te recomendamos en <?php echo pasarUtf8($nombreLocalidad[0]->nombre_Localidad); ?></h5>

        </div>

        <?php // Para no perder el username ?>
        <input type="text" name="datos[username]" id="username" <?php 

            if(!empty($_SESSION['perfil']['username'])){?>
                value= "<?php echo $_SESSION['perfil']['username']; ?>"<?php 
            }else{?> 
                value="";<?php 
            }?>
                hidden > 




