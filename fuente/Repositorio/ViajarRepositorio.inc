<?php
namespace miId\fuente\Repositorio;
use miId\core\ConexionBd;

class ViajarRepositorio{  

// Función que comprueba si una plaza está libre
 public function comprobarPlazaBus($cod_Destino, $codCliente, $codBus, $plazasAocupar){
    
    

if(!empty($plazasAocupar["asientoseleccionado"])){          // Servidor gratuito
    $plazasAocupar=$plazasAocupar["asientoseleccionado"];
}else{
    $clave=array_keys($plazasAocupar);                      // Apaño para el local
    
    $plazasAocupar=$plazasAocupar[$clave[0]];
    var_dump($plazasAocupar);
}

    $sql="SELECT * FROM VIAJAR WHERE cod_Destino= $cod_Destino AND cod_Cliente=$codCliente AND cod_Bus=$codBus AND plaza_Bus=$plazasAocupar";	


    include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE

    $result = $gbd->query($sql); 
    $results = $result -> fetchAll(\PDO::FETCH_OBJ); 

    var_dump($results);

    if (empty($results)) { 
        ?><script>//alert("LIBRE!");</script><?php
        return true; 
    } else {
        ?><script>alert("OCUPADA");</script><?php 
        return false;
    } 

} 

// Función que hace ocupar una plazas de un Bus a  Clientes o No Clientes                          
public function ocuparPlazaBus($datos){
  
    include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOSMYSQLI; 
    $numAsientos=count($datos['asientos'])-1;

        $values='VALUES';
        $veces=0;
        foreach($datos['asientos'] as $asiento){
            $values=$values . " ('$datos[ref_Viajar]', '$datos[ref_Destino]', '$datos[ref_Persona]', '$datos[ref_Bus]', '$asiento', '$datos[importepasajero]', '$datos[pagado]')";

                if($veces<$numAsientos){ $values=$values . ','; $veces++; }
        }

        $sql="INSERT INTO VIAJAR (ref_Viajar,ref_Destino,ref_Persona,ref_Bus,plaza_Bus,embolso,pagado)" . $values ;

     /*   if (mysqli_query($conn, $sql)) { 
            //alert("BRAVO, plaza reservada \n BUÉN VIAJE!");
            return true;
        } else {
            // alert("Ha habido algún problema,<br> ¡Plazas no insertadas!");
            // echo "Error: " . $sql . "<br>" . mysqli_error($conn); die();
            return false;
        }
*/

        try {
            include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS; 
            $sql="INSERT INTO VIAJAR (ref_Viajar,ref_Destino,ref_Persona,ref_Bus,plaza_Bus,embolso,pagado)" . $values ;
            $result = $gbd->query($sql);
            return true;
        }catch(\PDOException $ex){
            //throw $ex;
            return false;
        }catch(\Exception $ex){
           // throw $ex;
            return false;
        }finally{
            $gbd = null;
        }


}





 // VERSION-2      
// Función que hace ver los nombres de los ocupantes de las plazas de bus que va a un Destino                                   
public function infoOcupacionBus($ref_Destino){  
    try {
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS; 
    /*  $sql="SELECT p.ref_Persona FROM VIAJAR v INNER JOIN PERSONA p on p.ref_Persona=v.ref_Persona WHERE ref_Destino='$ref_Destino' ORDER BY plaza_Bus asc";*/
        $sql="SELECT * FROM VIAJAR WHERE ref_Destino='$ref_Destino' ORDER BY plaza_Bus asc";

        //var_dump($sql);die();
        $result = $gbd->query($sql);
        return $results = $result->fetchAll(\PDO::FETCH_OBJ);

    }catch(\PDOException $ex){
        //throw $ex;?><script>alert("¡El nombre de objeto 'VIAJAR' no es válido(No exisrrrrte la tabla)!");</script><?php 
    }catch(\Exception $ex){throw $ex;
    }finally{ $gbd = null;
    }
}



// Función que devuelve el tipo de Persona que está sentada en una butaca
public function clienteOpasajero($ref_Destino,$plaza_Bus){
            try {
                include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS; 
             /*   $sql="SELECT ref_Persona FROM VIAJAR WHERE plaza_Bus='$plaza_Bus'"; */



                $sql="SELECT ref_Persona FROM VIAJAR 
                WHERE ref_Destino='$ref_Destino' AND plaza_Bus='$plaza_Bus'"; 
                
                $result = $gbd->query($sql);
                return $results = $result->fetchAll(\PDO::FETCH_OBJ);

            } catch (\PDOException $e) {
                echo $e->getMessage();
                throw $ex; //die();?>
                <script>//alert("");</script><?php 
            } catch (\Exception $ex) {
                throw $ex; //die();?>
                <script>//alert("*");</script><?php
            } finally {
                $gbd = null;
            }
}


// Función que devuelve el nombre de un ocupante
public function nombreClienteOcupacionPlaza($ref_Destino){
    include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc'; // ASI ES LA ÚNICA MANERA DE QUE FUNCIONE

            try {
                    
                $sql="SELECT c.nombre,c.apellidos,c.tlfnoParticular,v.plaza_Bus FROM CLIENTE c INNER JOIN VIAJAR v 
                ON c.ref_Cliente = v.ref_Persona
                WHERE v.ref_Destino='$ref_Destino'";
                
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
                throw $ex; die();?>
                <script>alert("¡El nombre de objeto 'VIAJAR' no es válido(No existe la tabla)!");</script><?php 
            } catch (\Exception $ex) {
                throw $ex; die();?>
                <script>alert("*");</script><?php
            } finally {
                $gbd = null;
            }
}

// Función que hace desocupar una plaza un cliente (params codDestino, codCliente)                                  
public function desOcuparPlazaBus($datos){
    try {   
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS; 
        $sql="DELETE FROM VIAJAR WHERE ref_Destino='$datos[ref_Destino]' AND plaza_Bus='$datos[asiento]'";
            
        $result = $gbd->query($sql); ?>
            <script>alert("¡Billete eliminado con Exito!");</script><?php
            return true;
    } catch (\PDOException $e) {
        echo $e->getMessage();
        throw $ex;
        die(); ?>
            <script>alert("¡El nombre de objeto 'VIAJAR' no es válido(No existe la tabla)!");</script><?php
    } catch (\PDOException $ex) {
        throw $ex; ?><script>alert("Reserva No eliminada!");</script><?php
    } catch (\Exception $ex) {
        throw $ex; ?><script>alert("Reserva No eliminada!");</script><?php
    } finally {
        $gbd = null;
    }
}


// Función que hace desocupar una plaza un cliente (params codDestino, codCliente)                                  
public function eliminarVariasReservasBus($ref_Destino, $plazasEliminar){
   /* try {   
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS; 
        $sql="DELETE FROM VIAJAR WHERE ref_Destino='$datos[ref_Destino]' AND plaza_Bus='$datos[asiento]'";
            
        $result = $gbd->query($sql); ?>
            <script>alert("¡Billete eliminado con Exito!");</script><?php
            return true;
    } catch (\PDOException $e) {
        echo $e->getMessage();
        throw $ex;
        die(); ?>
            <script>alert("¡El nombre de objeto 'VIAJAR' no es válido(No existe la tabla)!");</script><?php
    } catch (\PDOException $ex) {
        throw $ex; ?><script>alert("Reserva No eliminada!");</script><?php
    } catch (\Exception $ex) {
        throw $ex; ?><script>alert("Reserva No eliminada!");</script><?php
    } finally {
        $gbd = null;
    }
*/

    include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
    //$sql = "UPDATE VIAJAR SET pagado='$pagadoFinal' WHERE ref_Destino='$ref_Destino' AND plaza_Bus='$plaza_Bus'";

    $keys=array_keys($plazasEliminar);
    $cuantos_Eliminar=count($plazasEliminar);

    //var_dump($keys);die();


    try {  
        $gbd->setAttribute(\PDO::ATTR_ERRMODE, \PDO::ERRMODE_EXCEPTION);
        $gbd->beginTransaction();
       
            for($i=0; $i<$cuantos_Eliminar; $i++){
                    
               // $partir=explode("_", $numeros_Asientos[$i]);
                $plaza_Bus=$plazasEliminar[$keys[$i]];
               // $pagadoFinal=$datos[$numeros_Asientos[$i]];
                $sql = "DELETE FROM VIAJAR WHERE ref_Destino='$ref_Destino' AND plaza_Bus='$plaza_Bus'";
                $result = $gbd->query($sql);
            }
        $gbd->commit();
        
      } catch (Exception $e) {
        $gbd->rollBack();
        echo "Fallo: " . $e->getMessage();
      } finally {
        $gbd = null;
    }

}




// Función que devuelve el nº de registros de la tabla VIAJAR                        
public function numRegistrosViajar(){

         try {
                include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS; 
             $sql="SELECT COUNT(cod_Viajar) as numRegistros FROM VIAJAR";
             
            $result = $gbd->query($sql);
            return $results = $result->fetchAll(\PDO::FETCH_OBJ);

         } catch (\PDOException $e) {
             echo $e->getMessage();
             throw $ex;
             die(); ?>
             <script>alert("¡El nombre de objeto 'VIAJAR' no es válido(No existe la tabla)!");</script><?php
         } catch (\PDOException $ex) {
             throw $ex; ?><script>alert("Billete No eliminado!");</script><?php
         } catch (\Exception $ex) {
             throw $ex; ?><script>alert("Billete No eliminado!");</script><?php
         } finally {
             $gbd = null;
         }
 }

// Función que modifica el estado de la reserva de un asiento de Bus de un Destino
 public function cambiarEstadoReserva($ref_Destino, $plaza_Bus, $pagado){

    include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
    $sql = "UPDATE VIAJAR SET pagado='$pagado' WHERE ref_Destino='$ref_Destino' AND plaza_Bus='$plaza_Bus'";



    $result = $gbd->query($sql);

    if($result->rowCount()){ ?>
        <script>alert("Estado de la Reserva Modificado CON EXITO");</script><?php  
        return true;
        } else {?>
        <script>alert("Lo sentimos, no se ha podido modificar el estado de la Reserva");</script><?php
        return false;
        } 
        $gbd = null;
 }


 
// Función que modifica el estado de las Reservas de un Bus de un Destino
    public function cambiarEstadoReservas($ref_Destino, $datos){ 
//https://manuales.guebs.com/php/pdo.transactions.html
    include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
    //$sql = "UPDATE VIAJAR SET pagado='$pagadoFinal' WHERE ref_Destino='$ref_Destino' AND plaza_Bus='$plaza_Bus'";

    $numeros_Asientos=array_keys($datos);
   
    $cuantos_Modificar=count($numeros_Asientos);


    try {  
        $gbd->setAttribute(\PDO::ATTR_ERRMODE, \PDO::ERRMODE_EXCEPTION);
        $gbd->beginTransaction();
       
            for($i=0; $i<$cuantos_Modificar; $i++){
                    
                $partir=explode("_", $numeros_Asientos[$i]);
                if(!empty($partir[1])){
                    $plaza_Bus=$partir[1]; 
                    $pagadoFinal=$datos[$numeros_Asientos[$i]];
                    $sql = "UPDATE VIAJAR SET pagado='$pagadoFinal' WHERE ref_Destino='$ref_Destino' AND plaza_Bus='$plaza_Bus'";
                    $result = $gbd->query($sql);
                }

                
            }
        $gbd->commit();
        
      } catch (Exception $e) {
        $gbd->rollBack();
        echo "Fallo: " . $e->getMessage();
      }


/*
    if($result->rowCount()){ ?>
        <script>alert("Estado de la Reserva Modificado CON EXITO");</script><?php  
        return true;
        } else {?>
        <script>alert("Lo sentimos, no se ha podido modificar el estado de la Reserva");</script><?php
        return false;
        } 
        $gbd = null;
 }
*/
    }


// Función que modifica el estado de las Reservas de un Bus de un Destino
public function cambiarPrecioReservas($ref_Destino, $datos){ 
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
        $numeros_Asientos=array_keys($datos); //var_dump($numeros_Asientos); die();
        $cuantos_Modificar=count($numeros_Asientos);
    
    
        try {  
            $gbd->setAttribute(\PDO::ATTR_ERRMODE, \PDO::ERRMODE_EXCEPTION);
            $gbd->beginTransaction();
           
                for($i=0; $i<$cuantos_Modificar; $i++){
                        
                    $partir=explode("_", $numeros_Asientos[$i]); 
                    $plaza_Bus=$partir[0];

                    $embolsoFinal=$datos; 
                    $nuevoPrecio=$embolsoFinal[$numeros_Asientos[$i]]; 
                    $sql = "UPDATE VIAJAR SET embolso='$nuevoPrecio' WHERE ref_Destino='$ref_Destino' AND plaza_Bus='$plaza_Bus'";
                    
                    $result = $gbd->query($sql);
                }
            $gbd->commit();
            
          } catch (Exception $e) {
            $gbd->rollBack();
            echo "Fallo: " . $e->getMessage();
          }
    
    
    /*
        if($result->rowCount()){ ?>
            <script>alert("Estado de la Reserva Modificado CON EXITO");</script><?php  
            return true;
            } else {?>
            <script>alert("Lo sentimos, no se ha podido modificar el estado de la Reserva");</script><?php
            return false;
            } 
            $gbd = null;
     }
    */
        }

 
// Función que devuelve si una plaza esta pagada o NO            
public function infoEstadoPagado($ref_Destino,$plaza_Bus){

    try {
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS; 
        $sql="SELECT pagado FROM VIAJAR WHERE ref_Destino='$ref_Destino' AND plaza_Bus='$plaza_Bus'";
        


       $result = $gbd->query($sql);
       return $results = $result->fetchAll(\PDO::FETCH_OBJ);

    } catch (\PDOException $e) {
        echo $e->getMessage();
        throw $e;
        die(); ?>
        <script>alert("¡El nombre de objeto 'VIAJAR' no es válido(No existe la tabla)!");</script><?php
    } catch (\PDOException $ex) {
        throw $ex; ?><script>alert("Billete No eliminado!");</script><?php
    } catch (\Exception $ex) {
        throw $ex; ?><script>alert("Billete No eliminado!");</script><?php
    } finally {
        $gbd = null;
    }
}


// Funcion que devuelve las plazas ocupadas de un Destino (param $ref_Destino, )
public function numPlazasOcupadasDestino($ref_Destino){
    try {
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
        $sql = "SELECT count(plaza_Bus) as num_PlazasOcupadas from VIAJAR where ref_Destino='$ref_Destino'";

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


// Funcion que devuelve las plazas ocupadas de un Destino Pagadas (param $ref_Destino, )
public function numPlazasOcupadasPagadas($ref_Destino){
    try {
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
        $sql = "SELECT count(plaza_Bus) as num_PlazasOcupadasPagadas from VIAJAR where ref_Destino='$ref_Destino' 
        and pagado='SI'";

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

// Funcion que devuelve las plazas ocupadas de un Destino No Pagadas (param $ref_Destino, )
public function numPlazasOcupadasNoPagadas($ref_Destino){
    try {
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
        $sql = "SELECT count(plaza_Bus) as num_PlazasOcupadasNoPagadas from VIAJAR where ref_Destino='$ref_Destino' 
        and pagado='NO'";

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




}
