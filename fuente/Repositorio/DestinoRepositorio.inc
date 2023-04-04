<?php
namespace miId\fuente\Repositorio;
use miId\core\ConexionBd;

include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS; 


class DestinoRepositorio{  

// Función que inserta un nuevo destino | Recive un array de datos                                            
public function nuevoDestino($datos){ $ref_AgenciaViajes=$_SESSION['perfil']['ref_AgenciaViajes'];

    try {
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
        $sql0='SET lc_time_names = "es_ES"';

        $sql="INSERT INTO DESTINO (ref_Destino,ref_Localidad,dia_Semana,fecha_Viaje,ref_AgenciaViajes,kilometrosIdaVuelta,euros,ref_bus)
                    VALUES ('$datos[ref_Destino]','$datos[ref_Localidad]', DAYNAME('$datos[fechaviaje]'),
                    '$datos[fechaviaje]','$ref_AgenciaViajes','$datos[kilometros]','$datos[euros]','$datos[busasignado]')";

        $acentos = $gbd->query("SET NAMES 'utf8'");
        $result = $gbd->query($sql0); $result = $gbd->query($sql);

        if ($result) {?> <script>alert("¡Destino añadido CON EXITO!");</script><?php
        } else {?> <script>alert("¡Destino NO AÑADIDO!");</script><?php
        return false;}

        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
    } catch (\PDOException $e) { echo $e->getMessage();  // die();
    } finally { $gbd = null;}
}


// Función que borra un destino "creado por una Agencia de Viajes"  OK
public function borrarUnDestino($ref_Destino){
    try {  
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
        $sql=" DELETE FROM DESTINO WHERE ref_Destino='$ref_Destino'"; // var_dump($sql);die();
       $result =$gbd ->query($sql); 
       return true;

   }catch(\PDOException $e) { echo $e->getMessage();
   }finally{ $gbd = null;}
}

// Función que modifica los datos de un destino "creado por una Agencia de Viajes"
public function modificarUnDestino($datos, $ref_Destino){
    try {
         include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
      /*  $sql="UPDATE DESTINO
                  SET nombre_Localidad='$datos[nombre]',prov_Depart='$datos[provinciadepartamento]',com_Reg='$datos[comunidadregion]',pais='$datos[pais]',
                  dia_Semana= ELT(WEEKDAY('$datos[fechaviaje]') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),
                     fecha_Viaje='$datos[fechaviaje]',kilometrosIdaVuelta='$datos[kilometros]',
                  euros='$datos[euros]',cod_Bus='$datos[busasignado]'
                    WHERE cod_Destino='$codDestino'"; 
      */        
              
              $sql="UPDATE DESTINO
                SET ref_Destino='$datos[ref_Destino]',
                    ref_Localidad='$datos[ref_Localidad]',
                    dia_Semana= ELT(WEEKDAY('$datos[fechaviaje]') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),
                    fecha_Viaje='$datos[fechaviaje]',
                    ref_AgenciaViajes='$datos[ref_AgenciaViajes]',
                    kilometrosIdaVuelta='$datos[kilometros]',
                    euros='$datos[euros]',
                    ref_Bus='$datos[busasignado]'
                WHERE ref_Destino='$ref_Destino'";

                //var_dump($sql);die();

                    

    $acentos = $gbd->query("SET NAMES 'utf8'");      
    $result = $gbd->query($sql);

    if($result->rowCount()){ ?>
        <script>alert("VALOR MODIFICADO");</script><?php  

        return true;
        } else {?>
        <script>alert("Lo sentimos, no se ha podido modificar el BUS");</script><?php
        return false;
        } 

    }catch (\PDOException$e) {?>
    <script>alert("VALOR NO MODIFICADO,!");</script><?php 
    echo $e->getMessage();
        $insertado=false;
        return $insertado;

    } catch (\Exception$ex) {
        throw $ex; ?>
        <script>alert("¡No se Ha modificado el Destino!");</script><?php 
    } finally {
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



// Función que muestra todos los destinos por Localidad en la tabla
public function todosDestinosEnTablaFiltrados($datos){
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

//var_dump($condicion);die();

    try {  
         include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;

        $sql="SELECT d.ref_Destino,l.ref_Localidad, l.nombre_Localidad, d.fecha_Viaje,d.dia_Semana,av.nombre_Agencia,/*l.provincia,l.comunidad,l.pais,*//*d.cod_Destino,b.matricula,*/d.euros 
        FROM DESTINO d 
        INNER JOIN AGENCIAVIAJES av ON av.ref_AgenciaViajes=d.ref_AgenciaViajes
        /*INNER JOIN AGENCIABUSES ab ON ab.cod_AgenciaBuses=av.cod_CompaniaBusHabitual*/
        /*INNER JOIN BUS b ON b.cod_AgenciaBuses=ab.cod_AgenciaBuses*/
        INNER JOIN LOCALIDAD l on l.ref_Localidad=d.ref_Localidad 
        /*INNER JOIN BUS b ON b.cod_Bus=d.cod_Bus*/
        where $condicion d.fecha_Viaje >=CURDATE() ORDER BY fecha_Viaje asc";

//var_dump($sql);die();

        $acentos = $gbd->query("SET NAMES 'utf8'");
        $result =$gbd ->query($sql); 
        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

    }catch(\PDOException $e) {
        echo $e->getMessage();
    }finally{
        $gbd = null;
    }
}

















// Función que nos da la info de plazas de un Bus de un destino
public function plazasBusViaje(){
    try {  
         include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;

            $sql2="SELECT b.plazas,sum(v.plaza_Bus) FROM VIAJAR v
                            INNER JOIN BUS b ON v.cod_Bus=b.cod_Bus
                            WHERE d.fecha_Viaje >=CURDATE() ORDER BY fecha_Viaje asc";
      $result =$gbd ->query($sql); 
      return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

    }catch(\PDOException $e) {
        echo $e->getMessage();
    }finally{
        $gbd = null;
    }
}


// Función que busca los Destinos por fecha
public function todosDestinosPorFecha($fecha_Viaje){ //die();
    try {  
         include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
        $sql="SELECT d.cod_Destino, l.ref_Localidad, l.ruta_imagen1, l.nombre_Localidad,l.comunidad,d.fecha_Viaje,d.dia_Semana, d.euros,
        d.ref_AgenciaViajes, av.nombre_Agencia FROM DESTINO d 
        INNER JOIN AGENCIAVIAJES av ON d.ref_AgenciaViajes=av.ref_AgenciaViajes 
        INNER JOIN LOCALIDAD l on l.ref_Localidad=d.ref_Localidad 
        WHERE d.fecha_Viaje='$fecha_Viaje'";

        

        $acentos = $gbd->query("SET NAMES 'utf8'");
        $result = $gbd->query($sql); 

        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

    }catch(\PDOException $e) {
        echo $e->getMessage();
    }finally{
        $gbd = null;
    }
}

// INICIO //
// Función que muestra todos los destinos para las Cards" y creo que para la tabla de toda la Programación Verano 2022
public function todosDestinos(){

    try {  
         include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;

            $sql="SELECT distinct d.ref_Destino, d.ref_Localidad, d.ref_Destino,
            l.nombre_Localidad, l.provincia, l.comunidad, l.pais, l.ruta_imagen1, 
            d.dia_Semana,d.fecha_Viaje, 
            av.nombre_Agencia, d.euros, av.ref_AgenciaViajes,av.telefono_Agencia, d.estado
            FROM DESTINO d 
            INNER JOIN AGENCIAVIAJES av ON av.ref_AgenciaViajes=d.ref_AgenciaViajes 
            INNER JOIN LOCALIDAD l on l.ref_Localidad=d.ref_Localidad 
            where d.fecha_Viaje >=CURDATE() ORDER BY fecha_Viaje ASC LIMIT 20";

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

// BUSCADORES //
// Función que busca los Destinos por Destino
public function todosDestinosPorDestino($ref_Localidad){
   try {   
     include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
       
       $sql="SELECT d.ref_Destino, l.nombre_Localidad, l.comunidad, d.fecha_Viaje, d.dia_Semana, d.euros,
                    d.ref_AgenciaViajes, av.nombre_Agencia, l.ref_Localidad, l.ruta_imagen1
                    FROM DESTINO d 
        INNER JOIN AGENCIAVIAJES av ON d.ref_AgenciaViajes=av.ref_AgenciaViajes 
        INNER JOIN LOCALIDAD l on l.ref_Localidad = d.ref_Localidad 

        WHERE l.ref_Localidad='$ref_Localidad' and d.fecha_Viaje >=CURDATE() 
        ORDER BY d.fecha_Viaje ASC ";  // No va a salir Laredo que es del verano 2021 //
        $acentos = $gbd->query("SET NAMES 'utf8'");
        $result = $gbd->query($sql); 

    //    var_dump($sql);die();

        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
        
    }catch(\PDOException $e) {
        echo $e->getMessage();
    }finally{
        $gbd = null;
    }
}


// Función que busca todos los destinos a los que va a dar servicio una Agencia de Buses
 public function todosDestinosPorAgenciaBuses($ref_AgenciaBuses){
     try {
         include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
        $sql="SELECT d.ref_Destino, l.nombre_Localidad,l.provincia, l.comunidad, l.pais, d.dia_Semana, d.fecha_Viaje,
                    d.kilometrosIdaVuelta, d.euros, b.matricula, b.plazas FROM DESTINO d 
                    INNER JOIN BUS b ON d.ref_Bus=b.ref_bus
                    INNER JOIN LOCALIDAD l on l.ref_Localidad=d.ref_Localidad 
                    INNER JOIN AGENCIABUSES ab on ab.ref_AgenciaBuses=b.ref_AgenciaBuses
                     WHERE ab.ref_AgenciaBuses='$ref_AgenciaBuses'";

                  //   var_dump($sql);die();

        $acentos = $gbd->query("SET NAMES 'utf8'");
        $result = $gbd->query($sql); 

        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

        }catch(\PDOException $e) {
            echo $e->getMessage();
        }finally{
            $gbd = null;
        }
 }

// Función que muestra todos los destinos de una Agencia de viajes logueada. 
 public function todosDestinosAgenciaViajesLogueada($ref_AgenciaViajes){ 
             try {   
                  include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
                
                     $sql="SELECT d.ref_Destino,l.nombre_Localidad,l.provincia,l.comunidad,l.pais,d.dia_Semana,d.fecha_Viaje,d.kilometrosIdaVuelta,b.matricula,d.euros,
                         /*d.ref_AgenciaViajes,*/ av.nombre_Agencia, b.plazas FROM DESTINO d 
                         INNER JOIN BUS b ON d.ref_Bus=b.ref_bus
                         INNER JOIN AGENCIAVIAJES av ON d.ref_AgenciaViajes=av.ref_AgenciaViajes 
                         INNER JOIN LOCALIDAD l on l.ref_Localidad=d.ref_Localidad 
                         WHERE av.ref_AgenciaViajes='$ref_AgenciaViajes' AND d.fecha_Viaje >=CURDATE()  ORDER BY fecha_Viaje asc";

                        // var_dump($sql); die();
     
                 $acentos = $gbd->query("SET NAMES 'utf8'");
                 $result = $gbd->query($sql); 
                 return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
         
             }catch(\PDOException $e) {
                 echo $e->getMessage();
             }finally{
                 $gbd = null;
             }
         }

 // Función que busca los nombres de los lugares de los Destinos (para el Select de las búsquedas que no se repitan)
 public function soloAgenciasDeViajes(){
            try {
               include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
                $sql = "SELECT * FROM AGENCIAVIAJES"; 

                $acentos = $gbd->query("SET NAMES 'utf8'");
                $result = $gbd->query($sql); 

            return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

            }catch(\PDOException $e) {
                echo $e->getMessage();
            }finally{
                $gbd = null;
            }
}


 // Función que busca los nombres de los lugares de los Destinos 
 //(para el Select de las búsquedas que no se repitan)
 public function soloLugares(){
            try {
                 include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
                $sql="SELECT DISTINCT /*d.cod_Destino,*/ l.ref_Localidad, l.nombre_Localidad FROM DESTINO d
                INNER JOIN LOCALIDAD l on l.ref_Localidad=d.ref_Localidad
                 ";


                $result = $gbd->query($sql); 
                return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

                }catch(\PDOException $e) {
                    echo $e->getMessage();
            }finally{
                $gbd = null;
            }
}


 // Función que busca los nombres de los lugares de los Destinos (para el Select de las búsquedas que no se repitan)
 public function soloLocalidades(){ 
    
    try {
         include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;

        $sql="SELECT ref_Localidad, nombre_Localidad FROM LOCALIDAD ";

        //var_dump($sql);die();

        $result = $gbd->query($sql); 
        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

        }catch(\PDOException $e) {
            echo $e->getMessage();
    }finally{
        $gbd = null;
    }
}


// BUSCADORES //
// Función que busca los Destinos por Agencia de Viajes
public function todosDestinosPorAgenciaViajes($ref_AgenciaViajes){
    
            try {   
                 include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
               
                    $sql="SELECT l.ref_Localidad, l.nombre_Localidad, l.ruta_imagen1, d.cod_Destino,l.nombre_Localidad,l.provincia,l.comunidad,l.pais,d.dia_Semana,d.fecha_Viaje,
                    d.kilometrosIdaVuelta,b.matricula,d.euros, av.ref_AgenciaViajes,
                        /*d.ref_AgenciaViajes,*/ av.nombre_Agencia FROM DESTINO d 
                        INNER JOIN BUS b ON d.cod_Bus=b.cod_bus
                        INNER JOIN AGENCIAVIAJES av ON d.ref_AgenciaViajes=av.ref_AgenciaViajes 
                        INNER JOIN LOCALIDAD l on l.ref_Localidad=d.ref_Localidad 
                        WHERE av.ref_AgenciaViajes='$ref_AgenciaViajes'";

                      
    
                $acentos = $gbd->query("SET NAMES 'utf8'");
                $result = $gbd->query($sql); 

                 // var_dump($sql);die();

                return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
        
            }catch(\PDOException $e) {
                echo $e->getMessage();
            }finally{
                $gbd = null;
            }
        }


// BUSCADORES //
 // Función que busca los Destinos que se desarrollan en un dia
 public function todosDestinosPorDia($dia_Semana){

        try { 
             include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
            $sql0='SET lc_time_names = "es_ES"';
            $sql="SELECT d.cod_Destino,l.ref_Localidad, l.ruta_imagen1, l.nombre_Localidad,l.provincia,l.comunidad,l.pais,d.dia_Semana,d.fecha_Viaje,
            av.nombre_Agencia, av.ref_AgenciaViajes, d.euros, d.ref_AgenciaViajes 
            FROM DESTINO d 
            INNER JOIN AGENCIAVIAJES av ON av.ref_AgenciaViajes=d.ref_AgenciaViajes
            INNER JOIN LOCALIDAD l on l.ref_Localidad=d.ref_Localidad 
            where d.dia_Semana='$dia_Semana' and d.fecha_Viaje >=CURDATE() ORDER BY d.fecha_Viaje ASC ";
           // var_dump($sql); die();
            $acentos = $gbd->query("SET NAMES 'utf8'");
            $result = $gbd->query($sql); 

            return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

            }catch(\PDOException $e) {
                echo $e->getMessage();
            }finally{
                $gbd = null;
            }
    }

// BUSCADORES //
  // Función que busca el Destino a partir de su ref_Destino
  public function nombreDestinoSeleccionado($ref_Destino){
  
        try {
             //include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
             include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';  
            $sql="SELECT d.cod_Destino,l.nombre_Localidad,l.provincia,l.comunidad,l.pais,d.dia_Semana,d.fecha_Viaje,
            av.nombre_Agencia,d.kilometrosIdaVuelta, d.euros, d.ref_AgenciaViajes ,av.telefono_Agencia, av.email
            FROM DESTINO d 
            INNER JOIN AGENCIAVIAJES av ON d.ref_AgenciaViajes=av.ref_AgenciaViajes 
            INNER JOIN LOCALIDAD l on l.ref_Localidad=d.ref_Localidad 
            WHERE d.cod_Destino='$ref_Destino' ORDER BY d.fecha_Viaje ASC ";

            $result = $gbd->query($sql); 
            return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

            }catch(\PDOException $e) {
                echo $e->getMessage();} catch (\Exception$ex) {
                throw $ex;
            } finally {
                $gbd = null;
            }
  }

  

  
// Función que busca todos los destinos contratados por un cliente.         (Después se genera el PDF)
public function infoDestino($ref_Destino){
         try {
            include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;              
 

        $sql="SELECT d.ref_Destino,l.nombre_Localidad,l.provincia,l.comunidad,l.pais,d.dia_Semana,d.fecha_Viaje,av.nombre_Agencia,d.kilometrosIdaVuelta,d.euros, b.matricula, b.plazas
             FROM DESTINO d 
             INNER JOIN AGENCIAVIAJES av ON av.ref_AgenciaViajes=d.ref_AgenciaViajes
             INNER JOIN BUS b ON b.ref_Bus=d.ref_Bus
             INNER JOIN LOCALIDAD l on l.ref_Localidad=d.ref_Localidad 
             WHERE d.ref_Destino='$ref_Destino'";

     // var_dump($sql); die();
                 $result = $gbd->query($sql); 
                 return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);
 
         } catch (\PDOException $ex) {
             throw $ex; ?><script>alert("¡LO SENTIMOS, Ha habido un problema!");</script><?php 
         } catch (\Exception $ex) {
             throw $ex; ?><script>alert("*");</script><?php 
         } finally {
             $gbd = null;
         }
 }


// Función que busca todos los destinos contratados por un cliente.
 public function destinosDeUnClienteLogueado($ref_Cliente){
        try {
             include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;             

            $sql="SELECT d.ref_Destino,l.nombre_Localidad, d.fecha_Viaje, av.nombre_Agencia, av.telefono_Reserva, av.lugar_SalidaPredeterminado,
                            v.ref_Bus,v.plaza_Bus FROM VIAJAR v
                    INNER JOIN DESTINO d ON v.ref_Destino=d.ref_Destino
                    INNER JOIN AGENCIAVIAJES av ON d.ref_AgenciaViajes= av.ref_AgenciaViajes
                    INNER JOIN LOCALIDAD l on l.ref_Localidad=d.ref_Localidad 
                    WHERE v.ref_Persona='$ref_Cliente'"; ?>

                <script>//alert("¡Mostrando todos sus Destinos!");</script><?php

var_dump($sql);

                $result = $gbd->query($sql); 
                    return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

        } catch (\PDOException $ex) {
            throw $ex; ?><script>alert("VALOR NO INSERTADO UNIQUE!");</script><?php 
        } catch (\Exception $ex) {
            throw $ex; ?><script>alert("VALOR NO INSERTADO UNIQUE!");</script><?php 
        } finally {
            $gbd = null;
        }
}

// Función que busca la información de un Billete contratado por un Cliente.         (Después se genera el PDF)
public function destinosContratado($cod_destino,$plaza_Bus){
        try {
            include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';                

            $sql=  "SELECT d.cod_Destino,l.nombre_Localidad, d.fecha_Viaje,
                            av.nombre, av.telefono_Reserva,	av.lugar_SalidaPredeterminado,
                            v.cod_Bus,v.plaza_Bus FROM VIAJAR v
        
                            INNER JOIN DESTINO d ON v.cod_Destino=d.cod_Destino
                            INNER JOIN AGENCIAVIAJES av ON d.ref_AgenciaViajes=av.ref_AgenciaViajes
                            INNER JOIN LOCALIDAD l on l.ref_Localidad=d.ref_Localidad 
                            WHERE d.cod_Destino='$cod_destino' and v.plaza_Bus='$plaza_Bus' ";


                $result = $gbd->query($sql); 
                return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

        } catch (\PDOException $ex) {
            throw $ex; ?><script>alert("¡LO SENTIMOS, Ha habido un problema!");</script><?php 
        } catch (\Exception $ex) {
            throw $ex; ?><script>alert("*");</script><?php 
        } finally {
            $gbd = null;
        }
}

// Función que cancela un billete ya comprado de un cliente desde la tabla "Tus Destinos contratados"
public function cancelarBillete($codDestino,$codCliente,$plaza):bool{
        try {
            include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';                
            $gbd = new \PDO("mysql:host=$host;dbname=$dbname", $username, $contrasena);

            $sql=  "DELETE FROM VIAJAR WHERE cod_Destino='$codDestino' AND cod_Cliente='$codCliente' AND plaza_Bus='$plaza'";
            //var_dump($sql);die();
            $result = $gbd->query($sql); 

            if ($result) {?>
                <script>alert("¡Su Billete ha sido Cacelado con exito!");</script><?php
            } else {?>
            <script>alert("¡Destino NO CANCELADO!");</script><?php
            return false;
            }



            return true;
        
            }catch(\PDOException $ex){ 
            throw $ex; ?>
                <script>alert("¡LO SENTIMOS, Ha habido un problema!");</script><?php
            }catch(\Exception $ex){
            throw $ex; ?>
                <script>alert("*");</script><?php
            }finally{
                $gbd = null;
        }
 }


 // Función que devuelve el precio del billete por defecto para un Destino
public function precioBillete($ref_Destino){
    try {
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;              
        $sql="SELECT euros FROM DESTINO WHERE ref_Destino='$ref_Destino'";

// var_dump($sql); die();
        $result = $gbd->query($sql); 
        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

    } catch (\PDOException $ex) {
        throw $ex; ?><script>alert("¡LO SENTIMOS, Ha habido un problema!");</script><?php 
    } catch (\Exception $ex) {
        throw $ex; ?><script>alert("*");</script><?php 
    } finally {
        $gbd = null;
    }
}




// Función que devuelve el número de plazas de los 3buses más llenos
 public function numPlazasBusesMasLlenos(){
    try {  
         include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;

        $sql="SELECT d.cod_Destino, l.nombre_Localidad, count(v.plaza_bus) as numPlazas FROM viajar v
        INNER JOIN DESTINO d ON v.cod_Destino=d.cod_Destino
        INNER JOIN LOCALIDAD l on l.ref_Localidad=d.ref_Localidad 
        GROUP BY cod_Destino LIMIT 3 ";

       // $acentos = $gbd->query("SET NAMES 'utf8'");
        $result =$gbd ->query($sql); 
        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

    }catch(\PDOException $e) {
        echo $e->getMessage();
    }finally{
        $gbd = null;
    }
 }


//Función que devuelve los destinos más vendidos del momento
public function todosDestinosMasVendidos($datos){
    try {  
         include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;

        $sql="SELECT distinct d.cod_Destino,l.nombre_Localidad,/*l.provincia,l.comunidad,l.pais,*/d.fecha_Viaje,d.dia_Semana,/*b.matricula,*/av.nombre_Agencia,d.euros 

        FROM DESTINO d 
        INNER JOIN AGENCIAVIAJES av ON av.ref_AgenciaViajes=d.ref_AgenciaViajes
        INNER JOIN VIAJAR v ON v.cod_Destino=d.cod_Destino
        /*INNER JOIN BUS b ON b.cod_AgenciaBuses=ab.cod_AgenciaBuses*/
        INNER JOIN BUS b ON b.cod_Bus=d.cod_Bus
        INNER JOIN LOCALIDAD l on l.ref_Localidad=d.ref_Localidad 
        where d.fecha_Viaje >=CURDATE() and ($datos)   ORDER BY fecha_Viaje asc";

//var_dump($sql);die();

        $acentos = $gbd->query("SET NAMES 'utf8'");
        $result =$gbd ->query($sql); 
        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

    }catch(\PDOException $e) {
        echo $e->getMessage();
    }finally{
        $gbd = null;
    }
}


// Función que devuelve los 5 destinos más económicos en cards
public function destinosMasEconómicosEnCards(){
    try {  
         include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;

        $sql="SELECT d.cod_Destino,l.nombre_Localidad,l.provincia,l.comunidad,l.pais,d.dia_Semana,d.fecha_Viaje,b.matricula,av.nombre_Agencia,d.euros 
        FROM DESTINO d 
        INNER JOIN AGENCIAVIAJES av ON av.ref_AgenciaViajes=d.ref_AgenciaViajes
        /*INNER JOIN AGENCIABUSES ab ON ab.cod_AgenciaBuses=av.cod_CompaniaBusHabitual*/
        /*INNER JOIN BUS b ON b.cod_AgenciaBuses=ab.cod_AgenciaBuses*/
        INNER JOIN BUS b ON b.cod_Bus=d.cod_Bus
        INNER JOIN LOCALIDAD l on l.ref_Localidad=d.ref_Localidad 
        where d.fecha_Viaje >=CURDATE()  and d.euros < 14 ORDER BY fecha_Viaje asc";


        $result =$gbd ->query($sql); 
        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

    }catch(\PDOException $e) {
        echo $e->getMessage();
    }finally{
        $gbd = null;
    }
}
 
// Función que devuelve el cod_Destino de un Destino, (param:nombre del lugar)
public function codigoDestino($nombre_Localidad){
    try {  
         include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;

        $sql="SELECT cod_Destino FROM DESTINO where nombre_Localidad='$nombre_Lugar'";

        $result =$gbd ->query($sql); 
        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

    }catch(\PDOException $e) {
        echo $e->getMessage();
    }finally{
        $gbd = null;
    }
}



// Función que devuelve el nombre de la Agencia de Viajes de un Destino, (param : ref_Destino)
public function nombreAgenciaViajes($ref_Destino){
    try {  
         include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;

        $sql="SELECT av.nombre_Agencia FROM DESTINO d
        INNER JOIN AGENCIAVIAJES av on av.ref_AgenciaViajes=d.ref_AgenciaViajes 
        where d.ref_Destino='$ref_Destino'";

        $result =$gbd ->query($sql); 
        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

    }catch(\PDOException $e) {
        echo $e->getMessage();
    }finally{
        $gbd = null;
    }
}





// Función que devuelve el nombre de la Agencia de Viajes de un Destino, (param : ref_Destino)
public function info_DestinoTelefonoImeil($ref_Destino){
    try {  
         include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;

        $sql="SELECT av.telefono_Agencia, av.email FROM AGENCIAVIAJES av
        INNER JOIN DESTINO d on av.ref_AgenciaViajes=d.ref_AgenciaViajes 
        where d.ref_Destino='$ref_Destino'";

        $result =$gbd ->query($sql); 
        return  $results = $result -> fetchAll(\PDO::FETCH_OBJ);

    }catch(\PDOException $e) {
        echo $e->getMessage();
    }finally{
        $gbd = null;
    }
}





// Función que devuelve el nº de registros de la tabla Viajar
public function numRegistrosDestino(){
    try {
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
        $sql="SELECT count(ref_Destino) as numRegistros FROM DESTINO";
        
        $result = $gbd->query($sql);
        return $results = $result->fetchAll(\PDO::FETCH_OBJ);

    } catch (\PDOException $e) {
        echo $e->getMessage();
        throw $ex; die();?>
        <script>alert("¡***!");</script><?php 
    } catch (\Exception $ex) {
        throw $ex; die();?>
        <script>alert("***");</script><?php
    } finally {
        $gbd = null;
    }
}
 

// Función que devuelve el estado de un Destino
public function estadoDestino($ref_Destino){
    try {
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
        $sql="SELECT estado FROM DESTINO where ref_Destino='$ref_Destino'";
        
        $result = $gbd->query($sql);
        return $results = $result->fetchAll(\PDO::FETCH_OBJ);

    } catch (\PDOException $e) {
        echo $e->getMessage();
        throw $ex; die();?>
        <script>alert("¡***!");</script><?php 
    } catch (\Exception $ex) {
        throw $ex; die();?>
        <script>alert("***");</script><?php
    } finally {
        $gbd = null;
    }
}





// Función que modifica un DESTINO a no reservar más plazas
public function noMasPlazas($ref_Destino){
    try {
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
        $sql="UPDATE DESTINO SET estado='NO DISPONIBLE' WHERE ref_Destino='$ref_Destino'";

        //var_dump($sql); //die();

        $acentos = $gbd->query("SET NAMES 'utf8'");
        $result = $gbd->query($sql);

        if ($result->rowCount()) { ?>
       <script>alert("VALOR MODIFICADO");</script><?php

            return true;
        } else {?>
       <script>alert("Lo sentimos, no se ha podido modificar el DESTINO");</script><?php
        return false;
        }
    } catch (\PDOException$e) {?>
        <script>alert("VALOR NO MODIFICADO,!");</script><?php
        echo $e->getMessage();
        $insertado=false;
        return $insertado;
    } catch (\Exception$ex) {
        throw $ex; ?>
            <script>alert("¡No se Ha modificado el Destino!");</script><?php
    } finally {
        $gbd = null;
    }
}


// Función que modifica un DESTINO a no reservar más plazas
public function noMasPlazasCompleto($ref_Destino){
    try {
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
        $sql="UPDATE DESTINO SET estado='COMPLETO' WHERE ref_Destino='$ref_Destino'";

        //var_dump($sql); //die();

        $acentos = $gbd->query("SET NAMES 'utf8'");
        $result = $gbd->query($sql);

        if ($result->rowCount()) { ?>
       <script>alert("VALOR MODIFICADO");</script><?php

            return true;
        } else {?>
       <script>alert("Lo sentimos, no se ha podido modificar el DESTINO");</script><?php
        return false;
        }
    } catch (\PDOException$e) {?>
        <script>alert("VALOR NO MODIFICADO,!");</script><?php
        echo $e->getMessage();
        $insertado=false;
        return $insertado;
    } catch (\Exception$ex) {
        throw $ex; ?>
            <script>alert("¡No se Ha modificado el Destino!");</script><?php
    } finally {
        $gbd = null;
    }
}




// Función que modifica un DESTINO a  reservar más plazas
public function masPlazasDisponible($ref_Destino){
    try {
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
        $sql="UPDATE DESTINO SET estado='DISPONIBLE' WHERE ref_Destino='$ref_Destino'";

        //var_dump($sql); //die();

        $acentos = $gbd->query("SET NAMES 'utf8'");
        $result = $gbd->query($sql);

        if ($result->rowCount()) { ?>
       <script>alert("VALOR MODIFICADO");</script><?php

            return true;
        } else {?>
       <script>alert("Lo sentimos, no se ha podido modificar el DESTINO");</script><?php
        return false;
        }
    } catch (\PDOException$e) {?>
        <script>alert("VALOR NO MODIFICADO,!");</script><?php
        echo $e->getMessage();
        $insertado=false;
        return $insertado;
    } catch (\Exception$ex) {
        throw $ex; ?>
            <script>alert("¡No se Ha modificado el Destino!");</script><?php
    } finally {
        $gbd = null;
    }
}



// Función que modifica un DESTINO a no reservar más plazas
public function noMasPlazasNoDisponible($ref_Destino){
    try {
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
        $sql="UPDATE DESTINO SET estado='DISPONIBLE' WHERE ref_Destino='$ref_Destino'";

        //var_dump($sql); //die();

        $acentos = $gbd->query("SET NAMES 'utf8'");
        $result = $gbd->query($sql);

        if ($result->rowCount()) { ?>
       <script>alert("VALOR MODIFICADO");</script><?php

            return true;
        } else {?>
       <script>alert("Lo sentimos, no se ha podido modificar el DESTINO");</script><?php
        return false;
        }
    } catch (\PDOException$e) {?>
        <script>alert("VALOR NO MODIFICADO,!");</script><?php
        echo $e->getMessage();
        $insertado=false;
        return $insertado;
    } catch (\Exception$ex) {
        throw $ex; ?>
            <script>alert("¡No se Ha modificado el Destino!");</script><?php
    } finally {
        $gbd = null;
    }
}





}