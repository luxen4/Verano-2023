<?php
namespace miId\fuente\Controlador;
/*use miId\fuente\Modelo\Cliente;*/
use miId\fuente\Repositorio\ClienteRepositorio;
use miId\fuente\Repositorio\PropietarioRepositorio;
use miId\fuente\Repositorio\AgenciaViajesRepositorio;
use miId\fuente\Repositorio\AgenciaBusesRepositorio;

use miId\app\plantillas\bloques\sessiones\Session;


class UsuariosController{

// Función que logea un Usuario (cualquiera)
public function loginusuarios(){
        if (isset($_POST['logincliente'])) {
            $datos=$_POST['datos']; 
            $hash=password_hash($datos['contrasenaactual'],PASSWORD_DEFAULT);

            $this->logearCliente($datos,$hash);             // Busca el $hash de un Usuario/Cliente y Usuario/Admin
            $this->logearPropietarios($datos,$hash);        // Busca el $hash de un Usuario/Propietario
            $this->logearAgenciaViajes($datos,$hash);       // Busca el $hash de un Usuario/AgenciaViajes
            $this->logearAgenciaBuses($datos,$hash);        // Busca el $hash de un Usuario/AgenciaBuses
        }

    require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/cliente/formLogearCliente.php';    
}



// Función que logea un Cliente
public function logearCliente($datos,$hash){ 
    include $_SERVER['DOCUMENT_ROOT'] . CLIENTEREPOSITORIO;
    include_once $_SERVER['DOCUMENT_ROOT'] . SESIONS;

    $obj_datosCliente = (new ClienteRepositorio())->hashClienteAgenciaViajes($datos,$hash);
   
        if(!empty($obj_datosCliente[0]->contrasena)){
            if(password_verify($datos['contrasenaactual'], $obj_datosCliente[0]->contrasena)){
                    $obj_SessionCliente=(new Session())->sessionCliente($obj_datosCliente);
                    $_SESSION['perfil']=$obj_SessionCliente; ?>
                        <script>alert("Bienvenido a PLAYAS-2022");</script>
                        <script>window.location.href="index.php?ctl=inicio/";</script><?php
                    
            }else{ ?><script>//alert("Datos Incorrectos")</script><?php }
        }else{?>
            <script>//alert("¡Lo sentimos, Cliente no está registrado!")</script><?php  
        }
}
  

// Función que logea una Agencia de Viajes
public function logearAgenciaViajes($datos,$hash){
      
        include $_SERVER['DOCUMENT_ROOT'] . AGENCIAVIAJESREPOSITORIO;
        include_once $_SERVER['DOCUMENT_ROOT'] . SESIONS;
        $obj = (new AgenciaViajesRepositorio())->hashAgenciaViajes($datos,$hash);

            if(!empty($obj[0]->contrasena)){
                $hasContrasena=$obj[0]->contrasena;
                    if(password_verify($datos['contrasenaactual'], $hasContrasena)){     
                                                                                           
                        $datos_AgenciaViajes=(new AgenciaViajesRepositorio())->datosAgenciaViajes($datos);
                        require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/AgenciaBusesRepositorio.inc';
                        
                        $ref_AgenciaBuses=$datos_AgenciaViajes[0]->ref_CompaniaBusHabitual;  
                        $ref_AgenciaViajes=$datos_AgenciaViajes[0]->ref_AgenciaViajes;
                        
                        $obj_SessionAgenciaViajes=(new Session())->sessionAgenciaViajes($datos_AgenciaViajes);
                    
                        $_SESSION['perfil']=$obj_SessionAgenciaViajes; ?>
    
                            <script>
                                alert("Hola Agencia de Viajes. <?php echo $_SESSION['perfil']['name']; ?>");
                                window.location.href="index.php?ctl=mostrartodosdestinosdeunaagenciaviajeslogeada";
                            </script><?php
                                // header('Location:index.php?ctl=mostrartodosdestinos'); 
                }else{ ?><script>//alert("No es correcta la contraseña de la agencia de Viajes")</script><?php }

            }else{?>
                    <script>//alert("¡Lo sentimos, los datos introducidos no se encuentran registrados en la Agencia de Viajes!");</script><?php  
            }
}



// Función que logea un Propietario de un Negocio
public function logearPropietarios($datos,$hash){ 

    include_once $_SERVER['DOCUMENT_ROOT'] . PROPIETARIOREPOSITORIO;
    $datos_Propietario = (new PropietarioRepositorio())->hashPropietarioNegocio($datos,$hash);

        if(!empty($datos_Propietario[0]->contrasena)){
                
                if(password_verify($datos['contrasenaactual'], $datos_Propietario[0]->contrasena)){
                    $contrasena=$datos['contrasenaactual'];
                   // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/sessiones/session.inc'; 
                    $obj_SessionPropietario=(new Session())->sessionPropietario($datos_Propietario,$contrasena);
                    $_SESSION['perfil']=$obj_SessionPropietario; ?>
                        <script>alert("Hola Sr. <?php echo $_SESSION['perfil']['nombre']; ?> ")</script>
                        <script>window.location.href="index.php?ctl=inicio/";</script><?php 
                }else{ ?><script>//alert("No es un Propietario")</script><?php }
        }else{?>
                <script>//alert("¡Lo sentimos, los datos introducidos no se encuentran registrados como Propietario!")</script><?php  
        }
}


// Función que logea una Agencia de Buses
public function logearAgenciaBuses($datos,$hash){
    
        include_once $_SERVER['DOCUMENT_ROOT'] . AGENCIAVIAJESREPOSITORIO;
        include_once $_SERVER['DOCUMENT_ROOT'] . AGENCIABUSESREPOSITORIO;
        include_once $_SERVER['DOCUMENT_ROOT'] . SESIONS;
        
        $hash_AgenciaBuses = (new AgenciaBusesRepositorio())->hashAgenciaBuses($datos);

          if(!empty($hash_AgenciaBuses[0]->contrasena)){
              if(password_verify($datos['contrasenaactual'], $hash_AgenciaBuses[0]->contrasena)){
                    // Buscar los datos de la Agencia de Buses con ese hash
                    $hash=$hash_AgenciaBuses[0]->contrasena;
                    $datos_AgenciaBuses = (new AgenciaBusesRepositorio())->datosAgenciaBuses($hash);

                    $contrasena=$datos['contrasenaactual'];              
                    $obj_SessionAgenciaBuses=(new Session())->sessionAgenciaBuses($datos_AgenciaBuses,$contrasena);

                    $_SESSION['perfil']=$obj_SessionAgenciaBuses;
  
                    ?><script>window.location.href="index.php?ctl=mostrartodosdestinosquevaunaagenciabuseslogeada";</script><?php
                    //header('Location:index.php?ctl=mostrartodosdestinosquevaunaagenciabuseslogeada');
                    //header('Location:index.php?ctl=infoagenciabuses'); 
              }
          }else{?><script>//alert("¡Lo sentimos, los datos introducidos no se encuentran registrados!")</script><?php }
  }


 // Función que hace cerrar la sesión y situarse en la pantalla de inicio (Debería crear una función para cada uno de los roles)
 public function deslogearCliente(){ 
    if(isset($_SESSION['perfil'])){ unset($_SESSION['perfil']); session_unset(); session_destroy();
        ?><script>window.location.href="index.php?ctl=inicio/";</script><?php
        //header('Location: index.php?ctl=inicio/'); 
    }
  }


  }





  






