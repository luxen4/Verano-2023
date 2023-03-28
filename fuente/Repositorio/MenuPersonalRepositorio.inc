<?php
namespace miId\fuente\Repositorio;
use miId\core\ConexionBd;

class MenuPersonalRepositorio{  

// Función que inserta un nuevo destino | Recive un array de datos                                            
public function nuevoMenuPersonal($datos){  
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
            $sql="INSERT INTO MENUPERSONAL(ref_MenuPersonal,nombre_MenuPersonal,ref_Negocio)
                        VALUES(/*cod_menuPersonal*/'$datos[ref_MenuPersonal]','$datos[nombre_MenuPersonal]','$datos[ref_negocio]')";    
//var_dump($sql); die();
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
public function inhabilitarMenuPersonal($datos){ 
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
        $sql0='SET lc_time_names = "es_ES"'; // LAS TABLAS EN EL SERVIDOR GRATUITO, SIEMPRE EN MAYUSCULA, EN LOCALHOST DA IGUAL
        $sql = "UPDATE RELACIONMENUSNEGOCIOS SET habilitado='NO' WHERE ref_negocio='$datos[ref_negocio]'";
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
public function todosMenusPersonales($ref_negocio){    
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
        $sql0='SET lc_time_names = "es_ES"';

        $sql="SELECT rm.ref_Menu, mp.nombre_MenuPersonal, rm.habilitado FROM MENUPERSONAL mp 
        INNER JOIN RELACIONMENUSNEGOCIOS rm on rm.ref_Menu = mp.ref_MenuPersonal
        
        where rm.ref_negocio='$ref_negocio'"; //var_dump($sql);
        
        $result = $gbd->query($sql0); $result = $gbd->query($sql);

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





// Función que inhabilita un menú
/*
public function habilitarMenuPremium($ref_MenuPersonal){
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
        $sql0='SET lc_time_names = "es_ES"'; // LAS TABLAS EN EL SERVIDOR GRATUITO, SIEMPRE EN MAYUSCULA, EN LOCALHOST DA IGUAL
        $sql = "UPDATE MENUPERSONAL SET habilitado='SI' WHERE ref_MenuPersonal='$ref_MenuPersonal'"; //var_dump($sql);
        $acentos = $gbd->query("SET NAMES 'utf8'"); $result = $gbd->query($sql); 
        if (! $result ) {?>
            <script>alert("No se ha podido inhabilitar");</script><?php mysqli_error($db); $db->error; return false;
                // este error lo puedes obtener usando 
                // return "Error no inserto, ";  
              
        }else{ ?><script>//alert("¡Ya ha votado con Exito");</script> <?php return true; }

    } catch (\PDOException$e) { echo $e->getMessage(); ?><script>alert("Error al inhabilitar, el nombre de archivo ya se encuentra en su inventario");</script><?php
    } catch (\Exception $ex) { throw $ex; ?><script>alert("Algo ha ido mal al inhabilitar!");</script><?php
    } finally { $gbd = null; }
}*/



// Función que da un voto a un Negocio
/*
public function inhabilitarTodosMenusPersonales($ref_negocio){
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
}*/






  
 








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






}