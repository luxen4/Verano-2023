<?php




if($_SERVER['SERVER_NAME']=="localhost"){
    $servername="localhost";
    $database="proyectoplayasdefinitivo";
    $username="root";
    $password=""; 
}else{
    /*
    $servername="fdb30.awardspace.net";
    $database="3714088_proyectoplayas";
    $username="3714088_proyectoplayas";
    $password="villamediana2";
    */

    $servername="sql109.epizy.com";
    $database="epiz_31803423_proyectoplayasdefinitivo";
    $username="epiz_31803423";
    $password="rYPHq8acqd4Y";

}

    

// Create connection
$conn = mysqli_connect($servername, $username, $password, $database);
// Check connection
if (!$conn) {
die("Connection failed: " . mysqli_connect_error());
}
  //echo "Connected successfully";