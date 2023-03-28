<?php



$nombre=$_FILES['archivo']['name'];
$guardado=$_FILES['archivo']['tmp_name'];

var_dump($guardado);

//var_dump($_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/');
//$guardado="/laya2.atwebpages.com/Verano-2022";

//require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Controlador/descuentoController.inc';

if(!file_exists('archivos')){
 mkdir('archivos',777,true);
 if(file_exists('archivos')){
    if(move_uploaded_file($guardado, 'archivos/' . $nombre)){
        echo "Archivo guardado con exito";
    }else{
        echo "Archivo no se pudo guardar";
    }
 }
}else{
    if(move_uploaded_file($guardado, 'archivos/' . $nombre)){
        echo "Archivo guardado con exito";
    }else{
        echo "Archivo no se pudo guardar";
    }
}





/*
$uploadedfileload="true";
$uploadedfile_size=$_FILES['uploadedfile'][size];
echo $_FILES[uploadedfile][name];
if ($_FILES[uploadedfile][size]>200000)
{$msg=$msg."El archivo es mayor que 200KB, debes reduzcirlo antes de subirlo<BR>";
$uploadedfileload="false";}

if (!($_FILES[uploadedfile][type] =="image/pjpeg" OR $_FILES[uploadedfile][type] =="image/gif" OR $_FILES[uploadedfile][type] =="image/png"))
{$msg=$msg." Tu archivo tiene que ser JPG o GIF. Otros archivos no son permitidos<BR>";
$uploadedfileload="false";}

$file_name=$_FILES[uploadedfile][name];
$add="uploads/$file_name";
if($uploadedfileload=="true"){

if(move_uploaded_file ($_FILES[uploadedfile][tmp_name], $add)){
echo " Ha sido subido satisfactoriamente";
}else{echo "Error al subir el archivo";}

}else{echo $msg;}



var_dump($_FILES);


//die();
$target_path = "uploads/";
$target_path = $target_path . basename( $_FILES['uploadedfile']['name']); 
if(move_uploaded_file($_FILES['uploadedfile']['tmp_name'], $target_path)) {
    echo "El archivo ".  basename( $_FILES['uploadedfile']['name']). 
    " ha sido subido";
} else{
    echo "Ha ocurrido un error, trate de nuevo!";
}



  var_dump($_POST);

if(isset($_POST['subir-imagen'])){?>
  <script>alert("Premio");</script><?php

  
  echo $_FILES['imagen1']['name'];
  echo $_FILES['imagen1']['tmp_name'];
  echo $_FILES['imagen1']['type'];
  echo $_FILES['imagen1']['size'];
  echo $_FILES['imagen1']['error'];


$extensiones = array(0=>'image/jpg',1=>'image/jpeg',2=>'image/png');
$max_tamanyo = 1024 * 1024 * 8;
if ( in_array($_FILES['imagen1']['type'], $extensiones) ) {
     echo 'Es una imagen';
     if ( $_FILES['imagen1']['size']< $max_tamanyo ) {
          echo 'Pesa menos de 1 MB';
     }
}




$ruta_indexphp = dirname(realpath(__FILE__));
$ruta_fichero_origen = $_FILES['imagen1']['tmp_name'];
$ruta_nuevo_destino = $ruta_indexphp . '/imagenes/' . $_FILES['imagen1']['name'];
if ( in_array($_FILES['imagen1']['type'], $extensiones) ) {
     echo 'Es una imagen';
     if ( $_FILES['imagen1']['size']< $max_tamanyo ) {
          echo 'Pesa menos de 1 MB';
          if( move_uploaded_file ( $ruta_fichero_origen, $ruta_nuevo_destino ) ) {
               echo 'Fichero guardado con éxito';
          }
     }
}







*/

?>