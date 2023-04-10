<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/formulariosPlantabus.inc'; ?>

    <div style="margin: 1em;" class="row">
        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
            <input id="button_formnocliente" type="button" value="Aparecer Pasajero" onclick="desaparecerFormulario(this)"> 
         <?php /*   <input id="button_formclienteplataforma" type="button" value="Aparecer Cliente Plataforma" onclick="desaparecerFormulario(this)">
            <input id="button_formsocioagenciaviajes" type="button" value="Aparecer Socios Agencia Viajes" onclick="desaparecerFormulario(this)">
        */ ?></div>
    </div>


    <?php  include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/pruebaFormularios.php' ?>

    <?php // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/sentarNoCliente.php' ?>
    <?php // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/sentarCliente.php' ?>
    <?php // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/sentarSocio.php' ?>

<style>
    #formnocliente, #formclienteplataforma ,#formsocioagenciaviajes, #infobus{ display: none; }
</style>










       