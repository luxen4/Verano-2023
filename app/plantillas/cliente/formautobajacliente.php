<?php ob_start();?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Darse de baja de la aplicación</title>
    <link rel="stylesheet" type="text/css" href="web/css/bootstrap.min.css">
    <link rel="stylesheet" type="text/css" href="web/css/bootstrap-grid.min.css">
    <link rel="stylesheet" type="text/css" href="web/css/bootstrap-reboot.min.css">


    <link rel="stylesheet" type="text/css" href='web/css/autobajacliente.css'/>
    <link rel="stylesheet" type="text/css" href='web/css/stylesmostrar.css'/>

</head>
<body>


<div id="contenido_autobaja" class="container">
    
<div class="row">
    <div id="caja" class="col-xl-4 text-center col-lg-4 col-md-4 col-sm-4 col-4">
    <form action="" method="post">

        <div id="titulo" class="row">
            <div class="col-xl-12 text-center">
              <h5>Baja de un Cliente</h5>
            </div>
        </div>

        Al darse de baja un Cliente se borran todos los Clientes (fatal), debe solo borrar en la tabla PERSONA 
    <div class="row">
        <div class="col-xl-6 col-lg-12 col-md-12 col-sm-12 col-12">
            <label for="username">Username</label><br>
            <input type="username" name="datos[username]" id="username" value="<?php echo $datos['username'] ?? '' ?>" required size="15"><br>
        </div>

        <div class="col-xl-6 col-lg-12 col-md-12 col-sm-12 col-12">
            <label for="pwd">Password</label> <br>
            <input type="password" name="datos[contrasenaactual]" id="pwd" value="<?php echo $datos['pwd'] ?? '' ?>" required size="15"><br>
        </div>
    </div>


    <div class="row">
        <div id="seg" class="col-xl-12 text-center">
                <label for="estaseguro">
                <input id="estaseguro" type="checkbox" name="datos[estaseguro]"> Quiero darme de baja.</label>
        </div>
    </div>

    <div id="botones">
        <input type="submit" name="autobajacliente" value="Baja">
        <input type="reset" value="Limpiar">
    </div>


    </form>
</div></div>
</div></div>
    <script type="text/javascript" src="js/jquery-3-5.1.min.js"></script>
    <script type="text/javascript" src="js/boostrap.min.js"></script>
    <script type="text/javascript" src="js/boostrap-bundle.min.js"></script>
</body>
</html>

<?php $contenido = ob_get_clean()?>

<?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/basefantasma.php';?>
