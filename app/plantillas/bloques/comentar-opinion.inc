<!--Inicio Bloque comentar-Opiniones-->
<div class="row opinion" style="margin: auto;"> <?php
    if(!empty($_SESSION['perfil']['username'])){?>

        <input id="username" type="checkbox" name=datos[username]  hidden  value="<?php echo ($_SESSION['perfil']['username']);?>"/><br>
        <input id="ref_negocio" type="checkbox" name=datos[ref_negocio] hidden value="<?php echo pasarUtf8($bar_rest[0]->ref_negocio);?>"/> <!-- Para recoger la referencia del negocio-->

        <div class="row comentar_opinion" >
            <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/ficha/comentar-opinionFicha.inc'; ?>
        </div><?php

    }else{ ?>
      
            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12 haga_login">
                <p>Haga login para comentar, gracias!</p>
                    <a class="nav-link" href="index.php?ctl=loginusuarios" ><i class="fas fa-users"></i> LOGIN </a>
            </div>
        <?php
    } ?>
</div>


<!--Fin Bloque comentar-Opiniones-->

<!--
<img class="d-block w-100" src="web/imagenes/menu.jpg" alt="Fondo de la targeta de menú del día">
-->