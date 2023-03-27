<?php 
use miId\fuente\Repositorio\BusRepositorio;
use miId\fuente\Repositorio\EventoRepositorio;
?>
<?php ob_start(); ?>





  <link rel="stylesheet" type="text/css" href='web/css/newandmodifying_destiny.css'/>  

<div class="container">

    <div class="row">
    <div id="caja" class="col-xl-4 text-center col-lg-4 col-md-4 col-sm-4 col-4">
          <form action="" method="POST"> 
 
    <div class="row">
      <div class="col-xl-12 text-center">
        <h5>★ New Event ★ <br></h5>
      </div>
    </div>

        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">  
          <label for="fViaje">F. Viaje</label>
          <input type="date" name="datos[fechaviaje]" id="sexo" value="<?php echo $datos['fechaviaje'] ?? '' ?>" ><br>
          <?php if(isset($datos)){if(isset($errores['fechaviaje'])){?><span class="error"><?="<br>". $errores['fechaviaje'].'</span>'?><?php 
                                  }else{?><span class="ok">OK</span><?php }};?>
        </div>
 <?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/EventoRepositorio.inc'; 
 $todosEventos = (new EventoRepositorio())->todosEventos();
 //var_dump($todosEventos);
 ?>

        <div id="select_evento" class="row">                
          <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">  
            <select style="width: 40%;" name="datos[ref_Evento]" required>
            <option value="" selected>Seleccione Evento</option><?php  

              foreach($todosEventos as $evento){ ?>
               <option value="<?php echo $evento->ref_Evento; ?>"><?php echo $evento->nombre_Evento; ?></option>--><?php
              }?>
              
            </select>
          </div>
        </div>


<div class="row">
        <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">  
            <label for="kilometros">Km.</label>
            <input id="kilometros" type="number"  name="datos[kilometros]" value="<?php echo $datos['kilometros'] ?? '' ?>" placeholder="1km" step="0.5" min="12" max="500" size="3" required > <br>
            <?php if(isset($datos)){if(isset($errores['kilometros'])){?><span class="error"><?="<br>". $errores['kilometros'].'</span>'?><?php 
                                    }else{?><span class="ok">OK</span><?php }};?>
        </div>

        <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">  
            <label for="precio">Precio</label>
            <input id="precio" type="number" name="datos[euros]" value="<?php echo $datos['euros'] ?? '' ?>" placeholder="10euros" step="0.5" min="12" max="20" size="3" required> <br>
            <?php if(isset($datos)){if(isset($errores['euros'])){?><span class="error"><?="<br>". $errores['euros'].'</span>'?><?php 
                                    }else{?><span class="ok">OK</span><?php }};?>
        </div>


        <?php // Retocado require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/bus/tipoBus.inc';?>



        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12"> 
            <label for="busasignado">Matricula Bus</label>

            <select style="max-width: 150px;" id="" name="datos[busasignado]" >
                <option value="" selected>Seleccione!</option>
               
                <?php
                // Todos buses registrados
                require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/BusRepositorio.inc';
                $todosBuses=(new BusRepositorio())->todosBuses(); 
 
       

                $busesCompania=$todosBuses;
                for($i=0; $i<count($busesCompania);$i++){
                      $matriculaBus=$busesCompania[$i]->matricula; 
                      $plazas=$busesCompania[$i]->plazas; 
                      $nombreCompaniaBuses=$busesCompania[$i]->nombre; 
                      $ref_Bus= $busesCompania[$i]->ref_Bus; 
                      $opcionBus=$nombreCompaniaBuses . " // " . $plazas . " plazas... " . $matriculaBus ;?>
                      <option value="<?php echo($ref_Bus);?>"><?php echo($opcionBus);?></option><?php } ?>

            </select><br>
            <?php if(isset($datos)){if(isset($errores['busasignado'])){?><span class="error"><?= $errores['busasignado'].'</span>'?><?php 
                                    }else{?><span class="ok">OK</span><?php }};?>
      
                </select>
        
        </div>



              <div class="row">
                <div id="seg" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                  <label for="estaseguro">
                  <input id="estaseguro" type="checkbox" name="datos[estaseguro]"> I'm sure I'll create this destination.</label>
                </div>
              </div>
<script>
  /*
function eliminar(){
  $('#select_destino').remove();
}
*/
</script>

              <div style="padding: 0em;" class="row">
                  <div id="botones" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                      <input type="submit" name="nuevoevento" value="Crear Evento">
                      <input type="reset" value="Limpiar">
                  </div> 
              </div>

<span style="color: red; margin-top:1em;"> Consulte con el administrador para Eventos no registradas</span>


        </div>
</div> 

            
</div>
</div>

  </form>
</div>
</div>

</div>



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

