<!--Viene de destinosconsultados.inc-->
<div class="col-xl-3 text-center col-lg-3 col-md-2 col-sm-6 col-4"> <!-- Número de Destinos por fila -->
<article>
    <div  class="articulo">
<?php // var_dump($nombreDestinoTitulo);?>
            <div class="row">
                <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12 ">
            <!--    <p class="comunidad"><?php echo ($comunidad); ?></p>-->
                    <div id="enlace_destino">
                        <p class="destino">
                            <a href="web/imagenes/destinos/<?php echo ($nombreDestinoTitulo) ?>.jpg" alt="descripción de la foto"> 

                            <?php echo ($localidad); ?></a>
                        </p>
                    </div>

                                        <!-- #5f5f5f color -->


                </div>
            </div>

                <?php
                if ($estado == "DISPONIBLE") {
                ?><!-- <h4 style="color: #006293;"><?php echo ($estado); ?></h4> -->
                   <!-- <img class="fotodestino" src="web/imagenes/destinos/<?php echo ($foto) ?>.jpg" alt="Foto de un destino">-->

                    <img class="fotodestino" src="<?php echo $urloficial; ?>" alt="Foto de un destino">
                    
                    
                    <?php
                } else {
                ?>
                    <img class="fotodestino" src="web/imagenes/destinos/completo.png" alt="Foto de un destino"><?php
                }?>


            
            <!--https://www.laurachuburu.com.ar/tutoriales/enlaces-html.php-->


            <?php $fechaDestino = date("d-m-Y", strtotime($fechaDestino));?>
            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12 textodestino">
                <p class="fecha"><?php echo ($fechaDestino . '<br>' . $diaSemana); ?></p> 
            </div>

            <div class="row">

                <!--<div class="col-xl-12 text-center">
                    
                        <p class="info_plazas">Total: <?php echo ($results1[0]->plazas); ?>
                        plazas;<br>Ocupadas: <?php echo ($results2[0]->plazas) . " plazas"; ?></p>
                    
                        <?php $quedan = ($results1[0]->plazas) - ($results2[0]->plazas);
                        
                        if($quedan<5){?>
                            <p style="background-color: red;" class="info_plazas">Menos de 5 plazas</p>
                        <?php }else{?>
                            <p class="info_plazas">Quedan: <?php echo ($quedan) . " plazas"; ?></p>
                        <?php }?>
                    </div>
                -->

                <!--
                    <div class="col-xl-12 text-center textoprecio">
                        <p class="precio"><?php echo (round($euros, 2, PHP_ROUND_HALF_DOWN) . "€"); ?></p>
                    </div>
                -->


                    <?php if (!empty($_SESSION['perfil'])) {

                    if ($_SESSION['perfil']['roll'] === "cliente"){

                    if ($estado == "DISPONIBLE") {?>

                    <div id="boton_apuntar" class="col-xl-12 text-center " >
                        <input class="apuntar front" type="submit" name="apuntar" value="Contratar" onclick="selecciona(<?php echo ($codDestino); ?>)">
                        <input id="<?php echo ($codDestino); ?>" type="checkbox" name="datos[destinoseleccionado]"
                                    value="<?php echo ($codDestino); ?>" hidden >
                    </div>
                    <div><p class="agencia"><?php echo ($nombreAgenciaViajes); ?></p></div><?php

                    } else {?>

                    <div id="boton_apuntar" class="col-xl-12 text-center" >
                        <input class="apuntar2" type="submit" name="apuntar" value="Completo" onclick="selecciona(<?php echo ($codDestino); ?>)" disabled>
                        <input id="<?php echo ($codDestino); ?>" type="checkbox" name="datos[destinoseleccionado]"
                                    value="<?php echo ($codDestino); ?>" hidden >
                    </div>
                    <div><p class="agencia"><?php echo ($nombreAgenciaViajes); ?></p></div><?php

                    }
                    }

                    
                    if ($_SESSION['perfil']['roll'] === "admin") {?>

                <!--   <div id="boton_apuntar" class="col-xl-12 text-center" >
                        <input class="apuntar" type="submit" name="apuntar" value="Informacion" onclick="selecciona(<?php echo ($codDestino); ?>)">
                        <input id="<?php echo ($codDestino); ?>" type="checkbox" name="datos[destinoseleccionado]" value="<?php echo ($codDestino); ?>" hidden >
                    </div>
                -->

                    

                    <?php   }

                    }?>

                    <div><!--Si paga-->
                        <p class="agencia"><?php echo ($nombreAgenciaViajes); ?></p>
                    </div>
            </div>
    </div>
</article>
</div>
