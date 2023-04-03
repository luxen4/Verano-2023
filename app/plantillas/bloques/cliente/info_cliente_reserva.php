<div class="row">
    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
        <div>
            <?php $nombreCompleto=$_SESSION['perfil']['nombre'] . " " . $_SESSION['perfil']['apellidos']; ?>
            <h6>Cliente: <?= $nombreCompleto;?></h6>
            
        </div>
        
        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
            <h6>Precio estandar: <input style="width: 6em;" id="importepasajero" type="number" name="datos[importepasajero]" value="" placeholder="<?php echo $precioBilleteNormal[0]->euros . ' euros'; ?>" size="17" readonly required min="10" max="50"> <br>
            </h6>
            
            <!-- <label for="importepasajero">Importe Predeterminado del Viaje (podría tener descuento) </label><?php if(isset($datos)){if(isset($errores['importepasajero'])){?><span class="error"><?= $errores['importepasajero'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>-->
        </div>

        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/formulariospartefinal.php' ?>

    </div>
</div>