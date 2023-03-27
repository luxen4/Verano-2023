<?php
namespace miId\fuente\Controlador;

use miId\fuente\Modelo\AgenciaViajes;
use miId\fuente\Repositorio\AgenciaBusesRepositorio;
use miId\fuente\Repositorio\AgenciaViajesRepositorio;

class AgenciaViajesController
{
    // Función que Da de Alta una Agencia deviajes.
    public function nuevaAgenciaViajes()
    {
        require __DIR__ . '/../../fuente/Repositorio/AgenciaBusesRepositorio.inc'; // Necesito todas las Agencias de Buses y extraer datos para el Select
        $agenciasBuses = (new AgenciaBusesRepositorio())->todasAgenciasDeBuses();

        //var_dump($agenciasBuses);die();

        if (isset($_POST['nuevaAgenciaViajes'])) { $datos = $_POST['datos'];                                                                              //Falta de hacer que las contraseñas sean iguales                                                                                                         //$datos = html_entity_decode($datos, ENT_QUOTES | ENT_HTML401, "UTF-8");  // Solo para string                                                                 //$datos = htmlEntities($_POST['datos']);
            if (isset($datos['estaseguro'])) {
                $hash = password_hash($datos['pwd'], PASSWORD_DEFAULT); //var_dump($hash);die();
                try {
                    require __DIR__ . '/../../fuente/Modelo/AgenciaViajes.inc';
                    $agenciaViajes = new AgenciaViajes($datos);

                    require __DIR__ . '/../../fuente/Repositorio/AgenciaViajesRepositorio.inc';

                    if(!empty($datos['companiabus'])){
                        $datos = (new AgenciaViajesRepositorio())->nuevaAgenciaViajes($datos, $hash);
                        $cod_AgenciaViajes=(new AgenciaViajesRepositorio())->codigoAgenciasDeViajes2($hash);

                            if(empty($_POST['compania_bus'])){
                               ?><script>alert("No ha seleccionado una compañía de buses complementaria.");</script><?php
                            }else{
                                $companiasBus=$_POST['compania_bus']; $numCompaniasBusComplementarias=count($companiasBus);              
                                for($i=0; $i<$numCompaniasBusComplementarias; $i++){ 
                                    $insertarRelacionAgencias=(new AgenciaViajesRepositorio())->relacionAgenciasViajesBuses($cod_AgenciaViajes, $companiasBus[$i]);
                                }
                            }?>
                            <script>window.location.href="index.php?ctl=inicio/";</script><?php
                            // header('Location: index.php?ctl=inicio');

                    }else{
                        ?><script>alert("No ha seleccionado una compañía de Bus habitual.");</script><?php
                    }

                } catch (\AgenciaViajesException$ex) {
                    $errores = $ex->getErrores();
                    //var_dump($errores);die();?>
                    <pre><script>alert("¡No ha pasado los filtros!")</script></pre><?php
                }

            }else {?>
                <pre><script>alert("¡No ha seleccionado si está seguro de agregar esta nueva Agencia de Viajes!")</script></pre>
        <?php }

        }
        require __DIR__ . '/../../app/plantillas/agenciaViajes/formNuevaAgenciaViajes.php';
    }

// Función que Modifica una Agencia de Viajes
    public function modificarAgenciaviajesLogeada(){ 

        require __DIR__ . '/../../fuente/Repositorio/AgenciaBusesRepositorio.inc'; // Necesito todas las Agencias de Buses y extraer datos para el Select
        $agenciasBuses = (new AgenciaBusesRepositorio())->todasAgenciasDeBuses();

        $codigoAgenciaViajes = $_SESSION['perfil']['cod_AgenciaViajes'];
      //  $nombreAgenciaBuses = (new AgenciaBusesRepositorio())->nombreAgenciaBuses($codigoAgenciaViajes);

        if (isset($_POST['modificarAgenciaViajes'])) {
            $datos = $_POST['datos'];

            if (isset($datos['estaseguro'])) {

               
                if(!empty($datos['companiabus'])){

                                if ($datos['contrasena'] == $datos['contrasenarepetida']) { // Las 2 contraseñas iguales

                                    try {
                                        require __DIR__ . '/../../fuente/Modelo/AgenciaViajes.inc';
                                        $agenciaViajes = new AgenciaViajes($datos);
                                        if ($datos['contrasena'] === $datos['contrasenarepetida']) {

                                            require __DIR__ . '/../../fuente/Repositorio/AgenciaViajesRepositorio.inc';
                                            $hashActual = $_SESSION['perfil']['contrasena'];
                                            $nuevoHash = password_hash($datos['contrasena'], PASSWORD_DEFAULT);
                                            $agenciaViajes = new AgenciaViajes($datos);
                                            $cod_AgenciaViajes=$_SESSION['perfil']['cod_AgenciaViajes'];
                                            $obj2 = (new AgenciaViajesRepositorio())->eliminarRelacionAgenciasViajesBuses($cod_AgenciaViajes);


                                        if($obj2==true){
                                            ?><script>alert("¡Relaciones previas Eliminadas con exito!");</script><?php 
                                        }else{
                                            ?><script>alert("¡No había Relaciones previas que eliminar!");</script><?php
                                        }
                                                                    
                                        if(!empty($_POST["compania_bus"])){
                                            $companiasBus=$_POST["compania_bus"];
            
                                            $obj = (new AgenciaViajesRepositorio())->modificarAgenciaViajes($datos,$cod_AgenciaViajes/*, $hashActual*/, $nuevoHash);
                                            // var_dump($cod_AgenciaViajes); 
                                            var_dump($companiasBus); 
                                            foreach($companiasBus as $companiaBus){

                                            $insertarRelacionAgencias=(new AgenciaViajesRepositorio())->relacionAgenciasViajesBuses($cod_AgenciaViajes, $companiaBus);
                                                
                                            }
                                        }else{
                                            ?><script>alert("¡No es importante pero no ha seleccionado compañías de Buses secundarias!");</script><?php 

                                        }?>
                                                                            
                                                <pre><script>alert("Vuelva a entrar para ejecutar los cambios!")</script></pre>
                                                <script>window.location.href="index.php?ctl=deslogearCliente";</script><?php




                                        }

                                    } catch (\AgenciaViajesException$ex) {
                                        $errores = $ex->getErrores();?>                
                                        <pre><script>alert("No ha pasado los filtros")</script></pre><?php
                                    }
                                
                                } else {?>                
                                    <pre><script>alert("Las contraseñas no son iguales")</script></pre><?php
                                }
                }else{?>       
                    <pre><script>alert("No ha seleccionado compañia de Bus Habitual!")</script></pre><?php  
                }
            } else {?>
                <pre><script>alert("¡No ha seleccionado si está seguro de modificar esta nueva Agencia de Viajes!")</script></pre><?php 
            }
        }
        require __DIR__ . '/../../app/plantillas/agenciaViajes/formModificarAgenciaViajesLogeada.php';
    }

// Función que Da de Baja una Agencia de Viajes.
    public function bajaAgenciaViages(){

        require __DIR__ . '/../../fuente/Repositorio/destinoRepositorio.inc';
        $destinos = (new DestinoRepositorio())->todosDestinos();

        if (isset($_POST['nuevodestino'])) {
            $datos = $_POST['datos'];

            try {
                require __DIR__ . '/../../fuente/Modelo/Destino.inc';
                $destino = new Destino($datos);

            } catch (\DestinoException$ex) {
                $errores = $ex->getErrores();
                echo ("No ha pasado los filtros");
            }
        }
        require __DIR__ . '/../../app/plantillas/formAgenciaViajes.php';
    }

// Función que muestra las Agencias de Viajes disponibles =>permite darse de alta un cliente en una Agencia de Viajes  public function darseDeAltaClienteAgencia()
public function mostrarTodasLasAgenciasDeViajes(){
   // echo "Estoy en agenciaViajesController->mostrarTodasLasAgenciasDeViajes";
  
    require __DIR__ . '/../../fuente/Repositorio/AgenciaViajesRepositorio.inc';
     $agenciaViajes = (new AgenciaViajesRepositorio())->todasAgenciasDeViajes();


if(!empty($_SESSION['perfil'])){
    if ($_SESSION['perfil']['roll'] == "admin") {
        if (isset($_POST['eliminarAgenciasViajes'])) { 
           // var_dump($_POST['datos']);die();

            if (isset($_POST['datos'])) {
                $datos=$_POST['datos'];
                $numAgenciasAeliminar=count($datos);
                $clavesAgenciasBuses=array_keys($datos);
            
                if (isset($_POST['asegura'])) {
                    for ($i=0; $i<$numAgenciasAeliminar; $i++) {
                        $obj = (new AgenciaViajesRepositorio())->eliminarAgenciasDeViajes($clavesAgenciasBuses[$i]);
                    } ?><script>window.location.href="index.php?ctl=mostraragenciaviajes";</script><?php
                          //header('Location: index.php?ctl=mostrartodasagenciabuses');
                } else {?>      
                          <pre><script>alert("¡Debe seleccionar si está seguro de ello!")</script></pre><?php
                        }
            } else {?>
                      <pre><script>alert("¡Debe seleccionar alguna Agencia de Viajes!")</script></pre><?php
                    }
        }
    }


    if($_SESSION['perfil']['roll']=="cliente"){
        $ref_Cliente=$_SESSION['perfil']['ref_Cliente'];
        $agenciaViajes = (new AgenciaViajesRepositorio())->todasAgenciasDeViajes($ref_Cliente);
        // Ahora el cliente se hace socio de distintas agencias
        if (isset($_POST['socioclienteagencia'])) {
            if (empty($_SESSION['perfil'])) {?>
                    <script>alert("¡Seleccione una Agencia de Viajes, por favor!")</script><?php
                        ?><script>window.location.href="index.php?ctl=logearcliente";</script><?php
                    //header('Location: index.php?ctl=logearCliente');
                } else {
                    if ($_SESSION['perfil']['roll'] == "cliente") {
                        if (!empty($_POST['datos'])) { // Seguridad por si no se selecciona nada
                            $datos = $_POST['datos'];
                            
                            $nombres = array_keys($datos);
                            //var_dump($nombres);die();
                            for ($i = 0; $i < count($nombres); $i++) {
                                $codigoAgenciaViajes = (new AgenciaViajesRepositorio())->codigoAgenciasDeViajes($nombres[$i]);
                                // var_dump($codigoAgenciaViajes);die();
                                // $obj = (new AgenciaViajesRepositorio())->insertarSocioAgenciasDeViajes($_SESSION['perfil'], $codigoAgenciaViajes);
                                $obj = (new AgenciaViajesRepositorio())->insertarSocioAgenciasDeViajes($_SESSION['perfil'], $datos[$nombres[$i]]);


                                if ($obj==true) {
                                    ?><script>alert("¡Enhorabuena, acaba de hacerse sócio!")</script><?php
                                } else {
                                    ?><script>alert("Usted ya es Socio de esta Agencia de Viajes!!!");</script><?php
                                }
                            }
                        } else {?>
                <script>alert("¡Seleccione una Agencia de Viajes, por favor!")</script><?php }
                    }
                }

            }
    }
}


   





            if (isset($_POST['ver_folleto'])) { 
                $datos=$_POST['datos']; 
                $ref_AgenciaViajes=$datos["ref_AgenciaViajes"]; 
                
              
                require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/ClienteRepositorio.inc';
        
                $obj = (new AgenciaViajesRepositorio())->folletoAgenciaViajes($ref_AgenciaViajes); ?><pre><script>//alert("¡Enhorabuena, ya forma parte de nosotros!")</script></pre><?php
                    $nombre_Folleto=$obj[0]->nombre_Folleto;

                if(!empty($nombre_Folleto)){?>
                    <script>//alert("Le mostramos el Folleto");
                    window.location.href ="web/imagenes/folletos/<?php echo $nombre_Folleto; ?>";</script><?php
                }else{?><script>alert("No tiene Folleto"); window.location.href="index.php?ctl=mostraragenciaviajes";</script><?php }      
            }
            






              
        

        require __DIR__ . '/../../app/plantillas/agenciaViajes/mostrarTodasAgenciasDeViajes.php';
    }



// Función que muestra las Agencias de Viajes disponibles =>permite darse de alta un cliente en una Agencia de Viajes  public function darseDeAltaClienteAgencia()
public function mostrarTodasLasAgenciasDeViajesDondeNoSeEsSocio(){
    // echo "Estoy en agenciaViajesController->mostrarTodasLasAgenciasDeViajesDondeNoSeESSocio"; //die();
  
          require __DIR__ . '/../../fuente/Repositorio/AgenciaViajesRepositorio.inc';
            $codCliente=$_SESSION['perfil']['cod_Cliente'];
                                                      // Ahora el cliente se hace socio de distintas agencias
          $agenciaViajes = (new AgenciaViajesRepositorio())-> todasAgenciasDeViajesDondeSeEsSocio($codCliente);
  
          if (isset($_POST['socioclienteagencia'])) {
  
              if (empty($_SESSION['perfil'])) {?>
                    <script>alert("¡Seleccione una Agencia de Viajes, por favor!")</script><?php
                         ?><script>window.location.href="index.php?ctl=logearcliente";</script><?php
              } else {
  
                  if ($_SESSION['perfil']['roll'] == "cliente") {
  
                      if (!empty($_POST['datos'])) { // Seguridad por si no se selecciona nada
                          $datos = $_POST['datos'];
                          
                          $nombres = array_keys($datos);
  
                          for ($i = 0; $i < count($nombres); $i++) {
                              $codigoAgenciaViajes = (new AgenciaViajesRepositorio())->codigoAgenciasDeViajes($nombres[$i]);
                              //var_dump($codigoAgenciaViajes);die();
                              $obj = (new AgenciaViajesRepositorio())->insertarSocioAgenciasDeViajes($_SESSION['perfil'], $codigoAgenciaViajes);
                              //var_dump($destinos);die();
                          }
                      } else {?>
                <script>alert("¡Seleccione una Agencia de Viajes, por favor!")</script><?php }
                  }
              }
          }
  
          require __DIR__ . '/../../app/plantillas/agenciaViajes/mostrarTodasDeAgenciaViajesDondeSeEsSocio.php';
      }


// Función que muestra las Agencias de Viajes disponibles =>permite darse de alta un cliente en una Agencia de Viajes
// public function darseDeAltaClienteAgencia()
public function mostrarTodasLasAgenciasDeViajesDondeSeEsSocio(){
   // echo "Estoy en agenciaViajesController->mostrarTodasLasAgenciasDeViajesDondeSeEsSocio"; //die();
  
    require __DIR__ . '/../../fuente/Repositorio/AgenciaViajesRepositorio.inc';
    $codCliente=$_SESSION['perfil']['cod_Cliente'];
                                                     
    $agenciaViajes = (new AgenciaViajesRepositorio())-> todasAgenciasDeViajesDondeSeEsSocio($codCliente);  // Ahora el cliente se hace socio de distintas agencias
  
    if (isset($_POST['dardebajasocio'])) {

            if (!empty($_POST['asegura'])) {

                if (!empty($_POST['datos'])) {
                        $datos = $_POST['datos'];

                        foreach($datos as $codigoDeAgencia){

                         $codigoAgenciaViajes=$codigoDeAgencia;
                         // Tiene que ir a borrar como Socio en todas las seleccionadas
                        $agenciaViajes = (new AgenciaViajesRepositorio())-> eliminarSocioAgenciasDeViajes($codCliente, $codigoAgenciaViajes);
                        }?>
                    <script>window.location.href="index.php?ctl=inicio";</script><?php
                }else{?>
                    <script>alert("¡Seleccione una Agencia de Viajes, por favor!")</script>
                    <script>window.location.href="index.php?ctl=mostraragenciaviajesdondeessocio";</script><?php
                }

            }else{?>
                <script>alert("¡Seleccione la casilla de seguridad, por favor!")</script> <?php
            }
    }
        
    require __DIR__ . '/../../app/plantillas/agenciaViajes/mostrarTodasDeAgenciaViajesDondeSeEsSocio.php';

}




// Función que permite a un usuario/Cliente ver las agencias donde no está como socio.
    public function tePuedenInteresar(){
      //  echo "Estoy dentro de AgenciaViajesController->tePuedenInteresar"; die();
        require __DIR__ . '/../../fuente/Repositorio/AgenciaViajesRepositorio.inc';
        $agenciaViajes = (new AgenciaViajesRepositorio())->todasAgenciasDeViajesDondeNoSeEsSocio($_SESSION['perfil']);

        // Ahora el cliente selecciona agencias que quiere TAMBIÉN SER UN SOCIO
        if (isset($_POST['socioclienteagencia'])) {
            if (!empty($_POST['datos'])) { // Seguridad por si no se selecciona nada
                $datos = $_POST['datos'];

                $nombres = array_keys($datos);

                for ($i = 0; $i < count($nombres); $i++) {
                    $codigoAgenciaViajes = (new AgenciaViajesRepositorio())->codigoAgenciasDeViajes($nombres[$i]);
                    $obj = (new AgenciaViajesRepositorio())->insertarSocioAgenciasDeViajes($_SESSION['perfil'], $codigoAgenciaViajes[0]['codAgenciaViajes']); //var_dump($destinos);die();
                }

            } else {?>
              <script>alert("¡Seleccione una Agencia de Viajes, por favor!")</script><?php }
        }

        require __DIR__ . '/../../app/plantillas/agenciaViajes/mostrarTodasDeAgenciaViajesDondeNoSeEsSocio.php';
    }

// Función que da de baja una Agencia de Viajes logeada.
    public function eliminarAgenciaViajesLogeada()
    {

        require __DIR__ . '/../../fuente/Repositorio/AgenciaViajesRepositorio.inc';
        $agenciaBuses = (new AgenciaViajesRepositorio())->datosAgenciaViajesLogeada();

        if (isset($_POST['eliminaragenciaviajeslogeada'])) {

            if (isset($_POST['estaseguro'])) {
                $agenciaViajes = (new AgenciaViajesRepositorio())->eliminarAgenciaViajesLogeada();
                ?><script>window.location.href="index.php?ctl=deslogearcliente";</script><?php
                //header('Location: index.php?ctl=deslogearCliente');
            } else {?>
    <pre>  <script>alert("¡Debe seleccionar si está seguro de ello!")</script></pre><?php
}

        }
        require __DIR__ . '/../../app/plantillas/agenciaBuses/eliminarAgenciaViajesLogeada.php';
    }

// Función que muestra los datos de la Agencia de Viajes logueada.
    public function mostrarInfoAgenciaViajesLogeada(){
        require __DIR__ . '/../../fuente/Repositorio/AgenciaViajesRepositorio.inc';
        $agenciaViajes = (new AgenciaViajesRepositorio())->datosAgenciaViajesLogeada();
        $cod_AgenciaViajes=$_SESSION['perfil']['cod_AgenciaViajes'];
        if (isset($_POST['baja'])) {
            if (isset($_POST['asegura'])) {
                $agenciaViajes = (new AgenciaViajesRepositorio())->eliminarAgenciaViajesLogeada($cod_AgenciaViajes);
                ?><script>window.location.href="index.php?ctl=deslogearCliente";</script><?php
                //header('Location: index.php?ctl=deslogearCliente');
            } else { ?>
                <pre> <script>alert("¡Debe seleccionar si está seguro de ello!")</script></pre><?php
            }
        }
        require __DIR__ . '/../../app/plantillas/agenciaViajes/mostrarInfoAgenciaViajesLogueada.php';
    }

    
// Función que muestra los datos de la Agencia de Viajes logueada.
public function cambioUsernameContrasenaAgenciaViajes(){
    //require __DIR__ . '/../../fuente/Repositorio/AgenciaViajesRepositorio.inc';
    include $_SERVER['DOCUMENT_ROOT'] . AGENCIAVIAJESREPOSITORIO;


    if (isset($_POST['guardarcambios'])) {

        if (!empty($_POST['asegura'])) {

            if (!empty($_POST['datos'])) {
                    $datos = $_POST['datos'];  
                    
                    if ($datos['contrasenanueva'] == $datos['contrasenarepetida']) {
                        echo "Son iguales";
                        $hash = password_hash($datos['contrasenarepetida'], PASSWORD_DEFAULT);
                        
                         $datos['hash']=$hash;
                         $datos['ref_AgenciaViajes']=$_SESSION['perfil']['ref_AgenciaViajes'];


                         $obj = (new AgenciaViajesRepositorio())-> cambioUsernameContrasena($datos);

                    }else{
                        echo "Las contraseñas no son iguales"; ?>
                        <script>window.location.href="index.php?ctl=cambiousernamecontrasenaagenciaviajes";</script><?php

                    }?>

                   
                <script>window.location.href="index.php?ctl=inicio/";</script><?php
            }else{?>
                <script>alert("¡Seleccione una Agencia de Viajes, por favor!")</script>
                <script>window.location.href="index.php?ctl=cambiousernamecontrasenaagenciaviajes";</script><?php
            }

        }else{?>
            <script>alert("¡Seleccione la casilla de seguridad, por favor!")</script> <?php
        }
}



   // echo "Entro"; die(); 
  /*  $agenciaViajes = (new AgenciaViajesRepositorio())->datosAgenciaViajesLogeada();
    $cod_AgenciaViajes=$_SESSION['perfil']['cod_AgenciaViajes'];
    if (isset($_POST['baja'])) {
        if (isset($_POST['asegura'])) {
            $agenciaViajes = (new AgenciaViajesRepositorio())->eliminarAgenciaViajesLogeada($cod_AgenciaViajes);
            ?><script>window.location.href="index.php?ctl=deslogearCliente";</script><?php
            //header('Location: index.php?ctl=deslogearCliente');
        } else { ?>
            <pre> <script>alert("¡Debe seleccionar si está seguro de ello!")</script></pre><?php
        }
    }*/
    require __DIR__ . '/../../app/plantillas/agenciaViajes/cambioUsernameContrasenaAgenciaViajesLogueada.php';
}
}
