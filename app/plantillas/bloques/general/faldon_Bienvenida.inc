
 <!--   <div id="bienvenida" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">

                       

<?php   if(!empty($_SESSION['perfil'])){
                             
              if($_SESSION['perfil']['roll']==="admin"){
                  //echo("Hola " . $_SESSION['perfil']['nombre']. ', estás conectado como <br><span class="admin"> ***ADMINISTRADOR***</span>');
                  // include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/utilidades/utilidades.inc'; 
                  echo('<span class="bienvenido">Hola ' . pasarUtf8($_SESSION['perfil']['nombre']) . ', BIENVENIDO!,<br><span class="adminnnnn"> ***ADMINISTRADOR***'); //   
                }

              if($_SESSION['perfil']['roll']==="agenciabuses"){
                  //echo('<span class="letra">Hola ' . $_SESSION['perfil']['name'].', estás conectado como <br><span class="admin"> ***AGENCIA DE BUSES***</span></span>');
                  echo('<span class="letra">Hola ' . $_SESSION['perfil']['name'] . ', BIENVENIDO!');
                }

              if($_SESSION['perfil']['roll']==="agenciaviajes"){
                  //echo('<span class="letra">Hola ' . $_SESSION['perfil']['name']. ', estás conectado como <br><span class="admin"> ***AGENCIA DE VIAJES***</span></span>');
                  echo('<span class="letra">Hola ' . $_SESSION['perfil']['name'] . ', BIENVENIDO!');
                }?>



                  <div class="row">
                      <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                <?php
                                if(!empty($_SESSION['perfil'])){
                                  if ($_SESSION['perfil']['roll']=="cliente") {
                                      //echo("Hola " . $_SESSION['perfil']['nombre']. ", ¡Bienvenido! ");}
                                    echo('<span class="bienvenido">Hola ' . $_SESSION['perfil']['nombre'] . ', BIENVENIDO!');}
                                } 
                                ?>
                      </div>

                    <?php            
                            if($_SESSION['perfil']['roll']==="cliente"){?>
                                      <a class="navbar-brand" id="tus_destinos" href="index.php?ctl=tusdestinoscontratados">Tus destinos contratados</a>
                    <?php   }?>


                  </div>

                       
    </div>
  
  -->

    <?php }?>