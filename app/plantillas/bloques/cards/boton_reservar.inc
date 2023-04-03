<div>
    <input hidden id="<?php echo ($ref_Destino); ?>" class="checksdestinos" type="checkbox" name="datos[destinoseleccionado]" value="<?php echo ($ref_Destino); ?>">
    <input type="submit" name="contratar" onclick="deselecionaTodosChecksDestinos(),selecciona('<?php echo ($ref_Destino); ?>')" value="Reserva">
</div>

<?php 
/*
<div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
 <input type="submit" name="contratar" onclick="deselecionaTodosChecksDestinos(),selecciona('<?php echo($ref_Destino); ?>')" value="Hacer Reserva">
</div>
*/ 
?>
                        
