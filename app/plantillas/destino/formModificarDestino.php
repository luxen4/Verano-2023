<?php ob_start(); // Formulario de inscripción de Destinos // ?>                                  
  <link rel="stylesheet" type="text/css" href='web/css/newandmodifying_destiny.css'/>     

<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades.inc'; ?>
  <?php $infoDestino=$_SESSION['infoDestino']; ?>
<div class="container">

    <div class="row">
    <div id="caja" class="col-xl-4 text-center col-lg-4 col-md-4 col-sm-4 col-4">
          <form action="" method="POST"> 
 
    <div class="row">
      <div class="col-xl-12 text-center">
        <h5 style="text-align: center;">Modificar Destino   </h5>

        <h5 style="text-align: center;">
          <?php  echo (pasarUtf8($infoDestino[0]->nombre_Localidad)) ?><br>
          <?php echo $infoDestino[0]->fecha_Viaje; ?>
          <?php echo $infoDestino[0]->dia_Semana; ?>
        </h5>
        
      </div>
    </div>
        
    <?php 
      

    if(!empty($_SESSION['todaslocalidades'])){
      $todasLocalidades=$_SESSION['todaslocalidades'];
    }
    ?>
  

  <div class="row"><?php /*
               <!-- <div class="col-xl-12 col-lg-12 col-sm-12 col-md-12 col-12">
                    <div> 
                    <?php // echo "Nombre: " . pasarUtf8($infoDestino[0]->nombre_Lugar) . "<br>" ; ?>
                        <label for="nombre">Destino</label> 
                        <input type="text" name="datos[nombre]" id="nombre" 
                        value="<?php echo (pasarUtf8($infoDestino[0]->nombre_Localidad)) ?? '' ?>" size="12" maxlength="50" required>
                        <?php if(isset($datos)){if(isset($errores['nombre'])){?><span class="error"><?="<br>". $errores['nombre'].'</span>'?><?php 
                              }else{?><span class="ok">OK</span><?php }};?>
                    </div>
                </div>-->*/ ?>


                <div class="row">                
                  <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">  
                    <select style="width: 100%;" name="datos[ref_Localidad]" required>
                    <option value="" selected>Seleccione Destino</option><?php  

                      foreach($todasLocalidades as $localidad){ ?>
                        <option value="<?php echo $localidad->ref_Localidad; ?>"><?php echo $localidad->nombre_Localidad; ?></option><?php
                      }?>

                    </select>
                  </div>
                </div>















<?php /*
     <!--
                <div class="col-xl-3 col-lg-6 col-sm-6 col-md-6 col-12">
                    <div>
                    <?php // echo "Provincia: " . pasarUtf8($infoDestino[0]->prov_Depart) . "<br>" ; ?>
                      <label for="provDepart">Provincia</label>
                        <select id="" name="datos[provinciadepartamento]" >
                          <option value="" selected>Seleccione, por favor!</option>
                          <option <?php if(!empty($datos)){ if(isset($datos["provinciadepartamento"])){echo ($datos["provinciadepartamento"] === "La Rioja")?"  selected" : "";}} ?>  value="La Rioja">La Rioja</option>
                          <option <?php if(!empty($datos)){ if(isset($datos["provinciadepartamento"])){echo ($datos["provinciadepartamento"] === "Cantabria")?" selected" : "";}} ?>  value="Cantabria">Cantabria</option>
                          <option <?php if(!empty($datos)){ if(isset($datos["provinciadepartamento"])){echo ($datos["provinciadepartamento"] === "Bizkaia")?"   selected" : "";}} ?>  value="Bizkaia">Bizkaia</option>
                          <option <?php if(!empty($datos)){ if(isset($datos["provinciadepartamento"])){echo ($datos["provinciadepartamento"] === "Guipuzkoa")?" selected" : "";}} ?>  value="Guipuzkoa">Guipuzkoa</option>
                          <option <?php if(!empty($datos)){ if(isset($datos["provinciadepartamento"])){echo ($datos["provinciadepartamento"] === "Aquitania")?" selected" : "";}} ?>  value="Aquitania">Aquitania</option>
                        </select>
                      <?php if(isset($datos)){if(isset($errores['provinciadepartamento'])){?><span class="error"><?="<br>". $errores['provinciadepartamento'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
                    </div>
                </div>
                
                <div class="col-xl-12"> <!--Ejemplo de un select con persistencia de datos y validación
                    <div><!--Recoger esto en la memoria, que persisten los datos https://stackoverflow.com/questions/39074077/echo-value-of-select-box
                    <?php // echo "Comunidad: " . pasarUtf8($infoDestino[0]->com_Reg) . "<br>" ; ?>
                    <label for="comunidadregion">Comunidad</label>
                        <select id="comunidadregion" name="datos[comunidadregion]" >
                        <option value="" selected>Seleccione!</option>
                            <option <?php if(!empty($datos)){if(isset($datos["comunidadregion"])){echo ($datos["comunidadregion"] === "La Rioja")?"selected" : ""; }}?>     value="La Rioja">La Rioja</option>
                            <option <?php if(!empty($datos)){if(isset($datos["comunidadregion"])){echo ($datos["comunidadregion"] === "Pais Vasco")?"selected" : "";}}?>    value="Pais Vasco">Pais Vasco</option>
                            <option <?php if(!empty($datos)){if(isset($datos["comunidadregion"])){echo ($datos["comunidadregion"] === "Navarra")?"selected" : "";}}?>       value="Navarra">Navarra</option>
                            <option <?php if(!empty($datos)){if(isset($datos["comunidadregion"])){echo ($datos["comunidadregion"] === "Cantabria")?"selected" : ""; }}?>    value="Cantabria">Cantabria</option>
                            <option <?php if(!empty($datos)){if(isset($datos["comunidadregion"])){echo ($datos["comunidadregion"] === "Aquitania")?"selected" : "";}} ?>    value="Aquitania">Aquitania</option>
                        </select>
                    <?php if(isset($datos)){if(isset($errores['comunidadregion'])){?><span class="error"><?="<br>". $errores['comunidadregion'].'</span>'?><?php 
                          }else{?><span class="ok">OK</span><?php }};?>
                    </div>
                </div>

                <div class="col-xl-12"> 
                    <div>
                    <?php // echo "País: " . pasarUtf8($infoDestino[0]->pais) . "<br>" ; ?>
                    <label for="pais">País</label>
                        <select id="pais" name="datos[pais]" >
                        <option value="" selected>Seleccione!</option>
                            <option <?php if(!empty($datos)){if(isset($datos["pais"])){echo ($datos["pais"] === "Francia")?"selected" : ""; }}?> value="Francia">Francia</option>
                            <option <?php if(!empty($datos)){if(isset($datos["pais"])){echo ($datos["pais"] === "España")?"selected" : "";}}?>   value="España">España</option>
                        </select>
                    <?php if(isset($datos)){if(isset($errores['pais'])){?><span class="error"><?="<br>". $errores['pais'].'</span>'?><?php 
                          }else{?><span class="ok">OK</span><?php }};?>
                    </div>
                </div>-->*/ ?>

</div>
<?php //var_dump($busesCompaniaPredeterminada);?>

<div class="row">
        <div class="col-xl-12">
        <?php // echo "Fecha del Viaje: " . pasarUtf8($infoDestino[0]->fecha_Viaje) . "<br>" ; ?>
          <label for="fViaje">Fecha del viaje</label>
          <input type="date" name="datos[fechaviaje]" id="sexo" value="<?php echo $datos['fechaviaje'] ?? '' ?>" ><br>
          <?php if(isset($datos)){if(isset($errores['fechaviaje'])){?><span class="error"><?= $errores['fechaviaje'].'</span>'?><?php 
                }else{?><span class="ok">OK</span><?php }};?>
        </div>

        <div class="col-xl-12">
        <?php // echo "Kilómetros: " . pasarUtf8($infoDestino[0]->kilometrosIdaVuelta) . "<br>" ; ?>
            <label for="kilometros">Kilometros</label>
            <input id="kilometros" type="number"  name="datos[kilometros]" value="<?php echo (pasarUtf8($infoDestino[0]->kilometrosIdaVuelta)) ?? '' ?>" 
            placeholder="1km" step="0.5" min="12" max="500" size="3" required >
            <?php if(isset($datos)){if(isset($errores['kilometros'])){?><span class="error"><?="<br>". $errores['kilometros'].'</span>'?><?php 
                  }else{?><span class="ok">OK</span><?php }};?>
        </div>

        <div class="col-xl-12">
        <?php //echo "Precio: " . pasarUtf8( round($infoDestino[0]->euros,2,PHP_ROUND_HALF_DOWN)) . "€<br>" ; ?>
              <!--echo round($desti, 2, PHP_ROUND_HALF_DOWN) . "€";-->
            <label for="precio">Precio</label>
            <input  id="precio" type="number" name="datos[euros]" value="<?php echo $datos['euros'] ?? '' ?>" 
                    placeholder="" step="0.5" min="12" max="20" size="3" required>
            <?php if(isset($datos)){if(isset($errores['euros'])){?><span class="error"><?="<br>". $errores['euros'].'</span>'?><?php 
                  }else{?><span class="ok">OK</span><?php }};?>
        </div>

<?php
//var_dump($_SESSION['todosbusesagenciaviajes']); //die();

//var_dump($_SESSION['busesAgenciaPredeterminada']); die();

?>

        <div class="col-xl-12">
        <?php // echo "Matricula: " . pasarUtf8($infoDestino[0]->matricula) . "<br>" ; ?>
                          <label for="busasignado">Matricula Bus</label> <br>

              <select id="" name="datos[busasignado]" >
                  <option value="" selected>Seleccione!</option>
                  <!--$busesCompania para su predeterminada-->
                              
<?php        

              /*    $busesCompaniaPredeterminada = $_SESSION['busesAgenciaPredeterminada'];
                for($i=0; $i<count($busesCompaniaPredeterminada);$i++){
                            $matriculaBus=$busesCompaniaPredeterminada[$i]->matricula; 
                            $codBus= $busesCompaniaPredeterminada[$i]->cod_Bus; 
                            $opcionBus= $busesCompaniaPredeterminada[$i]->matricula . "//" .  $busesCompaniaPredeterminada[$i]->plazas . " plazas... " . $busesCompaniaPredeterminada[$i]->nombre;?>
                            <option value="<?php echo($codBus);?>"><?php echo($opcionBus);?></option>            
                  <?php }*/


                  $busesCompanias=$_SESSION['todosbusesagenciaviajes'];
                for($i=0; $i<count($busesCompanias);$i++){
                $matriculaBus=$busesCompanias[$i]->matricula; 
                $plazas=$busesCompanias[$i]->plazas; 
                $nombreCompaniaBuses=$busesCompanias[$i]->nombre; 
                $ref_Bus= $busesCompanias[$i]->ref_Bus; 
                $opcionBus=$matriculaBus . " // " .  $plazas . " plazas... " . $nombreCompaniaBuses;?>
                <option value="<?php echo($ref_Bus);?>"><?php echo($opcionBus);?></option><?php }?>


                  <?php  ?>

              </select>
                      <!--   <input id="busasignado" type="text" name="datos[busasignado]" value="<?php echo $datos['busasignado'] ?? '' ?>"> -->
                          <?=isset($errores['busasignado'])?'<span class="error">'.$errores['busasignado'].'</span>':'<span class="ok">OK</span>'?></label>
        </div>
<?php /*
<!--        <div class="col-xl-6 col-lg-6 col-sm-6 col-md-6 col-12">
            <div>
              <label for="agenciaviajes">Agencia de Viajes que lo oferta: <br>
                <select name="datos[agenciaviajes]" id="agengiaviajes">
                <option value="" selected>Seleccione, por favor!</option>
<?php
 if(!empty($datos)){?>


                  <option <?php 
                  if(!empty($datos)){
                    if(isset($datos["agenciaviajes"])){
                      echo ($datos["agenciaviajes"] === "España")?"selected" : "";
                    }
                  }
                  ?> value="España">Gran Reserva</option>


                  <option <?php 
                  if(!empty($datos)){
                    if(isset($datos["agenciaviajes"])){
                      echo ($datos["agenciaviajes"] === "Francia")?"selected" : "";
                    }
                  }
                  ?> value="Francia">Azul Marino</option>
<?php };?>
                </select><br>
              <?=isset($errores['agenciaviajes'])?'<span class="error">'.$errores['agenciaviajes'].'</span>':'<span class="ok">OK</span>'?></label>
            </div> 
        </div>
</div>--> */ ?>

  </div>  


    <div class="row">
      <div id="seg" class="col-xl-12 text-center">
        <label for="estaseguro">
        <input id="estaseguro" type="checkbox" name="datos[estaseguro]"> Estoy seguro de modificar el destino.</label> 
      </div>
    </div>


    <div id="botones" class="row">
          <div class="col-xl-6 col-lg-6 col-sm-6 col-md-6 col-6">
            <input type="submit" name="modificardestino" value="Modificar">
          </div>
            
          <div class="col-xl-6 col-lg-6 col-sm-6 col-md-6 col-6">
              <input type="reset" value="Limpiar">
          </div>
    </div> 

  </form>
</div>

</div>

  <script type="text/javascript" src="js/jquery-3-5.1.min.js"></script>
  <script type="text/javascript" src="js/boostrap.min.js"></script>
  <script type="text/javascript" src="js/boostrap-bundle.min.js"></script>

</body>
</html>

<?php $contenido = ob_get_clean() ?>
<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/basefantasma.php';?>

