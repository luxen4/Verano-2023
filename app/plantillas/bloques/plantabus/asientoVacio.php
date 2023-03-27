<div class="bloque_asiento">
        <div class="respaldo">
                <img src="web/imagenes/bus<?='/respaldo.png';?>" alt="">
        </div>

        <div>
                <div class="brazo_izdo"><img src="web/imagenes/bus<?='/brazo_izdo.png';?>" alt="Foto brazo izquierdo"></div>

                <input id="<?= $i;?>" class="checkasiento" hidden type="checkbox" name="asientos[asientoseleccionado_<?=$i;?>]" value="<?=$i;?>"  >
                <div id="asiento<?=$i;?>" class="asiento" onclick="selecciona2(<?= $i;?>)"><?= $i;?></div>

                <div class="brazo_derecho"><img src="web/imagenes/bus<?='/brazo_derecho.png';?>" alt=""></div>
        </div>
</div>