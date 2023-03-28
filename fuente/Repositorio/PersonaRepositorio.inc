<?php
    namespace miId\fuente\Repositorio;
    use miId\core\ConexionBd;

class PersonaRepositorio
{

    
    // Función que inserta un nuevo PERSONA| Recive una ref_Persona
    public function nuevaPersona($ref_Persona){
        //include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE

        try {
            include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS; 
            $sql0='SET lc_time_names = "es_ES"';
            $sql = "INSERT INTO PERSONA (ref_Persona) VALUES('$ref_Persona')";

            $result = $gbd->query($sql0); 
            $acentos = $gbd->query("SET NAMES 'utf8'");
            $result = $gbd->query($sql);

            if (! $result ) {?>
                <script>alert("PERSONA NO INSERTADA, datos repetidos");</script><?php
                 // este error lo puedes obtener usando 
                 // mysqli_error($db) o $db->error;
                 // return "Error no inserto, ";  
                 return false;
            } else {
                ?><script>//alert("¡NUEVA PERSONA INSERTADA CON EXITO!");</script> <?php
             return true;
            }


        } catch (\PDOException$e) {
            echo $e->getMessage(); ?>
            <script>alert("PERSONA REPETIDA!");</script><?php
        } catch (\Exception $ex) {
        throw $ex; ?><script>alert("Algo ha ido mal EN PERSONA!");</script><?php
        } finally {
            $gbd = null;
        }

    }


// Función que devuelve el nº de registros de la tabla VIAJAR                        
public function numRegistrosPersona(){

    try {
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS; 
        $sql="SELECT COUNT(cod_Persona) as numRegistros FROM PERSONA";
        
       $result = $gbd->query($sql);
       return $results = $result->fetchAll(\PDO::FETCH_OBJ);

    } catch (\PDOException $e) {
        echo $e->getMessage();
        throw $ex;
       // die(); 
        ?><script>alert("¡numregistrospersona!");</script><?php
    } catch (\PDOException $ex) {
        throw $ex; ?><script>alert("Personas No contadas!");</script><?php
    } catch (\Exception $ex) {
        throw $ex; ?><script>alert("Billete No contada!");</script><?php
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


    // Función que elimina un nuevo Cliente (autobaja)
    // El username no se puede cambiar ya que es clave UNIQUE //
    public function darDeBajaCliente($datos, $hashActual){

        try {  
            include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
            $sql = "DELETE FROM CLIENTE WHERE contrasena='$hashActual'";
 
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


    // Función que muestra todos los Clientes de la plataforma
    public function mostrarTodosClientes()
    {
        try {
            require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';
            $sql="SELECT cod_Cliente, nombre,apellidos,nif,calle,cp,localidad,provincia,comunidad,pais,email,TlfnoParticular,
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

    
    //Función que busca los datos de un Cliente logueado.
    public function datosClienteLogeado($usernamee,$contrasenaa){
    
        //echo "Entro a Repositorio/datosClienteLogeado"; 
        $username=$_SESSION['perfil']['username'];
        $contrasena=$_SESSION['perfil']['contrasena'];
     
        try {
            require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';

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




}

// Borrar todas Agencias de Viajes
// Borrar todas Agencias de Buses
