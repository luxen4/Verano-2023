<!--Negocios de una Localidad a 100%-->
<form action="" method="POST"><?php
    foreach ($negocios_Localidad as $bar_rest) { ?>

            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12 tarjeta_barrestaurante_localidad" style="margin: auto;" onmouseover ="limpiar()"> 
                <div class="row articulo" style="margin:0.5em auto;max-width: 550px; padding-left:0.5em">

                    <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6" style="padding-right: 0em;">
                        <?php  require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/carruselTodos.inc';?>
                    </div>

                    <div class="col-xl-5 text-center col-lg-5 col-md-5 col-sm-5 col-5">
                        <?php    require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/info_negocioSimple.inc';?>
                        <?php // require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/info_negocio.inc';?>          <!--Dar Stylo-->
                        <?php // require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/redes_sociales.inc';?>
                    </div>

                    <div class="col-xl-1 text-left col-lg-1 col-md-1 col-sm-1 col-1">
                        <?php require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/cupon_descuento.inc';?>
                    </div>

                </div>
            </div>
        
    <?php };?>  
    <input type="reset" value="Limpiar">
    <input type="button" value="desmarcar">

<script>

  function limpiar(e){     
        var seleccionar=document.getElementsByClassName('case');

    for (var i = 0; i < seleccionar.length; i++) {
        seleccionar[i].checked=false;
    }

}

</script>
    
</form>   


<script>


 
 
    



</script>