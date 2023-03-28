<?php
    namespace miId\fuente\Repositorio;
    use miId\core\ConexionBd;

class IpremotainterfaceRepositorio
{

// Función que inserta una relación entre Ip y una interface
public function insertRelacion($datos){

$ref_Interface=$datos['ref_Interface'][0]->ref_Interface;

try {
    include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
    $sql0='SET lc_time_names = "es_ES"';
    $sql = "INSERT INTO RELACIONIPREMOTAINTERFACE (ref_RelacionInterfaceRemota, ref_IpRemota, ref_Interface, fecha)
                VALUES('$datos[ref_RelacionInterfaceRemota]','$datos[ref_IpRemota]','$ref_Interface',default)";

    $result = $gbd->query($sql0); $acentos = $gbd->query("SET NAMES 'utf8'"); $result = $gbd->query($sql);

    if (! $result ) {?>
        <script>alert("Cliente NO INSERTADO, imeil y/o username ya repetidos");</script><?php
            // este error lo puedes obtener usando 
            // mysqli_error($db); //o $db->error;
            // return "Error no inserto, ";  
            return false;
    } else {
        ?><script>//alert("¡NUEVA RELACION, INSERTADa CON EXITO!");</script> <?php
        return true;
    }

} catch (\PDOException$e) {
    //echo $e->getMessage(); die(); // Es el mensaje que extrae de MySql ?> 
    <script>alert("La IP ya ha pasado por aquí!");</script><?php 
} catch (\Exception $ex) {
throw $ex; ?><script>alert("Algo Relacion no insertada ha ido mal!");</script><?php 
} finally {
    $gbd = null;
}

}
 


// Función que inserta una visita de una IP a un Negocio
public function visitaIpNegocio($datos){
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
        $sql0='SET lc_time_names = "es_ES"';
        $sql = "INSERT INTO VISITAFICHANEGOCIO (ref_VisitaFichaNegocio, ref_IpRemota, ref_negocio, fecha)
                    VALUES('$datos[ref_VisitaFichaNegocio]','$datos[ref_IpRemota]','$datos[ref_negocio]',default)";
    
        $result = $gbd->query($sql0); $acentos = $gbd->query("SET NAMES 'utf8'"); $result = $gbd->query($sql);
    
        if (! $result ) {?>
            <script>alert("Cliente NO INSERTADO, imeil y/o username ya repetidos");</script><?php
                // este error lo puedes obtener usando 
                // mysqli_error($db); //o $db->error;
                // return "Error no inserto, ";  
                return false;
        } else {
            ?><script>//alert("¡NUEVA RELACION, INSERTADa CON EXITO!");</script> <?php //die();
            return true;
        }
    
    } catch (\PDOException$e) {
        //echo $e->getMessage(); die(); // Es el mensaje que extrae de MySql ?> 
        <script>alert("La IPPP ya ha pasado por aquí!");</script><?php 
    } catch (\Exception $ex) {
    throw $ex; ?><script>alert("Algo Relacion no insertada ha ido mal!");</script><?php 
    } finally { $gbd = null; }
    
}


// Función que devuelve el último registro de ref_RelacionInterfaceRemota
public function ultimaRelacionInterfaceRemota(){
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
        $sql0='SET lc_time_names = "es_ES"';
        $sql = "SELECT MAX(ref_RelacionInterfaceRemota) AS maxima_ref FROM RELACIONIPREMOTAINTERFACE ";

      // var_dump($sql);

        $result = $gbd->query($sql0); $acentos = $gbd->query("SET NAMES 'utf8'"); $result = $gbd->query($sql);
    
        if ( $result ) {
            return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
        } else { ?>
            <script>alert("pweweo");</script><?php
                // este error lo puedes obtener usando // mysqli_error($db); //o $db->error; // return "Error no inserto, ";  
            return false;
        }
    
    } catch (\PDOException$e) {
        echo $e->getMessage(); //die(); // Es el mensaje que extrae de MySql ?> 
        <script>alert("rtyrt!");</script><?php 
    } catch (\Exception $ex) {
    throw $ex; ?><script>alert("tyutyu!");</script><?php 
    } finally { $gbd = null; }

}
 


// Función que devuelve el último registro de LA TABLA VISITAFICHANEGOCIO 
public function ultimaRefVisitaNegocio(){
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
        $sql0='SET lc_time_names = "es_ES"';
       // $sql = "SELECT MAX(ref_VisitaFichaNegocio) AS maxima_ref FROM VISITAFICHANEGOCIO";
         $sql = "SELECT * FROM VISITAFICHANEGOCIO 
         where  cod_VisitaFichaNegocio = (select MAX(cod_VisitaFichaNegocio) from VISITAFICHANEGOCIO)";

     // var_dump($sql); die();

        $result = $gbd->query($sql0); $acentos = $gbd->query("SET NAMES 'utf8'"); $result = $gbd->query($sql);
    
        if ( $result ) {
            return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
        } else { ?>
            <script>alert("pweweo");</script><?php
                // este error lo puedes obtener usando // mysqli_error($db); //o $db->error; // return "Error no inserto, ";  
            return false;
        }
    
    } catch (\PDOException$e) {
        echo $e->getMessage(); //die(); // Es el mensaje que extrae de MySql ?> 
        <script>alert("rtyrt!");</script><?php 
    } catch (\Exception $ex) {
    throw $ex; ?><script>alert("tyutyu!");</script><?php 
    } finally { $gbd = null; }

}



// Función que devuelve el último registro de ref_RelacionInterfaceRemota
public function refInterface(){
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
        $sql0='SET lc_time_names = "es_ES"';
        $sql = "SELECT ref_Interface FROM interface";

        $result = $gbd->query($sql0); $acentos = $gbd->query("SET NAMES 'utf8'"); $result = $gbd->query($sql);
    
        if ( $result ) {
            return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
        } else { ?>
            <script>alert("pweweo");</script><?php
                // este error lo puedes obtener usando // mysqli_error($db); //o $db->error; // return "Error no inserto, ";  
            return false;
        }
    
    } catch (\PDOException$e) {
        echo $e->getMessage(); //die(); // Es el mensaje que extrae de MySql ?> 
        <script>alert("rtyrt!");</script><?php 
    } catch (\Exception $ex) {
    throw $ex; ?><script>alert("tyutyu!");</script><?php 
    } finally { $gbd = null; }

}


}

