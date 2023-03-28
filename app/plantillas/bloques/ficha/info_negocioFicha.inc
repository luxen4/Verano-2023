<!--Ficha de Información de un Negocio-->
<div class="col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-12 info_negocio">

  

<div class="row"> 
    <?php require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/nombreNegocio.inc';?>  
</div>

<?php


 $ref_negocio=($_SESSION['datos_negocio'][0]->ref_negocio);

 
require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ComerRepositorio.inc'; 

include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/menu_deldia.inc'; ?>

<div class="row"> 
    <?php require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/ficha/estrellas1negocioFicha.inc';?>  
</div>
                
<div class="row">
    <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/ficha/carruselFicha.inc'; ?>
</div> 

<div class="row">
    <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/ficha/descripcionNegocioFicha.inc'; ?>
</div>

<div class="row">
    <div class="col-xl-4 text-left col-lg-4 col-md-4 col-sm-4 col-4"></div>

    <div class="col-xl-4 text-left col-lg-4 col-md-4 col-sm-4 col-4">
        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/ficha/redesSocialesIconosFicha.inc'; ?>
    </div>

    <div class="col-xl-4 text-left col-lg-4 col-md-4 col-sm-4 col-4"></div>
</div>


<div class="row">
    <?php  //include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/comentar-opinion.inc'; ?>
</div>



<?php 
// Funciona Muy Bien //
include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/partesRepositorios/registrovisitasnegocio.inc'; 
?>

 



</div>
 

<style>
h1{margin-top: 1em; text-decoration: underline;}
.info_negocio a{font-size: 1em;}
i,h1 {color: #006293;}
.comentar_opinion{margin: 1em 0em}
#nohay{color:red; font: 1em sans-serif; text-align: center; margin-top: 1em;}
.opinion{ background-color: cornsilk; border-radius: 0.5em;}








</style>

