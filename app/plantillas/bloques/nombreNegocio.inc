<!--Inicio Bloque nombreNegocio.inc-->
<div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
            <h1><?php if($bar_rest[0]->e_web=="#"){ echo pasarUtf8($bar_rest[0]->nombre); 
            }else{?><a href="<?php echo pasarUtf8($bar_rest[0]->e_web); ?>"><?php echo pasarUtf8($bar_rest[0]->nombre) ;?></a><?php }?></h1>
</div>
<!--Fin Bloque nombreNegocio.inc--> 