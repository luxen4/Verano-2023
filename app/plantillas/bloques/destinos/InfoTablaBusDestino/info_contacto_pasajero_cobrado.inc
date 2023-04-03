<td id='<?php echo 'plaza_' . $plaza_Bus; ?>'<?php ?>

<?php // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app\plantillas\bloques\destinos\InfoTablaBusDestino\celda_Cobrado.inc'; ?><?php
    if($infoPersona[0]->pagado=='NO'){ ?>style="background-color: red;" 
        <?php $pendienteRecaudar= $pendienteRecaudar+($infoPersona[0]->embolso);
                $plazasSinCobrar=$plazasSinCobrar+1;
        ?>  <?php 
        }else{?>style="background-color: #99FE97;"<?php $total=$total+$infoPersona[0]->embolso; $plazasCobradas=$plazasCobradas+1; } ?> onclick="cambiar(<?php echo $plaza_Bus; ?>)" 
        >

        <?php echo "Pagado: " . pasarUtf8($infoPersona[0]->pagado); ?>
        <!--<?php echo pasarUtf8(round($destino[0]->euros,2) . "€")?>-->
        <input type="text" name="preciobillete[<?=$plaza_Bus . '_' . $infoPersona[0]->embolso ?>]" value="<?php echo (pasarUtf8($infoPersona[0]->embolso) . '€' );?>" placeholder="<?php echo (pasarUtf8($infoPersona[0]->embolso) . '€' );?>"><br>
        <label for="">Modificar</label><br>
            <label for="pagado_si<?=$plaza_Bus ?>">
            <input type="radio" id="pagado_si<?=$plaza_Bus ?>" name="datos[pagado_<?=$plaza_Bus ?>]" value="SI"> SI</label>

            <label for="pagado_no<?=$plaza_Bus ?>" style="margin-left:2em">
            <input type="radio" id="pagado_no<?=$plaza_Bus ?>" name="datos[pagado_<?=$plaza_Bus ?>]" value="NO"> NO</label> 
</td>