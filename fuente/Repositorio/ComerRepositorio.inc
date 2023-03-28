<?php
namespace miId\fuente\Repositorio;
use miId\core\ConexionBd;

class ComerRepositorio
{

// Función que devuelve los Baresrestaurantes donde comer de una Localidad
    public function dondeComer($cod_Destino){ 
        //var_dump($cod_Destino);
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';
            //$cod_Destino=$cod_Destino[0]->cod_Destino;
        try {
            $sql="SELECT br.cod_Destino,d.nombre_Lugar,l.nombre_Localidad as nombreLocalidad, br.ruta_imagen1,br.ruta_imagen2,br.ruta_imagen3,br.nombre,br.descripcion,br.telefono,
            br.direccion,br.e_tripadvisor,br.e_facebook,e_web, br.habilitado FROM BARRESTAURANTES br
            INNER JOIN DESTINO d on d.cod_Destino=br.cod_Destino
            INNER JOIN LOCALIDAD l on l.ref_Localidad=br.ref_Localidad
            
             WHERE br.cod_Destino='$cod_Destino'";
                //var_dump($sql);
            $result = $gbd->query($sql);
            return $results = $result->fetchAll(\PDO::FETCH_OBJ);

            /*    if($result===true){
                    return $results = $result->fetchAll(\PDO::FETCH_OBJ);
                }else{
                    return $results = $result->fetchAll(\PDO::FETCH_OBJ);
                }
            */

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


    
    // Función que devuelve los Negocios donde para la tabla del administrador.
    // All Bars & Restaurants
    public function todosBaresRestaurantes(){ 
        
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';
            /*     <th>Localidad</th> <th>Nombre</th><th>Dirección</th><th>Teléfono</th><th>Inicio Publicidad</th><th>Final Publicidad</th><th>Habilitar</th> */
        try {

           /* $sql="SELECT l.cod_Localidad, l.nombre_Localidad as localidad, br.nombre, br.direccion, br.telefono, br.ref_negocio,
            cn.f_inicio, cn.f_final, br.cod_barrestaurantes, br.habilitado, br.cod_posiciones, p.cuantia_dia, p.dias
            FROM BARRESTAURANTES br

            INNER JOIN CONTRATOBARRESTAURANTES cbr on cbr.cod_contratobarrestaurantes = br.cod_barrestaurantes 
            INNER JOIN LOCALIDAD l on l.cod_localidad = br.cod_Destino 
            INNER JOIN CONTRATO cn on cn.cod_contrato=cbr.cod_contratobarrestaurantes  
            INNER JOIN DESTINO d on d.cod_Destino=br.cod_Destino 
            INNER JOIN POSICIONES p on p.cod_posiciones=br.cod_posiciones
            WHERE cn.f_inicio >=CURDATE() ORDER BY cn.f_inicio asc";*/


            $sql="SELECT l.ref_Localidad, l.nombre_Localidad as localidad, br.nombre, br.direccion, br.telefono, br.ref_negocio,
          
            br.cod_barrestaurantes, br.habilitado, br.cod_posiciones, p.cuantia_dia, p.dias
            FROM BARRESTAURANTES br

            INNER JOIN CONTRATOBARRESTAURANTES cbr on cbr.cod_contratobarrestaurantes = br.cod_barrestaurantes 
            INNER JOIN LOCALIDAD l on l.ref_Localidad = br.ref_Localidad 
            INNER JOIN POSICIONES p on p.cod_posiciones=br.cod_posiciones ORDER BY br.ref_negocio asc";
            
                  
           // var_dump($sql);die();
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




// Función que devuelve los Negocios de cada Localidad
public function publicidadRestaurantes($cod_Localidad){ 
    try { include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';
        $sql="SELECT distinct l.ref_Localidad, l.nombre_Localidad as nombreLocalidad,br.ref_negocio, br.nombre, br.direccion,veces_Votado, veces_Positivo, veces_Negativo,
            br.descripcion, br.telefono,/* cn.f_inicio, cn.f_final,*/ br.cod_barrestaurantes, br.habilitado, 
            br.ruta_imagen1, br.ruta_imagen2, br.ruta_imagen3, e_tripadvisor, e_facebook, e_web, e_restaurantGuru, e_theFork, br.dto  
            FROM BARRESTAURANTES br 
            INNER JOIN CONTRATOBARRESTAURANTES cbr on cbr.cod_contratobarrestaurantes = br.cod_barrestaurantes 
            /*INNER JOIN CONTRATO cn on cn.cod_contrato=cbr.cod_contratobarrestaurantes */
            INNER JOIN LOCALIDAD l on l.ref_Localidad=br.ref_Localidad
            WHERE br.ref_Localidad='$cod_Localidad' ORDER BY br.cod_posiciones asc";


            $result = $gbd->query($sql); 
            return $results = $result->fetchAll(\PDO::FETCH_OBJ);

    } catch (\PDOException $e) {
        echo $e->getMessage(); throw $e;?> <script>alert("¡***!");</script><?php
    } catch (\Exception $ex) { throw $ex; ?> <script>alert("*");</script><?php
    } finally { $gbd = null;
    }
}



// Función que devuelve todos los Negocios de una Localidad en cards al 100%
public function todosNegociosLocalidad($ref_Localidad){
    include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';

    try {
        $sql="SELECT * FROM BARRESTAURANTES br

       /*   INNER JOIN CONTRATOBARRESTAURANTES cbr on cbr.cod_contratobarrestaurantes = br.cod_barrestaurantes 
            INNER JOIN CONTRATO cn on cn.cod_contrato=cbr.cod_contratobarrestaurantes  
            INNER JOIN DESTINO d on d.cod_Destino=br.cod_Destino 
            INNER JOIN LOCALIDAD l on l.cod_Localidad=br.cod_Destino
        */
        WHERE br.ref_Localidad='$ref_Localidad' 
        
        /*ORDER BY cn.f_inicio asc*/";

//var_dump($sql);die();

        $result = $gbd->query($sql);
        return $results = $result->fetchAll(\PDO::FETCH_OBJ);

        /*    if($result===true){
                return $results = $result->fetchAll(\PDO::FETCH_OBJ);
            }else{
                return $results = $result->fetchAll(\PDO::FETCH_OBJ);
            }
        */

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







// Función que devuelve todos los Negocios de una Localidad en cards al 100%
public function nombreYenlace($ref_Localidad){
    include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';

    try {
        $sql="SELECT nombre, e_web FROM BARRESTAURANTES WHERE ref_Localidad='$ref_Localidad' ORDER BY cod_posiciones asc";

//var_dump($sql);die();

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








// Función que devuelve el nombre de una Localidad por medio de si código
public function nombreLocalidad($ref_Localidad){
    include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';

    try {
        $sql="SELECT nombre_Localidad FROM LOCALIDAD WHERE ref_Localidad='$ref_Localidad'";

//var_dump($sql);die();

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






// Función que Posiciona y/o Desabilita Baresrestaurantes donde comer
public function posicionarDesabilitarNegocios($ref_negocio, $posicion, $estado){
    include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';
   
    

try {
    $sql="UPDATE BARRESTAURANTES SET cod_posiciones='$posicion', habilitado='$estado' 
    WHERE ref_negocio='$ref_negocio'";


/*var_dump($sql);
echo "<br>";
*/
    


    $result = $gbd->query($sql);
    return $results = $result->fetchAll(\PDO::FETCH_OBJ);

    /*    if($result===true){
            return $results = $result->fetchAll(\PDO::FETCH_OBJ);
        }else{
            return $results = $result->fetchAll(\PDO::FETCH_OBJ);
        }
    */

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

// Función que devuelve el número de veces que aparece un Destino para controlar las veces que aparece un Negocio
public function numeroVecesDestino($cod_Localidad){
    include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';

    try {
        $sql="SELECT count(ref_Localidad) as numveces FROM DESTINO WHERE ref_Localidad='$cod_Localidad'";

        $result = $gbd->query($sql);

        return $results = $result->fetchAll(\PDO::FETCH_OBJ);

        /*    if($result===true){
                return $results = $result->fetchAll(\PDO::FETCH_OBJ);
            }else{
                return $results = $result->fetchAll(\PDO::FETCH_OBJ);
            }
        */

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

// Función que extrae el modo de publicitar los negocios en la Home
public function tipoPublicidadHome($ref_Localidad){
    include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';

    try {
        $sql="SELECT ref_Localidad, modo_Apariencia FROM VISTASNEGOCIOSHOME WHERE ref_Localidad='$ref_Localidad'";

        $result = $gbd->query($sql);

        //var_dump($sql);

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


// Función que extrae el modo de publicitar los negocios en la Home
public function tipoPublicidadHome2(){
    

    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';
        $sql="SELECT posicion FROM PUBLICIDADGENERAL WHERE tipo='general'";

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



// Función que extrae las Localidades a donde se viaja hoy
public function localidadesViajarHoy(){
    include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';

    try {
        $sql="SELECT ref_Localidad FROM DESTINO WHERE fecha_Viaje='2022-06-12'";//CURDATE()

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




// Función que devuelve el nombre del negocio a partir de su referencia
public function nombreNegocio($ref_negocio){
    //include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
    include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';
    try {
        $sql="SELECT br.nombre as nombre_negocio, l.nombre_Localidad FROM BARRESTAURANTES br
          INNER JOIN LOCALIDAD l on l.ref_Localidad=br.ref_Localidad
        
        WHERE ref_negocio='$ref_negocio'";

        //var_dump($sql);L
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


// Función que devuelve de un Negocio, el menú y el precio a partir de su referencia
public function menuNegocio($ref_negocio){
    include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
    try {
        $sql="SELECT e_menu, precio_menu FROM BARRESTAURANTES WHERE ref_negocio='$ref_negocio'";
        

        //var_dump($sql);
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


// OK
// Función que devuelve de un Negocio, el menú y el precio a partir de su referencia
public function infoMenu($ref_negocio){ 
    try {   
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
            $sql="SELECT * FROM MENU WHERE ref_negocio='$ref_negocio'";
            $result = $gbd->query($sql);
            return $results = $result->fetchAll(\PDO::FETCH_OBJ);

    } catch (\PDOException $e) {
        echo $e->getMessage(); throw $e; die(); ?>
            <script>alert("¡***!");</script><?php
    } catch (\Exception $ex) {
        throw $ex; die(); ?>
            <script>alert("*");</script><?php
    }finally { $gbd = null; }
}




// Función que COMPRUEBA el Menu Personal de un Negócio
public function comprobarMenuPersonal($ref_negocio){ 
    try {include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
            $sql="SELECT * FROM MENUPERSONAL /*WHERE ref_negocio='$ref_negocio' and habilitado='SI'*/";
            $result = $gbd->query($sql);
            return $results = $result->fetchAll(\PDO::FETCH_OBJ);
    } catch (\PDOException $e) {
        echo $e->getMessage(); throw $e; die(); ?>
            <script>alert("¡***!");</script><?php
    } catch (\Exception $ex) {
        throw $ex; die(); ?>
            <script>alert("*");</script><?php
    }finally { $gbd = null; }
}


 

// Función que devuelve los datos de un Negocio a partir de su referencia
public function datosNegocio($ref_negocio){
    include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
    try {
        $sql="SELECT * FROM BARRESTAURANTES WHERE ref_negocio='$ref_negocio'";

        $sql2="SELECT distinct l.ref_Localidad, l.nombre_Localidad as nombreLocalidad,br.ref_negocio, br.nombre, 
        br.direccion,veces_Votado, veces_Positivo, veces_Negativo,
        br.descripcion, br.telefono,/* cn.f_inicio, cn.f_final,*/ br.cod_barrestaurantes, br.habilitado, 
        br.ruta_imagen1, br.ruta_imagen2, br.ruta_imagen3, e_tripadvisor, e_facebook, e_web, e_restaurantGuru, e_theFork,/* m.precio,*/ br.dto/*, m.modelo_menu*/
            FROM BARRESTAURANTES br 
            INNER JOIN CONTRATOBARRESTAURANTES cbr on cbr.cod_contratobarrestaurantes = br.cod_barrestaurantes 
            /*INNER JOIN CONTRATO cn on cn.cod_contrato=cbr.cod_contratobarrestaurantes */
            /*INNER JOIN DESTINO d on d.ref_Localidad=br.ref_Localidad */
          /*  INNER JOIN MENU m on m.ref_negocio=br.ref_negocio */
            INNER JOIN LOCALIDAD l on l.ref_Localidad=br.ref_Localidad
            WHERE /*cn.f_inicio >=CURDATE() AND */br.ref_negocio='$ref_negocio' ORDER BY br.cod_posiciones asc"; /*ORDER BY cn.f_inicio asc*/



        $result = $gbd->query($sql2);
        return $results = $result->fetchAll(\PDO::FETCH_OBJ);

    } catch (\PDOException $e) { echo $e->getMessage(); throw $e; die(); ?> <script>alert("¡***!");</script><?php
    } catch (\Exception $ex) { throw $ex; die(); ?><script>alert("*");</script><?php
    }finally {$gbd = null;
    }
}


// Función que devuelve si un negocio tiene menu del dia a partir de su referencia
public function tieneMenu($ref_negocio){
   try { include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
        $sql="SELECT menu_premium FROM BARRESTAURANTES WHERE ref_negocio='$ref_negocio'";
        $result = $gbd->query($sql); //var_dump($sql);die(); 
        return $results = $result->fetchAll(\PDO::FETCH_OBJ);

    } catch (\PDOException $e) {echo $e->getMessage(); throw $e; die(); ?><script>alert("¡***!");</script><?php
    } catch (\Exception $ex) { throw $ex; die(); ?> <script>alert("*");</script><?php
    }finally { $gbd = null;
    }
}


// Función que crea un Descuento en un Negocio
public function crearDescuento($datos){
    try {
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';
            $sql0='SET lc_time_names = "es_ES"';
            $sql = "UPDATE BARRESTAURANTES SET dto='$datos[descuento]' WHERE ref_negocio='$datos[ref_negocio]'";

        $result = $gbd->query($sql0);
        $acentos = $gbd->query("SET NAMES 'utf8'");
        $result = $gbd->query($sql);

        if (! $result) {?>
        <script>alert("Descuento no añadido");</script><?php
            // este error lo puedes obtener usando
            // mysqli_error($db); //o $db->error;
            // return "Error no inserto, ";
            return false;
    } else {
        ?><script>alert("¡Descuento Añadido CON EXITO!");</script> <?php //die();
        return true;
    }
    } catch (\PDOException$e) {
        //echo $e->getMessage(); die(); // Es el mensaje que extrae de MySql?> 
    <script>alert("ererw!");</script><?php
    } catch (\Exception $ex) {
        throw $ex; ?><script>alert("Algo ha ido mal en el descuento!");</script><?php
    } finally {
        $gbd = null;
    }


}


 // Función que inserta null en el descuento de un BARRESTAURANTE
    public function eliminarDescuento($datos){

        try {
            include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';
                $sql = "UPDATE BARRESTAURANTES SET dto=null WHERE ref_negocio='$datos[ref_negocio]'";
                $result = $gbd->query($sql);
    
            if ($result) {?>
            <script>alert("Su descuento ha sido eliminado con Exito");</script><?php
                // este error lo puedes obtener usando
                // mysqli_error($db); //o $db->error;
                // return "Error no inserto, ";
                return true;
        } else {
            ?><script>alert("¡Descuento null CON EXITO!");</script> <?php //die();
            return false;
        }
        } catch (\PDOException$e) {
            //echo $e->getMessage(); die(); // Es el mensaje que extrae de MySql?> 
        <script>alert("ererw!");</script><?php
        } catch (\Exception $ex) {
            throw $ex; ?><script>alert("Algo ha ido mal al meter el null en el descuento!");</script><?php
        } finally {
            $gbd = null;
        }

    }




// Función que devuelve si un negocio tiene Descuento, a partir de su Referencia
public function hayDescuento($datos){
    try { include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
         $sql="SELECT dto FROM BARRESTAURANTES WHERE ref_negocio='$datos[ref_negocio]'";
         $result = $gbd->query($sql);  return $results = $result->fetchAll(\PDO::FETCH_OBJ);
 
     } catch (\PDOException $e) {echo $e->getMessage(); throw $e; die(); ?><script>alert("¡***!");</script><?php
     } catch (\Exception $ex) { throw $ex; die(); ?> <script>alert("*");</script><?php
     }finally { $gbd = null;
     }
 }





 





// OK
// Función que devuelve de un Negocio, el menú y el precio a partir de su referencia
public function infoMenu2($ref_menu){ 
    try {   
      
        $host="localhost";
        $dbname="proyectoplayasdefinitivo";
        $username="root";
        $contrasena="";  

        $gbd = new \PDO("mysql:host=$host;dbname=$dbname", $username, $contrasena );

            $sql="SELECT * FROM MENU WHERE ref_menu='$ref_menu'";
            $result = $gbd->query($sql);
            
            $results = $result->fetchAll(\PDO::FETCH_OBJ);
            //var_dump($results[0]); //die();

            return $results[0];



    } catch (\PDOException $e) {
        echo $e->getMessage(); throw $e; die(); ?>
            <script>alert("¡***!");</script><?php
    } catch (\Exception $ex) {
        throw $ex; die(); ?>
            <script>alert("*");</script><?php
    }finally { $gbd = null; }
}













} 