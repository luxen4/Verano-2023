<?php
    namespace miId\fuente\Repositorio;
    use miId\core\ConexionBd;

class UsuarioRepositorio{
    //-------------------------------------------------------------------------------------------------------------------
    // Función que ...
    public function recuperaContrasenaUsuario($datos){
        try {
            include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE

            $sql = "SELECT ref_Usuario FROM RECUPERACONTRASENA WHERE CORREO_Usuario='$datos[correo]'";
            //  var_dump($sql);  die();
            $result = $gbd->query($sql);

            return $results = $result->fetchAll(\PDO::FETCH_OBJ);
        } catch (\PDOException$e) {
            echo $e->getMessage();
        } finally {
            $gbd = null;
        }
    }
    
    // Función que ...
    public function nombreUsuario($ref_Usuario){
      
        try {
            include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE

            $sql = "SELECT nombre_Agencia FROM AGENCIAVIAJES WHERE ref_AgenciaViajes='$ref_Usuario'";
           
            $result = $gbd->query($sql);
     //var_dump($result);die();
            return $results = $result->fetchAll(\PDO::FETCH_OBJ);
        } catch (\PDOException$e) {
            echo $e->getMessage();
        } finally {
            $gbd = null;
        }
    }
   
        // Función que ...
        public function activacionYtokenPassword($datos){
      
            try {
                include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
    
                $sql="UPDATE RECUPERACONTRASENA
                      SET activacion='$datos[activacion]', token_Password='$datos[token_Password]'
                       WHERE ref_Usuario='$datos[ref_Usuario]'";
                //  var_dump($sql);  die();
                $result = $gbd->query($sql);
    
                return $results = $result->fetchAll(\PDO::FETCH_OBJ);
            } catch (\PDOException$e) {
                echo $e->getMessage();
            } finally {
                $gbd = null;
            }
        }

       
        // Función que ...
        public function desActivacionYtokenPassword($datos){
      
            try {
                include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
    
                $sql="UPDATE RECUPERACONTRASENA
                      SET activacion=null, token_Password=null
                       WHERE ref_Usuario='$datos[ref_Usuario]'";
                //  var_dump($sql);  die();
                $result = $gbd->query($sql);
    
                return $results = $result->fetchAll(\PDO::FETCH_OBJ);
            } catch (\PDOException$e) {
                echo $e->getMessage();
            } finally {
                $gbd = null;
            }
        }
        
// Función que cambia de contraseña a una Agencia de Viajes (Modificar el código para que sea al Usuario)
public function cambioContrasenaUsuario($datos){

    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
            $sql="UPDATE AGENCIAVIAJES SET contrasena='$datos[hash]' WHERE ref_AgenciaViajes='$datos[ref_Usuario]'";
            $result = $gbd->query($sql);

        if ($result) { ?><script>
            alert("Su contraseña ha sido cambiada con Exito");
            window.location.href="index.php?ctl=inicio/";</script><?php
        }else{ ?><script>alert("Ha habido un problema al cambiar las contraseñas");</script><?php }

    } catch (\PDOException$e) {
        echo $e->getMessage();
    } finally {
        $gbd = null;
    }
}

        
          // Función que ...
    public function tokenBaseDatos($ref_Usuario){
        include_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2023/app/utilidades/constantes.inc'; 
        try {
            include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE

            $sql = "SELECT token_Password FROM RECUPERACONTRASENA WHERE ref_Usuario='$ref_Usuario'";
           
            $result = $gbd->query($sql);
     //var_dump($result);die();
            return $results = $result->fetchAll(\PDO::FETCH_OBJ);
        } catch (\PDOException$e) {
            echo $e->getMessage();
        } finally {
            $gbd = null;
        }
    }

} 