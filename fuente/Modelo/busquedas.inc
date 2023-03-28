<?php 
use miId\fuente\Repositorio\DestinoRepositorio;
use miId\fuente\Repositorio\AgenciaViajesRepositorio;

      if(isset($_POST['consultarporfecha'])){
        $datos=$_POST['datos']; 
        $fecha_viaje=$datos['fechaviaje'];
        include_once __DIR__ . '/../../fuente/Repositorio/destinoRepositorio.inc';
        $destinos = (new DestinoRepositorio())->todosDestinosPorFecha($fecha_viaje); 

        $_SESSION['destinosfiltr']=$destinos;  //filtradosporfecha
        ?><script>window.location.href="index.php?ctl=destinosporfechafiltrados";</script><?php
      }


       if(isset($_POST['consultarpordia'])){
        $datos=$_POST['datos'];
        $dia_Semana=$datos['diasemana'];

        include_once __DIR__ . '/../../fuente/Repositorio/destinoRepositorio.inc';
        $destinos = (new DestinoRepositorio())->todosDestinosPorDia($dia_Semana); 

     
        $_SESSION['destinosfiltr']=$destinos; 
        ?><script>window.location.href="index.php?ctl=destinospordiafiltrados";</script><?php
        
      }

      
      if(isset($_POST['consultarpordestino'])){
        $datos=$_POST['datos'];
        $ref_Localidad=$datos['lugardestino'];

        include_once __DIR__ . '/../../fuente/Repositorio/destinoRepositorio.inc';
        $destinos = (new DestinoRepositorio())->todosDestinosPorDestino($ref_Localidad);  

        $_SESSION['destinosfiltr']=$destinos; 
        ?><script>window.location.href="index.php?ctl=destinospordestinofiltrados";</script><?php

      }


      //Esto es porque estamos en otra pantalla diferente de la de inicio y necesita de nuevos submits
      if(isset($_POST['consultarporagenciaviajes'])){ 
        $datos=$_POST['datos']; //var_dump($datos); die();
        $ref_AgenciaViajes=$datos['agenciaviajes']; //var_dump($ref_AgenciaViajes);die();
        include_once __DIR__ . '/../../fuente/Repositorio/destinoRepositorio.inc';
        $destinos = (new DestinoRepositorio())->todosDestinosPorAgenciaViajes($ref_AgenciaViajes); 
        //var_dump($destinos);die();
        $_SESSION['destinosfiltr']=$destinos;  //filtradosporfecha
        //var_dump($_SESSION['destinosfiltr']); die();
        ?><script>window.location.href="index.php?ctl=destinosporagenciaviajesfiltrados";</script><?php
      }


    if(isset($_POST['dondecomerlugar'])){
    
      $datos=$_POST['datos']["codlocalidad"]; //var_dump($datos);die(); 
      $_SESSION['datosdestino']=$datos; 
      //var_dump($_SESSION['datosdestino']);
      //die();?>
      <script>window.location.href="index.php?ctl=comerdestino";</script><?php
    }
?>

    <?php // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques\partesControladores\contratar_modificar_cancelar.inc'; ?><?php



if(isset($_POST['contratar']) ){ 
    $datos=$_POST['datos']; 
    $_SESSION['datos']=$datos; 
    
    $ref_Destino=$datos['destinoseleccionado'];

    /* Hacer una sesión con los datos del Destino que se solicita. */
    include_once __DIR__ . '/../../fuente/Repositorio/destinoRepositorio.inc';
    $info_Destino = (new DestinoRepositorio())->infoDestino($ref_Destino); 
    $_SESSION['info_Destino']['ref_Destino']=$info_Destino[0]->ref_Destino;
    $_SESSION['info_Destino']['nombre_Localidad']=$info_Destino[0]->nombre_Localidad; // var_dump($_SESSION['info_Destino']); 
    $_SESSION['info_Destino']['provincia']=$info_Destino[0]->provincia;
    $_SESSION['info_Destino']['comunidad']=$info_Destino[0]->comunidad;
    $_SESSION['info_Destino']['pais']=$info_Destino[0]->pais;
    $_SESSION['info_Destino']['dia_Semana']=$info_Destino[0]->dia_Semana;
    $_SESSION['info_Destino']['fecha_Viaje']=$info_Destino[0]->fecha_Viaje;


    /* Hacer una consulta con la ref_Destino y devuelva el nombre de la agencia de Viajes */
    $nombre_AgenciaViajes = (new DestinoRepositorio())->nombreAgenciaViajes($ref_Destino); 
    //var_dump($nombre_AgenciaViajes);die();



    $_SESSION['info_Destino']['nombre_AgenciaViajes']=$nombre_AgenciaViajes[0]->nombre_Agencia;

    $_SESSION['info_Destino']['kilometrosIdaVuelta']=$info_Destino[0]->kilometrosIdaVuelta;
    $_SESSION['info_Destino']['euros']=$info_Destino[0]->euros;
    $_SESSION['info_Destino']['matricula']=$info_Destino[0]->matricula;
   // var_dump($info_Destino);  //die();

   // header('Location: index.php?ctl=motrarplantabus');
    ?><script>window.location.href="index.php?ctl=motrarplantabus";</script><?php

  }


     if (isset($_POST['modificardestino'])) {  ?><script>alert("jhbkjbkj");</script> <?php
            $datos=$_POST['datos'];//var_dump($datos);die();
            $ref_Destino=$datos['destinoseleccionado'];
            $infoDestino=(new DestinoRepositorio())->infoDestino($ref_Destino);
            $_SESSION['infoDestino']=$infoDestino;
            

        ?><script>window.location.href="index.php?ctl=modificardestino";</script><?php
    }

    if (isset($_POST['cancelardestino'])) { 
       

       // if(isset($_POST['asegura'])){
            $datos=$_POST['datos']; 
            $ref_Destino=$datos['destinoseleccionado'];
            $obj=(new DestinoRepositorio())->borrarUnDestino($ref_Destino);

        if ($obj==true) {
          ?><script>window.location.href="index.php?ctl=inicio/";</script><?php
        } else {
            ?><script>alert("No se ha podido eliminar el destino seleccionado!");</script><?php
        }

       // }else{ ?><script>alert("Are you sure!");</script> <?php

       // }

    
    }


    if (isset($_POST['ver_folleto'])) { 
      $datos=$_POST['datos']; 
      $ref_AgenciaViajes=$datos["ref_AgenciaViajes"]; 
    
      require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/AgenciaViajesRepositorio.inc';

      $obj = (new AgenciaViajesRepositorio())->folletoAgenciaViajes($ref_AgenciaViajes); ?><pre><script>//alert("¡Enhorabuena, ya forma parte de nosotros!")</script></pre><?php
          $nombre_Folleto=$obj[0]->nombre_Folleto;

      if(!empty($nombre_Folleto)){ //echo "muestro el folleto"; echo $nombre_Folleto; die();?>
          <script>//alert("Le mostramos el Folleto");
          window.location.href ="web/imagenes/folletos/<?php echo $nombre_Folleto; ?>";</script><?php
      }else{?><script>alert("No tiene Folleto"); window.location.href="index.php?ctl=mostraragenciaviajes";</script><?php }      
  }
    ?>
      