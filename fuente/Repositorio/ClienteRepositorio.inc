<?php
    namespace miId\fuente\Repositorio;
    use miId\core\ConexionBd;

class ClienteRepositorio
{

//-------------------------------------------------------------------------------------------------------------------
    // Función que busca el hash de un Cliente, parámetros: username(para buscar la contraseña "hash")
    public function hashClienteAgenciaViajes($datos){
        try {
            include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
         
            $sql = "SELECT * /*cod_Cliente,nombre,contrasena,roll*/ FROM CLIENTE WHERE username='$datos[username]'";    
          //  var_dump($sql);  die();
            $result = $gbd->query($sql); 

            return $results = $result->fetchAll(\PDO::FETCH_OBJ);
        } catch (\PDOException$e) {
            echo $e->getMessage();
        } finally {
            $gbd = null;
        }
    }
    //--------------------------------------------------------------------------------------------------------------------

// Función que devuelve el número de cuenta de un Cliente
   public function numCuentaCorrecto($codCliente){
       //echo "<br>Entro a ClienteRepositorio->numCuentaCorrecto"; 
    include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE

    try {
        $sql0='SET lc_time_names = "es_ES"';
        $sql = "SELECT num_Cuenta from CLIENTE WHERE cod_cliente='$codCliente'";
        $result = $gbd->query($sql);
            ?><script>//alert("¡Número de cuenta extraido!");</script> <?php
            return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

    } catch (\PDOException$e) {
        echo $e->getMessage(); ?>
        <script>alert("***");</script><?php
    } catch (\Exception $ex) {
    throw $ex; ?><script>alert("***");</script><?php
    } finally {
        $gbd = null;
    }
   } 

    
    // Función que inserta un nuevo Cliente o una nueva Cuenta con algunos de los campos "-"| Recive un array de datos
 /*   public function nuevoCliente($datos, $hash){ var_dump($datos); die();

        try {
            include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS; 
            $sql0='SET lc_time_names = "es_ES"';
            $sql = "INSERT INTO CLIENTE(ref_Cliente,username,nombre,apellidos,nif,TlfnoParticular,email,
                                            fNacimiento,sexo,calle,cp,localidad,provincia,comunidad,pais,contrasena,num_cuenta)

                                VALUES('$datos[ref_Cliente]','$datos[username]','$datos[nombre]','  $datos[apellidos]  ','$datos[nif]','$datos[tlfnoParticular]','$datos[email]',
                                '$datos[fNacimiento]','$datos[sexo]','$datos[calle]','$datos[cp]','$datos[localidad]',
                                '$datos[provincia]','$datos[comunidad]','$datos[pais]','$hash','$datos[numcuenta]')";

                               // var_dump($sql); die();

            $result = $gbd->query($sql0); 
            $acentos = $gbd->query("SET NAMES 'utf8'");
            $result = $gbd->query($sql);

            if (! $result ) {?>
                <script>alert("Cliente NO INSERTADO, imeil y/o username ya repetidos");</script><?php
                 // este error lo puedes obtener usando 
                 // mysqli_error($db) o $db->error;
                 // return "Error no inserto, ";  
                 return false;
            } else {
                ?><script>alert("¡NUEVO CLIENTE INSERTADO CON EXITO!");</script> <?php
             return true;
            }


        } catch (\PDOException$e) {
            echo $e->getMessage(); //die(); ?>
            <script>alert("emeil y/o username ya escogido por otra persona!");</script><?php
        } catch (\Exception $ex) {
        throw $ex; ?><script>alert("Algo ha ido mal!");</script><?php
        } finally {
            $gbd = null;
        }

    }*/



    // Función que inserta un nuevo Cliente o una nueva Cuenta con algunos de los campos "-"| Recive un array de datos
    public function nuevoClienteFormularioSimple($datos, $hash){ //var_dump($datos); //die();

        try {
            include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS; 
            $sql0='SET lc_time_names = "es_ES"';
            $sql = "INSERT INTO CLIENTE(ref_Cliente,username,nombre,apellidos,nif,TlfnoParticular,email,
                                            fNacimiento,sexo,calle,cp,localidad,provincia,comunidad,pais,contrasena,num_cuenta)

                                VALUES('$datos[ref_Cliente]','$datos[username]','$datos[nombre]','  $datos[apellidos]  ','$datos[nif]','$datos[tlfnoParticular]','$datos[email]',
                                '$datos[fNacimiento]','$datos[sexo]','$datos[calle]','$datos[cp]','$datos[localidad]',
                                '$datos[provincia]','$datos[comunidad]','$datos[pais]','$hash','$datos[numcuenta]')";

                               // var_dump($sql); die();

            $result = $gbd->query($sql0); 
            $acentos = $gbd->query("SET NAMES 'utf8'");
            $result = $gbd->query($sql);

            if (! $result ) {?>
                <script>alert("Cliente NO INSERTADO, imeil y/o username ya repetidos");</script><?php
                 // este error lo puedes obtener usando 
                 // mysqli_error($db) o $db->error;
                 // return "Error no inserto, ";  
                 return false;
            } else {
                ?><script>alert("¡NUEVO CLIENTE INSERTADO CON EXITO!");</script> <?php
             return true;
            }


        } catch (\PDOException$e) {
            echo $e->getMessage(); //die(); ?>
            <script>alert("emeil y/o username ya escogido por otra persona!");</script><?php
        } catch (\Exception $ex) {
        throw $ex; ?><script>alert("Algo ha ido mal!");</script><?php
        } finally {
            $gbd = null;
        }

    }


// Función que modifica los datos de un Cliente ya logueado
// El username no se puede cambiar ya que es clave UNIQUE //
/* PODRÍAN TENER LA MISMA CONTRASEÑA PERO NO EL MISMO USERNAME (este se ve), por eso las 2condiciones.
"Me cambia el primer registro si tienen la misma contraseña (si se pone ella sola, siendo la misma)"*/
public function modificarCliente($datos, $hashActual, $nuevoHash){
    
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
        $sql0='SET lc_time_names = "es_ES"';
        $sql = "UPDATE CLIENTE
        SET /*username='$datos[username]',*/ nombre='$datos[nombre]', apellidos='$datos[apellidos]', nif='$datos[nif]',TlfnoParticular='$datos[tlfnoParticular]',
        email='$datos[email]',fNacimiento='$datos[fNacimiento]',sexo='$datos[sexo]',calle='$datos[calle]',cp='$datos[cp]',
        localidad='$datos[localidad]',provincia='$datos[provincia]',comunidad='$datos[comunidad]',pais='$datos[pais]',contrasena='$nuevoHash'
        WHERE /*username='$datos[username]' and*/ contrasena='$hashActual' AND username='$datos[username]'"; 

            
            /*$result = $gbd->query($sql0); */
            $acentos = $gbd->query("SET NAMES 'utf8'");

        $result = $gbd->query($sql);?>
        <script>//alert("¡EXITO, datos modificados!");</script><?php
        return  true;

    } catch (\PDOException $ex) {
        throw $ex; ?><script>alert("¡LO SENTIMOS, No se han modificado los datos, email duplicado!");</script><?php
    } catch (\Exception $ex) {
        throw $ex; ?><script>alert("*");</script><?php
    } finally {
        $gbd = null;
    }
}


// Función que elimina una PERSONA (param ref_Persona)
public function darDeBajaCliente($datos, $hashActual){

    try {  
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS; 
        $sql = "DELETE FROM PERSONA WHERE ref_Persona='$datos[ref_Persona]'";

        $result = $gbd->query($sql);?>
            <script>alert("¡CLIENTE ELIMINADO CON EXITO!");</script><?php
        return  true;

    } catch (\PDOException$e) {
        echo $e->getMessage(); ?>
        <script>alert("¡CLIENTE NO ELIMINADO!");</script><?php
    } catch (\Exception $ex) {
    throw $ex; ?><script>alert("¡CLIENTE NO ELIMINADO!");</script><?php
    } catch (\Throwable $th) {

    $pdo->rollBack() ;
    echo "Mensaje de Error: " . $th->getMessage();

    } finally { $gbd = null; }
}


     // Función que elimina un nuevo Cliente (autobaja)
    // El username no se puede cambiar ya que es clave UNIQUE //
    public function darDeBajaClientePorAministrador($datos){
        try {  
            include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
            $sql = "DELETE FROM CLIENTE WHERE cod_Cliente='$datos[clienteaeliminar]'";
 
            $result = $gbd->query($sql);?>
             <script>alert("¡CLIENTE ELIMINADO CON EXITO!");</script><?php
            return  true;

        } catch (\PDOException$e) {
            echo $e->getMessage(); ?>
            <script>alert("¡CLIENTE NO ELIMINADO!");</script><?php
        } catch (\Exception $ex) {
        throw $ex; ?><script>alert("¡CLIENTE NO ELIMINADO!");</script><?php
        } catch (\Throwable $th) {

    $pdo->rollBack() ;
    echo "Mensaje de Error: " . $th->getMessage();

        } finally {
            $gbd = null;
        }

    }


    // Función que muestra todos los Clientes de la Plataforma
    public function mostrarTodosClientes()
    {
        try {
            include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
            $sql="SELECT ref_Cliente, nombre,apellidos,nif,calle,cp,localidad,provincia,comunidad,pais,email,TlfnoParticular,
            fNacimiento,sexo FROM CLIENTE";

            $result = $gbd->query($sql); ?>
                <script>//alert("Le mostramos todos los clientes de la plataforma...");</script><?php
            return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

        } catch (\PDOException $ex) {
            throw $ex; ?><script>alert("¡LO SENTIMOS, No se ha podido encontrar el Cliente!");</script><?php
        } catch (\Exception $ex) {
            throw $ex; ?><script>alert("*");</script><?php
        } finally {
            $gbd = null;
        }
    }


        // Función que muestra todos los Clientes de la Plataforma
        public function mostrarTodosClientesRef_Nombre_Apellidos()
        {
            try {
                include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
                $sql="SELECT ref_Cliente, nombre, apellidos FROM CLIENTE";
    
                $result = $gbd->query($sql); ?>
                    <script>//alert("Le mostramos todos los clientes de la plataforma...");</script><?php
                return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
    
            } catch (\PDOException $ex) {
                throw $ex; ?><script>alert("¡LO SENTIMOS, No se ha podido encontrar el Cliente!");</script><?php
            } catch (\Exception $ex) {
                throw $ex; ?><script>alert("*");</script><?php
            } finally {
                $gbd = null;
            }
        }


        

  // Función AJAX que inserta un Nuevo Socio en una Agencia de Viajes
    public function hacerseSocioAgenciaViajes($ref_AgenciaViajes, $ref_ClientePlataforma){

        try {
            include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS; 
            $sql0='SET lc_time_names = "es_ES"';
            $sql = "INSERT INTO SOCIOSAGENCIAVIAJES(ref_agenciaViajes,ref_ClientePlataforma,fecha_Inscripcion)
                        VALUES('$ref_AgenciaViajes','$ref_ClientePlataforma',default)";

            $result = $gbd->query($sql0);  $acentos = $gbd->query("SET NAMES 'utf8'");
            $result = $gbd->query($sql);

            if(!$result){ return false; }else{ return true;}

        } catch (\PDOException$e) {
            //echo $e->getMessage(); //die(); 
            //alert("emeil y/o username ya escogido por otra persona!");</script><?php
        } catch (\Exception $ex) {
        throw $ex; ?><script>alert("Algo ha ido mal!");</script><?php
        } finally { $gbd = null; }
    }







        // Función que muestra todos los Clientes de la plataforma
        public function mostrarTodosClientesAgenciaViajes($ref_AgenciaViajes)
        {
            try {
                include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
               $sql="SELECT c.ref_Cliente, c.nombre,apellidos,c.nif,c.calle,c.cp,c.localidad,c.provincia,c.comunidad,c.pais,c.email,c.TlfnoParticular,c.fNacimiento,c.sexo FROM CLIENTE c
                        INNER JOIN AGENCIAVIAJESCLIENTE av on av.ref_Cliente=c.ref_Cliente
                        WHERE av.ref_AgenciaViajes='$ref_AgenciaViajes'"; 


    
    //var_dump($sql);die();
                $result = $gbd->query($sql); ?>
                    <script>//alert("Le mostramos todos los clientes de la plataforma...");</script><?php
                return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
    
            } catch (\PDOException $ex) {
                throw $ex; ?><script>alert("¡LO SENTIMOS, No se ha podido encontrar el Cliente!");</script><?php
            } catch (\Exception $ex) {
                throw $ex; ?><script>alert("*");</script><?php
            } finally {
                $gbd = null;
            }
        }


                // Función que muestra todos los SOCIOS de la plataforma (ref_Cliente,nombre, apellidos)
                public function mostrarTodosSociosRef_Nombre_Apellidos($ref_AgenciaViajes)
                {
                    try {
                        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
                       $sql="SELECT c.ref_Cliente, c.nombre, c.apellidos FROM CLIENTE c
                                INNER JOIN SOCIOSAGENCIAVIAJES s on s.ref_ClientePlataforma=c.ref_Cliente
                                WHERE s.ref_AgenciaViajes='$ref_AgenciaViajes'"; 

                                //var_dump($sql);

                        $result = $gbd->query($sql); ?>
                            <script>//alert("Le mostramos todos los clientes de la plataforma...");</script><?php
                        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
            
                    } catch (\PDOException $ex) {
                        throw $ex; ?><script>alert("¡LO SENTIMOS, No se ha podido encontrar el Cliente!");</script><?php
                    } catch (\Exception $ex) {
                        throw $ex; ?><script>alert("*");</script><?php
                    } finally {
                        $gbd = null;
                    }
                }


                            // Función que muestra todos los SOCIOS de la plataforma (ref_Cliente,nombre, apellidos)
                            public function esSocio($ref_Cliente,$ref_AgenciaViajes)
                            {
                                try {
                                    include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
                                   $sql="SELECT cod_SociosAgenciaViajes FROM SOCIOSAGENCIAVIAJES 
                                            WHERE ref_ClientePlataforma='$ref_Cliente' AND ref_AgenciaViajes='$ref_AgenciaViajes'"; 
            
                                            //var_dump($sql); die();
            
                                    $result = $gbd->query($sql); ?>
                                        <script>//alert("Le mostramos todos los clientes de la plataforma...");</script><?php
                                    return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

                        
                                } catch (\PDOException $ex) {
                                    throw $ex; ?><script>alert("¡LO SENTIMOS, No se ha podido encontrar el Cliente!");</script><?php
                                } catch (\Exception $ex) {
                                    throw $ex; ?><script>alert("*");</script><?php
                                } finally {
                                    $gbd = null;
                                }
                            }



        
        // Función que devuelve los Clientes(Referencia y Nombre) de una Agencia de Viajes
        public function mostrarTodosClientesAgenciaViajesRefNombre($ref_AgenciaViajes)
        {
            try {
                include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;

                $sql="SELECT c.ref_Cliente, c.nombre,c.apellidos FROM CLIENTE c INNER JOIN AGENCIAVIAJESCLIENTE av on av.ref_Cliente=c.ref_Cliente WHERE av.ref_AgenciaViajes='$ref_AgenciaViajes'";
                $result = $gbd->query($sql); ?>
                    <script>//alert("Le mostramos todos los clientes de la plataforma...");</script><?php
                return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
    
            } catch (\PDOException $ex) {
                throw $ex; ?><script>alert("¡LO SENTIMOS, No se ha podido encontrar el Cliente!");</script><?php
            } catch (\Exception $ex) {
                throw $ex; ?><script>alert("*");</script><?php
            } finally {
                $gbd = null;
            }
        }
    
    //Función que busca los datos de un Cliente logueado.
    public function datosClienteLogeado($usernamee,$contrasenaa){
    
        //echo "Entro a Repositorio/datosClienteLogeado"; 
        $username=$_SESSION['perfil']['username'];
        $contrasena=$_SESSION['perfil']['contrasena'];
     
        try {
            include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;

                $sql="SELECT cod_Cliente,username,nombre,apellidos,nif,TlfnoParticular,email,
                    fNacimiento,sexo,calle,cp,localidad,provincia,comunidad,pais,contrasena,roll FROM CLIENTE 
                    WHERE username='$usernamee' and contrasena='$contrasenaa'";

                $result = $gbd->query($sql);?>

                <script>//alert("Datos de su perfil...");</script><?php
                return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
            } catch (\PDOException $ex) {
                throw $ex; ?><script>alert("¡LO SENTIMOS, No se ha podido encontrar el Cliente!");</script><?php
            } catch (\Exception $ex) {
                throw $ex; ?><script>alert("*");</script><?php
            } finally {
                $gbd = null;
            }
        }
    

    //Función que elimina todos los clientes de la plataforma.
    public function borrarTodosClientes()
    {
        require __DIR__ . '/../../app/conf/configuracionfantasma.inc';

        try {
            require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';
            $sql = "DELETE FROM CLIENTE";
            $result = $gbd->query($sql); ?>
            <script>alert("¡TODOS CLIENTES ELIMINADOS CON EXITO!");</script><?php
         return  true;
        } catch (\PDOException $e) {
            echo $e->getMessage();
            //throw $ex; die();?>
            <script>alert("¡NO SE HAN ELIMINADO LOS REGISTROS!");</script><?php return false;
        } catch (\Exception $ex) {
            throw $ex; //die();?>
        <script>alert("¡NO ELIMINADOS!");</script><?php return false;
        } finally {
            $gbd = null;
        }
    }



    //Función que busca los datos de un Cliente a partir de su ref_Cliente.
    public function infoCliente($ref_Destino, $plaza_Bus){
     
        try {
            include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;

                $sql="SELECT c.nombre,c.apellidos,c.TlfnoParticular,c.email,c.fNacimiento,v.embolso,v.pagado FROM CLIENTE c 
                    INNER JOIN VIAJAR v on v.ref_Persona=c.ref_Cliente
                    WHERE v.ref_Destino='$ref_Destino' AND v.plaza_Bus='$plaza_Bus'";

                $result = $gbd->query($sql);?>

                <script>//alert("Datos de su perfil...");</script><?php
                return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
            } catch (\PDOException $ex) { throw $ex; ?><script>alert("¡No existe!");</script><?php
            } catch (\Exception $ex) { throw $ex; ?><script>alert("*54797975");</script><?php
            } finally { $gbd = null; }
        }






}

// Borrar todas Agencias de Viajes
// Borrar todas Agencias de Buses
