<!-- Menú del día --> <!-- Se necesita consultar si tiene menú para mostrar el rótulo -->
<?php // use miId\fuente\Repositorio\ComerRepositorio; ?>

<?php $menuSoloPopup=0; ?>

<?php  require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/ficha/menuAmano.inc'; ?>

<!--https://www.youtube.com/watch?v=MQFHfFyssH4 Buenísimo-->
<!--<a href="#ventana1" class="btn btn-primary btn-lg" data-toggle="modal">Boton #1</a>-->
<?php //include_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades.inc'; ?>
<div class="modal fade" id="ventana1" style="margin: 0 auto;">
    <div class="modal-dialog">
        <div class="modal-content" style="max-width: 380px;" >
            <!-- Header de la ventana-->

                <div class="modal-header">   
                    <h6 class="modal-title">Le mostramos el Menú del día: </h6>  
                    <button type="button" class="close" data-dismiss="modal" aria-hiddden="true">&times;</button>
                </div>    
                            
            <!-- Contenido de la ventana-->

            <div class="row">
                <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                    <h6 id="nombre_negocio" style=" font-family: Neucha, sans-serif; margin:1em"></h6>
                </div>
            </div>  

            <div class="row">
                <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                    <h6 id="menu_negocio"  style=" font-family: Neucha, sans-serif; margin:0em 1em "></h6>
                   
                    <?php
                    // Necesito sacar su menú en el Pop-Up
                    //var_dump($infoMenu); //die();?>

                    <?php require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/popups/imagenesmenusdeldia.inc'; ?>

                </div>
            </div>  


            <div class="modal-body">
                <form method="post" action="/Verano-2023/app/plantillas/bloques/opinionnegocio.php">
                    <!-- <label>Nombre:<input type="text" name="nombre" size="60" /></label><br><br />
                    <label>Dirección:<input type="text" name="direccion" size="60" /></label><br><br />
                    <label>E-mail:<input type="text" name="email" size="60" /></label><br><br />-->

                    <!--<label>Username:</label><br>-->

                <!--<div id="menu_negocio"></div>-->

                <?php 
                $menuSoloPopup=1;
                require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/ficha/menuAmano.inc'; ?>

                <div id="ref_negocio"></div>
                    <?php  require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/valoracion_MenuDia.inc'; ?> <!--Para cuando esté preparado con logueo de Clientes-->

                </form>
            </div>

            <!-- Footer de la ventana-->
            <!--  <div class="modal-footer">
                <button type="button" class="btn btn-default" data-dismiss="modal">Cerrar</button>-->
                <!-- <button type="button" class="btn btn-primary" >Guardar cambios</button> 
                </div>-->

        </div>
    </div>
</div>




<style>
.menu_dia{ background-color: #F0E7DD; font-size:0.7em; margin: auto; text-align: center; width: max-content;
padding:0.25em 1em; border-radius:0.5em; margin-top: 0.5em;
-webkit-transition: all .2s ease-in-out;}

.menu_dia_precio{
    font-size: 1.3em; margin: auto; text-decoration: underline;
}

.menu_dia a, .menu_dia_precio   {color: orange; font-weight: bold;}

.menu_dia:hover {background-color:white; transform: scale(1.1);}
i:hover{color: green; transform: scale(1.3); font-weight: bold; -webkit-transition: all .5s ease-in-out;}

@media only screen and (min-width: 261px) and (max-width: 470px) {
.menu_rest{font-size: 0.8em;}
}
</style>




