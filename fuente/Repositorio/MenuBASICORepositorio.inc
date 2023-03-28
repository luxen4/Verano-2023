<?php
namespace miId\fuente\Repositorio;
use miId\core\ConexionBd;

class MenuBASICOSRepositorio{  


// Función que devuelve todos los modelos de menús "BASICOS" del día de un Negocio (tabla ctl=seleccionar_menu).                                           
public function todosMenusBASICOS($ref_negocio){    
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
        $sql0='SET lc_time_names = "es_ES"';

        //$sql="SELECT * FROM MENUBASICO";

        $sql="SELECT r.ref_menu, mb.ref_modelomenu, r.habilitado FROM MENUBASICO mb
        INNER JOIN RELACIONMENUSNEGOCIOS r on r.ref_menu = mb.ref_menu
        WHERE r.ref_negocio='$ref_negocio'"; //var_dump($sql);

        $acentos = $gbd->query("SET NAMES 'utf8'"); $result = $gbd->query($sql0); $result = $gbd->query($sql);

        if ($result) {?> <script>//alert("///");</script><?php
        } else {?> <script>alert("///");</script><?php return false; }

        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
    } catch (\PDOException $e) {
        echo $e->getMessage();
    } finally { $gbd = null; }
}














































// Función que inserta un nuevo destino | Recive un array de datos                                            
public function nuevoMenu($datos){  $ref_negocio='M' . $datos['ref_negocio'];
    try {include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
            $sql="INSERT INTO MENU(ref_menu,nombre_MenuPersonal,ref_modelomenu,ref_negocio,primero1,primero2,primero3,primero4,primero5,
                                    segundo1,segundo2,segundo3,segundo4,segundo5,postre1,postre2,postre3,incluido,precio,iva_incluido,comentario)
                        VALUES(/*cod_menu*/'$ref_negocio','$datos[ref_modelomenu]','$datos[ref_negocio]',
                        '$datos[p_plato1]','$datos[p_plato2]','$datos[p_plato3]','$datos[p_plato4]','$datos[p_plato5]',
                        '$datos[s_plato1]','$datos[s_plato2]','$datos[s_plato3]','$datos[s_plato4]','$datos[s_plato5]',
                        '$datos[p_postre1]','$datos[p_postre2]','$datos[p_postre3]','$datos[incluido]','$datos[precio]','$datos[iva_incluido]','$datos[comentario]')";    
                       // var_dump($sql);// die();

        $acentos = $gbd->query("SET NAMES 'utf8'");
        $sql0='SET lc_time_names = "es_ES"'; $result = $gbd->query($sql0); $result = $gbd->query($sql);

        if($result) {?> <script>//alert("Menú añadido CON EXITO!");</script><?php 
        }else{?> <script>alert("¡Menú NO AÑADIDO!");</script><?php return false; }

        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

    } catch (\PDOException $e) { echo $e->getMessage(); } finally { $gbd = null;
    }
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


// Función que inserta un nuevo Menú Del Día de un Negocio                                            
public function infoMenu($ref_negocio){    
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
        $sql0='SET lc_time_names = "es_ES"';
        $sql="SELECT * FROM MENU WHERE ref_negocio='$ref_negocio'";

        $acentos = $gbd->query("SET NAMES 'utf8'"); $result = $gbd->query($sql0); $result = $gbd->query($sql);

        if ($result) {?>
            <script>//alert("///");</script><?php
        } else {?>
        <script>alert("///");</script><?php return false;
        }

        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
    } catch (\PDOException $e) {
        echo $e->getMessage();
    } finally { $gbd = null; }
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



// Función que inserta en la Tabla de RELACIONMENUSNEGOCIOS un Negocio y su Menú                                    
public function nuevaRelacionMenusNegocios($ref_negocio,$ref_menu){   $ref_RelacionMenusNegocios='MN' . $ref_negocio;
    try {include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
            $sql="INSERT INTO RELACIONMENUSNEGOCIOS (ref_RelacionMenusNegocios, ref_negocio, ref_menu, menu_premium)
                            VALUES(/*cod_menu*/'$ref_RelacionMenusNegocios', '$ref_negocio','$ref_menu')";  //var_dump($sql); die();

        $acentos = $gbd->query("SET NAMES 'utf8'");
        $sql0='SET lc_time_names = "es_ES"'; $result = $gbd->query($sql0); $result = $gbd->query($sql);

        if($result) {?> <script>//alert("Menú añadido CON EXITO!");</script><?php 
        }else{?> <script>alert("¡Menú NO AÑADIDO!");</script><?php return false; }

        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

    } catch (\PDOException $e) { echo $e->getMessage(); } finally { $gbd = null;
    }
}



// Función que devuelve todos los Menús del día "MOD" de un negocio.                                           
public function todosMenusMOD($ref_negocio){    
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; 
        /*$sql="SELECT * FROM MENU WHERE ref_negocio='$ref_negocio'";*/
        $sql="SELECT r.ref_menu, mm.ref_modelomenu, r.habilitado FROM MENUMOD mm 
        INNER JOIN RELACIONMENUSNEGOCIOS r on r.ref_menu = mm.ref_menu
        WHERE r.ref_negocio='$ref_negocio'";

        $result = $gbd->query($sql);  return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
    } catch (\PDOException $e) { echo $e->getMessage();
    } finally { $gbd = null;
    }
}


}