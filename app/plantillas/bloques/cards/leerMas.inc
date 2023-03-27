<!--Enlace a Ficha de un Negocio-->

<!--<form action="" method="POST">-->
    <div style="margin-top: 0.5em;"><?php

        if(!in_array($bar_rest->ref_negocio, $arrayRestaurantesPintar)){ 
            array_push($arrayRestaurantesPintar, $bar_rest->ref_negocio);?>
            <input class="case" id="<?php echo "codigo0". $bar_rest->ref_negocio; ?>" hidden type="checkbox" name="datos[ref_negocio]" value="<?php echo $bar_rest->ref_negocio; ?>"><?php     
        }?>

            
        <input style="border: none;" id="<?php echo $bar_rest->ref_negocio; ?>" onclick="marcarReferencia(this)" name="verficha" type="submit"  value="Leer más...">

                <!--<input style="padding: 0.1rem 0.3rem;" class="btn btn-success" type="submit" name="generapdf"  value="Generar Descuento" 
                onclick="insertaIdDestino(<?php echo($codDes);?>); seleccionaPlaza(<?php echo($plaza);?>)">    -->
    </div>

    <div>
        <?php //require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/cards/cupon_descuento.inc';?>
    </div>





