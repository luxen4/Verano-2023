    <?php use miId\fuente\Repositorio\DestinoRepositorio;
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

    
         if (isset($_POST['modificardestino'])) {  ?><?php
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
        ?>