<?php
namespace miId\fuente\Controlador;
use miId\fuente\Modelo\Cliente;
use miId\fuente\Repositorio\PropietarioRepositorio;
use miId\fuente\Repositorio\ComerRepositorio;

class PropietarioController
{

// Función que crea una Nueva Cuenta de Propietario
public function nuevoPropietarioNegocio(){

    //Necesitamos un foreach de las referencias y nombres de Negocios
     $ref_localidad="NJA";
    require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ComerRepositorio.inc';
    $todosNegociosLocalidad = (new ComerRepositorio())-> publicidadRestaurantes($ref_localidad);

    if (isset($_POST['nuevopropietario'])) {
     
        $datos=$_POST['datos']; 
        //  var_dump($datos);
       // die();

        if (isset($_POST['asegura'])) {
            if ($datos['contrasena']==$datos['contrasenarepetida']) {
                $hash=password_hash($datos['contrasena'], PASSWORD_DEFAULT);

                try {
                /*require __DIR__ . '/../../fuente/Modelo/Cliente.inc';
                  $cliente =  new Cliente($datos);
                  if(empty($datos['nif'])){$datos['nif']="-";}*/
                   echo("Alberite->");
                  var_dump($hash);die();

                    require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/PropietarioRepositorio.inc';
                    $obj = (new PropietarioRepositorio())->nuevoPropietarioNegocio($datos, $hash);

//var_dump($obj); die();

if($obj){
    ?><pre><script>alert("¡Enhorabuena, Propietario incluido!")</script></pre><?php
    ?><script>window.location.href="index.php?ctl=inicio/#situarprimerarticulo";</script><?php
    // header('Location:index.php?ctl=inicio');
}else{
    ?><pre><script>alert("¡Lo sentimos, Propietario NO INCLUIDO!")</script></pre><?php
}


                    
                } catch (\ClienteException $ex) {
                    $errores=$ex->getErrores(); ?>             <!--Para que marque cada error en la plantilla-->
                        <pre>  <script>alert("    ¡LO SENTIMOS,\n Hay campos que no son correctos!")</script></pre><?php
                }
            } else {?>          
                        <pre><script>alert("¡LO SENTIMOS,\n Las contraseñas no son iguales!")</script></pre><?php   }
        } else {?>      
                        <pre><script>alert("¡Debe seleccionar su consentimiento!")</script></pre><?php
                    }
    }
    require __DIR__ . '/../../app/plantillas/propietario/formNuevoPropietario.php';
}




// Función que logea un Propietario de un Negocio
public function logearPropietarios(){
    if(isset($_POST['logincliente'])){
        $datos=$_POST['datos'];

       //header('Location: /Verano-2023/index.php');

        
       

        $hash=password_hash($datos['contrasenaactual'],PASSWORD_DEFAULT);

        //Tenemos que comprobar si la contraseña se encuentra en la base de datos.
          // Extraemos el hash de la base de datos
        require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/PropietarioRepositorio.inc';
        $obj = (new PropietarioRepositorio())->hashPropietarioNegocio($datos,$hash);

        // var_dump($obj[0]->contrasena);die();
            // Si extrae algo, lo compara con lo introducido
          if(!empty($obj[0]->contrasena)){
          
              if(password_verify($datos['contrasenaactual'], $obj[0]->contrasena)){

                //var_dump("Contraseñaaaaaaaa Correctaaaaa");
               
                    // Hago una sesión que acoge username y contraseña y roll del usuario logeado en este momento
                    $_SESSION['perfil']=array(
                        "ref_propietario"=>$obj[0]->ref_propietario, 
                        "nombre"=>$obj[0]->nombre, 
                        "apellidos"=>$obj[0]->apellidos,
                        "telefono"=>$obj[0]->telefono,
                        "email"=>$obj[0]->email,
                        "ref_negocio"=>$obj[0]->ref_negocio,
                        "username"=>$obj[0]->username,
                        "contrasena"=>$datos['contrasenaactual'],
                        "roll"=>$obj[0]->roll); { 
                            
                   // var_dump($_SESSION['perfil']);die();
                            
                            ?>
                      
                        <script>/*alert("Datos CORRECTOS")*/</script><?php
                    }


                    $todoBien=true;
                  //  $this->meterIndex();
                    //header('Location: /Verano-2023/index.php');
                    ?><script>window.location.href="index.php?ctl=inicio/";</script><?php
                        
              }else{ ?>
                <script>alert("Datos Incorrectos")</script><?php
              }
          }else{?>
                <script>//alert("¡Lo sentimos, los datos introducidos no se encuentran registrados!")</script><?php  
          }
    }
    require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/cliente/formLogearCliente.php';
}







































// Función que crea una Nueva Cuenta de Cliente
    public function nuevaCuentaCliente()
    {
        if (isset($_POST['nuevocliente'])) {
            $datos=$_POST['datos'];

            if (isset($_POST['asegura'])) {
                if ($datos['contrasena']==$datos['contrasenarepetida']) {
                    $hash=password_hash($datos['contrasena'], PASSWORD_DEFAULT);

                    try {
                        require __DIR__ . '/../../fuente/Modelo/Cliente.inc';
                        $cliente =  new Cliente($datos);
                        

                        require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ClienteRepositorio.inc';

                        if(empty($datos['nif'])){$datos['nif']="-";}
                        if(empty($datos['fNacimiento'])){$datos['fNacimiento']="-";}
                        if(empty($datos['sexo'])){$datos['sexo']="-";}
                        if(empty($datos['calle'])){$datos['calle']="-";}
                        if(empty($datos['cp'])){$datos['cp']="-";}
                        if(empty($datos['localidad'])){$datos['localidad']="-";}
                        if(empty($datos['provincia'])){$datos['provincia']="-";}
                        if(empty($datos['comunidad'])){$datos['comunidad']="-";}
                        if(empty($datos['pais'])){$datos['pais']="-";}
                        if(empty($datos['numcuenta'])){$datos['numcuenta']="-";}

                        
                        $obj = (new ClienteRepositorio())->nuevoCliente($datos, $hash);

                        ?><pre><script>//alert("¡Enhorabuena, ya forma parte de nosotros!")</script></pre><?php
                        ?><script>window.location.href="index.php?ctl=inicio";</script><?php
                       // header('Location:index.php?ctl=inicio');
                        
                    } catch (\ClienteException $ex) {
                        $errores=$ex->getErrores(); ?>             <!--Para que marque cada error en la plantilla-->
                            <pre>  <script>alert("    ¡LO SENTIMOS,\n Hay campos que no son correctos!")</script></pre><?php
                    }
                } else {?>          
                            <pre><script>alert("¡LO SENTIMOS,\n Las contraseñas no son iguales!")</script></pre><?php   }
            } else {?>      
                            <pre><script>alert("¡Debe seleccionar su consentimiento!")</script></pre><?php
                        }
        }
        require __DIR__ . '/../../app/plantillas/cliente/formNuevaCuentaCliente.php';
    }


    // Función que inserta un cliente
    public function nuevoClienteDatos()
    {
        if (isset($_POST['nuevocliente'])) {
            $datos=$_POST['datos'];

            if (isset($_POST['asegura'])) {
                if ($datos['contrasena']==$datos['contrasenarepetida']) {
                    $hash=password_hash($datos['contrasena'], PASSWORD_DEFAULT);

                    try {
                        require __DIR__ . '/../../fuente/Modelo/Cliente.inc';
                        $cliente =  new Cliente($datos);
                        

                        require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ClienteRepositorio.inc';
                        $obj = (new ClienteRepositorio())->nuevoCliente($datos, $hash);

                        ?><pre><script>//alert("¡Enhorabuena, ya forma parte de nosotros!")</script></pre><?php
                        ?><script>window.location.href="index.php?ctl=inicio/";</script><?php
                       // header('Location:index.php?ctl=inicio');
                        
                    } catch (\ClienteException $ex) {
                        $errores=$ex->getErrores(); ?>             <!--Para que marque cada error en la plantilla-->
                            <pre>  <script>alert("    ¡LO SENTIMOS,\n Hay campos que no son correctos!")</script></pre><?php
                    }
                } else {?>          
                            <pre><script>alert("¡LO SENTIMOS,\n Las contraseñas no son iguales!")</script></pre><?php   }
            } else {?>      
                            <pre><script>alert("¡Debe seleccionar su consentimiento!")</script></pre><?php
                        }
        }
        require __DIR__ . '/../../app/plantillas/cliente/formNuevoCliente.php';
    }



   
    
    // Función que modifica los registros de un cliente
    public function modificarCliente(){
    // echo ("Ento a ClienteController->modificar cliente");
    // $_SESSION['perfil']=array("nombre"=>$obj[0]->nombre, "cod_Cliente"=>$obj[0]->cod_Cliente,"username"=>$datos['username'],"contrasena"=>$obj[0]->contrasena,"roll"=>$obj[0]->roll);    
    // var_dump($_SESSION['perfil']);
    // unset($_SESSION['perfil']);die();*/

      $username=$_SESSION['perfil']['username'];
      $contrasena=$_SESSION['perfil']['contrasena'];
      
        require __DIR__ . '/../../fuente/Repositorio/ClienteRepositorio.inc';
        $datosClienteLogeado = (new ClienteRepositorio())->datosClienteLogeado($username, $contrasena); //var_dump($datosClienteLogeado);die();

        if (isset($_POST['modificarcliente'])) {
            $datos=$_POST['datos'];   
            //var_dump($datos);die();        
            
            if(isset($datos['estaseguro'])){

                    if ($datos['contrasena']==$datos['contrasenarepetida']){                 
                                $nuevoHash=password_hash($datos['contrasena'], PASSWORD_DEFAULT);
                        
                                try {
                                    require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ClienteRepositorio.inc';
                                    $hashActual=(new ClienteRepositorio())->hashClienteAgenciaViajes($datos);
                                    

                                    

                                    if(empty($hashActual)){?>     

                                        <pre><script>alert("¡LO SENTIMOS,\n Username no correcto")</script></pre><?php

                                    }else{
                                        $hashActual=$hashActual[0]->contrasena;
                                        if (password_verify($datos['contrasenaactual'], $hashActual)) {?>
                                        <script>//alert("La contraseña de base de datos y la metida son iguales")</script><?php
                                        require __DIR__ . '/../../fuente/Modelo/Cliente.inc';
                                        $cliente =  new Cliente($datos);
                                        $obj = (new ClienteRepositorio())->modificarCliente($datos, $hashActual, $nuevoHash);?>
                                         
                                        <pre><script>alert("Cliente Modificado con Exito, vuelva a entrar!")</script></pre>
                                        <script>window.location.href="index.php?ctl=deslogearCliente";</script><?php
                                    }else{?>
                                        <script>alert("No ha metido bien su contraseña actual")</script><?php
                                    }
                                    }
                                   /* var_dump($datos['contrasenaactual']);*/
                                    

                                    

                                } catch (\ClienteException $ex) {
                                    $errores=$ex->getErrores();?>     
                                    <pre><script>alert("¡LO SENTIMOS,\n No ha pasado los filtros")</script></pre><?php
                                }
                    } else {?>     
                        <pre><script>alert("    ¡LO SENTIMOS,\nLas contraseñas no son iguales")</script></pre><?php
                    }

            }else{?>     
                <pre><script>alert("    ¡LO SENTIMOS,\nDebe seleccionar la casilla")</script></pre><?php

            }
        }
        require __DIR__ . '/../../app/plantillas/cliente/formModificarCliente.php';
    }



    // Función que modifica los registros de un cliente
    public function autobajaCliente()
    {
        if (isset($_POST['autobajacliente'])) {
            $datos=$_POST['datos'];                    
                
            if (isset($datos['estaseguro'])) {
                require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ClienteRepositorio.inc';
                $hashActual=(new ClienteRepositorio())->hashClienteAgenciaViajes($datos);
                //var_dump($hashActual); die();

                if(!empty($hashActual)){
                    $hashActual=$hashActual[0]->contrasena;
                }

                if (!empty($hashActual)) {
                    try { 
                        if (password_verify($datos['contrasenaactual'], $hashActual)) {
                            //echo("La contraseña de base de datos y la metida son iguales");
                            $obj = (new ClienteRepositorio())->darDeBajaCliente($datos, $hashActual); ?>

                                <pre><script>alert("¡Cliente eliminado!")</script></pre>
                                <script>window.location.href="index.php?ctl=deslogearCliente";</script><?php
                                //header('Location: index.php?ctl=deslogearCliente');
                        }else{?>
                            <pre><script>alert("¡LO SENTIMOS,\n Datos incorrectos!")</script></pre><?php
                        }

                    } catch (\PDOException $ex) {
                        die($ex->getMessage());
                    } catch (\Exception $ex) {
                        die($ex->getMessage());
                    } catch (\ClienteException $ex) {
                        $errores=$ex->getErrores();
                        echo("No ha pasado los filtros");
                    }
                } else {?>
                    <pre><script>alert("¡LO SENTIMOS,\n No se ha encontrado ningún Cliente con la información proporcionada!")</script></pre><?php
                }
            } else {?>
                <pre><script>alert("¡LO SENTIMOS:\nDebe dar su consentimiento!")</script></pre><?php
        }
        }
        require __DIR__ . '/../../app/plantillas/cliente/formautobajacliente.php';
    }


    // Función que permite darse de baja un usuario/Cliente de una Agencia de Viajes.
    public function darseDeBajaDenAgenciaViajes()
    {
        require __DIR__ . './../../fuente/Repositorio/AgenciaViajesRepositorio.inc';
        $agenciaViajes = (new AgenciaViajesRepositorio())->todasAgenciasDeViajesDondeNoSeEsSocio($_SESSION['perfil']['codCliente']);

        // Ahora el cliente selecciona de cuales se quiere devincular
        if (isset($_POST['socioclienteagencia'])) {
            if (!empty($_POST['datos'])) {                                            // Seguridad por si no se selecciona nada
                $datos=$_POST['datos'];

                $nombres=array_keys($datos); 

                for ($i=0; $i<count($nombres); $i++) {
                    $codigoAgenciaViajes=(new AgenciaViajesRepositorio())->codigoAgenciasDeViajes($nombres[$i]);
                    $obj = (new AgenciaViajesRepositorio())->eliminarSocioAgenciasDeViajes($_SESSION['perfil'], $codigoAgenciaViajes[0]['codAgenciaViajes']);
                }
                ?><script>window.location.href="index.php?ctl=inicio/";</script><?php
            } else {?>             
              <script>alert("¡Seleccione una Agencia de Viajes, por favor!")</script><?php
            }
        }
        require __DIR__ . '/../../app/plantillas/cliente/formClienteBajaUnaAgenciaViajes.php';
    }


    // Función que muestra los datos de un Cliente logueado.
    public function mostrarInfoClienteLogeado()
    {
        require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ClienteRepositorio.inc';
                $usernamee=$_SESSION ['perfil']['username'];
                $contrasenaa=$_SESSION ['perfil']['contrasena'];
                $datosPerfilCliente = (new ClienteRepositorio())->datosClienteLogeado($usernamee,$contrasenaa);
                
        require __DIR__ . '/../../app/plantillas/cliente/mostrarinfoclientelogueado.php';
    }

    // Función que muestra los Clientes de la plataforma con posibilidad de ser eliminados.
    public function mostrarTodosClientes(){

        require __DIR__ . '/../../fuente/Repositorio/ClienteRepositorio.inc';
        $todosClientes = (new ClienteRepositorio())->mostrarTodosClientes();

        if (isset($_POST['eliminarcliente'])) {

            if(isset($_POST['asegura'])){
                                $datos=$_POST['datos'];//var_dump($datos);die();
                               // $obj=(new ClienteRepositorio())->darDeBajaCliente($datos['clienteaeliminar'], 1);
                               
                                $obj=(new ClienteRepositorio())-> darDeBajaClientePorAministrador($datos);

                            if ($obj==true) {
                                ?><script>window.location.href="index.php?ctl=inicio";</script><?php
                            } else {
                                ?><script>alert("No se ha podido eliminar el Cliente seleccionado!");</script><?php
                            }
            }else{?>     
                <pre><script>alert("¡LO SENTIMOS,\nDebe dar su consentimiento")</script></pre><?php

            }
    }
      
        require __DIR__ . '/../../app/plantillas/cliente/mostrartodosclientes.php';
    }


// Función que borra todos los Clientes de la plataforma.
public function borrarTodosClientes(){
    require __DIR__ . '/../../fuente/Repositorio/ClienteRepositorio.inc';
    $todosClientes = (new ClienteRepositorio())->borrarTodosClientes();

    if($todosClientes==true){
        ?><script>window.location.href="index.php?ctl=inicio/";</script><?php
        // header('Location: index.php?ctl=inicio');
    }else{
        ?><script>window.location.href="index.php?ctl=mostrartodosclientes";</script><?php
        //header('Location: index.php?ctl=mostrartodosclientes');
    }

    }
}