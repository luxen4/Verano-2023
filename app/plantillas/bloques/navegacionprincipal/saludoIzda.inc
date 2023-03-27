<?php
if(!empty($_SESSION['perfil'])){ 
if($_SESSION['perfil']['roll']=='cliente'){;
  ?><li class="saludo_izda">
    <?php echo('<span class="nav-link fas fa-user" > Hola ' . pasarUtf8($_SESSION['perfil']['nombre']) . '!</span>');?></li><?php 
}

if($_SESSION['perfil']['roll']=='agenciaviajes'){
  ?><li class="saludo_izda"><?php echo('<span class="nav-link fas fa-user" > Hola ' . pasarUtf8($_SESSION['perfil']['name']) . '!</span>');?></li><?php 
}

if($_SESSION['perfil']['roll']=='agenciabuses'){
  ?><li class="saludo_izda"><?php echo('<span class="nav-link fas fa-user" > Hola ' . pasarUtf8($_SESSION['perfil']['name']) . '!</span>');?></li><?php 
}

if($_SESSION['perfil']['roll']=='admin'){
  ?><li class="saludo_izda"><?php echo('<span class="nav-link fas fa-user" > Hola ' . ($_SESSION['perfil']['nombre']) . '!</span>');?></li><?php 
}

}; ?>