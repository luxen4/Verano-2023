<?php
namespace miId\fuente\Repositorio;
use miId\core\ConexionBd;

class BuscadoresRepositorio{  


// Función que devuelve los destinos filtrados
public function filtrarDestinos($datos){
    $fecha_Viaje=$datos['fechaviaje'];
    $dia_Semana=$datos['diasemana'];
    $lugar_Destino=$datos['lugardestino'];
    $ref_AgenciaViajes=$datos['agenciaviajes'];
       
    
    $condicion="";
    
    if (!empty($fecha_Viaje)) {
        $condicion=$condicion . "d.fecha_Viaje=" . "'$fecha_Viaje'" . " and ";
    }
    
    if (!empty($dia_Semana)) {
        $condicion=$condicion . "d.dia_Semana=" . "'$dia_Semana'" . " and ";
    }
    
    if (!empty($lugar_Destino)) {
        $condicion=$condicion . "l.ref_Localidad=" . "'$lugar_Destino'" . " and ";
    }
    
    if (!empty($ref_AgenciaViajes)) {
        $condicion=$condicion . "av.ref_AgenciaViajes=" . "'$ref_AgenciaViajes'" . " and ";
    }
    
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
    
        $sql="SELECT distinct d.ref_Localidad, d.cod_Destino, l.nombre_Localidad, l.provincia, l.comunidad, l.pais, l.ruta_imagen1, 
                    d.dia_Semana,d.fecha_Viaje,/*b.matricula,*/ av.nombre_Agencia, d.euros 
                FROM DESTINO d 
    
            INNER JOIN AGENCIAVIAJES av ON av.ref_AgenciaViajes=d.ref_AgenciaViajes 
            INNER JOIN AGENCIABUSES ab ON ab.cod_AgenciaBuses=av.cod_CompaniaBusHabitual
            /*INNER JOIN BUS b ON b.cod_AgenciaBuses=ab.cod_AgenciaBuses*/
    
            INNER JOIN LOCALIDAD l on l.ref_Localidad=d.ref_Localidad 
            /*INNER JOIN BUS bu ON b.cod_Bus=d.cod_Bus*/
    
            where $condicion d.fecha_Viaje >=CURDATE() ORDER BY fecha_Viaje asc";
           // var_dump($sql);die();
        $result =$gbd ->query($sql);
        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
    } catch (\PDOException $e) {
        echo $e->getMessage();
} finally {
        $gbd = null;
    } 
}


// Función que devuelve los Negocios filtrados por Localidad desde el Cuadro/Buscador
public function filtrarNegociosLocalidad($ref_Localidad){

    try {include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';

        $sql="SELECT * FROM BARRESTAURANTES br
        /*   INNER JOIN CONTRATOBARRESTAURANTES cbr on cbr.cod_contratobarrestaurantes = br.cod_barrestaurantes 
                INNER JOIN CONTRATO cn on cn.cod_contrato=cbr.cod_contratobarrestaurantes  
                INNER JOIN DESTINO d on d.cod_Destino=br.cod_Destino 
                INNER JOIN LOCALIDAD l on l.cod_Localidad=br.cod_Destino
            */
        WHERE br.ref_Localidad='$ref_Localidad' 
        
        /*ORDER BY cn.f_inicio asc*/";

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
    } finally {
        $gbd = null;
    }
}


}