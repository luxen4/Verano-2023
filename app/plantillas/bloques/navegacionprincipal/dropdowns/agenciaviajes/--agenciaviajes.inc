
<?php 

//var_dump($_SESSION['perfil']); die();

?>


<li class="nav-item dropdown">
      <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" 
      role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false"><i class="fas fa-umbrella-beach">
        
      </i> DESTINOS <?php echo $_SESSION['perfil']['name']; ?> <br> (Interactuar) </a>
          <div class="dropdown-menu" aria-labelledby="navbarDropdown">
            <a class="dropdown-item" href="index.php?ctl=nuevodestino"><i class="fas fa-umbrella-beach"></i> Nuevo Destino</a> 
          <!--
            <a class="dropdown-item" href="index.php?ctl=modificardestino">Modificar Destino (mirar si se puede suprimir)</a> 
            <a class="dropdown-item" href="index.php?ctl=eliminardestino">Eliminar Destino (mirar si se puede suprimir)</a> 
          -->
            <a class="dropdown-item" href="index.php?ctl=motrartodosdestinosdeagenciaviajeslogeada"><i class="fas fa-eye"></i> Destinos de <?= $_SESSION['perfil']['name']; ?></a> 
    
            
<?php
// Si no hay login
    if (empty($_SESSION['perfil'])){ ?>
      <div class="dropdown-divider"></div>
      <a class="dropdown-item" href="index.php?ctl=mostrartodosdestinos"><i class="fas fa-umbrella-beach"></i> Destinos de la plataforma</a><?php
    } 
?>


      <!--  <div class="dropdown-divider"></div>
            <a class="dropdown-item" href="#">Otros</a>-->
          </div>
</li>

<!-- <li class="nav-item dropdown">
      <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false"><i class="fas fa-store"></i> Su Agencia</a>
          <div class="dropdown-menu" aria-labelledby="navbarDropdown">
              <a class="dropdown-item" href="index.php?ctl=infoagenciaviajes"><i class="fas fa-eye"></i> Perfil</a> 
             <a class="dropdown-item" href="index.php?ctl=modificacioninfoagenciaviajeslogeada"><i class="fas fa-edit"></i> Modificar Perfil</a> -->
            <!-- <a class="dropdown-item" href="index.php?ctl=eliminarAgenciaviajesLogeada"><i class="fas fa-trash-alt"></i> Darse de baja</a>--> 
              
            <!--  <div class="dropdown-divider"></div>
              <a class="dropdown-item" href="#"><i class="fas fa-users"></i> Personal Agencia Viajes (ampliable V2)</a>-->

            <!--  <div class="dropdown-divider"></div>
              <a class="dropdown-item" href="#">Otros (ampliable V2)</a>
          </div>
</li>-->