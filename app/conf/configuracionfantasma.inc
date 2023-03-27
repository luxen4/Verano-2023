<?php



if($_SERVER['SERVER_NAME']=="localhost"){
    $host="localhost";
    $dbname="proyectoplayasdefinitivo";
    $username="root";
    $contrasena="";   

}else{
  /*  la buena $host="fdb30.awardspace.net";
    $dbname="3714088_proyectoplayas";
    $username="3714088_proyectoplayas";
    $contrasena="villamediana2";  */
  
    
    /* OK para awardspace.com
    $host="fdb30.awardspace.net";
    $dbname="4009740_proyectoplayas";
    $username="4009740_proyectoplayas";
    $contrasena="villamediana2";*/


    $host="sql109.epizy.com";
    $dbname="epiz_31803423_proyectoplayasdefinitivo";
    $username="epiz_31803423";
    $contrasena="rYPHq8acqd4Y";

    
}


          
try {
    $gbd = new PDO("mysql:host=$host;dbname=$dbname", $username, $contrasena );
   // echo "Connected to at successfully.";
} catch (PDOException $pe) {
    die("Could not connect to the database $dbname :" . $pe->getMessage());
}




/*
FTP---> laya.atwebpages.com   3714088_laya  villamediana2 21  entrando con superlaya50@gmail.com/alberite2
FTP---> laya2.atwebpages.com  4009740_laya misma  villamediana2 21  entrando con superlaya51@gmail.com/alberite2
*/


// Así para el host

// Así en local
/*
                    $dsn = 'mysql:host=localhost;dbname=proyectoplayasdefinitivo;charset=utf8mb4';  
                    $nombre_usuario = 'root';
                    $contraseña = '';
                    $opciones = array(PDO::MYSQL_ATTR_INIT_COMMAND => 'SET NAMES utf8'); 
*/

?>





                 

