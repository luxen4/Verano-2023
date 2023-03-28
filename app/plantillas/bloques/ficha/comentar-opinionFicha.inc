<!--Inicio Comentar/Opinión Ficha-->
<div class='col-xl-3 text-center col-lg-3 col-md-3 col-sm-3 col-3'></div>

    <div class='col-xl-3 text-center col-lg-3 col-md-3 col-sm-3 col-3' style="padding: 0em;">
            <div><i class="fas fa-comments"></i></div>
            <div><a id="<?php echo $ref_negocio; ?>" href="#ventana1" onclick="nombreNegocio(this)" data-toggle="modal" > Comentar!</a></div><?php
                 require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/tuopinion.php';?>
    </div>
    
    <div class='col-xl-3 text-center col-lg-3 col-md-3 col-sm-3 col-3' style="padding: 0em;">
            <div><i class="fa-solid fa-list-check"></i></div>
            <div><a id="<?php echo $ref_negocio; ?>" href="#ventana2" onclick="nombreNegocio(this), refNegocioOpiniones(this)" data-toggle="modal"> Opiniones:</a></div><?php 
        
        // $_SESSION['ref_negocioPopUp']= $ref_negocio;
        /* $ip_add = $_SERVER['REMOTE_ADDR'];
        var_dump($ip_add);*/

        require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/Pop-Up_todasopiniones.inc';?>
    </div>       
    
<div class='col-xl-3 text-center col-lg-3 col-md-3 col-sm-3 col-3'></div>
<!--Fin Comentar/Opinión Ficha-->