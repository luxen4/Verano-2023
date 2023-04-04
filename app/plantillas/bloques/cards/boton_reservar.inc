<?php
if(!empty($_SESSION['perfil'])){
    if($_SESSION['perfil']['roll']=='agenciaviajes'){ ?>
        <div>
            <input hidden id="<?php echo($ref_Destino); ?>" class="checksdestinos" type="checkbox" name="datos[destinoseleccionado]" value="<?php echo($ref_Destino); ?>">
            <input type="submit" name="contratar" onclick="deselecionaTodosChecksDestinos(),selecciona('<?php echo($ref_Destino); ?>')" value="Reserva">
        </div><?php
    } 

}else{ ?>
    <h6 style="text-align: center;">Tel: <?= $destino->telefono_Agencia; ?></h6>
    <?php
}

?>
  