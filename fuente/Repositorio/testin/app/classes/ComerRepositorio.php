<?php
namespace App\Classes;

class ComerRepositorio
{


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
            var_dump($results[0]); //die();

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