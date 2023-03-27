<?php ob_start() ?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Todos los Destinos</title>
   <!-- <link rel="stylesheet" type="text/css" href="web/css/bootstrap.min.css">
    <link rel="stylesheet" type="text/css" href="web/css/bootstrap-grid.min.css">
    <link rel="stylesheet" type="text/css" href="web/css/bootstrap-reboot.min.css">-->
    <link rel="stylesheet" type="text/css" href="web/css/stylesmostrar.css">


</head>
<body>
<?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/utilidades/utilidades.inc'; ?>
    <div class="container ">
        <div class="row">
            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
            





                    

                
            </div>
        </div>
    </div>
<style>
.todas_agencias{
        background-image:url("web/imagenes/fondos/fondo1.jpg"); background-size: cover; }
</style>
    
    <div class="container todas_agencias">


<?php   if(!empty($agenciaViajes)){?>

    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
            <form action="" method="post">

            <div class="table-responsive"> 
                <?php // include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/tabla_AgenciasViajes1.inc'; // Tabla grande ?>
                <?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/tabla_AgenciasViajes2.inc'; // Tabla ajustada ?>
            </div>

            
            





  <!--Esto para la opción de dar de baja a la agencia si se es administrador-->
  <?php    
  if(!empty($_SESSION['perfil'])){
    if($_SESSION['perfil']['roll']==="admin"){?>
<div class="row">
<label for="estaseguro">
<input id="estaseguro" type="checkbox" name="asegura"> Estoy seguro de eliminar las Agencias de Viajes seleccionadas.</label>
</div>

 
<div id="botones">
<input type="submit" name="eliminarAgenciasViajes" value="Eliminar">
<!--<input type="submit" name="verflotabuses" value="Ver Flota de Buses">-->
<input type="reset" value="Limpiar">
</div>


<?php }}?>




<?php /*
if($_SESSION['perfil']['roll']=="cliente"){ ?>

        <div class="row">
            <div id="seg" class="col-xl-12 text-center">
                <label for="estaseguroo"class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12 ">
                <input id="estaseguroo" type="checkbox" name="asegura"> Doy mi consentimiento.</label>
            </div>
        </div>


        <div id="botones">
            <input type="submit" name="socioclienteagencia" value="Hacer socio">
            <input type="reset" value="Limpiar">
        </div>
<?php } */?>






            </form>
        </div>








        <?php   }else{?>
                    <p id="nohay"><?php echo ("¡No hay ninguna Agencia de Viajes disponible en este momento!");?></p>
        <?php   }?>





    
    </div></div>

<!-- <script type="text/javascript" src="js/jquery-3-5.1.min.js"></script>
    <script type="text/javascript" src="js/boostrap.min.js"></script>
    <script type="text/javascript" src="js/boostrap-bundle.min.js"></script>-->
</body>
</html>




<?php $contenido = ob_get_clean() ?>

<?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/basefantasma.php';?>

