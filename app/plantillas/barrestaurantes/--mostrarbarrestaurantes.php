<?php ob_start() ?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Todos los Destinos</title>
    <link rel="stylesheet" type="text/css" href="web/css/bootstrap.min.css">
    <link rel="stylesheet" type="text/css" href="web/css/bootstrap-grid.min.css">
    <link rel="stylesheet" type="text/css" href="web/css/bootstrap-reboot.min.css">
    <link rel="stylesheet" type="text/css" href="web/css/stylesmostrar.css">


</head>
<body>
<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades.inc'; ?>


    <div class="container">


<?php  /* if(!empty($lugaresDondeComer)){?>

    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
            <form action="" method="post">

            <div class="table-responsive"> 
            <table class="table table-striped table-bordered table-hover">
                    <thead>
                        <th>Nombre</th><th>Facebook</th>
                    </thead>

                    <tbody>
                            
                            <?php $veces=0;



$numlugaresDondeComer=count($lugaresDondeComer);

for($i=0; $i<$numlugaresDondeComer; $i++){
var_dump($lugaresDondeComer);
$cod_lugaresDondeComer=$lugaresDondeComer[$i]->cod_Destino;?>
</tr> 
<td><?= pasarUtf8($lugaresDondeComer[$i]->nombre);?></td>
<td><?= pasarUtf8($lugaresDondeComer[$i]->e_facebook); ?></td><!--
<td><?= pasarUtf8($lugaresDondeComer[$i]->localidad);?></td>
<td><?= pasarUtf8($lugaresDondeComer[$i]->telefono_Agencia);?></td>
<td><?= pasarUtf8($lugaresDondeComer[$i]->horario_Agencia);?></td>
<td><?= pasarUtf8($lugaresDondeComer[$i]->lugar_SalidaPredeterminado);?></td>-->

<?php

if (!empty($_SESSION['perfil'])) {
    if ($_SESSION['perfil']['roll']=="admin") {?>

<td>
    <label for="<?=$cod_lugaresDondeComer;?>">
    <input type="checkbox" id="<?=$cod_lugaresDondeComer;?>" name="datos[<?=$cod_lugaresDondeComer;?>]" value="<?=$cod_lugaresDondeComer;?>"> Selecionar</label>
</td>

</tr> 
<?php };

        if ($_SESSION['perfil']['roll']=="cliente") {?>
            <td>
                <label for="<?=$cod_lugaresDondeComer;?>">
                <input type="checkbox" id="<?=$cod_lugaresDondeComer;?>" name="datos[<?=$cod_lugaresDondeComer;?>]" value="<?=$cod_lugaresDondeComer;?>"> </label>
            </td>
</tr> 

<?php }
}

} ?>
                    </tbody>
                </table>
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


<?php               

/* if($_SESSION['perfil']['roll']=="cliente"){ ?>


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
<?php               }?>

            </form>
        </div>


<?php   }else{?>
            <p id="nohay"><?php echo ("¡No hay ningun Bar/Restaurante en este momento!");?></p>
<?php   }  */?>




<div class="container">
<?php
foreach ($lugaresDondeComer as $bar_rest) {?>

                        
                    
    <?php };?>

</div>


<div class="container">
<div class="row">

        <div class='col-xl-4 articulo'>  

                    <div class="col-xl-12 text-center col-lg-2 col-md-2 col-sm-2 col-2">
                        <img src="web/imagenes/Restaurantes/elfigon.jpg" alt="First slide">
                    </div>

                    <div class="col-xl-12 text-center col-lg-10 col-md-10 col-sm-10 col-10">
                            <h5><?php echo $bar_rest->nombre; ?> </h5>
                            <h6>Restaurante y bar con comida tradicional... y un toque especial </h6>
                            <h6>629 61 98 01</h6>
                            <h6>Dirección</h6> 
                            <a href="https://www.facebook.com/El-Fig%C3%B3n-de-San-Mam%C3%A9s-102157554534177/?ref=page_internal">Facebook</a>
                            <input class="btn btn-success" type="submit" name="generapdf"  value="Generar" onclick="insertaIdDestino(<?php echo($codDes);?>); seleccionaPlaza(<?php echo($plaza);?>)"       >                
                    </div>
        </div>

    </div>


</div>
    

    




    
    </div></div>

     <script type="text/javascript" src="js/jquery-3-5.1.min.js"></script>
    <script type="text/javascript" src="js/boostrap.min.js"></script>
    <script type="text/javascript" src="js/boostrap-bundle.min.js"></script>
</body>
</html>

<?php $contenido = ob_get_clean() ?>

<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/basefantasma.php';?>


<style>
    h5{text-align: center;}
</style>