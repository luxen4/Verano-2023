<?php use miId\fuente\Repositorio\ViajarRepositorio; ?>

<div class="bloque_asiento">

    <div class="respaldo"><img src="web/imagenes/bus<?='/respaldo.png';?>" alt=""></div>
    <div>
        <div class="brazo_izdo"><img src="web/imagenes/bus<?='/brazo_izdo.png';?>" alt="Foto brazo izquierdo"></div>

        <input id="<?= $i;?>" hidden type="checkbox" name="asientos[asientoseleccionado_<?=$i;?>]" value="<?=$i;?>"  >
        <div id="asiento<?=$i;?>" class="asiento" <?php  
      
            if (!empty($_SESSION['perfil'])) {
                if ($_SESSION['perfil']['roll']=='agenciaviajes') { 
                    include_once $_SERVER['DOCUMENT_ROOT'] . VIAJARREPOSITORIO;
                    $obj = (new ViajarRepositorio())->infoEstadoPagado($ref_Destino, $i);
                        
                    if ($obj[0]->pagado=="NO") {?>
                        style="background-color: red;" 
                        <?php

                        } else { ?>
                        style="background-color: #99FE97;" 
                        <?php

                        }
                }
            } ?> style="background-color: red;"><?= $i;?>
        </div>

        <div class="brazo_derecho"><img src="web/imagenes/bus<?='/brazo_derecho.png';?>" alt=""></div>
    </div>

</div>
