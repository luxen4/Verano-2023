<?php 
use miId\fuente\Repositorio\BusRepositorio;

?>
<?php ob_start();                                   // Formulario de inscripción de Destinos //?>


<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Nueva Contrasea</title>
  <link rel="stylesheet" type="text/css" href="web/css/bootstrap.min.css">
  <link rel="stylesheet" type="text/css" href="web/css/bootstrap-grid.min.css">
  <link rel="stylesheet" type="text/css" href="web/css/bootstrap-reboot.min.css">

  <link rel="stylesheet" type="text/css" href="web/css/styles.css">
  <link rel="stylesheet" type="text/css" href="web/css/stylesmostrar.css">
  <link rel="stylesheet" type="text/css" href='web/css/newandmodifying_destiny.css'/>  

  <link rel="stylesheet" type="text/css" href='web/css/plantabus.css'/>


  <link rel="stylesheet" type="text/css" href='web/css/forms.css'/>  
  <link rel="stylesheet" type="text/css" href='web/css/stylesnuevo.css'/>   


</head>
<body>

<div class="container">

      <div class="row">
      <div id="caja" class="col-xl-4 text-center col-lg-4 col-md-4 col-sm-4 col-4">
            <form action="" method="POST"> 
  
      <div class="row">
          <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
              <h5>Cambio de Username y Password <br></h5>
          </div>
      </div>

      <div class="row">
          <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">
              <label for="correo">Introduzca su correo</label><br>
              <input type="correo" name="datos[correo]" id="correo" placeholder="superlaya50@gmail.com" value="<?php echo $datos['correo'] ?? '' ?>" required></label><br>
          </div>
      </div>


      <div class="row">
          <div id="seg" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
              <label for="mandar_correo">
              <input id="mandar_correo" type="checkbox" name="datos[mandar_correo]"> Mandarme un correo con las nuevas credenciales.</label>
          </div>
      </div>



      <div style="padding: 0em;" class="row">
          <div id="botones" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
              <input type="submit" name="recupera_contrasena" value="Enviar">
              <input type="reset" value="Limpiar">
          </div> 
      </div>

    </div>

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

<?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/basefantasma.php';?>


<style>
  .ok{color:green;}
  .error{color:red;}
</style>



<style>
  #example-multiple-optgroups{
    width: 400px;
    height: 300px;
  }
</style>
<!--
<select id="example-multiple-optgroups" multiple="multiple">

<?php
$veces=0;
foreach($busesOtrasCompanias as $bus){
  
    if($veces==0){
      $nombreCompaniaBuses=$bus->nombre;?>
      	<optgroup label=<?php echo(/*$nombreCompaniaBuses*/ "Todos_los_Buses_Disponibles");?> class="group-1"><br><?php
        $veces++;
    }

    if($veces!=0 && $veces!=144){
          $codigoBus=$bus->cod_Bus;
          $opcionBus=$bus->matricula . " // " .  $bus->plazas . " plazas... " . $bus->nombre  /*. $busesCompania[$i]['nombre']*/?>
          <option value="<?php echo($codigoBus);?>"><?php echo($opcionBus);?><?php
          $veces++;
         
    }else{
      $veces=0;
    }

}?>
		</optgroup>
	</select>-->

<!--
  <select id="example-multiple-optgroups" multiple="multiple">
		<optgroup label="Group 1" class="group-1">
			<option value="1-1">Option 1.1</option>
			<option value="1-2" selected="selected">Option 1.2</option>
			<option value="1-3" selected="selected">Option 1.3</option>
		</optgroup>
		<optgroup label="Group 2" class="group-2">
			<option value="2-1">Option 2.1</option>
			<option value="2-2">Option 2.2</option>
			<option value="2-3">Option 2.3</option>
		</optgroup>
	</select>
-->
























<!--
  <label for="kilometros">Kilometros Ida/Vuelta: <br>
  <input type="text" name="datos[kilometros]" id="plazas" value="<?php echo $datos['kilometros'] ?? '' ?>" size="17"><br>
  <?=isset($errores['kilometros'])?'<span class="error">'.$errores['kilometros'].'</span>':'OK'?></label>
-->




 <!-- <div class="row" style="border:1px solid black;">
        <div class=" col-xl-3 col-md-3 col-sm-3">
            <label for="nombre">Nombre del Lugar: <br>
            <input type="text" name="datos[nombre]" id="nombre" value="<?php echo $datos['nombre'] ?? '' ?>" size="17"><br>
            <?=isset($errores['nombre'])?'<span class="error">'.$errores['nombre'].'</span>':'OK'?></label>
        </div>

        <div class=" col-xl-3 col-md-3 col-sm-4">
            <label for="provDepart">Provincia/Departamento: <br>
            <input type="text" name="datos[provDepart]" id="provDepart" value="<?php echo $datos['provDepart'] ?? '' ?>" size="17"><br>
            <?=isset($errores['provDepart'])?'<span class="error">'.$errores['provDepart'].'</span>':'OK'?></label>
        </div> 
      
        <div class=" col-xl-3 col-md-3 col-sm-4">
          <label for="comunidadregion">Comunidadregion: <br>
          <input type="text" name="datos[comunidadregion]" id="comunidadregion" value="<?php echo $datos['comunidadregion'] ?? '' ?>" size="17"><br>
          <?=isset($errores['comunidadregion'])?'<span class="error">'.$errores['comunidadregion'].'</span>':'OK'?></label>
        </div>

        <div class=" col-xl-1 col-md-1 col-sm-4">
          <label for="pais">Pais: <br>
          <input type="text" name="datos[pais]" id="pais" value="<?php echo $datos['pais'] ?? '' ?>" size="17"><br>
          <?=isset($errores['pais'])?'<span class="error">'.$errores['pais'].'</span>':'OK'?></label>
        </div>       
  </div>
-->

<!--
    <div>
        <label for="provDepart">Provincia/Departamento(Fr): <br>
        <input type="text" name="datos[provDepart]" id="provDepart" value="<?php echo $datos['provDepart'] ?? '' ?>" size="17"><br>
        <?=isset($errores['provDepart'])?'<span class="error">'.$errores['provDepart'].'</span>':'OK'?></label>
    </div> 
-->

<!--
  <div>
        <label for="comunidadregion">Comunidadregion/Región(Fr): <br>
        <input type="text" name="datos[comunidadregion]" id="comunidadregion" value="<?php echo $datos['comunidadregion'] ?? '' ?>" size="17"><br>
        <?=isset($errores['comunidadregion'])?'<span class="error">'.$errores['comunidadregion'].'</span>':'OK'?></label>
  </div>
-->


<!--
        <label for="pais">Pais: <br>
        <input type="text" name="datos[pais]" id="pais" value="<?php echo $datos['pais'] ?? '' ?>" size="17"><br>
        <?=isset($errores['pais'])?'<span class="error">'.$errores['pais'].'</span>':'OK'?></label>
-->

Opción3 
    Se crea al azar un username y una contraseña, 
    Se mete a la base de datos
    Se la manda al correo insertado(comprobación de si está registrado y ya se sabe que es la Agencia de Viajes o un Cliente) en un input los nuevos datos. (No hay formulario especial, no hay enlace que un intruso sepa en una 2ª vez y 
            
    Ya la agencia se mete con XXXX1 xxxx1 y la cambia a su voluntad)
            alert"Acabamos de mandar a su correo las nuevas credenciales";
            En caso de no ver el correo y no saber las credenciales, 
              Volver a empezar la Opción3
              Llamar al administrador