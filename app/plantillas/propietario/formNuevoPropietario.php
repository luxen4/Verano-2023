<?php ob_start();  ?>                                 <!--Formulario de registro de Usuarios -->

<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Formulario Nuevo cliente</title>
  <link rel="stylesheet" type="text/css" href="web/css/bootstrap.min.css">
  <link rel="stylesheet" type="text/css" href="web/css/bootstrap-grid.min.css">
  <link rel="stylesheet" type="text/css" href="web/css/bootstrap-reboot.min.css">

  <link rel="stylesheet" type="text/css" href='web/css/create_account.css'/>    
  <link rel="stylesheet" type="text/css" href="web/css/stylesmostrar.css">

</head>
<body>


<div id="create_account" class="container" style="max-width: 1200px;">
  <div class="row">
    <div id="caja" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">

        <div id="titulo" class="row">
            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
              <h5>Create your account like owner</h5>
            </div>
        </div>

          <form action="" method="POST">     
              <div class="row">
                <div class="col-xl-12 text-right col-lg-12 col-md-12 col-sm-12 col-12">
                    <label for="nombree">Nombre</label>
                    <input type="text" name="datos[nombre]" id="nombre" value="<?php echo $datos['nombre'] ?? '' ?>" placeholder="..." size="10" required>
                    <?php if(isset($datos)){if(isset($errores['nombre'])){?><span class="error"><?= "<br>" . $errores['nombre'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
                    <!--isset($errores['nombre'])?'<span class="error">'.$errores['nombre'].'</span>':'<span class="ok">OK</span>'?></label>-->
                </div>

                <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">
                      <label for="apellidos">Apellidos</label>
                      <input type="text" name="datos[apellidos]" id="apellidos" value="<?php echo $datos['apellidos'] ?? '' ?>" 
                      placeholder="..." size="12" required>
                      <?php if(isset($datos)){if(isset($errores['apellidos'])){?><span class="error"><?= "<br>" . $errores['apellidos'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
                </div>

                <div class="col-xl-12 ">
                  <label for="telefono">Teléfono</label>
                  <input type="text" name="datos[telefono]" id="telefono" value="<?php echo $datos['telefono'] ?? '' ?>" 
                  placeholder="..." size="7" required>
                  <?php if(isset($datos)){if(isset($errores['telefono'])){?><span class="error"><?="<br>" . $errores['telefono'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
                </div>

                <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">
                  <label for="email">Email</label>
                  <input type="text" name="datos[email]" id="email" value="<?php echo $datos['email'] ?? '' ?>" 
                  placeholder="..." size="21" required>
                  <?php if(isset($datos)){if(isset($errores['email'])){?><span class="error"><?="<br>" . $errores['email'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
                </div>



                  <div class="col-xl-4 col-lg-4 col-md-3 col-sm-4 col-12 cont">
                      <div> 
                          <label for="nombre_negocio">Nombre de su negocio</label><br>
                              <select id="nombre_negocio" name="datos[nombre_negocio]" required>
                                  <option value="" selected>Seleccione!</option>

                                      <?php                                                   // con foreach
                                          $result=$todosNegociosLocalidad;
                                              foreach($result as $negocio){
                                            
                                                  $ref_negocio=$negocio->ref_negocio;
                                                  $nombre_negocio=$negocio->nombre;
                                                  $localidad=$negocio->nombreLocalidad;
                                                  ?>
                                                  <option value="<?php 
                                                  
                                                  
                                                  echo($ref_negocio);
                                                  
                                                  
                                                  ?>"><?php echo($nombre_negocio .', '. $localidad);?></option>

                                                <!--  <option <?php if(!empty($ref_negocio)){if(isset($datos["nombre_negocio"])){echo ($datos["nombre_negocio"] === "$nombre_negocio")?"selected" : "";}}?> value="<?php $nombre_negocio ?>">***</option>-->
                                        <?php   } ?>
                              </select><br>
                      </div>
                  </div>

                  <div class="col-xl-12">
                        <label for="username">Username</label>
                        <input type="username" name="datos[username]" id="username" value="<?php echo $datos['username'] ?? '' ?>" size="12" required>
                  </div>

                  <div class="col-xl-12">
                        <label for="pwd">Password</label>
                        <input type="password" name="datos[contrasena]" id="pwd" value="<?php echo $datos['pwd'] ?? '' ?>" size="12" required> 
                  </div>

                  <div class="col-xl-12">
                        <label for="pwd2">Password Again</label>
                        <input type="password" name="datos[contrasenarepetida]" id="pwd2" value="<?php echo $datos['pwd2'] ?? '' ?>" size="12" required> <br>
                  </div>

                  <div> 
                      <input style="width: 1em;" id="asegura" type="checkbox" name="asegura"> 
                      <label for="asegura">Acepto condiciones</label>
                  </div>
                      
                  <div class="row" style="margin:auto;"> 
                      <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-12" style="margin: auto; width: 91%;">
                          <input style="padding: 0.2em 0.2em 0.2em 0.2em;" type="submit" name="nuevopropietario" value="Create Account">
                      </div>
                        
                      <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-12" style="margin: auto; width: 91%;">
                        <input type="reset" name="limpiar" value="Limpiar">
                      </div>
                  </div>
              </div>
          </form>   
    </div>
  </div>
</div>


  <script type="text/javascript" src="js/jquery-3-5.1.min.js"></script>
  <script type="text/javascript" src="js/boostrap.min.js"></script>
  <script type="text/javascript" src="js/boostrap-bundle.min.js"></script>

</body>
</html>


<?php $contenido = ob_get_clean() ?>
<?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/basefantasma.php';?>


<script>
	$(document).ready(function() {		// Necesário encerrar bajo .ready(function)	
        $("#button_aparecer").click(function() {	
			$("#mas_info").toggle();
		});
	});
</script>