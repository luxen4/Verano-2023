<div id="formnocliente" class="row sentar"> 
    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
        <h4>Reservar Pasajero</h4>
    </div>

    <div id="" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
        <div>
            <label for="nombree" >Nombre</label>
            <!-- value="<?php echo $_SESSION['perfil']['nombre'] ?? '' ?>"-->
            <input type="text" name="datos[nombre]" id="nombree" 

            <?php 
            
            if (!empty($_SESSION['perfil']['roll'])) {
                if ($_SESSION['perfil']['roll']==='cliente') { ?>
                    value="<?php echo($_SESSION['perfil']['nombre'] . $_SESSION['perfil']['apellidos']); ?>"
                <?php }
            };?>
            
            placeholder="Adrián" size="10" required><br>
            <?php if(isset($datos)){if(isset($errores['nombre'])){?><span class="error"><?= $errores['nombre'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
                    
        </div>


        <div style="margin: 0.5em;">
            <label for="tlfnoParticular">Teléfono</label>
            <input type="text" name="datos[tlfno]" id="tlfnoParticular" value="<?php echo $datos['tlfnoParticular'] ?? '' ?>" placeholder="637117965" size="7" required><br>
            <?php if(isset($datos)){if(isset($errores['tlfnoParticular'])){?><span class="error"><?= $errores['tlfnoParticular'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
        </div>

        <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">
            <label for="email">Email</label>
            <input type="text" name="datos[email]" id="email" value="<?php echo $datos['email'] ?? '' ?>" 
            placeholder="superlaya50@gmail.com" size="21">
            <?php if(isset($datos)){if(isset($errores['email'])){?><span class="error"><?="<br>" . $errores['email'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
        </div>


        <div class="row">
            <div class="col-xl-4 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                            <label for="edadpasajero">Edad</label><br>
                            <input id="edadpasajero" type="number" name="datos[edadpasajero]" value="<?php echo $datos['edadpasajero'] ?? '' ?>" placeholder="18 años" size="6" required min="1" max="120"> <br>
                            <?php if(isset($datos)){if(isset($errores['edadpasajero'])){?><span class="error"><?= $errores['edadpasajero'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
            </div>

            <div class="col-xl-4 text-left col-lg-12 col-md-12 col-sm-12 col-12" style="margin: 1em 0em 1em 0em;">
                        <h5 style="text-align: center; text-decoration: underline; border-bottom: none; ">PAGADO</h5>
                        <label for="pagadosi">
                        <input type="radio" id="pagadosi" name="datos[pagado]" value="SI" checked> SI</label>

                        <label for="pagadono" style="margin-left:2em">
                        <input type="radio" id="pagadono" name="datos[pagado]" value="NO"> NO</label> 
            </div> 

            <div class="col-xl-4 text-left col-lg-12 col-md-12 col-sm-12 col-12">
                            <label for="importepasajero">Importe</label><br>
                            <input id="importepasajero" type="number" name="datos[importepasajero]"  value="<?php echo $destino[0]['euros']; ?>" placeholder="12 euros" size="6" readonly required min="10" max="50"> <br>
                            <?php if(isset($datos)){if(isset($errores['importepasajero'])){?><span class="error"><?= $errores['importepasajero'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
            </div>
        </div>

            <!--<div id="" style="margin-bottom: 1em;" class="row">
                    <div id="contpagado" class="col-xl-12 text-center">
                        <label for="pagado">
                        <input id="pagado" type="checkbox" name="datos[pagado]"> PAGADO</label>
                    </div>
                </div>
                -->                                
    </div>

</div>


