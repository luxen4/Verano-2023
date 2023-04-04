
<?php ob_start();      // Formulario de inscripción de Destinos //?>


  <link rel="stylesheet" type="text/css" href="web/css/styles.css">
  <link rel="stylesheet" type="text/css" href="web/css/stylesmostrar.css">
  <link rel="stylesheet" type="text/css" href='web/css/newandmodifying_destiny.css'/>  

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


<?php $contenido = ob_get_clean() ?>

<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA .  BASE;?>


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

