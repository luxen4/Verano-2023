 <input id="<?php echo ("asiento_" . $asiento); ?>" type="checkbox" name="datos[asiento]" value="<?php echo ($asiento); ?>" hidden >

    <?php 
        if ($nomenclatura=="CLI") {
            if (!empty($esSocioAgenciaViajes)) { ?>
                <h6>Socio de <?= $_SESSION['perfil']['name']?></h6>
                <?php
            } else { ?>
                <h6>Cliente Plataforma</h6><?php
            } ?>
            <input type="button" onclick="eliminarReservaAsiento(<?php echo ($asiento); ?>)" value="Eliminar esta plaza"<?php
        }elseif($nomenclatura=='PAS'){ ?>
            <h6> Pasajero</h6>
            <input type="button" onclick="eliminarReservaAsiento(<?php echo ($asiento); ?>)" value="Eliminar esta plaza"><?php

        }else{ } 
    ?>