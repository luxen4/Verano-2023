<?php ob_start() ?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Información de su Agencia de Buses</title>
    <link rel="stylesheet" type="text/css" href="web/css/bootstrap.min.css">
    <link rel="stylesheet" type="text/css" href="web/css/bootstrap-grid.min.css">
    <link rel="stylesheet" type="text/css" href="web/css/bootstrap-reboot.min.css">

    <link rel="stylesheet" type="text/css" href="web/css/stylesmostrar.css">
    <link rel="stylesheet" type="text/css" href='web/css/newandmodifying_destiny.css'/>     
    <link rel="stylesheet" type="text/css" href='web/css/styles.css'/> 


</head>
<body>
<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades.inc'; ?>
   <div class="container">

    <div class="row">
    <div id="caja" class="col-xl-4 text-center col-lg-4 col-md-4 col-sm-4 col-4">
          <form action="" method="POST"> 
 
    <div class="row">
      <div class="col-xl-12 text-center">
        <h5>Modification of the Bus Agency.</h5>
      </div>
    </div>
            <div class="container">
                <div class="col-xl-12 text-center">
                    <p class="fecha_inscripcion">
                    <?php echo "Fecha Inscripción: " . pasarUtf8($agenciaBuses[0]->fecha_incripcion) . "<br>"; ?>
                    </p>
                </div>
            </div>

<div class="container">
                <form action="" method="post">
                
                        <div class="row">

                            <div class="col-xl-3 col-lg-4 col-md-4 col-sm-6 col-12 cont">
                                <?php // echo "Nombre: " . pasarUtf8($agenciaBuses[0]->nombre) . "<br>" ; ?> 
                                <label for="">Nombre</label>
                                <input type="text" name="datos[nombre]" size="18" value="<?php echo $_SESSION['perfil']['name']?>">
                                <?php if(isset($datos)){if(isset($errores['nombre'])){?><span class="error"><?="<br>". $errores['nombre'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
                            </div>

                            <div class="col-xl-3 col-lg-4 col-md-4 col-sm-6 col-12 cont">
                                <?php // echo "NIF: " . pasarUtf8($agenciaBuses[0]->nif) . "<br>"; ?>
                                <label for="">NIF</label>
                                <input type="text" name="datos[nif]" size="18" value="<?php echo $_SESSION['perfil']['nif'];?>">
                                <?php if(isset($datos)){if(isset($errores['nif'])){?><span class="error"><?="<br>". $errores['nif'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
                            </div>

                            <div class="col-xl-3 col-lg-4 col-md-4 col-sm-6 col-12 cont">
                                <?php // echo "Dirección: " . pasarUtf8($agenciaBuses[0]->direccion) . "<br>"; ?>
                                <label for="">Dirección</label>
                                <input type="text" name="datos[direccion]" size="22" value="<?php echo $_SESSION['perfil']['direccion'];?>">
                                <?php if(isset($datos)){if(isset($errores['direccion'])){?><span class="error"><?="<br>". $errores['direccion'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
                            </div>

                            <div class="col-xl-3 col-lg-4 col-md-4 col-sm-6 col-12 cont">
                                <?php // echo "Código Postal: " . pasarUtf8($agenciaBuses[0]->cp) . "<br>"; ?>
                                <label for="">CP</label>
                                <input type="text" name="datos[cp]" size="18" value="<?php echo $_SESSION['perfil']['cp'];?>">
                                 <?php if(isset($datos)){if(isset($errores['cp'])){?><span class="error"><?="<br>". $errores['cp'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
                            </div>
                        </div>
                                    
                        <div class="row">
                            <div class="col-xl-3 col-lg-4 col-md-4 col-sm-6 col-12 cont">
                                <?php // echo "Localidad: " . pasarUtf8($agenciaBuses[0]->localidad) . "<br>";?>
                                <label for="">Localidad</label>
                                <input type="text" name="datos[localidad]" size="18" value="<?php echo utf8_encode($_SESSION['perfil']['localidad']);?>"><br>
                                 <?php if(isset($datos)){if(isset($errores['localidad'])){?><span class="error"><?="<br>". $errores['localidad'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
                            </div>

                            <div class="col-xl-3 col-lg-4 col-md-4 col-sm-6 col-12 cont">
                                    <?php // echo "Provincia: " . pasarUtf8($agenciaBuses[0]->provincia) . "<br>"; ?>
                                    <label for="provincia">Provincia</label>
                                    <select id="provincia" name="datos[provincia]" >
                                        <option value="" selected>Seleccione, por favor!</option> 
                                        
                                        <?php
                                        if(!empty($_SESSION['perfil'])){?>
                                            <option <?php echo ($_SESSION['perfil']["provincia"] === "La Rioja")?"selected" : "";?> value="La Rioja">La Rioja</option>
                                            <option <?php echo ($_SESSION['perfil']["provincia"] === "Bizkaia")?"selected" : "";?> value="Bizkaia">Bizkaia</option>
                                            <option <?php echo ($_SESSION['perfil']["provincia"] === "Guipuzkoa")?"selected" : "";?> value="Cantabria">Guipuzcoa</option>
                                            <option <?php echo ($_SESSION['perfil']["provincia"] === "Álava")?"selected" : "";?> value="Álava">Álava</option>
                                            <option <?php echo ($_SESSION['perfil']["provincia"] === "Navarra")?"selected" : "";?> value="Navarra">Navarra</option>
                                            <option <?php echo ($_SESSION['perfil']["provincia"] === "Aquitania")?"selected" : "";?> value="Aquitania">Aquitania</option>-->
                                        <?php };?>

                                    </select><br>
                                 <?php if(isset($datos)){if(isset($errores['provincia'])){?><span class="error"><?= $errores['provincia'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?></label>
                            </div>

                            <div class="col-xl-3 col-lg-4 col-md-4 col-sm-6 col-12 cont">
                                <?php // echo "Comunidad: " . pasarUtf8($agenciaBuses[0]->comunidad) . "<br>"; ?>
                                <label for="comunidad">Comunidad</label>
                                <select id="comunidad" name="datos[comunidad]" >
                                    <option value="" selected>Seleccione!</option> 
                                    
                                    <?php
                                    if(!empty($_SESSION['perfil'])){?>
                                        <option <?php echo ($_SESSION['perfil']["comunidad"] === "La Rioja")?"selected" : "";?> value="La Rioja">La Rioja</option>
                                        <option <?php echo ($_SESSION['perfil']["comunidad"] === "Cantabria")?"selected" : "";?> value="Cantabria">Cantabria</option>
                                        <option <?php echo ($_SESSION['perfil']["comunidad"] === "País Vasco")?"selected" : "";?> value="Pais Vasco">Pais Vasco</option>
                                        <option <?php echo ($_SESSION['perfil']["comunidad"] === "Aquitania")?"selected" : "";?> value="Aquitania">Aquitania</option>
                                    <?php };?>

                                </select>
                             <?php if(isset($datos)){if(isset($errores['comunidad'])){?><span class="error"><?="<br>". $errores['comunidad'].'</span>'?><?php 
                                                        }else{?><span class="ok">OK</span><?php }};?></label>
                            </div>

                            <div class="col-xl-3 col-lg-4 col-md-4 col-sm-6 col-12 cont">
                                    <?php // echo "País: " . pasarUtf8($agenciaBuses[0]->pais) . "<br>"; ?>
                                    <label for="pais">País</label>
                                    <select id="pais" name="datos[pais]" >
                                        <option value="" selected>Seleccione!</option> 
                                            <option <?php echo ($_SESSION['perfil']["pais"] === "España")?"selected" : "";?> value="España">España</option>
                                            <option <?php echo ($_SESSION['perfil']["pais"] === "Francia")?"selected" : "";?> value="Francia">Francia</option>
                                    </select><br>
                                 <?php if(isset($datos)){if(isset($errores['pais'])){?><span class="error"><?="<br>". $errores['pais'].'</span>'?><?php 
                                                        }else{?><span class="ok">OK</span><?php }};?></label>
                            </div>
            <!------------------------------------------------------------------------------------------------------------------------------------------>
            <!--queda los campos de abajo de hacer la persistencia y la validación y hacer el update para finalizar <br>
            SEGUIR POR AQUI CON LA PERSISTENCIA DE DATOS Y LA VALIDACIÓN en todo lo que se pueda que hay que aprobechar que está caliente-->
                        </div>
            <?php //var_dump($_SESSION['perfil']);die();?>

                        <div class="row">

                            <div class="col-xl-4 col-lg-6 col-md-6 col-sm-6 col-12 cont">
                                <?php // echo "email: " . pasarUtf8($agenciaBuses[0]->email) . "<br>"; ?>
                                <label for="">email</label>
                                <input type="text" name="datos[email]" value="<?php echo $_SESSION['perfil']['email'];?>" required> <br>
                                 <?php if(isset($datos)){if(isset($errores['email'])){?><span class="error"><?="<br>". $errores['email'].'</span>'?><?php 
                                                        }else{?><span class="ok">OK</span><?php }};?>
                            </div>

                            <div class="col-xl-4 col-lg-6 col-md-6 col-sm-6 col-12 cont">
                                <?php // echo "Teléfono de Reserva: " . pasarUtf8($agenciaBuses[0]->telefono_Reserva) . "<br>"; ?>
                                <label for="">Teléfono Reserva</label>
                                <input type="text" name="datos[telefonoDeReserva]" value="<?php echo $_SESSION['perfil']['telefonoReserva'];?>" required><br>
                                 <?php if(isset($datos)){if(isset($errores['telefonoDeReserva'])){?><span class="error"><?="<br>". $errores['telefonoDeReserva'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
                            </div>

                            <div class="col-xl-4 col-lg-6 col-md-6 col-sm-6 col-12 cont">
                                <?php // echo "Teléfono de la Agencia: " . pasarUtf8($agenciaBuses[0]->telefono_Agencia) . "<br>"; ?>
                                <label for="">T. Agencia</label>
                                <input type="text" name="datos[telefonoDeAgencia]" value="<?php echo $_SESSION['perfil']['telefono_Agencia'];?>" required><br>
                                 <?php if(isset($datos)){if(isset($errores['telefonoDEAgencia'])){?><span class="error"><?="<br>". $errores['telefonoDEAgencia'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
                            </div>
                        </div><br>

                        <div class="row">

                                <div class="row">
                                    <div class="col-xl-6">
                                        <?php // echo "Horario:" . pasarUtf8($agenciaBuses[0]->horario_Agencia) . "<br>"; ?>
                                        <label>Horario mañana:</label>
                                    <br>
                                        <label for="horaEntrManana">De: </label>
                                        <input id="horaEntrManana" type="time" name="datos[horaEntrManana]"  value="00:00:00" max="23:59:59" min="0:00:00" step="1" required><br>
                                        <?php if(isset($datos)){if(isset($errores['horaSalManana'])){?><span class="error"><?="<br>". $errores['horaSalManana'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>

                                        <label for="horaSalManana">a</label>
                                        <input id="horaSalManana" type="time" name="datos[horaSalManana]"  value="00:00:00" max="23:59:59" min="0:00:00" step="1" required><br>
                                         <?php if(isset($datos)){if(isset($errores['horaSalManana'])){?><span class="error"><?="<br>". $errores['horaSalManana'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
                                    </div>

                                    <div class="col-xl-6">
                                        <?php // echo "Horario: " . pasarUtf8($agenciaBuses[0]->horario_Agencia) . "<br>"; ?>
                                        <label>Horario tarde</label>
                                    <br>
                                        <label for="horaEntrTarde">De: </label>
                                        <input id="horaEntrTarde" type="time" name="datos[horaEntrTarde]" value="00:00:00" max="23:59:59" min="0:00:00" step="1" required><br>
                                        <?php if(isset($datos)){if(isset($errores['horaEntrTarde'])){?><span class="error"><?="<br>". $errores['horaEntrTarde'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?> 
                                   
                                        <label for="horaSalTarde">a:</label>
                                        <input id="horaSalTarde" type="time" name="datos[horaSalTarde]"  value="00:00:00" max="23:59:59" min="0:00:00" step="1" required><br>
                                         <?php if(isset($datos)){if(isset($errores['horaSalTarde'])){?><span class="error"><?="<br>". $errores['horaSalTarde'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
                                    </div>
                                </div>





                                    <div class="col-xl-3 col-lg-4 col-md-4 col-sm-6 col-12 cont">
                                            <?php // echo "Pago Online: " . pasarUtf8($agenciaBuses[0]->pago_Online) . "<br>"; ?>
                                            <label for="">Pago Online</label>

                                          
                                                <label for="onlinesi">
                                                <input type="radio" id="onlinesi" name="datos[pagoonline]" value="SI" checked> SI</label>
                                    
                                                <label for="onlineno" style="margin-left:2em">
                                                <input type="radio" id="onlineno" name="datos[pagoonline]" value="NO"><label for="onlineno"> NO</label> 
                                            

                                             <?php if(isset($datos)){if(isset($errores['pagoOnline'])){?><span class="error"><?="<br>". $errores['pagoOnline'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
                                    </div>

                                    <div class="col-xl-3 col-lg-6 col-md-6 col-sm-6 col-12 cont">
                                        <?php // echo "Número de cuenta: " . pasarUtf8($agenciaBuses[0]->numero_Cuenta) . "<br>"; ?>
                                        <label for="">Número de Cuenta </label>
                                        <input type="text" name="datos[numeroCuenta]" size="18" value="<?php echo $_SESSION['perfil']['numero_Cuenta'];?>"><br>
                                         <?php if(isset($datos)){if(isset($errores['numeroCuenta'])){?><span class="error"><?="<br>". $errores['numeroCuenta'].'</span>'?><?php 
                                                                    }else{?><span class="ok">OK</span><?php }};?>
                                    </div>
                        </div>

                        <div class="row">
                            <div class="col-xl-4 col-lg-6 col-md-6 col-sm-6 col-12 cont">
                              <!--  <?php // echo "Username: " . pasarUtf8($agenciaBuses[0]->username) . "<br>"; ?> -->
                                <label for="">Username</label>
                                <input type="text" name="datos[username]">
                                 <?php if(isset($datos)){if(isset($errores['username'])){?><span class="error"><?="<br>". $errores['username'].'</span>'?><?php 
                                        }else{?><span class="ok">OK</span><?php }};?>
                            </div>
                        </div>

                        <div clas="row">
                            <div class="col-xl-12">
                              <!--  <?php // echo "Contraseña actual: =>  *   <br>"; ?> . $agenciaBuses[0]['contrasena'] .-->
                                <label for="">Nueva Contraseña</label>
                                <input type="text" name="datos[contrasena]">
                                 <?php if(isset($datos)){if(isset($errores['pwd'])){?><span class="error"><?="<br>". $errores['pwd'].'</span>'?><?php 
                                                            }else{?><span class="ok">OK</span><?php }};?>
                            </div>

                            <div class="col-xl-12">
                                
                                <label for="">Repita Contraseña</label>
                                <input type="text" name="datos[contrasenarepetida]">
                                 <?php if(isset($datos)){if(isset($errores['contrasenarepetida'])){?><span class="error"><?="<br>". $errores['contrasenarepetida'].'</span>'?><?php 
                                                            }else{?><span class="ok">OK</span><?php }};?>
                            </div>
                        </div>


                        <div class="row">
                            <div id="seg" class="col-xl-12 text-center">
                                <label for="asegura">
                                <input id="asegura" type="checkbox" name="datos[estaseguro]"> Doy mi consentimiento.</label>
                            </div>
                        </div>

                      
                            <div id="botones" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                <input type="submit" name="modificardatosagenciabuseslogeada" value="Modificar">
                                <input type="reset" value="Limpiar">
                            </div>
                      
                </form>
</div></div></div>

    <script type="text/javascript" src="js/jquery-3-5.1.min.js"></script>
    <script type="text/javascript" src="js/boostrap.min.js"></script>
    <script type="text/javascript" src="js/boostrap-bundle.min.js"></script>

</body>
</html>

<?php $contenido = ob_get_clean() ?>

<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/basefantasma.php';?>
