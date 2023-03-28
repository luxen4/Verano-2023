 <td>
    <?php $ref_Localidad=$destino->ref_Localidad; ?>
    <input id="<?php echo ($destino->cod_Destino);?>" type="checkbox" name="datos[ref_Localidad]" value="<?php echo($destino->ref_Localidad);?>"  >
    <input class="btn btn-danger" type="submit" name="comer" value="Consultar" onclick="limpiar(), marcarLocalidad('<?php echo ($destino->cod_Destino) ;?>');">
</td>

<script>
function limpiar(){
    for (let i=0; i < document.f1.elements.length; i++) {
        if(document.f1.elements[i].type === "checkbox") {
            document.f1.elements[i].checked = false;
        }
    }
}
</script>