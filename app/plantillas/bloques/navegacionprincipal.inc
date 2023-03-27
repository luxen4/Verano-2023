<link rel="stylesheet" type="text/css" href='web/css/styles.css'>
<link rel="stylesheet" type="text/css" href="web/css/bootstrap.min.css">
<link rel="stylesheet" type="text/css" href="web/css/bootstrap-grid.min.css">
<link rel="stylesheet" type="text/css" href="web/css/bootstrap-reboot.min.css">
<link rel="stylesheet" type="text/css" href="bootstrap/css/bootstrap.min.css">
<link rel="stylesheet" type="text/css" href="web/css/stylesmostrar.css">

<div class="container">

<nav class="navbar navbar-expand-lg navbar-light "><!--bg-light-->

<button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarNavDropdown" aria-controls="navbarNavDropdown" aria-expanded="false" aria-label="Toggle navigation">
  <span class="navbar-toggler-icon"></span>
</button>
<div class="collapse navbar-collapse" id="navbarNavDropdown">

  <ul class="navbar-nav">

    <div class="flex">
      <li id="logo"><a class="navbar-brand" href="index.php?ctl=inicio/">PLAYAS-2023</a></li><!--sr-only-->
          <?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/navegacionprincipal/saludoIzda.inc'; ?>
    </div>
    
      <!--<li><a class="nav-link" href="index.php?ctl=inicio/#situarprimerarticulo"><i class="fas fa-home"></i> eInicio</a></li>-->
      <li><a class="nav-link" href="index.php?ctl=inicio/"><i class="fas fa-home"></i>Inicio</a></li>
      <li><a class="nav-link" href="index.php?ctl=cuadrobuscadoresdestinos"><i class="fas fa-umbrella-beach"></i> Buscador Destinos</a></li>
   
    

<?php  
// Si no hay loging o se loguea como Cliente

if(empty($_SESSION['perfil'])){?>
  <li><a class="nav-link" href="index.php?ctl=mostraragenciaviajes"><i class="fas fa-store"></i>Todas las Agencias de Viajes</a></li>
  
  <!--<li class="nav-item dropdown"> Para seguir desarrollando
          <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" 
          role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false"><i class="fas fa-users"></i> Juegos</a>
              <div class="dropdown-menu" aria-labelledby="navbarDropdown">
                <a class="nav-link" href="index.php?ctl=sudoku"><span style="color:red"><i class="fa-solid fa-chess-board"></i> SUDOKU de hoy</span> </a>
                <div class="dropdown-divider"></div>
                <a class="dropdown-item" href="#"><i class="fas fa-store-alt"></i> Parejas</a> 
                <div class="dropdown-divider"></div>
                <a class="dropdown-item" href="#"><i class="fas fa-store-alt"></i> Brisca</a> 

              <!--  <div class="dropdown-divider"></div>
                <a class="dropdown-item" href="#">Otros</a>
              
  </li>-->
  
  <li><a class="nav-link" href="https://www.eltiempo.es/" target="_blank"><i class="fa-solid fa-cloud-sun"></i> El tiempo</a></li><?php

}elseif($_SESSION['perfil']['roll']=='cliente'){ ?>
  <li><a class="nav-link" href="index.php?ctl=mostraragenciaviajes"><i class="fas fa-store"></i>Todas las Agencias de Viajes</a></li><?php
}?>   




    <?php



if(empty($_SESSION['perfil'])){?> 
    <li><a class="nav-link" href="index.php?ctl=loginusuarios" ><i class="fas fa-users"></i> LOGIN </a></li>

  <?php // require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/navegacionprincipal/dropdowns/logins/logins.inc'; ?>

        


        <!--Cliente que más viaja-->


 <!-- <li> <a class="nav-link seiscientos" href="index.php?ctl=nuevacuentacliente"><i class="fas fa-sign-in-alt"></i> Nueva Cuenta</a></li> -->

<!--
  <li style="margin-left: 14em;" class="nav-item dropdown">
    <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false"><i class="fas fa-umbrella-beach"></i> Destinos(Version-2)</a>
      <div class="dropdown-menu" aria-labelledby="navbarDropdown">
          <a class="dropdown-item" href="index.php?ctl=#"><i style="color:red;" class="fa-solid fa-percent"></i> Con descuento</a>
          <a class="dropdown-item" href="index.php?ctl=destinosMasVendidos"><i class="fas fa-check"></i> Más vendidos</a>
          <a class="dropdown-item" href="index.php?ctl=#"><i class="fas fa-clock"></i> Quedan 3 días</a> 
          <a class="dropdown-item" href="index.php?ctl=#"><i class="fa fa-calendar"></i> Proxima semana</a> 
          <a class="dropdown-item" href="index.php?ctl=destinosmaseconomicosencards"><i class="fas fa-euro-sign"></i> Más económicos (14)</a> 
      </div>   
</li>
-->
  </div>
<?php }; ?>

  

<?php  if(!empty($_SESSION['perfil'])){




if (!empty($_SESSION['perfil'])) {
  if ($_SESSION['perfil']['roll']=="propietario") {?>

<?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/navegacionprincipal/dropdowns/propietario/propietario.inc'; ?>


<?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/navegacionprincipal/dropdowns/clientes/clientes.inc'; ?>

<!--
<li class="nav-item dropdown">
    <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false"><i class="fas fa-bus-alt"></i> Area de Buses</a>
        <div class="dropdown-menu" aria-labelledby="navbarDropdown">
                  <a class="dropdown-item" href="index.php?ctl=nuevobus"><i class="fas fa-bus"></i> Nuevo Bus</a> 
                 <a class="dropdown-item" href="index.php?ctl=nuevobus">Eliminar Bus (Hecho)</a>-->
                <!-- <a class="dropdown-item" href="index.php?ctl=modificarbus">Modificar un Bus (Hecho)</a>
                  <a class="dropdown-item" href="index.php?ctl=todosbusesdeunaagenciabuses"><i class="fas fa-eye"></i> Todos los Buses</a> 
        </div>
</li>
  -->

<li><a class="nav-link" href="index.php?ctl=deslogearCliente"><i class="fas fa-sign-out-alt"></i> Cerrar Sesión</a></li>
<li class="saludo"><?php echo('<span class="nav-link fas fa-user" > Hola ' . pasarUtf8($_SESSION['perfil']['nombre']) . '!</span>');?></li>

<?php }
}















 





if($_SESSION['perfil']['roll']=="admin"){?>
  <!--  <li class="nav-item margin2"><a class="nav-link" href="index.php?ctl=borrarcliente">Borrar Cliente</a></li> -->
  <!--  <li class="nav-item margin2"><a class="nav-link" href="index.php?ctl=borrartodosclientes">Borrar todos los Clientes</a></li>-->
  <!--  <li class="nav-item margin2"><a class="nav-link" href="index.php?ctl=mostrartodosclientes">Mostrar todos los Clientes</a></li>-->

  <li><a class="nav-link" href="index.php?ctl=mostrartodosdestinos"><i class="fas fa-umbrella-beach"></i> Destinos en tabla</a></li>



  
  <?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/navegacionprincipal/dropdowns/admin/Admin_Propietarios.inc'; ?>
  <?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/navegacionprincipal/dropdowns/admin/Admin_Localidades.inc'; ?>


  <?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/navegacionprincipal/dropdowns/admin/Admin_Clientes.inc'; ?>
  
  <?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/navegacionprincipal/dropdowns/admin/Admin_Agencias.inc'; ?>

  <?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/navegacionprincipal/dropdowns/admin/Admin_Barrestaurantes.inc'; ?>


  <li><a class="nav-link" href="index.php?ctl=deslogearCliente"><i class="fas fa-sign-out-alt"></i> Cerrar Sesión</a></li>
  <li class="saludo"><?php echo('<span class="nav-link fas fa-user" > Hola ' . pasarUtf8($_SESSION['perfil']['nombre']) . '!</span>');?></li>

<?php }}; 




if (!empty($_SESSION['perfil'])) {
  if ($_SESSION['perfil']['roll']=="agenciabuses") {?>

<li><a class="nav-link" href="index.php?ctl=mostrartodosdestinos"><i class="fas fa-umbrella-beach"></i> Destinos</a></li>
    <?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/navegacionprincipal/dropdowns/agenciabuses/agenciabuses.inc'; ?>
<li><a class="nav-link" href="index.php?ctl=deslogearCliente"><i class="fas fa-sign-out-alt"></i> Cerrar Sesión</a></li>
<li class="saludo"><?php echo('<span class="nav-link fas fa-user" > Hola ' . pasarUtf8($_SESSION['perfil']['name']) . '!</span>');?></li>




<?php }
}


if (!empty($_SESSION['perfil'])) {
  if ($_SESSION['perfil']['roll']=="agenciaviajes") {?>
      <?php // require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/navegacionprincipal/dropdowns/agenciaviajes/--agenciaviajes.inc'; ?>

      <li><a class="nav-link" href="index.php?ctl=motrartodosdestinosdeagenciaviajeslogeada"><i class="fas fa-eye"></i> Destinos/<?= $_SESSION['perfil']['name']; ?></a></li>                           
      <li class="nav-item dropdown">
          <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false"> Su Agencia</a>
              <div class="dropdown-menu" aria-labelledby="navbarDropdown">
                  <a class="dropdown-item" href="index.php?ctl=infoagenciaviajes">Perfil</a> 
                  <a class="dropdown-item" href="index.php?ctl=modificacioninfoagenciaviajeslogeada">Modificar Perfil</a> 
                  <a class="dropdown-item" href="index.php?ctl=cambiousernamecontrasenaagenciaviajes">Username/Password</a> 
                  <a class="dropdown-item" href="index.php?ctl=eliminarAgenciaviajesLogeada">Darse de baja</a> 
                  
                  <div class="dropdown-divider"></div>
                  <a class="dropdown-item" href="#">Personal Agencia Viajes (ampliable V2)</a>

                <!--  <div class="dropdown-divider"></div>
                  <a class="dropdown-item" href="#">Otros (ampliable V2)</a>-->
              </div>
      </li>

        <!--Por comodidad se necesita volver a los formularios de inscripción-->

      <li><a class="nav-link" style="border-right: 1px solid #006293;" href="index.php?ctl=deslogearCliente"><i class="fas fa-sign-out-alt"></i> Cerrar Sesión</a></li>
      <li class="saludo"><?php echo('<span class="nav-link fas fa-user" > Hola ' . pasarUtf8($_SESSION['perfil']['name']) . '!</span>');?></li><?php };



  if (!empty($_SESSION['perfil'])) {
      if ($_SESSION['perfil']['roll']=="cliente") {?> 
        <li ><a class="nav-link" href="index.php?ctl=sudoku"><span style="color:red"><i class="fa-solid fa-chess-board"></i> SUDOKU de hoy</span> </a></li>

        <?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/navegacionprincipal/dropdowns/clientes/clientes.inc'; ?>

        <li><a class="nav-link" style="border-right: 1px solid #006293;"  href="index.php?ctl=deslogearCliente"><i class="fas fa-sign-out-alt"></i> Cerrar Sesión</a></li>
        <li class="saludo"><?php echo('<span class="nav-link fas fa-user"  > Hola ' . pasarUtf8($_SESSION['perfil']['nombre']) . '!</span>');?></li><?php    }
  }

}; ?>


  </ul>


</nav>

</div>


<script src="bootstrap/js/jquery-3.5.1.slim.min.js"></script>
    <script src="boostrap/js/popper.min.js"></script>
    <script src="bootstrap/js/bootstrap.min.js"></script>
    <script src="web/js/sweetAlert/libreria_sweetAlert.js"></script>
    <script
  src="https://code.jquery.com/jquery-3.4.1.min.js"
  integrity="sha256-CSXorXvZcTkaix6Yvo6HppcZGetbYMGWSFlBw8HfCJo="
  crossorigin="anonymous"></script>

  <script src="https://unpkg.com/sweetalert/dist/sweetalert.min.js"></script>



<!--Idioma <img style="width:100px; height: 60px; background-color:red;" src="web/imagenes/banderas/Ingles.png" alt="Logo idioma Inglés">-->

<style>
@media only screen and (min-width: 100px) and (max-width: 990px) {
  .nav-link{border-top: 1px solid black;}
  .nav-link:hover{background-color:  #EFEFEF;}
  .navbar-expand-lg .navbar-nav .dropdown-menu { position: absolute; margin:0em}
  .dropdown-item{padding: 0rem 1em;}
  

}  .dropdown-item:hover{background-color: yellow;}
</style>

