<?php
namespace miId\fuente\Repositorio;
use miId\core\ConexionBd;

include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS; 


class HotelesRepositorio{  

// Función que muestra todos los destinos en la  "Tabla: Agenda Verano-2022"
public function hotelesLocalidad($ref_Localidad){
    try {  
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;

        $sql="SELECT nombre_Hotel, e_web FROM Hotel  
        where ref_Localidad='$ref_Localidad' ORDER BY cod_Posiciones asc";

        $acentos = $gbd->query("SET NAMES 'utf8'");
        $result =$gbd ->query($sql); 
        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

    }catch(\PDOException $e) {
        echo $e->getMessage();
    }finally{
        $gbd = null;
    }
}


}