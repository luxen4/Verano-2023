<?php
    namespace miId\fuente\Repositorio;
    use miId\core\ConexionBd;

class LocalidadRepositorio
{

//-------------------------------------------------------------------------------------------------------------------
    // Función que busca el hash de un 
    public function imagenesLocalidad($ref_Localidad)
    {
        try {
            include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
         
            $sql = "SELECT i.nombre_img1, i.nombre_img2, i.nombre_img3 FROM IMAGENESLOCALIDAD i
            INNER JOIN RELACIONIMAGENESLOCALIDAD r on i.ref_ImagenesLocalidad=r.ref_ImagenesLocalidad
            
            WHERE r.ref_Localidad='$ref_Localidad'";
            $result = $gbd->query($sql);

            return $results = $result->fetchAll(\PDO::FETCH_OBJ);
        } catch (\PDOException$e) {
            echo $e->getMessage();
        } finally {
            $gbd = null;
        }
    }
    //--------------------------------------------------------------------------------------------------------------------


    // Función que busca
    public function nombreImagen($ref_Localidad,$posicion_Siguiente)
    {
        try {
            include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
         
            $sql = "SELECT nombre_Img FROM IMAGENESLOCALIDAD WHERE ref_Localidad='$ref_Localidad' and posicion='$posicion_Siguiente' ";
            $result = $gbd->query($sql);

            return $results = $result->fetchAll(\PDO::FETCH_OBJ);
        } catch (\PDOException$e) {
            echo $e->getMessage();
        } finally {
            $gbd = null;
        }
    }


    // Función que devuelve todas las Localidades Predeterminadas
    public function todasLocalidades()
    {
        try {
            include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
         
            $sql = "SELECT * FROM LOCALIDAD";
            $result = $gbd->query($sql);

            return $results = $result->fetchAll(\PDO::FETCH_OBJ);
        } catch (\PDOException$e) {
            echo $e->getMessage();
        } finally {
            $gbd = null;
        }
    }


        // Función que devuelve todas las Localidades Predeterminadas
        public function todasLocalidades_ReferenciaYnombre()
        {
            try {
                include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE
             
                $sql = "SELECT ref_Localidad, nombre_Localidad FROM LOCALIDAD";
                $result = $gbd->query($sql);
    
                return $results = $result->fetchAll(\PDO::FETCH_OBJ);
            } catch (\PDOException$e) {
                echo $e->getMessage();
            } finally {
                $gbd = null;
            }
        }

}