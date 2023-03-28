<?php
    namespace miId\fuente\Repositorio;
    use miId\core\ConexionBd;

class PasajeroRepositorio
{

    // Función que inserta un nuevo Cliente o una nueva Cuenta con algunos de los campos "-"| Recive un array de datos
    public function nuevoPasajero($datos){
        //var_dump($datos); die();

        if (array_key_exists('ref_Cliente', $datos)) {
            $datos['ref_Pasajero']=$datos['ref_Cliente']; //die();

            $datos['tlfnoParticular']=$_SESSION['perfil']['tlfnoParticular'];
            $datos['email']=$_SESSION['perfil']['email'];
          }else{
            $datos['ref_Pasajero']=$datos['ref_Pasajero'];
            $datos['nombreApellidos']=$datos['nombre'];
            $datos['anos']=$datos['edadpasajero'];
            $datos['tlfnoParticular']=$datos['tlfno'];
            $datos['email']=$datos['email'];
          }
        
 
        
        //die();
        try {
            include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS; 
            $sql0='SET lc_time_names = "es_ES"';
            $sql = "INSERT INTO PASAJERO (ref_Pasajero,nombreApellidos,anos,TlfnoParticular,email,roll)
                        VALUES('$datos[ref_Pasajero]','$datos[nombreApellidos]','$datos[anos]','$datos[tlfnoParticular]','$datos[email]', default)";

            $result = $gbd->query($sql0); 
            $acentos = $gbd->query("SET NAMES 'utf8'");
            $result = $gbd->query($sql);

            if (! $result ) {?>
                <script>alert("PASAJERO NO INSERTADO, imeil y/o username ya repetidos");</script><?php
                 // este error lo puedes obtener usando 
                 // mysqli_error($db) o $db->error;
                 // return "Error no inserto, ";  
                 return false;
            } else {
                ?><script>alert("¡Plaza/s Reservadas!");</script> <?php
             return true;
            }


        } catch (\PDOException$e) {
            echo $e->getMessage(); //die(); ?>
            <script>alert("emeil y/o username ya escogido por otra pereeeersona!");</script><?php
        } catch (\Exception $ex) {
        throw $ex; ?><script>alert("Algo ha ido mal!");</script><?php
        } finally {
            $gbd = null;
        }

    }

    
    // Función que inserta un nuevo Cliente o una nueva Cuenta con algunos de los campos "-"| Recive un array de datos
    public function infoPasajero($ref_Destino, $plaza_Bus){

        try {
            include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS; 
          
            $sql="SELECT p.nombreApellidos,p.anos,p.TlfnoParticular,p.email,v.embolso,v.pagado FROM VIAJAR v
                    INNER JOIN PASAJERO p on p.ref_Pasajero=v.ref_Persona 
                    WHERE v.ref_Destino='$ref_Destino' AND v.plaza_Bus='$plaza_Bus'";
           // var_dump($sql);//die();

            $result = $gbd->query($sql);
            return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);


        } catch (\PDOException$e) { echo $e->getMessage(); //die(); ?>
            <script>//alert("");</script><?php
        } catch (\Exception $ex) { throw $ex; ?><script>//alert("");</script><?php
        } finally { $gbd = null; }
    }



public function modificarPlazaPasajero($datos, $hashActual, $nuevoHash){
    
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
    public function darDeBajaPasajero($datos, $hashActual){

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
    public function darDeBajaPasajeroPorAministrador($datos){
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
    public function mostrarTodosPasajeros()
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
    public function datosPasajeros($usernamee,$contrasenaa){
    
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
    public function borrarTodosPasajeros()
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

    
// Función que devuelve el nº de registros de la tabla Viajar
public function numRegistrosPasajeros(){
    try {
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
        $sql="SELECT count(cod_Pasajero) as numRegistros FROM PASAJERO ";
        
        $result = $gbd->query($sql);
        return $results = $result->fetchAll(\PDO::FETCH_OBJ);

    } catch (\PDOException $e) {
        echo $e->getMessage();
        throw $ex; die();?>
        <script>alert("¡El nombre de objeto 'VIAJAR' no es válido(No existe la tabla)!");</script><?php 
    } catch (\Exception $ex) {
        throw $ex; die();?>
        <script>alert("*");</script><?php
    } finally {
        $gbd = null;
    }
}
}

// Borrar todas Agencias de Viajes
// Borrar todas Agencias de Buses
