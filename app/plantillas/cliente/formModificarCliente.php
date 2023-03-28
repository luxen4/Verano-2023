<?php ob_start();                                   // Formulario de registro de Usuarios //
?>
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Formulario Modificación Cliente</title>
  <link rel="stylesheet" type="text/css" href="web/css/bootstrap.min.css">
  <link rel="stylesheet" type="text/css" href="web/css/bootstrap-grid.min.css">
  <link rel="stylesheet" type="text/css" href="web/css/bootstrap-reboot.min.css">

  <link rel="stylesheet" type="text/css" href='web/css/modify_profile.css'/>    
  <link rel="stylesheet" type="text/css" href="web/css/stylesmostrar.css">

</head>
<body>
<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades.inc'; ?>
<div class="container" id="modify_profile"> 

    <div class="row">
      <div class="col-xl-12 text-center">
        <h1>Modificación Perfil de Cliente</h1>
      </div>
    </div>


    <div class="row">
    <div id="caja" class="col-xl-4 text-center col-lg-4 col-md-4 col-sm-4 col-4">
  <form action="" method="POST">

  
<?php //var_dump($_SESSION['perfil']); var_dump($datosClienteLogeado);//die();?>

  <div class="row">
    
      <div class="col-xl-4 col-lg-4 col-md-4 col-sm-6 col-12 cont">
      <?php // echo "Nombre: " . pasarUtf8($_SESSION['perfil']['nombre']) . "" ; ?> 
            <label for="nombre">Nombre</label>
            <input type="text" name="datos[nombre]" id="nombre" value="<?php echo(pasarUtf8($_SESSION['perfil']['nombre'])) ?? '' ?>" required>
            <?php if(isset($datos)){if(isset($errores['nombre'])){?><span class="error"><?= $errores['nombre'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
           <!--<?=isset($errores['nombre'])?'<span class="error">'.$errores['nombre'].'</span>':'OK'?></label>-->
      </div> 

      <div class="col-xl-4 col-lg-4 col-md-4 col-sm-12  col-12 cont">
      <?php // echo "Apellidos: " . pasarUtf8($datosClienteLogeado[0]->apellidos) . "" ; ?> 
            <label for="apellidos">Apellidos</label> 
            <input type="text" name="datos[apellidos]" id="apellidos" value="<?php echo(pasarUtf8($datosClienteLogeado[0]->apellidos)) ?? '' ?>" required>
            <?php if(isset($datos)){if(isset($errores['apellidos'])){?><span class="error"><?= $errores['apellidos'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
      </div>


      <div class="col-xl-4 col-lg-4 col-md-4 col-sm-6 col-12 cont">
      <?php // echo "NIF: " . pasarUtf8($datosClienteLogeado[0]->nif) . "" ; ?> 
          <label for="nif">NIF</label>
          <input type="text" name="datos[nif]" id="nif" value="<?php echo(pasarUtf8($datosClienteLogeado[0]->nif)) ?? '' ?>" required>
          <?php if(isset($datos)){if(isset($errores['nif'])){?><span class="error"><?= $errores['nif'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
      </div>

  </div>

<div class="row">

    <div class="col-xl-3 col-lg-4 col-md-4 col-sm-12  col-12 cont">
    <?php // echo "T. Particular: " . pasarUtf8($datosClienteLogeado[0]->TlfnoParticular) . "" ; ?> 
      <label for="tlfnoParticular">Movil</label>
      <input type="text" name="datos[tlfnoParticular]" id="tlfnoParticular" value="<?php echo(pasarUtf8($datosClienteLogeado[0]->TlfnoParticular)) ?? '' ?>" required>
      <?php if(isset($datos)){if(isset($errores['tlfnoParticular'])){?><span class="error"><?= $errores['tlfnoParticular'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
    </div>

    <div class="col-xl-3 col-lg-4 col-md-4 col-sm-6 col-12 cont">
    <?php // echo "Correo Electrónico: " . pasarUtf8($datosClienteLogeado[0]->email) . "" ; ?> 
      <label for="email">Email</label>
      <input type="text" name="datos[email]" id="email" value="<?php echo(pasarUtf8($datosClienteLogeado[0]->email)) ?? '' ?>" required>
      <?php if(isset($datos)){if(isset($errores['email'])){?><span class="error"><?= $errores['email'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
    </div>
    
    <div class="col-xl-3 col-lg-4 col-md-4 col-sm-6 col-12 cont">
    <?php // echo "F. Nacimiento: " . pasarUtf8(  date("d-m-Y", strtotime( $datosClienteLogeado[0]->fNacimiento))) . "" ; ?> 
          <label for="fNacimiento">F. Nacimiento</label>
          <input type="date" name="datos[fNacimiento]" id="sexo" value="<?php echo(pasarUtf8($datosClienteLogeado[0]->fNacimiento)) ?? '' ?>" required>
          <?php if(isset($datos)){if(isset($errores['fNacimiento'])){?><span class="error"><?= $errores['fNacimiento'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
    </div>
  
    <div class="col-xl-3 col-lg-4 col-md-4 col-sm-6 col-12 cont">
    <?php // echo "Sexo: " . pasarUtf8($datosClienteLogeado[0]->sexo) . "" ; ?> 
        <label>Sexo</label> 
        <label for="sexohombre">
        <input id="sexohombre" type="radio" name="datos[sexo]" value="H" checked>  Hombre</label>

        <label for="sexomujer">
        <input id="sexomujer" type="radio" name="datos[sexo]" value="M">  Mujer</label>
    </div>

</div>

<div class="row">
    <div class="col-xl-4 col-lg-4 col-md-4 col-sm-12  col-12 cont">
    <?php // echo "Calle: " . pasarUtf8($datosClienteLogeado[0]->calle) . "" ; ?> 
          <label for="calle">Calle</label>
          <input type="text" name="datos[calle]" id="calle" value="<?php echo(pasarUtf8($datosClienteLogeado[0]->calle)) ?? '' ?>" size="25" required>
          <?php if(isset($datos)){if(isset($errores['calle'])){?><span class="error"><?= $errores['calle'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
    </div>

    <div class="col-xl-4 col-lg-4 col-md-4 col-sm-6 col-12 cont">
    <?php // echo "Código Postal: " . pasarUtf8($datosClienteLogeado[0]->cp) . "" ; ?> 
          <label for="cp">C.P.</label>
          <input type="text" name="datos[cp]" id="cp" value="<?php echo(pasarUtf8($datosClienteLogeado[0]->cp)) ?? '' ?>" required>
          <?php if(isset($datos)){if(isset($errores['cp'])){?><span class="error"><?= $errores['cp'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
    </div>

    <div class="col-xl-4 col-lg-4 col-md-4 col-sm-6 col-12 cont">
    <?php // echo "Localidad: " . pasarUtf8($datosClienteLogeado[0]->localidad) . "" ; ?> 
          <label for="localidad">Localidad</label>
          <input type="text" name="datos[localidad]" id="localidad" value="<?php echo(pasarUtf8($datosClienteLogeado[0]->localidad)) ?? '' ?>" required>
          <?php if(isset($datos)){if(isset($errores['localidad'])){?><span class="error"><?= $errores['localidad'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
    </div>
</div>

<div class="row">

    <div class="col-xl-4 col-lg-4 col-md-4 col-sm-12 col-12 cont">
    <?php // echo "Provincia: " . pasarUtf8($datosClienteLogeado[0]->provincia) . "" ; ?> 
        <label for="provincia">Provincia</label> 
        <input type="text" name="datos[provincia]" id="provincia" value="<?php echo(pasarUtf8($datosClienteLogeado[0]->provincia)) ?? '' ?>" required>
        <?php if(isset($datos)){if(isset($errores['provincia'])){?><span class="error"><?= $errores['provincia'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
    </div>

    <div class="col-xl-4 col-lg-4 col-md-4 col-sm-6 col-12 cont">
    <?php // echo "Comunidad: " . pasarUtf8($datosClienteLogeado[0]->comunidad) . "" ; ?> 
        <label for="comunidad">Comunidad</label>
        <input type="text" name="datos[comunidad]" id="comunidad" value="<?php echo(pasarUtf8($datosClienteLogeado[0]->comunidad)) ?? '' ?>" required>
        <?php if(isset($datos)){if(isset($errores['comunidad'])){?><span class="error"><?= $errores['comunidad'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
    </div>

    <div class="col-xl-4 col-lg-4 col-md-4 col-sm-6 col-12 cont">
    <?php // echo "País: " . pasarUtf8($datosClienteLogeado[0]->pais) . "" ; ?> 
        <label for="pais">País</label>
        <input type="text" name="datos[pais]" id="pais" value="<?php echo(pasarUtf8($datosClienteLogeado[0]->pais)) ?? '' ?>" required>  
        <?php if(isset($datos)){if(isset($errores['pais'])){?><span class="error"><?= $errores['pais'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
    </div>

</div>


      <div id="contrasenas" class="row">

        <div class="col-xl-6 col-lg-6 col-md-6 col-sm-6 col-12 cont">
              <label for="username"> Current Username</label>
              <input type="username" name="datos[username]" id="username" value="<?php echo $datos['username'] ?? '' ?>" required>
              <?php if(isset($datos)){if(isset($errores['username'])){?><span class="error"><?= $errores['username'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
        </div>

        <div class="col-xl-6 col-lg-6 col-md-6 col-sm-6 col-12 cont">
              <label for="pwd">Current Password</label>
              <input type="password" name="datos[contrasenaactual]" id="pwd" value="<?php echo $datos['pwd'] ?? '' ?>" required>
              <?php if(isset($datos)){if(isset($errores['pwd'])){?><span class="error"><?= $errores['pwd'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
        </div>


        <div class="col-xl-6 col-lg-6 col-md-6 col-sm-6 col-12 cont">
              <label for="pwd">New Password</label>
              <input type="password" name="datos[contrasena]" id="pwd" value="<?php echo $datos['pwd'] ?? '' ?>" required>
              <?php if(isset($datos)){if(isset($errores['pwd'])){?><span class="error"><?= $errores['pwd'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
        </div>
        <div class="col-xl-6 col-lg-6 col-md-6 col-sm-6 col-12 cont">
              <label for="pwd">Repeat Password</label>
              <input type="password" name="datos[contrasenarepetida]" id="pwd" value="<?php echo $datos['pwd'] ?? '' ?>" required>
              <?php if(isset($datos)){if(isset($errores['pwd'])){?><span class="error"><?= $errores['pwd'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
        </div>
      </div>

       
    
      <div class="row">
      <div id="seg" class="col-xl-12 text-center">
          <label for="estaseguro">
          <input id="estaseguro" type="checkbox" name="datos[estaseguro]"> Doy mi consentimiento</label>
      </div>
      </div>

<div id="botones">
    <input type="submit" name="modificarcliente" value="Modificar">
    <input type="reset" value="Limpiar">
</div>



</form>
  <script type="text/javascript" src="js/jquery-3-5.1.min.js"></script>
  <script type="text/javascript" src="js/boostrap.min.js"></script>
  <script type="text/javascript" src="js/boostrap-bundle.min.js"></script>

</body>
</html>


<?php $contenido = ob_get_clean() ?>

<?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/basefantasma.php';?>





            <!--<input type="text" name="datos[sexo]" id="sexo" value="<?php echo $datos['sexo'] ?? '' ?>"></label>
            <?=isset($errores['sexo'])?'<span class="error">'.$errores['sexo'].'</span>':'OK'?>

            <label for="socio">¿Ha sido socio anteriormente?
            <input type="text" name="datos[socio]" id="socio" value="<?php echo $datos['socio'] ?? '' ?>"></label>
            <?=isset($errores['socio'])?'<span class="error">'.$errores['socio'].'</span>':'OK'?>
  
            <label for="fSocio">Fecha de Socio:
            <input type="text" name="datos[fSocio]" id="fSocio" value="<?php echo $datos['fSocio'] ?? '' ?>"></label>
            <?=isset($errores['fSocio'])?'<span class="error">'.$errores['fSocio'].'</span>':'OK'?>-->
