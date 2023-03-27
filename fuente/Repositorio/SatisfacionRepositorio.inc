<?php
namespace miId\fuente\Repositorio;
use miId\core\ConexionBd;

class SatisfacionRepositorio{  



// Función que devuelve el número de tuplas de Satisfaciones de un Negocio
public function numRegistrosSatisfacion(){
    include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/conf/configuracionfantasma.inc'; 
    try {

        $sql="SELECT count(cod_Satisfacionusernamerestaurantes) as num_tuplas FROM SATISFACIONUSERNAMERESTAURANTES";
        $result = $gbd->query($sql);
        return $results = $result->fetchAll(\PDO::FETCH_OBJ);

    } catch (\PDOException $e) {
        echo $e->getMessage();
        throw $e;
        die(); ?>
            <script>alert("¡**e*!");</script><?php
    } catch (\Exception $ex) {
        throw $ex;
        die(); ?>
            <script>alert("w*");</script><?php
    }finally {
        $gbd = null;
    }
}








// Función que inserta un nuevo 
public function insertSatisfacion($datos){
    include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/conf/configuracionfantasma.inc'; 




    try {
        $sql0='SET lc_time_names = "es_ES"';               
        $sql = "INSERT INTO SATISFACIONUSERNAMERESTAURANTES (ref_Satisfacionusernamerestaurantes,username,ref_negocio,grado_Satisfacion)
                    VALUES('$datos[ref_Satisfacionusernamerestaurantes]','$datos[username_cliente]','$datos[ref_Negocio]','$datos[grado_satisfacion]')";


        $result = $gbd->query($sql0); 
        $acentos = $gbd->query("SET NAMES 'utf8'");
        $result = $gbd->query($sql);

        
        if (!$result ){?>
            <script>alert("OPINIÓN NO INSERTADA, ya repetidos, BORRAR PRIMERO");</script><?php
             // este error lo puedes obtener usando 
             // mysqli_error($db) o $db->error;
             // return "Error no inserto, ";  
             return false;
        } else {
            ?><script>
              alert("¡Gracias por ayudarnos!");
            </script> <?php
         return true;
        }

    } catch (\PDOException$e) {
        //echo $e->getMessage(); ?>
        <script>alert("Ya ha dado su grado de satisfación anteriormente!");</script><?php
    } catch (\Exception $ex) {
    throw $ex; ?><script>alert("Algo ha ido mal!");</script><?php
    } finally {
        $gbd = null;
    }

}

// Función que elimina TUPLAS de la tabla "SATISFACIONUSERNAMERESTAURANTES"
public function deleteTuplaSatisfacionUsernameNegocio($datos){
    
    try {
        include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/conf/configuracionfantasma.inc'; 

        $sql="DELETE FROM SATISFACIONUSERNAMERESTAURANTES WHERE username='$datos[username_cliente]' and ref_negocio='$datos[ref_Negocio]'"; 

        
                $result = $gbd->query($sql);  
            // var_dump($result);die();

        if ($result) {?>
            <script>//alert("¡Borrado su grado de satisfación!");</script><?php
        } else {?>
        <script>//alert("¡Grado de satisfación NO ELIMINADO!");</script><?php
        return false;
        }
            
        return true;

    } catch (\PDOException $ex) {
        throw $ex; ?><script>alert("¡LO SENTIMOS, No se ha podido eliminar la Calificación!");</script><?php
    } catch (\Exception $ex) {
        throw $ex; ?><script>alert("*");</script><?php
    } finally {
        $gbd = null;
    }
}





// Función que elimina TUPLAS de la tabla "SATISFACIONUSERNAMERESTAURANTES"
public function totalTuplasSatisfaciones($ref_negocioAjax){ 
    include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/conf/configuracionfantasma.inc'; 
    try {
        $sql="SELECT count(cod_Satisfacionusernamerestaurantes) as num_tuplas FROM SATISFACIONUSERNAMERESTAURANTES WHERE ref_negocio='$ref_negocioAjax'" ;
        
        $result = $gbd->query($sql); 
        return $results = $result->fetchAll(\PDO::FETCH_OBJ);

    } catch (\PDOException $e) {    echo $e->getMessage();
        throw $e; die(); ?>         <script>alert("¡**e*!");</script><?php
    } catch (\Exception $ex) {
        throw $ex; die(); ?>        <script>alert("w*");</script><?php
    }finally { $gbd = null;
    }
}



// Función que 
public function satisfacionPorBarra($ref_negocio, $grado_Satisfacion){ 
    include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/conf/configuracionfantasma.inc'; 
    try {
        $sql="SELECT count(cod_Satisfacionusernamerestaurantes) as num_tuplas FROM SATISFACIONUSERNAMERESTAURANTES WHERE
        ref_negocio='$ref_negocio' and
         grado_Satisfacion='$grado_Satisfacion'";
        
        

        $result = $gbd->query($sql); 
        
        
        return $results = $result->fetchAll(\PDO::FETCH_OBJ);

    } catch (\PDOException $e) {    echo $e->getMessage();
        throw $e; die(); ?>         <script>alert("¡**e*!");</script><?php
    } catch (\Exception $ex) {
        throw $ex; die(); ?>        <script>alert("w*");</script><?php
    }finally { $gbd = null;
    }
}



 





// Función que devuelve el grado de satisfacion de un cliente en un negocio
public function totalTuplasCaritaClienteNegocio($ref_negocioparaAjax, $username_cliente){
    include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/conf/configuracionfantasma.inc'; 
    try {

        $sql="SELECT grado_Satisfacion FROM SATISFACIONUSERNAMERESTAURANTES WHERE
        ref_negocio='$ref_negocioparaAjax' and
        username='$username_cliente'";
        
        
//var_dump($sql);
        $result = $gbd->query($sql); 
        
        
        return $results = $result->fetchAll(\PDO::FETCH_OBJ);

    } catch (\PDOException $e) {    echo $e->getMessage();
        throw $e; die(); ?>         <script>alert("¡**e*!");</script><?php
    } catch (\Exception $ex) {
        throw $ex; die(); ?>        <script>alert("w*");</script><?php
    }finally { $gbd = null;
    }
}


}