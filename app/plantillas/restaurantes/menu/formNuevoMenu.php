<?php ob_start();  ?>                                 <!--Formulario de registro de Usuarios -->

<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Formulario Nuevo Menú del Día</title>

  <link rel="stylesheet" type="text/css" href='web/css/create_account.css'/>    
  <link rel="stylesheet" type="text/css" href="web/css/stylesmostrar.css">

</head>
<body>
  <div class="container">

      <form action="" method="POST"> 
        <div id="create_account" style="max-width: 1200px;">
          <div class="row">
            <div id="caja" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-6">

                <div id="titulo" class="row">
                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-6">
                      <h5>Crear Menú</h5>
                    </div>
                </div>
                
                <div class="row">

                    <div class="col-xl-12 text-right col-lg-12 col-md-12 col-sm-6 col-12 contenedor_partemenu">

                        <h2>Primeros</h2>
                        <div class="row">
                              <div class="col-xl-12 text-right col-lg-12 col-md-12 col-sm-12 col-12">
                                  <label for="p_plato1">Primeros-Plato1</label>
                                  <input type="text" name="datos[p_plato1]" id="p_plato1" value="<?php echo $datos['p_plato1'] ?? '' ?>" 
                                  placeholder="..." size="10" >
                                  <!--isset($errores['nombre'])?'<span class="error">'.$errores['nombre'].'</span>':'<span class="ok">OK</span>'?></label>-->
                                  <!--<?php if(isset($datos)){if(isset($errores['p_plato1'])){?><span class="error"><?= "<br>" . $errores['p_plato1'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>-->
                              </div>

                              <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">
                                    <label for="p_plato2">Primeros-Plato2</label>
                                    <input type="text" name="datos[p_plato2]" id="p_plato2" value="<?php echo $datos['p_plato2'] ?? '' ?>" 
                                    placeholder="..." size="12" >
                                
                              </div>

                              <div class="col-xl-12 text-right col-lg-12 col-md-12 col-sm-12 col-12">
                                  <label for="p_plato3">Primeros-Plato3</label>
                                  <input type="text" name="datos[p_plato3]" id="p_plato3" value="<?php echo $datos['p_plato3'] ?? '' ?>" placeholder="..." size="10" >
                              </div>

                              <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">
                                    <label for="p_plato4">Primeros-Plato4</label>
                                    <input type="text" name="datos[p_plato4]" id="p_plato4" value="<?php echo $datos['p_plato4'] ?? '' ?>" 
                                    placeholder="..." size="12" >
                              </div>

                              <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">
                                    <label for="p_plato5">Primeros-Plato5</label>
                                    <input type="text" name="datos[p_plato5]" id="p_plato5" value="<?php echo $datos['p_plato5'] ?? '' ?>" 
                                    placeholder="..." size="12" >
                              </div>
                        </div>

                      </div>

                    <div class="col-xl-12 text-right col-lg-12 col-md-12 col-sm-6 col-12 contenedor_partemenu">
                        <h2>Segundos</h2>
                          
                                <div class="col-xl-12 text-right col-lg-12 col-md-12 col-sm-12 col-12">
                                    <label for="s_plato1">Segundos-Plato1</label>
                                    <input type="text" name="datos[s_plato1]" id="s_plato2" value="<?php echo $datos['s_plato1'] ?? '' ?>" placeholder="..." size="10" >
                                  
                                  </div>

                                <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">
                                      <label for="s_plato2">Segundos-Plato2</label>
                                      <input type="text" name="datos[s_plato2]" id="s_plato2" value="<?php echo $datos['s_plato2'] ?? '' ?>" 
                                      placeholder="..." size="12" >
                              
                                </div>


                                <div class="col-xl-12 text-right col-lg-12 col-md-12 col-sm-12 col-12">
                                    <label for="s_plato3">Segundos-Plato3</label>
                                    <input type="text" name="datos[s_plato3]" id="s_plato3" value="<?php echo $datos['s_plato3'] ?? '' ?>" placeholder="..." size="10" >
                                  
                                </div>

                                <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">
                                      <label for="s_plato4">Segundos-Plato4</label>
                                      <input type="text" name="datos[s_plato4]" id="s_plato4" value="<?php echo $datos['s_plato4'] ?? '' ?>" 
                                      placeholder="..." size="12" >
                              
                                </div>

                                <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">
                                      <label for="s_plato5">Segundos-Plato5</label>
                                      <input type="text" name="datos[s_plato5]" id="s_plato5" value="<?php echo $datos['s_plato5'] ?? '' ?>" 
                                      placeholder="..." size="12" >
                              
                                </div>
                          </div>
                    

                </div>


                <div class="contenedor_partemenu">
                  <h2>INCLUIDO</h2>
                    <div class="row">
                        <div class="col-xl-12 text-center"> 
                            <input style="width: 1em;" id="postrepanvino" type="checkbox" name="datos[incluido]" value="POSTRE, PAN Y VINO"> 
                            <label for="postrepanvino">POSTRE, PAN Y VINO</label>
                        </div>
                    </div>
                </div>

                <div class="contenedor_partemenu">
                  <h2>Precio</h2>
                    <div class="row">
                        <div class="col-xl-12 text-center"> 
                            <input style="width: 10em;" id="precio" type="number" name="datos[precio]"> 
                            <label for="precio">IVA INCLUIDO.</label>
                        </div>
                    </div>
                </div>
                          
                <div class="contenedor_partemenu">
                  <h2> Rótulo de "IVA INCLUIDO"</h2>
                    <div class="row">
                        <div class="col-xl-12 text-center"> 
                            <input style="width: 1em;" id="iva_incluido" type="checkbox" name="datos[iva_incluido]" value="IVA INCLUIDO"> 
                            <label for="iva_incluido">IVA INCLUIDO.</label>
                        </div>
                    </div>
                </div>

                <div class="contenedor_partemenu">
                  <h2>Comentario final</h2>
                    <div class="row">
                        <div class="col-xl-12 text-center"> 
                            <input style="width: 1em;" id="variarprecios" type="checkbox" name="datos[comentario]" value="*Los Platos pueden variar ligeramente*"> 
                            <label for="variarprecios">Los Platos pueden variar ligeramente.</label>
                        </div>
                    </div>
                </div>

                      <br>     

                <div class="row">
                    <div class="col-xl-12 text-center"> 
                        <input style="width: 1em;" id="asegura" type="checkbox" name="asegura"> 
                        <label for="asegura">Estoy seguro de crear este menú del día.</label>
                    </div>
                </div>
                    
                <div class="row">  
                        <div class="col-xl-6 text-center">
                            <input style="padding: 0.2em 0.2em 0.2em 0.2em;" type="submit" name="nuevomenu" value="Crear Menú">
                        </div>
                          
                        <div class="col-xl-6 text-center">
                          <input type="reset" name="limpiar" value="Limpiar Campos">
                        </div>
                </div>

            </div>
          </div>
        </div>
      </form>  
  </div> 
</body>
</html>


<?php $contenido = ob_get_clean() ?>
<?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/basefantasma.php';?>




<style>
  .col-xl-12, .col-lg-12, .col-md-12, .col-sm-12, .col-12 {
    flex: 0 0 auto;
    width: 100%;
    text-align: center;
}
h2{padding: 0em;}
.contenedor_partemenu{border:1px solid black; padding:0.5em}
</style>




