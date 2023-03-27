 <td>
    <?php $ref_Localidad=$destino->ref_Localidad; ?>
    <input id="<?php echo ($destino->ref_Destino);?>" type="checkbox" name="datos[ref_Localidad]" value="<?php echo($ref_Localidad);?>" hidden >
    <input class="btn btn-danger" type="submit" name="comer" value="Consultar" onclick="marcarLocalidad('<?php echo ($destino->ref_Destino) ;?>');">
</td>