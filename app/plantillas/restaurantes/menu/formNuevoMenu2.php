<?php ob_start();

?>

<!--
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.3.1/dist/css/bootstrap.min.css" integrity="sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T" crossorigin="anonymous">
    <link rel="stylesheet" type="text/css" href="web/css/stylesmostrar.css">


</head>
<body>
<?php // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades.inc';?>-->


<div id="buscadordestinos" class="container" style="max-width: 800px;">
  <div id="create_account" style="max-width: 1200px;">
    <div class="row">
      <div id="caja" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
            <div id="titulo" class="row">
              <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                  <h5>Crear Menú</h5>
                    <?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/datos/propietario_negocio_menu.inc'; ?>

                  <?php

                  if($menu_premium=="NO"){?>
                  <h4>Modelo:<br> "PREDETERMINADO - MOD-0"</span></h4>
                  <h6>(Para modelos de diseño, hágase PREMIUM)</h6>
                  
                  <?php
                  if($menu_premium=="NO") {?><!--Solo debe sacar la foto de menú NO PREMIUM-->


                    <?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/menus/fotos_fondomenusbasicos.inc'; ?><?php
                  
                  
                  
                  
                  }else{?><h1>Modelo: <span id="titulomodelo"></span></h1><?php } }?>







                    <?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/menus/fotos_fondomenusbasicos.inc'; ?>




 


                    <div class="row">
                      <div class="caja" style="" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                        <input style="" type="button" value="Mostrar Diseños Premium!" onclick="mostrar()">
                      </div>
                    </div>


                    <div id="oi" style="margin: 1em; border: 1px solid black; padding: 1em; display: block;">
                      <?php require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/menus/fotos_fondomenus.inc'; ?>
                    </div>

              </div>
                  
              <div class="row" style="margin: auto; padding: 0em;">
                <div class="caja" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                    <input style="" type="button" value="Subir Diseño Própio!" onclick="mostrar(), mostrarDiseñoPropio()">
                </div>
              </div>

              <div class="row">
                <div class="caja" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                  <div id="diseno_propio" style="margin: 1em; border:solid 1px black; padding:1em; ">
                  
                      <form style="margin-bottom: 0em;" action="" enctype="multipart/form-data"  method="POST"><!--Puedo dirigirlo al sube.php en vez de submit en el controlador-->
                      <!--https://www.youtube.com/watch?v=miOz8AhLDnc-->
                      <h4>Seleccione su archivo personal</h4>

                    <!--  <input id="username" type="checkbox" name=datos[username]  hidden  value="<?php echo ($_SESSION['perfil']['username']);?>"/><br>-->
                    <input id="ref_negocioMenuPremium" type="checkbox" name=datos[ref_negocio]  value="<?php echo $_SESSION['perfil']['ref_negocio']; ?>"/> 



                      <input style="width: 75%;" name="archivo" type="file"> <br><br>
                      <!--<button>Subir Archivo</button>-->
                      <input type="submit" onclick="marcarReferenciaNegocio()" name="envia-foto" value="Enviar Foto">

                      </form> 

                  </div>
                </div>

                  </div>



            </div>

          <?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/menus/formulariosmenusdeldia.inc';?>
        </form>
    </div>

<!--
<script src="https://code.jquery.com/jquery-3.3.1.slim.min.js" integrity="sha384-q8i/X+965DzO0rT7abK41JStQIAqVgRVzpbzo5smXKp4YfRvH+8abtTE1Pi6jizo" crossorigin="anonymous"></script>
<script src="https://cdn.jsdelivr.net/npm/popper.js@1.14.7/dist/umd/popper.min.js" integrity="sha384-UO2eT0CpHqdSJQ6hJty5KVphtPhzWj9WO1clHTMGa3JDZwrnQq4sF86dIHNDz0W1" crossorigin="anonymous"></script>
<script src="https://cdn.jsdelivr.net/npm/bootstrap@4.3.1/dist/js/bootstrap.min.js" integrity="sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM" crossorigin="anonymous"></script>

      </body>
</html>-->

<?php $contenido = ob_get_clean()?>
<?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA .  BASE;?>



  <style>
.caja{margin: 0.5em;}
    #oi{display: none;}  
    #diseno_propio{display: none;} 
    .container{max-width: 1000px;}

 


   /* input[type="button"], input[type="submit"], button*/
#botons{margin: 1em;}

#buscadordestinos input, #buscadordestinos select {
     margin: 0em; 

}



  </style>

<script>

function mostrar(){
  $("#diseno_propio").hide();
  $("#oi").toggle();
  $("#menu_MOD-7").hide();
}

function mostrarDiseñoPropio(){
  $("#oi").css("display", "none");
  $("#diseno_propio").toggle();
}

//Función que esconde los formularios
function esconder(){ 
  var selecionar=document.getElementsByClassName('menu_MOD');
    for (var i = 1; i <= selecionar.length; i++) {
      var selector=".menu_MOD-" + [i];
      $(selector).hide();
    }
}

<?php
$veces=1;
foreach($todosModelosMenus as $modeloMenu){?>

    $(".MOD-<?php echo $veces; ?>").click(function() {	
    $("#menu_MOD-<?php echo $veces; ?>").toggle();
    
})
;
 <?php $veces++; }?>



 // Función que hace cambiar a true el checkbox de Localidad en "Tabla: Agenda Verano 2022"
function marcarReferenciaNegocio(){
  
    var seleccionar=document.getElementById('ref_negocioMenuPremium');  alert(seleccionar);
    seleccionar.checked = true;
}

</script>
