<?php
namespace miId\fuente\Repositorio;
use miId\core\ConexionBd;

class EventoRepositorio
{ 

    // Función que inserta un nuevo Evento | Recive un array de datos                                            
    public function nuevoEvento($datos){ 
        $ref_AgenciaViajes=$_SESSION['perfil']['ref_AgenciaViajes'];
include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';
        try {
            //include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
            
            $sql0='SET lc_time_names = "es_ES"';

            $sql="INSERT INTO DESTINOEVENTO (ref_DestinoEvento,ref_Evento, dia_Semana,fecha_Viaje,ref_AgenciaViajes,euros,ref_bus, estado)
                        VALUES ('$datos[ref_DestinoEvento]','$datos[ref_Evento]', DAYNAME('$datos[fechaviaje]'), 
                        '$datos[fechaviaje]','$ref_AgenciaViajes','$datos[euros]','$datos[busasignado]','DISPONIBLE')";


//var_dump($sql);die();

            $acentos = $gbd->query("SET NAMES 'utf8'");
            $result = $gbd->query($sql0); $result = $gbd->query($sql);

            if ($result) {?> <script>alert("¡Evento añadido CON EXITO!");</script><?php
            } else {?> <script>alert("¡Evento NO AÑADIDO!");</script><?php
            return false;}

            return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
        } catch (\PDOException $e) { echo $e->getMessage(); 
        } finally { $gbd = null;}
    }






    // Función que devuelve todos los Eventos
    public function todosEventos(){
        try {
            include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
                $sql = "SELECT ref_Evento, nombre_Evento FROM EVENTO";
        
                $result = $gbd->query($sql);
                return $results = $result->fetchAll(\PDO::FETCH_OBJ);
        
        } catch (\PDOException$e) { echo $e->getMessage();
        } catch (\Exception$ex) { throw $ex;
        } finally { $gbd = null; }
    }
 

    // Función que devuelve el nº de registros de Eventos ya programados
    public function numRegistros(){
        try {
           // include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
            include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';
                $sql = "SELECT count(ref_DestinoEvento) as numRegistros FROM DESTINOEVENTO";
               // var_dump($sql);die();
                $result = $gbd->query($sql); 
                return $results = $result->fetchAll(\PDO::FETCH_OBJ);

        } catch (\PDOException$e) { echo $e->getMessage();
        } catch (\Exception$ex) { throw $ex;
        } finally { $gbd = null; }
    }


// INICIO //
// Función que muestra todos los Eventos para las Cards"
public function todosEventosHome(){

    try {  
         include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;

            $sql="SELECT  d.ref_DestinoEvento, n.posicion, d.ref_Evento,c.nombre_CategoriaEvento,
             e.nombre_Evento, e.ref_Localidad, l.nombre_Localidad, l.nombre_Localidad, l.ruta_imagen1, d.dia_Semana,d.fecha_Viaje,
              av.nombre_Agencia, d.euros, av.ref_AgenciaViajes, d.estado
            FROM DESTINOEVENTO d 
            INNER JOIN EVENTO e ON e.ref_Evento=d.ref_Evento 
            INNER JOIN AGENCIAVIAJES av ON av.ref_AgenciaViajes=d.ref_AgenciaViajes 
            INNER JOIN LOCALIDAD l on l.ref_Localidad=e.ref_Localidad 
            INNER JOIN CATEGORIAEVENTO c on c.ref_CategoriaEvento=e.ref_CategoriaEvento      
            
            INNER JOIN IMAGENESEVENTO i on i.ref_Evento=e.ref_Evento
            INNER JOIN NOMBREIMAGENEVENTO n on n.ref_NombreImagenEvento=i.ref_NombreImagenEvento
   
            where d.fecha_Viaje >=CURDATE() and n.posicion=1 ORDER BY fecha_Viaje ASC LIMIT 20 ";

            //var_dump($sql); //die();

        $acentos = $gbd->query("SET NAMES 'utf8'");
        $result =$gbd ->query($sql); 

        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

    }catch(\PDOException $e) {
        echo $e->getMessage();
    }finally{
        $gbd = null;
    }
}
 

public function rutaImagen($ref_Evento,$posicion_Siguiente){
    try {  
        //include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE

           $sql="SELECT i.nombre_Carpeta, n.nombre_ImagenEvento FROM IMAGENESEVENTO i
           INNER JOIN NOMBREIMAGENEVENTO n on i.ref_NombreImagenEvento=n.ref_NombreImagenEvento
           
           where i.ref_Evento='$ref_Evento' and n.posicion='$posicion_Siguiente'";

          // var_dump($sql); die();

       $acentos = $gbd->query("SET NAMES 'utf8'");
       $result =$gbd ->query($sql); 

       return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

   }catch(\PDOException $e) {
       echo $e->getMessage();
   }finally{
       $gbd = null;
   }
}


public function carpetaImagen($ref_Evento){
    try {  
        //include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE

           $sql="SELECT i.nombre_Carpeta FROM IMAGENESEVENTO i
           INNER JOIN NOMBREIMAGENEVENTO n on  n.ref_NombreImagenEvento=i.ref_NombreImagenEvento
           
            where i.ref_Evento='$ref_Evento' and n.posicion=1";

           //var_dump($sql); 

       $acentos = $gbd->query("SET NAMES 'utf8'");
       $result =$gbd ->query($sql); 

       return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

   }catch(\PDOException $e) {
       echo $e->getMessage();
   }finally{
       $gbd = null;
   }
} 
 
 

// Función que muestra todos los Eventos en la  "Tabla: Agenda Verano-2022"
public function todosEventosEnTabla(){
    try {  
        
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;

        $sql="SELECT de.ref_DestinoEvento, e.nombre_Evento, l.nombre_Localidad, de.dia_Semana, de.fecha_Viaje, de.kilometros, de.euros, b.matricula, b.plazas
        FROM DESTINOEVENTO de 
        INNER JOIN AGENCIAVIAJES av ON av.ref_AgenciaViajes=de.ref_AgenciaViajes

            INNER JOIN EVENTO e ON e.ref_Evento=de.ref_Evento
            INNER JOIN LOCALIDAD l on l.ref_Localidad=e.ref_Localidad 
            INNER JOIN BUS b ON b.ref_Bus=de.ref_Bus
            where de.fecha_Viaje >=CURDATE() ORDER BY de.fecha_Viaje asc";

        $acentos = $gbd->query("SET NAMES 'utf8'");
        $result =$gbd ->query($sql); 
        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

    }catch(\PDOException $e) {
        echo $e->getMessage();
    }finally{
        $gbd = null;
    }
}



// Función que muestra todos los destinos en la  "Tabla: Agenda Verano-2022"
public function todosDestinosEnTabla(){
    try {  
        
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;

        $sql="SELECT l.ref_Localidad, d.cod_Destino, l.nombre_Localidad, d.fecha_Viaje,d.dia_Semana,av.nombre_Agencia,/*l.provincia,l.comunidad,l.pais,*//*d.cod_Destino,b.matricula,*/d.euros 
        FROM DESTINO d 
        INNER JOIN AGENCIAVIAJES av ON av.ref_AgenciaViajes=d.ref_AgenciaViajes
        /*INNER JOIN AGENCIABUSES ab ON ab.cod_AgenciaBuses=av.cod_CompaniaBusHabitual*/
        /*INNER JOIN BUS b ON b.cod_AgenciaBuses=ab.cod_AgenciaBuses*/
        INNER JOIN LOCALIDAD l on l.ref_Localidad=d.ref_Localidad 
        INNER JOIN BUS b ON b.ref_Bus=d.ref_Bus
        where d.fecha_Viaje >=CURDATE() ORDER BY fecha_Viaje asc";

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