<?php
namespace miId\fuente\Repositorio;
use miId\core\ConexionBd;

class MenuRepositorio{  


// Función que inserta un nuevo destino | Recive un array de datos                                            
public function nuevoMenu($datitos){  
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
            $sql="INSERT INTO MENU(ref_menu,ref_Negocio)
                        VALUES(/*cod_menuPersonal*/'$datitos[ref_menu]','$datitos[ref_negocio]')";    
        //var_dump($sql); die();
        $acentos = $gbd->query("SET NAMES 'utf8'"); $sql0='SET lc_time_names = "es_ES"'; $result = $gbd->query($sql0); $result = $gbd->query($sql); 


            if($result) {?> <script>alert('Menú "GENERAL" añadido CON EXITO!');</script><?php 
                return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
            }else{?> <script>alert('¡Menú "Personal" NO AÑADIDO!');</script><?php return false; }

    } catch (\PDOException $e) { echo $e->getMessage(); } finally { $gbd = null; }
}





// Función que inhabilita en la Tabla "RELACIONMENUSNEGOCIO" los menús de un Negocio
public function inhabilitarRelacionMenus($ref_negocio){
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
        $sql0='SET lc_time_names = "es_ES"'; // LAS TABLAS EN EL SERVIDOR GRATUITO, SIEMPRE EN MAYUSCULA, EN LOCALHOST DA IGUAL
        $sql = "UPDATE RELACIONMENUSNEGOCIOS SET habilitado='NO' WHERE ref_negocio='$ref_negocio'";
        $acentos = $gbd->query("SET NAMES 'utf8'"); $result = $gbd->query($sql); 
        
        if (! $result ) {?>
            <script>alert("No se ha podido inhabilitar");</script><?php mysqli_error($db); $db->error; return false;
                // este error lo puedes obtener usando 
                // return "Error no inserto, ";  
              
        }else{ ?><script>//alert("¡Ya ha votado con Exito");</script> <?php return true; }

    } catch (\PDOException$e) { echo $e->getMessage(); ?><script>alert("Error al inhabilitar, el nombre de archivo ya se encuentra en su inventario");</script><?php
    } catch (\Exception $ex) { throw $ex; ?><script>alert("Algo ha ido mal al inhabilitar!");</script><?php
    } finally { $gbd = null; }
}


// Función que habilita la referencia en la Tabla "RELACIONMENUSNEGOCIO" el Menú de un Negocio
public function habilitarRelacionMenus($ref_menu){
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
        $sql0='SET lc_time_names = "es_ES"'; // LAS TABLAS EN EL SERVIDOR GRATUITO, SIEMPRE EN MAYUSCULA, EN LOCALHOST DA IGUAL
        $sql = "UPDATE RELACIONMENUSNEGOCIOS SET habilitado='SI' WHERE ref_menu='$ref_menu'"; var_dump($sql);
        $acentos = $gbd->query("SET NAMES 'utf8'"); $result = $gbd->query($sql); 
        if (! $result ) {?>
            <script>alert("No se ha podido inhabilitar");</script><?php mysqli_error($db); $db->error; return false;
                // este error lo puedes obtener usando 
                // return "Error no inserto, ";  
              
        }else{ ?><script>//alert("¡Ya ha votado con Exito");</script> <?php return true; }

    } catch (\PDOException$e) { echo $e->getMessage(); ?><script>alert("Error al inhabilitar, el nombre de archivo ya se encuentra en su inventario");</script><?php
    } catch (\Exception $ex) { throw $ex; ?><script>alert("Algo ha ido mal al inhabilitar!");</script><?php
    } finally { $gbd = null; }
}


// Función que inserta en la Tabla de RELACIONMENUSNEGOCIOS un Negocio y su Menú                                    
public function nuevaRelacionMenusNegocios($ref_RelacionMenusNegocios,$ref_negocio,$ref_menu,$habilitado){   
    try {include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
            $sql="INSERT INTO RELACIONMENUSNEGOCIOS (ref_RelacionMenusNegocios, ref_negocio, ref_menu, habilitado)
                            VALUES(/*cod_menu*/'$ref_RelacionMenusNegocios', '$ref_negocio','$ref_menu','$habilitado')";  //var_dump($sql); die();

        $acentos = $gbd->query("SET NAMES 'utf8'");
        $sql0='SET lc_time_names = "es_ES"'; $result = $gbd->query($sql0); $result = $gbd->query($sql);

        if($result) {?> <script>alert("No olvide habilitar el Menú para verlo en pantalla!");</script><?php 
        }else{?> <script>alert("¡Menú NO AÑADIDO!");</script><?php return false; }

        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

    } catch (\PDOException $e) { echo $e->getMessage(); } finally { $gbd = null;
    }
}













// Función que inserta un nuevo destino | Recive un array de datos                                            
public function nuevoMenuPersonal($datos){  
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
            $sql="INSERT INTO MENUPERSONAL(ref_MenuPersonal,nombre_MenuPersonal,ref_Negocio,habilitado)
                        VALUES(/*cod_menuPersonal*/'$datos[ref_MenuPersonal]','$datos[nombre_MenuPersonal]','$datos[ref_negocio]','$datos[habilitado]')";    

        $acentos = $gbd->query("SET NAMES 'utf8'"); $sql0='SET lc_time_names = "es_ES"'; $result = $gbd->query($sql0); $result = $gbd->query($sql);

            if($result) {?> <script>alert('Menú "Personal" añadido CON EXITO!');</script><?php 
                return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
            }else{?> <script>alert('¡Menú "Personal" NO AÑADIDO!');</script><?php return false; }

    } catch (\PDOException $e) { echo $e->getMessage(); } finally { $gbd = null; }
}


// Función que inserta un nuevo Menú Del Día de un Negocio                                            
public function comprobarMenuPersonal($datos){  
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
        $sql0='SET lc_time_names = "es_ES"';
        $sql="SELECT MAX(ref_MenuPersonal) as ref_MenuPersonal FROM MENUPERSONAL WHERE ref_Negocio='$datos[ref_Negocio]'";
        $result = $gbd->query($sql0); $result = $gbd->query($sql);

        if ($result) {?><script>//alert("Comprobado OK");</script><?php return $results = $result -> fetchAll(\PDO::FETCH_OBJ);
        } else {?> <script>alert("Comprobado no OK");</script><?php return false;}

    } catch (\PDOException $e) { echo $e->getMessage();
    } finally { $gbd = null; }
}

// Función que inhabilita un menú
public function habilitarMenuPremium($ref_MenuPersonal){
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
        $sql0='SET lc_time_names = "es_ES"'; // LAS TABLAS EN EL SERVIDOR GRATUITO, SIEMPRE EN MAYUSCULA, EN LOCALHOST DA IGUAL
        $sql = "UPDATE MENUPERSONAL SET habilitado='SI' WHERE ref_MenuPersonal='$ref_MenuPersonal'";
        $acentos = $gbd->query("SET NAMES 'utf8'"); $result = $gbd->query($sql); 
        if (! $result ) {?>
            <script>alert("No se ha podido inhabilitar");</script><?php mysqli_error($db); $db->error; return false;
                // este error lo puedes obtener usando 
                // return "Error no inserto, ";  
              
        }else{ ?><script>//alert("¡Ya ha votado con Exito");</script> <?php return true; }

    } catch (\PDOException$e) { echo $e->getMessage(); ?><script>alert("Error al inhabilitar, el nombre de archivo ya se encuentra en su inventario");</script><?php
    } catch (\Exception $ex) { throw $ex; ?><script>alert("Algo ha ido mal al inhabilitar!");</script><?php
    } finally { $gbd = null; }
}



// Función que da un voto a un Negocio
public function inhabilitarTodosMenusPersonalesssssssssssssssssssssssssssssssssssssssssssssssssss($ref_negocio){
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
        $sql0='SET lc_time_names = "es_ES"'; // LAS TABLAS EN EL SERVIDOR GRATUITO, SIEMPRE EN MAYUSCULA, EN LOCALHOST DA IGUAL
        $sql = "UPDATE MENUPERSONAL SET habilitado='NO' WHERE ref_negocio='$ref_negocio'";
        $acentos = $gbd->query("SET NAMES 'utf8'"); $result = $gbd->query($sql);
        if (! $result ) {?>
            <script>alert("No se ha podido inhabilitar");</script><?php mysqli_error($db); $db->error; return false;
                // este error lo puedes obtener usando 
                // return "Error no inserto, ";  
              
        }else{ ?><script>//alert("¡Ya ha votado con Exito");</script> <?php return true; }

    } catch (\PDOException$e) { echo $e->getMessage(); ?><script>alert("Error al inhabilitar, el nombre de archivo ya se encuentra en su inventario");</script><?php
    } catch (\Exception $ex) { throw $ex; ?><script>alert("Algo ha ido mal al inhabilitar!");</script><?php
    } finally { $gbd = null; }
}



// Función que devuelve todos los Menús del día Premium de un Negocio.                                           
public function todosMenusPremium($ref_negocio){    
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
        $sql0='SET lc_time_names = "es_ES"';

        $sql="SELECT * FROM MENUPERSONAL where ref_negocio=$ref_negocio"; $result = $gbd->query($sql0); $result = $gbd->query($sql);

        if ($result) {?> <script>//alert("///");
            </script><?php  
            $acentos = $gbd->query("SET NAMES 'utf8'");
            return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
        } else {?> 
            <script>alert("///");</script>
            <?php return false; }

    } catch (\PDOException $e) { 
        echo $e->getMessage();?> <script>//alert("Table 'proyectoplayasdefinitivo.menupremium' doesn't exist");</script>
        <?php
    } finally { $gbd = null; }
}


  
 


// Función que devuelve el nombre de la imagen para el Menú Personal en un POP-UP.                                           
public function nombreImagenMenuPersonal($ref_MenuPersonal){    

    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
        $sql0='SET lc_time_names = "es_ES"';

        $sql="SELECT nombre_MenuPersonal FROM MENUPERSONAL where ref_MenuPersonal='$ref_MenuPersonal'"; 
      
        $result = $gbd->query($sql0); $result = $gbd->query($sql);

        if ($result) {?><?php  
            $acentos = $gbd->query("SET NAMES 'utf8'");
            return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
        } else {?> 
            <script>alert("///");</script>
            <?php return false; }

    } catch (\PDOException $e) { 
        echo $e->getMessage();?> <script>//alert("Table 'proyectoplayasdefinitivo.menupremium' doesn't exist");</script>
        <?php
    } finally { $gbd = null; }
}





// Propietario y         Administrador
// Función que elimina un Menú del día de un negocio
public function eliminarMenu($ref_negocio){
    try { include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
            $sql="DELETE FROM MENU WHERE ref_negocio='$ref_negocio'";     // var_dump($sql); die();
            $result = $gbd->query($sql); 

            if($result) {?><script>//alert("Menú ANTERIOR ELIMINADO CON EXITO!");</script><?php return true;
            }else{?><script>alert("¡Menú ANTERIOR NO ELIMINADO!");</script><?php return false; }

    }catch(\PDOException $ex){ 
        throw $ex; ?><script>alert("¡LO SENTIMOS, Ha habido un problema AL ELIMINAR EL MENÚ!");</script><?php
    }catch(\Exception $ex){ 
        throw $ex;?><script>alert("*Menú");</script><?php
    }finally{ $gbd = null; }
}






// Función que devuelve si un Negocio tiene menú Premium (si ha pagado).                                           
public function menuPremium($ref_negocio){ 
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
            $sql="SELECT * FROM RELACIONMENUSNEGOCIOS WHERE ref_negocio='$ref_negocio'";
            $result = $gbd->query($sql);

        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
    } catch (\PDOException $e) { echo $e->getMessage();
    } finally { $gbd = null;
    }
}





// Función que devuelve todos los modelos de menús del día.                                           
public function todosModelosMenus2($tipo_menu){    
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
        $sql="SELECT * FROM MODELOMENU WHERE tipo_menu='$tipo_menu'";
        $result = $gbd->query($sql);  return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
    } catch (\PDOException $e) { echo $e->getMessage();
    } finally { $gbd = null;
    }
}




















// Función que da un voto a un Negocio
public function inhabilitarTodosMenusPersonales($ref_negocio){

    //var_dump($ref_negocio);die();
  
        $host="localhost";
        $dbname="proyectoplayasdefinitivo";
        $username="root";
        $contrasena="";   
    
    
              
    try {
        $gbd = new \PDO("mysql:host=$host;dbname=$dbname", $username, $contrasena );
       // echo "Connected to at successfully.";
    } catch (\PDOException $pe) {
        die("Could not connect to the database $dbname :" . $pe->getMessage());
    }

    try {
      
        $sql0='SET lc_time_names = "es_ES"'; // LAS TABLAS EN EL SERVIDOR GRATUITO, SIEMPRE EN MAYUSCULA, EN LOCALHOST DA IGUAL
        $sql = "SELECT * FROM MENU WHERE ref_menu='$ref_negocio'";
        $acentos = $gbd->query("SET NAMES 'utf8'"); 
        $result = $gbd->query($sql); 
        
        $results = $result->fetchAll(\PDO::FETCH_OBJ);
        //var_dump($results[0]->ref_negocio);//die();
      
        return $results = $results[0]->ref_negocio;
        

        if (! $result ) {?>
            <script>alert("No se ha podido inhabilitar");</script><?php mysqli_error($db); $db->error; return false;
                // este error lo puedes obtener usando 
                // return "Error no inserto, ";  
              
        }else{ ?><script>//alert("¡Ya ha votado con Exito");</script> <?php return true; }

    } catch (\PDOException$e) { echo $e->getMessage(); ?><script>alert("Error al inhabilitar, el nombre de archivo ya se encuentra en su inventario");</script><?php
    } catch (\Exception $ex) { throw $ex; ?><script>alert("Algo ha ido mal al inhabilitar!");</script><?php
    } finally { $gbd = null; }
}











}