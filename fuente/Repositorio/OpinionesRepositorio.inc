<?php
namespace miId\fuente\Repositorio;
use miId\core\ConexionBd;

class OpinionesRepositorio{  

// Función que devuelve las opiniones de un Negocio------------------------Ajax para Pop-up 
public function todasOpinionesNegocio($ref_negocio){
    include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
    try {
        $sql="SELECT username, texto_Opinion FROM OPINIONESRESTAURANTES 
        WHERE ref_negocio='$ref_negocio'";

      
        $result = $gbd->query($sql);

        //return $results = $result->fetchAll(\PDO::FETCH_OBJ); 
        return $results = $result->fetchAll(\PDO::FETCH_ASSOC);

    } catch (\PDOException $e) {
        echo $e->getMessage();
        throw $e;
        die(); ?>
            <script>alert("¡***!");</script><?php
    } catch (\Exception $ex) {
        throw $ex;
        die(); ?>
            <script>alert("*");</script><?php
    }finally {
        $gbd = null;
    }
}


// Función que devuelve el número de opiniones de un Negocio
public function numOpiniones($ref_negocio){
    include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
    try {

        $sql="SELECT count(cod_opinionesrestaurantes) as num_Opiniones FROM OPINIONESRESTAURANTES";
        $result = $gbd->query($sql);
        return $results = $result->fetchAll(\PDO::FETCH_OBJ);

    } catch (\PDOException $e) {
        echo $e->getMessage();
        throw $e;
        die(); ?>
            <script>alert("¡***!");</script><?php
    } catch (\Exception $ex) {
        throw $ex;
        die(); ?>
            <script>alert("*");</script><?php
    }finally {
        $gbd = null;
    }
}


// Función que devuelve el número de tuplas de votos de un Negocio
public function numRegistrosVotos(){
    try {
        include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
        $sql="SELECT count(ref_votosusernamerestaurantes) as num_RegistrosVotos FROM VOTOSUSERNAMERESTAURANTES";
        $result = $gbd->query($sql);
        return $results = $result->fetchAll(\PDO::FETCH_OBJ);

    } catch (\PDOException $e) {
        echo $e->getMessage();
        throw $e;
        die(); ?> <script>alert("¡***!");</script><?php
    } catch (\Exception $ex) {
        throw $ex; die(); ?><script>alert("*");</script><?php
    }finally { $gbd = null; }
}


// Función que inserta un nuevo 
public function insertarOpinion($datos){ $datos['ref_Opinion']="OP" . $datos['num_Opiniones'];
    try { 
        include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
        $sql0='SET lc_time_names = "es_ES"';
        $sql = "INSERT INTO OPINIONESRESTAURANTES (username,ref_negocio,ref_Opinion,texto_Opinion)
                    VALUES('$datos[username]','$datos[ref_negocio2]','$datos[ref_Opinion]','$datos[cuestion]')";

        $result = $gbd->query($sql0); $acentos = $gbd->query("SET NAMES 'utf8'"); $result = $gbd->query($sql);

        if (!$result ){?>
            <script>alert("OPINIÓN NO INSERTADA, ya repetidos, BORRAR PRIMERO");</script><?php
             // este error lo puedes obtener usando 
             // mysqli_error($db) o $db->error;
             // return "Error no inserto, ";  
             return false;
        } else { ?><script>alert("¡NUEVA OPINIÓN INSERTADA CON EXITO!"); </script> <?php return true; }

    } catch (\PDOException$e) {
        //echo $e->getMessage(); ?>
        <script>alert("YA HA COMENTADO!");</script><?php
    } catch (\Exception $ex) {
    throw $ex; ?><script>alert("Algo ha ido mal!");</script><?php
    } finally { $gbd = null; }
}


// Función que da un voto a un Negocio
public function dar1voto($ref_negocio){
    try {
        include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
        $sql0='SET lc_time_names = "es_ES"'; // lAS TABLAS EN EL SERVIDOR GRATUITO, SIEMPRE EN MAYUSCULA, EN LOCALHOST DA IGUAL
        $sql = "UPDATE BARRESTAURANTES SET veces_Votado=veces_Votado+1, veces_Positivo=veces_Positivo+1 WHERE ref_negocio='$ref_negocio'";

        $acentos = $gbd->query("SET NAMES 'utf8'"); $result = $gbd->query($sql);

        if (! $result ) {?>
            <script>alert("No se ha podido votar");</script><?php // este error lo puedes obtener usando 
                mysqli_error($db); $db->error; // return "Error no inserto, ";  
                return false;
        } else { ?><script>//alert("¡Ya ha votado con Exito");</script> <?php return true; }

    } catch (\PDOException$e) {
        //echo $e->getMessage(); ?>
        <script>alert("Error al votar");</script><?php
    } catch (\Exception $ex) {
    throw $ex; ?><script>alert("Algo ha ido mal al votar!");</script><?php
    } finally { $gbd = null; }
}




// Función que inserta un nuevo registro 
public function insertVotosUsernameNegocio($ref_votosusernamerestaurantes, $username_cliente, $ref_negocio, $calificacion){
    include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE


 

    try {
        $sql0='SET lc_time_names = "es_ES"';
        $sql = "INSERT INTO VOTOSUSERNAMERESTAURANTES (ref_votosusernamerestaurantes, username, ref_negocio, calificacion)
                    VALUES('$ref_votosusernamerestaurantes','$username_cliente','$ref_negocio','$calificacion')";


        //var_dump($sql);die();

        $result = $gbd->query($sql0); 
        $acentos = $gbd->query("SET NAMES 'utf8'");
        $result = $gbd->query($sql);

        if (! $result ) {?>
            <script>//alert("Ya ha votado,pues está en la tabla relacional, gracias!");</script><?php
             // este error lo puedes obtener usando 
             // mysqli_error($db) o $db->error;
             // return "Error no inserto, ";  
             return false;
        } else {
            ?><script>
              //alert("¡Gracias por su votación!");
            </script> <?php
         return true;
        }

    } catch (\PDOException$e) {
        //echo $e->getMessage(); ?> <script>//alert("YA HA VOTADO, NO PUEDE HACERLO 2 VECES!");</script><?php
    } catch (\Exception $ex) {
    throw $ex; ?><script>alert("Algo ha ido mal!");</script><?php
    } finally {
        $gbd = null;
    }

}



// Función que da un voto a un Negocio
public function restarVotos($ref_negocio){
    include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE

        try {
            $sql0='SET lc_time_names = "es_ES"'; // lAS TABLAS EN EL SERVIDOR GRATUITO, SIEMPRE EN MAYUSCULA, EN LOCALHOST DA IGUAL

         
            $sql = "UPDATE BARRESTAURANTES SET veces_Positivo=veces_Positivo-1, veces_Negativo=veces_Negativo+1
                               WHERE ref_negocio='$ref_negocio'";

            $acentos = $gbd->query("SET NAMES 'utf8'");
            $result = $gbd->query($sql);

            if (! $result ) {?>
                <script>alert("No se ha podido votar");</script><?php
                 // este error lo puedes obtener usando 
                  mysqli_error($db);
                   $db->error;
                 // return "Error no inserto, ";  
                 return false;
            } else {
                ?><script>//alert("¡Ya ha votado, gracias");</script> <?php
             return true;
            }

        } catch (\PDOException$e) {
            //echo $e->getMessage(); ?>
            <script>alert("Error al votar");</script><?php
        } catch (\Exception $ex) {
        throw $ex; ?><script>alert("Algo ha ido mal al votar!");</script><?php
        } finally {
            $gbd = null;
        }
}



// Función que devuelve los votos de un Negocio
public function votos1Negocio($ref_negocio){
    include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
    try {
        $sql="SELECT veces_Votado,veces_Positivo,veces_Negativo FROM BARRESTAURANTES WHERE ref_Negocio='$ref_negocio'";

        $result = $gbd->query($sql);

        //var_dump($sql);//die();

        return $results = $result->fetchAll(\PDO::FETCH_OBJ);
    } catch (\PDOException $e) {
        echo $e->getMessage();
        throw $e;
        die(); ?>
            <script>alert("¡***!");</script><?php
    } catch (\Exception $ex) {
        throw $ex;
        die(); ?>
            <script>alert("*");</script><?php
    } finally {
        $gbd = null;
    }
}




    // Función que elimina TUPLAS de la tabla "VOTOSUSERNAMERESTAURANTES"
    public function deleteVotosUsernameNegocioNegativo($username_cliente, $ref_negocio, $calificacion){
       
        try {
            include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/conf/configuracionfantasma.inc'; 

            $sql="DELETE FROM VOTOSUSERNAMERESTAURANTES WHERE username='$username_cliente' and ref_negocio='$ref_negocio' and calificacion='$calificacion'"; 

           
            $result = $gbd->query($sql);  
        //var_dump($result);

if ($result) {?>
        <script>//alert("¡Vamos a cambiar su opinión!");</script><?php
} else {?>
    <script>//alert("¡CALIFICACIÓN NO ELIMINADA!");</script><?php
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


    
            
// Función que devuelve los votos de un Negocio
public function calificacionUsuarioNegocio($username_cliente, $ref_negocio){

    include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
    try {
        $sql="SELECT calificacion FROM VOTOSUSERNAMERESTAURANTES WHERE username='$username_cliente' AND ref_negocio='$ref_negocio'";

        $result = $gbd->query($sql);

        return $results = $result->fetchAll(\PDO::FETCH_OBJ);
    } catch (\PDOException $e) {
        echo $e->getMessage();
        throw $e;
        die(); ?>
            <script>alert("¡*q*!");</script><?php
    } catch (\Exception $ex) {
        throw $ex;
        die(); ?>
            <script>alert("q*");</script><?php
    } finally {
        $gbd = null;
    }
}
}
