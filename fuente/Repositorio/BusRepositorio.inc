<?php
namespace miId\fuente\Repositorio;
use miId\core\ConexionBd;

class BusRepositorio
{

// Función que inserta una Nueva Agencia de Viajes | Recive un array de datos
public function nuevoBus($datos){
    $codAgenciaBuses=$_SESSION['perfil']['cod_AgenciaAutobus'];
            try {
                include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
                $sql = "INSERT INTO BUS (tipo_Bus,plazas,matricula,ano_Matriculacion,cod_AgenciaBuses)
                        VALUES('$datos[tipobus]','$datos[numplazas]','$datos[matricula]','$datos[anomatriculacion]','$codAgenciaBuses')";

            $result = $gbd->query($sql);?>
            <script>alert("Bus Insertado!")</script><?php
            return true;

            } catch (\PDOException$e) {
                echo $e->getMessage();?>
        <script>alert("¡No se Ha insertado el BUS!");</script><?php //die();
            } catch (\Exception$ex) {
                throw $ex;?>
        <script>alert("¡No se Ha insertado el BUS!");</script><?php

            } finally {
                $gbd = null;
            }
}

// Función que modifica los datos de un Bus
public function modificarBus($datos, $codBus){

    $codBus=$codBus['codbus'];
    include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 

    $sql = "UPDATE BUS
            SET tipo_Bus='$datos[tipobus]', plazas='$datos[numplazas]', matricula='$datos[matricula]',ano_Matriculacion='$datos[anomatriculacion]'
            WHERE cod_Bus='$codBus'";

    $result = $gbd->query($sql);

    if($result->rowCount()){ ?>
        <script>alert("BUS MODIFICADO CON EXITO");</script><?php  
        return true;
        } else {?>
        <script>alert("Lo sentimos, no se ha podido modificar el BUS");</script><?php
        return false;
        } 
        $gbd = null;
}

// Función que elimina un Bus de una Agencia de Buses logeada (autoEliminación o eliminación por parte del administrador)
public function eliminarBusAgenciaBusesLogeada($matricula){
    
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
        $sql = "DELETE FROM BUS WHERE matricula='$matricula'";

        $result = $gbd->query($sql);?>
        <script>alert("¡Bus Eliminado!");</script><?php 

        return true;

    } catch (\PDOException$e) {?>
        <script>alert("¡Lo sentimos, BUS no eliminado!");</script><?php 
        echo $e->getMessage();
    } catch (\Exception$ex) {
        throw $ex; ?>
        <script>alert("¡No se Ha insertado el BUS!");</script><?php 
    } finally {
        $gbd = null;
    }
}


// Función que busca todos los Buses de una Agencias de Buses logueada pero desde el perfil de una Agencia de Buses logueada
    public function todosBusesdeUnaAgenciaBuses($codAgenciaBuses){
    //echo("Entro a Repositorio->todosBusesDeUnaAgenciaBuses");    
        try {
            include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
            $sql = "SELECT cod_Bus, tipo_Bus, plazas, matricula, ano_Matriculacion FROM BUS WHERE cod_AgenciaBuses='$codAgenciaBuses'";
            //var_dump($sql);die();
            $result = $gbd->query($sql);
            return $results = $result->fetchAll(\PDO::FETCH_OBJ);

        } catch (\PDOException$e) {
            echo $e->getMessage();
        } catch (\Exception$ex) {
          throw $ex;
        } finally {
            $gbd = null;
        }

    }

// Función que busca todos los Buses de una Agencias de Buses logueada pero desde el perfil de su Agencia de Viajes predeterminada
    public function todosBusesdeUnaAgenciaBusesCodAgenciaViajes($ref_AgenciaViajes){
        try {
            include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
            $sql = "SELECT b.ref_Bus, b.tipo_Bus, b.plazas, b.matricula, b.ano_Matriculacion, ab.nombre FROM BUS b
                        INNER JOIN AGENCIABUSES ab ON ab.ref_AgenciaBuses=b.ref_AgenciaBuses
                        INNER JOIN AGENCIAVIAJES av ON av.ref_CompaniaBusHabitual=ab.ref_AgenciaBuses
                        WHERE av.ref_AgenciaViajes='$ref_AgenciaViajes'";  //var_dump($sql);die();
          
            $result = $gbd->query($sql);
            return $results = $result->fetchAll(\PDO::FETCH_OBJ);

        } catch (\PDOException$e) { echo $e->getMessage();
        } catch (\Exception$ex) { throw $ex;
        } finally { $gbd = null; }
    }


    // Función que busca todos los Buses disponibles para una Agencias de Viajes logueada 
    // (Buses de sus Agencias de Buses comprometidas )

    public function todosBusesDisponiblesParaUnaAgenciaViajes($ref_AgenciaViajes){
        try {
            include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
            $sql = "SELECT distinct ab.nombre,b.ref_Bus/*,ab.cod_AgenciaBuses/*,b.tipo_Bus*/, b.plazas, b.matricula/*, b.ano_Matriculacion, ab.nombre*/ FROM BUS b
                        INNER JOIN AGENCIABUSES ab ON ab.ref_AgenciaBuses=b.ref_AgenciaBuses
                        INNER JOIN RELACIONAGENCIAS r ON ab.ref_AgenciaBuses=r.ref_AgenciaBuses
                        INNER JOIN AGENCIAVIAJES av ON av.ref_CompaniaBusHabitual=ab.ref_AgenciaBuses
                        WHERE r.ref_AgenciaViajes='$ref_AgenciaViajes' /*AND ab.ref_AgenciaViajes!='$ref_AgenciaViajes'*/";
       

            $result = $gbd->query($sql);

            return $results = $result->fetchAll(\PDO::FETCH_OBJ);



            //return $results = $result->fetchAll();

        } catch (\PDOException$e) { echo $e->getMessage();
        } catch (\Exception$ex) { throw $ex;
        } finally { $gbd = null; }
    }


// Función que busca todos los Buses de una Agencias de Buses logueada pero desde el perfil de una Agencia de Viajes
  /*  public function todosBusesdeUnaAgenciaBuses($codAgenciaBuses){
        
        try {
            include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
            $sql = "SELECT b.cod_Bus, b.tipo_Bus, b.plazas, b.matricula, b.ano_Matriculacion, ab.nombre FROM BUS b
                        INNER JOIN AGENCIABUSES ab ON ab.cod_AgenciaBuses=b.cod_AgenciaBuses
                        INNER JOIN AGENCIAVIAJES av ON av.cod_CompaniaBusHabitual=ab.cod_AgenciaBuses
                        WHERE av.cod_AgenciaViajes=$codAgenciaBuses";

            $result = $gbd->query($sql);

            return $results = $result->fetchAll(\PDO::FETCH_OBJ);

        } catch (\PDOException$e) {
            echo $e->getMessage();
        } catch (\Exception$ex) {
          throw $ex;
        } finally {
            $gbd = null;
        }
    }
*/



// Funcion que busca la referencia de un Bus que va a ir a un Destino
    public function refBus($ref_Destino){

        try {
            include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS; 
            $sql = "SELECT ref_Bus FROM DESTINO WHERE ref_Destino='$ref_Destino'";
            //var_dump($sql);   die();
            $result = $gbd->query($sql);  
            
            return $results = $result->fetchAll(\PDO::FETCH_OBJ);

        } catch (\PDOException$e) {
            echo $e->getMessage();
        } catch (\Exception$ex) {
          throw $ex;
        } finally {
            $gbd = null;
        }
    }








    
// Funcion que busca las plazas totales de un bus que va a un Destino
public function plazasTotalesBus($ref_Destino){
  // echo "he entrado plazas totales de un bus";
    try {
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
        $sql = "SELECT b.plazas FROM BUS b INNER JOIN DESTINO d ON d.ref_Bus=b.ref_Bus WHERE d.ref_Destino='$ref_Destino'";

        $result = $gbd->query($sql);  
        return $results = $result->fetchAll(\PDO::FETCH_OBJ);

    } catch (\PDOException$e) {
        echo $e->getMessage();
    } catch (\Exception$ex) {
      throw $ex;
    } finally {
        $gbd = null;
    }
}


// Funcion que busca las plazas totales de un bus que va a un Destino (param $ref_Destino, )
public function plazasQuedanEnUnBus($ref_Destino){
    try {
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
        $sql = "SELECT * from VIAJAR where ref_Destino='$ref_Destino'";

        $result = $gbd->query($sql);  
        return $results = $result->fetchAll(\PDO::FETCH_OBJ);

    } catch (\PDOException$e) {
        echo $e->getMessage();
    } catch (\Exception$ex) {
      throw $ex;
    } finally {
        $gbd = null;
    }
}


public function todosBuses(){
    try {
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
        $sql = "SELECT ab.nombre,b.ref_Bus/*,ab.cod_AgenciaBuses/*,b.tipo_Bus*/, b.plazas, b.matricula/*, b.ano_Matriculacion, ab.nombre*/ FROM BUS b
                    INNER JOIN AGENCIABUSES ab ON ab.ref_AgenciaBuses=b.ref_AgenciaBuses
                    
                    
                     ";
   
        $result = $gbd->query($sql); //var_dump($result);die();
        return $results = $result->fetchAll(\PDO::FETCH_OBJ);
        //return $results = $result->fetchAll();

    } catch (\PDOException$e) { echo $e->getMessage();
    } catch (\Exception$ex) { throw $ex;
    } finally { $gbd = null; }
}

}