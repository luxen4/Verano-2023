<?php
namespace miId\fuente\Repositorio;
use miId\core\ConexionBd;

class JuegosRepositorio{  


// Función que devuelve el nº de Sudokus
public function numSudokus(){
    try {  
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE

        $sql="SELECT COUNT(ref_Sudoku) as numeroSudokus FROM SUDOKU";

        //var_dump($sql);die();

        $result =$gbd ->query($sql); 
        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

    }catch(\PDOException $e) {
        echo $e->getMessage();
    }finally{
        $gbd = null;
    }
}



// Función que devuelve el cod_Destino de un Destino, (param:nombre del lugar)
public function extraerSudoku(){
    try {  
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE

        $sql="SELECT * FROM SUDOKU";

        $result =$gbd ->query($sql); 
        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

    }catch(\PDOException $e) {
        echo $e->getMessage();
    }finally{
        $gbd = null;
    }
}





}