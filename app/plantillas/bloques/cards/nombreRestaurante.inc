<!--Nombre del Restaurante-->
<div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
    <h6> <!--. " (" . pasarUtf8($bar_rest->nombreLocalidad) . ")"--><?php
        if($bar_rest->e_web=="#"){?>
            <span class="web_propia"><?php echo pasarUtf8($bar_rest->nombre); ?> <?php
        }else{?>
            <a href="<?php echo pasarUtf8($bar_rest->e_web); ?>" target="blank"><?php  echo pasarUtf8($bar_rest->nombre) ;?></a> 
        <?php }?>
    </h6>
</div>