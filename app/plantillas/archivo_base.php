<?php /*<!-- Vista común a la mayoría (sino todas) las vistas de la aplicación
     Suele contener la imagen corporativa de la apliación Web
     Concretamente esta página contiene el nombre de la empresa
     "Cadena Tiendas Media" y una barra de hiperenlaces con un enalace a la
     página home, llamado "inicio"
     El nombre del archivo es indiferente: layout, comun, etc.
-->*/?>
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title></title>
    <link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.8.1/css/all.css" integrity="sha384-50oBUHEmvpQ+1lW4y57PTFmhCaXp0ML5d60M1M7uH4+nqUivzIebhndOJK28anvf" crossorigin="anonymous">
   
    <link rel="stylesheet" href=" https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.0.0-beta3/css/all.min.css">

    <!--https://cdnjs.com/libraries/font-awesome para cdn de fontawesome-->

   
    <link rel="stylesheet" type="text/css" href='web/css/styles.css'>
    <link rel="stylesheet" type="text/css" href="web/css/stylesmostrar.css">


    <link rel="stylesheet" type="text/css" href="web/css/bootstrap.min.css">
    <link rel="stylesheet" type="text/css" href="web/css/bootstrap-grid.min.css">
    <link rel="stylesheet" type="text/css" href="web/css/bootstrap-reboot.min.css">
    <link rel="stylesheet" type="text/css" href="bootstrap/css/bootstrap.min.css">
    <link rel="stylesheet" type="text/css" href="web/css/stylesmostrar.css">

    <?php /*
    <!--<link rel="stylesheet" type="text/css" href='web/css/styles.css'>
    <link rel="stylesheet" type="text/css" href='web/css/forms.css'>-->
    <!--https://www.baulphp.com/como-usar-include-y-require-en-php-ejemplos/ -->
    */?>

  </head>
  
      <?php  include_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades.inc'; ?>  
      <?php  include_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades2.inc'; ?>

  <body>
 <header title="Castillos del Loira por Adrián Laya García">
  <div class="container-fluid">
      <?php  require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/navegacionprincipal.inc';?>
  </div>
</header>




    <div id="container_cabecera" class="container-fluid">
        <?php  include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/scripts/js_cardDestinoHome.inc';?>

        <?php  include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/general/faldon_Bienvenida.inc';?>
                
    </div>

    
  <?php // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/destinos/elTiempoLocalidadUsuario.php';?>  
  <?php // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/enlaces/directos.inc';?>
  
      
  <!-- <h1>Viaja a más sitios sin pagar más</h1>-->


  <?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/home/carrusel_principal.inc';?>


           
   

<?php /*

    if(!empty($_SESSION['perfil'])){

        if($_SESSION['perfil']['roll']=='cliente'){ ?>
          <div class="fg">
            <div class="row">
              <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app\plantillas\bloques\destinos\elTiempoLocalidadUsuario.php';?>
              </div>
            </div>
          </div>
          <div id="directos">
            <a href="index.php?ctl=cuadrobuscadoresnegocios"><i class="fas fa-utensils"></i> Bares y Restaurantes!</a>
            <a href="index.php?ctl=mostrartodosdestinos"><i class="fas fa-umbrella-beach"></i>  Toda la Agenda del Verano 2022</a>
          </div>
          <?php
        }

    }else{ ?>
      <div class="container fg" style="max-width: 1840px;">
          <div class="row">
            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
              <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app\plantillas\bloques\destinos\elTiempoLocalidadUsuario.php';?>
            </div>
          </div>

          <div class="row">
            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12" style="padding: 1em;">
              <div id="directos" class="row">
                <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-12 col-12">
                  <a href="index.php?ctl=cuadrobuscadoresnegocios"><i class="fas fa-utensils"></i> Bares y Restaurantes!</a>
                </div>

                <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-12 col-12">
                  <a href="index.php?ctl=mostrartodosdestinos"><i class="fas fa-umbrella-beach"></i> Agenda del Verano 2022</a>
                </div>
              </div>
            </div>
          </div>
      </div>



      </div><?php
    } */ ?>




<script src="http://maps.google.com/maps/api/js?sensor=false"></script>


<?php /*
<div class="container" style="max-width: 1400px">
    <div class="row">
        <?php //include $_SERVER['DOCUMENT_ROOT'] . '\Verano-2023/app\utilidades\scripts\css_navegacion_filtros.inc'; ?>
        <?php //include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/navegacion/navegacion_Izda.inc'; ?>
    </div>
</div>
*/ ?>
            
     

                

             
<?php

if (!empty($_SESSION['perfil'])) {
    if ($_SESSION['perfil']['roll'] === "cliente") { ?>
        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12"><?php }
    } else { ?><div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12"><?php }?>
            
              <div id="contenido">
                  <?php /*el id css facilita (si se define) la definición del aspecto visual
                      de su contenido
                      La variable $contenido hará que se muestre la plantilla concreta, el
                      contenido concreto, según la solicitud realizada por el usuario */
                      ?>
                  <?= $contenido ?>

                  <div class="ab"></div>
              </div>
            </div>
          

  <?php if (!empty($_SESSION['perfil'])) {
      if ($_SESSION['perfil']['roll'] === "cliente") { ?>
              <div class="col-xl-2 text-center col-lg-2 col-md-12 col-sm-12 col-12">
                <?php // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/navegacion/navegacion_Derecha.inc';?>
              </div><?php }
      } else { ?>
          <div class="col-xl-2 text-center col-lg-2 col-md-12 col-sm-12 col-12">
            <?php //include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/navegacion/navegacion_Derecha.inc';?>
          </div><?php } ?> 
  
</div>
      </div>

</div>
                            
      

</form>


      <style>

      .a{
        background-image:url("app/plantillas/fondo3.jpg"); background-size: cover; 
        color: #006293; text-decoration: underline #006293 2px; margin:1em auto; height: 220px;}
      </style>


</body>

<footer style="margin-top: 1em;">
  <?php // require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/oficinasturismoOK.inc';?>

  <div class="row">
    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
        <div id="copyright">     
        <h6>Adrián Laya García © 2023  <br> - superlaya50@gmail.com- </h6>
        </div> 
    </div>
  </div>
</footer>




<div class="todowwwwwwwwwwwwwww"></div>


    
    <script src="bootstrap/js/jquery-3.5.1.slim.min.js"></script>
    <script src="boostrap/js/popper.min.js"></script>
    <script src="bootstrap/js/bootstrap.min.js"></script>
    <script src="web/js/sweetAlert/libreria_sweetAlert.js"></script>
    <script
  src="https://code.jquery.com/jquery-3.4.1.min.js"
  integrity="sha256-CSXorXvZcTkaix6Yvo6HppcZGetbYMGWSFlBw8HfCJo="
  crossorigin="anonymous"></script>

  <script src="https://unpkg.com/sweetalert/dist/sweetalert.min.js"></script>
             
  
</html>






<script>
  // Desplegar tabla de Info de estado de asientos del Bus que va a un Destino
    $("#desplegar_tabla_Info_bus").click(function() {
			$("#tabla_info_bus").toggle();
		});
</script>


<script>
	$(document).ready(function() {		// Necesário encerrar bajo .ready(function)	
		// Función que esconde el contenido de "compañía de bus"

   

    $("#button_aparecerBotones").click(function() {	
			$(".aparecerbotones").toggle();
		});

    $("#button_aparecer").click(function() {	
			$("#filtros").toggle();
      $("#dondecomer").css("display", "none");
      //window.location.href="index.php?ctl=inicio";
		});

    $("#button_aparecerdondecomer").click(function() {	
			$("#dondecomer").toggle();
      $("#filtros").css("display", "none");
      //window.location.href="index.php?ctl=comerdestino";
		});


    $(".button_aparecernegocios").click(function() {
      $(this).children("div").toggle();
		});




	});


  /* Desabilita el control de atrás en el navegador */
  /*
  $(document).ready(function() {
            function disableBack() {
                window.history.forward()
            }
            window.onload = disableBack();
            window.onpageshow = function(e) {
                if (e.persisted)
                    disableBack();
                    alert("use los controles de la aplicacion")
            }
        });
*/
</script>


<style>
body{
  background-image:url("web/imagenes/fondos/fondo5.jpg"); 
  background-size: cover; 
  background-repeat: no-repeat; 
}

.fg {
  background-image: url(../Verano-2023/web/imagenes/fondos/fondo3vuelt.jpg);
  background-size: cover;
}

#directos a{ 
  background-color: #EFEFEF; 
  text-align:center; border: 1px solid black; 
  padding:0em 1em; border-radius: 5px; }
.container{padding: 0em;
}


  #filtros_buscadores input,#filtros_buscadores select {
  border: 1px solid #006293;
  border-radius: 5px;
  padding: 0.2em;

  }

  .carousel-item{width: 100%;}

  li{list-style: none;}
  li a{color:#006293; }



  #filtros,#dondecomer,.aparecernegocios{
      display: none;
  }


  .container{max-width: 100%;}

  footer{background-color: #FFFFFF;}
  footer h4{font-weight: 400; text-align: center;   }
  h2{margin: 0.5em;  color:#006293;}
  h4{color:#006293;}
  footer a{color: #999999; }footer a:hover{color: #212721;}
  footer, footer h6{ text-align: center;}
  footer h6 a{font-weight: 400;}

</style>






 




<!--https://www.journaldev.com/5258/jquery-next-sibling-jquery-previous   Cojonuda para efectos-->









































<?php /*
<!--
  Para la Versión2
      <div>
        <a href="index.php?ctl=nuevobus">Nuevo Personal Agencia Viajes</a> |
        <a href="index.php?ctl=modificarbus">Modificar Personal AgenciaViajes</a> |
        <a href="index.php?ctl=eliminarbus">Eliminar Personal Agencia Viajes</a> |
        <a href="index.php?ctl=mostrarbuses">Mostrar todo el personal de las Agencias de Viejes</a> |
      </div>
-->


<!--
  <li><a class="nav-link" href="index.php?ctl=#"><i class="fas fa-sign-in-alt"></i> Reserva Grupos</a></li>
  <li><a class="nav-link" href="index.php?ctl=#"><i class="fas fa-sign-in-alt"></i> Destinos culturales</a></li>

  <li><a class="nav-link" href="index.php?ctl=#"><i class="fas fa-sign-in-alt"></i> Por ser socio de tu agencia de Viajes</a></li>
  <li><a class="nav-link" href="index.php?ctl=#"><i class="fas fa-sign-in-alt"></i> Info de pasajeros de un destino para agencia de Viajes</a></li>
  <li><a class="nav-link" href="index.php?ctl=#"><i class="fas fa-sign-in-alt"></i> Últimos dias con descuento para salvar el viaje</a></li>
  <li><a class="nav-link" href="index.php?ctl=#"><i class="fas fa-sign-in-alt"></i> Cupones descuento por ser de una agencia de Viajes</a></li>
  <li><a class="nav-link" href="index.php?ctl=#"><i class="fas fa-sign-in-alt"></i> Proponnos tu Destino</a></li>
  <li><a class="nav-link" href="index.php?ctl=#"><i class="fas fa-sign-in-alt"></i> Proximos sorteos</a></li>
  <li><a class="nav-link" href="index.php?ctl=#"><i class="fas fa-sign-in-alt"></i> Destinos de más de 1 dia</a></li>



  <li class="nav-item dropdown">
              <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false"><i class="fas fa-user"></i> Qué hacer</a>
                <div class="dropdown-menu" aria-labelledby="navbarDropdown">
                    <a class="dropdown-item" href="index.php?ctl=#"><i class="fas fa-umbrella-beach"></i> Donde comer</a>
                    <a class="dropdown-item" href="index.php?ctl=#"><i class="fas fa-eye"></i> Actividades</a>
                    <a class="dropdown-item" href="index.php?ctl=#"><i class="fas fa-edit"></i> Rutas y paseos</a>
                    <a class="dropdown-item" href="index.php?ctl=#"><i class="fas fa-trash-alt"></i> No te pierdas</a>
                </div>
  </li>
-->

<!--
  <li><a class="nav-link"
        style='background-image:url("web/imagenes/icons/puntos.png");
          background-size: cover;
          text-align: center;
          margin-top: 1.9em;
          width: 2.5em;
          height: 2.3em;'> 30</a>
    </li>

    <li class="nav-link"
     class="nav-link"
        style='background-image:url("web/imagenes/icons/bolsa.png");
          background-size: cover;
          text-align: center;
          margin-top: 1.9em;
          width: 2.5em;
          height: 2.3em;'> 4</li>


          <style>
    h1{  box-sizing: border-box;
    max-width: 620px;
    position: absolute;
    top: 27%;
    z-index: 2;
    width: 100%;
    color: #fff;
    font-size: 2.5em;
    line-height: 55px;
    margin: 0;
    white-space: break-spaces;
    padding-right: 16px;
}
</style>
-->
*/
?>