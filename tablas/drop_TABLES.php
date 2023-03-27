<?php
// Este archivo es para no tener que comentar en cada archivo el dropTABLE

//--------------------------------------------
$dropTABLE_LOCALIDAD="DROP TABLE IF EXISTS LOCALIDAD";
if (mysqli_query($conn, $dropTABLE_LOCALIDAD)) {echo "Tabla LOCALIDAD eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla LOCALIDAD: " . mysqli_error($conn) . "<br>";}

$dropTABLE_IMAGENESLOCALIDAD="DROP TABLE IF EXISTS IMAGENESLOCALIDAD";
if (mysqli_query($conn, $dropTABLE_IMAGENESLOCALIDAD)) {echo "Tabla IMAGENESLOCALIDAD eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla IMAGENESLOCALIDAD: " . mysqli_error($conn) . "<br>";}
//--------------------------------------------

//--------------------------------------------
$dropTABLE_AGENCIA="DROP TABLE IF EXISTS AGENCIA";
if (mysqli_query($conn, $dropTABLE_AGENCIA)) {echo "Tabla AGENCIA eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla AGENCIA: " . mysqli_error($conn) . "<br>";}


$dropTABLE_AGENCIABUSES="DROP TABLE IF EXISTS AGENCIABUSES";
if (mysqli_query($conn, $dropTABLE_AGENCIABUSES)) {echo "Tabla AGENCIABUSES eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla AGENCIABUSES: " . mysqli_error($conn) . "<br>";}

$dropTABLE_BUS="DROP TABLE IF EXISTS BUS";
if (mysqli_query($conn, $dropTABLE_BUS)) {echo "Tabla BUS eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla BUS: " . mysqli_error($conn) . "<br>";}


$dropTABLE_AGENCIAVIAJES="DROP TABLE IF EXISTS AGENCIAVIAJES";
if (mysqli_query($conn, $dropTABLE_AGENCIAVIAJES)) {echo "Tabla AGENCIAVIAJES eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla AGENCIAVIAJES: " . mysqli_error($conn) . "<br>";}

$dropTABLE_RELACIONAGENCIAS="DROP TABLE IF EXISTS RELACIONAGENCIAS";
if (mysqli_query($conn, $dropTABLE_RELACIONAGENCIAS)) {echo "Tabla RELACIONAGENCIAS eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla RELACIONAGENCIAS: " . mysqli_error($conn) . "<br>";}
//--------------------------------------------

//--------------------------------------------
$dropTABLE_DESTINO="DROP TABLE IF EXISTS DESTINO";
if (mysqli_query($conn, $dropTABLE_DESTINO)) {echo "Tabla DESTINO eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla DESTINO: " . mysqli_error($conn) . "<br>";}

$dropTABLE_AGENCIAVIAJESDESTINO="DROP TABLE IF EXISTS AGENCIAVIAJESDESTINO";
if (mysqli_query($conn, $dropTABLE_AGENCIAVIAJESDESTINO)) {echo "Tabla AGENCIAVIAJESDESTINO eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla AGENCIAVIAJESDESTINO: " . mysqli_error($conn) . "<br>";}
//--------------------------------------------



$dropTABLE_RECUPERACONTRASENA="DROP TABLE IF EXISTS RECUPERACONTRASENA";
if (mysqli_query($conn, $dropTABLE_RECUPERACONTRASENA)) {echo "Tabla RECUPERACONTRASENA eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla RECUPERACONTRASENA: " . mysqli_error($conn) . "<br>";}



//---------------------------------------------
$dropTABLE_PERSONA="DROP TABLE IF EXISTS PERSONA";
if (mysqli_query($conn, $dropTABLE_PERSONA)) {echo "Tabla PERSONA eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla PERSONA: " . mysqli_error($conn) . "<br>";}

$dropTABLE_PROPIETARIO="DROP TABLE IF EXISTS PROPIETARIO";
if (mysqli_query($conn, $dropTABLE_PROPIETARIO)) {echo "Tabla PROPIETARIO eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla PROPIETARIO: " . mysqli_error($conn) . "<br>";}

$dropTABLE_CLIENTE="DROP TABLE IF EXISTS CLIENTE";
if (mysqli_query($conn, $dropTABLE_CLIENTE)) {echo "Tabla CLIENTE eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla CLIENTE: " . mysqli_error($conn) . "<br>";}
 
$dropTABLE_SOCIOSAGENCIAVIAJES="DROP TABLE IF EXISTS SOCIOSAGENCIAVIAJES";
if (mysqli_query($conn, $dropTABLE_SOCIOSAGENCIAVIAJES)) {echo "Tabla SOCIOSAGENCIAVIAJES eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla SOCIOSAGENCIAVIAJES: " . mysqli_error($conn) . "<br>";}

$dropTABLE_PASAJERO="DROP TABLE IF EXISTS PASAJERO";
if (mysqli_query($conn, $dropTABLE_PASAJERO)) {echo "Tabla PASAJERO eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla PASAJERO: " . mysqli_error($conn) . "<br>";}

$dropTABLE_VIAJAR="DROP TABLE IF EXISTS VIAJAR";
if (mysqli_query($conn, $dropTABLE_VIAJAR)) {echo "Tabla VIAJAR eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla VIAJAR: " . mysqli_error($conn) . "<br>";}
//---------------------------------------------





//---------------------------------------------
$dropTABLE_BARRESTAURANTES="DROP TABLE IF EXISTS BARRESTAURANTES";
if (mysqli_query($conn, $dropTABLE_BARRESTAURANTES)) {echo "BARRESTAURANTES eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla BARRESTAURANTES: " . mysqli_error($conn) . "<br>";}

$dropTABLE_CONTRATO="DROP TABLE IF EXISTS CONTRATO";
if (mysqli_query($conn, $dropTABLE_CONTRATO)) {echo "Tabla CONTRATO eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla CONTRATO: " . mysqli_error($conn) . "<br>";}

$dropTABLE_CONTRATOBARRESTAURANTES="DROP TABLE IF EXISTS CONTRATOBARRESTAURANTES";
if (mysqli_query($conn, $dropTABLE_CONTRATOBARRESTAURANTES)) {echo "CONTRATOBARRESTAURANTES eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla CONTRATOBARRESTAURANTES: " . mysqli_error($conn) . "<br>";}
 

$dropTABLE_VOTOSUSERNAMERESTAURANTES="DROP TABLE IF EXISTS VOTOSUSERNAMERESTAURANTES";
if (mysqli_query($conn, $dropTABLE_VOTOSUSERNAMERESTAURANTES)) {echo "Tabla VOTOSUSERNAMERESTAURANTES eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla VOTOSUSERNAMERESTAURANTES: " . mysqli_error($conn) . "<br>";}

$dropTABLE_SATISFACIONUSERNAMERESTAURANTES="DROP TABLE IF EXISTS SATISFACIONUSERNAMERESTAURANTES";
if (mysqli_query($conn, $dropTABLE_SATISFACIONUSERNAMERESTAURANTES)) {echo "Tabla SATISFACIONUSERNAMERESTAURANTES eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla SATISFACIONUSERNAMERESTAURANTES: " . mysqli_error($conn) . "<br>";}

$dropTABLE_OPINIONESRESTAURANTES="DROP TABLE IF EXISTS OPINIONESRESTAURANTES";
if (mysqli_query($conn, $dropTABLE_OPINIONESRESTAURANTES)) {echo "Tabla OPINIONESRESTAURANTES eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla OPINIONESRESTAURANTES: " . mysqli_error($conn) . "<br>";}

$dropTABLE_VISITAFICHANEGOCIO="DROP TABLE IF EXISTS VISITAFICHANEGOCIO";
if (mysqli_query($conn, $dropTABLE_VISITAFICHANEGOCIO)) {echo "VISITAFICHANEGOCIO eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla VISITAFICHANEGOCIO  : " . mysqli_error($conn) . "<br>";}

$dropTABLE_IPREMOTA="DROP TABLE IF EXISTS IPREMOTA";
if (mysqli_query($conn, $dropTABLE_IPREMOTA)) {echo "IPREMOTA eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla IPREMOTA: " . mysqli_error($conn) . "<br>";}
 
$dropTABLE_VISTASNEGOCIOSHOME="DROP TABLE IF EXISTS VISTASNEGOCIOSHOME";
if (mysqli_query($conn, $dropTABLE_VISTASNEGOCIOSHOME)) {echo "Tabla VISTASNEGOCIOSHOME eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla VISTASNEGOCIOSHOME: " . mysqli_error($conn) . "<br>";}
 
//---------------------------------------------



//---------------------------------------------
$dropTABLE_MENU="DROP TABLE IF EXISTS MENU";
  if (mysqli_query($conn, $dropTABLE_MENU)) {echo "MENU eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla MENU: " . mysqli_error($conn) . "<br>";}
  
$dropTABLE_MENUMOD="DROP TABLE IF EXISTS MENUMOD";
if (mysqli_query($conn, $dropTABLE_MENUMOD)) {echo "MENUMOD eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla MENUMOD: " . mysqli_error($conn) . "<br>";}

$dropTABLE_MODELOMENU="DROP TABLE IF EXISTS MODELOMENU";
if (mysqli_query($conn, $dropTABLE_MODELOMENU)) {echo "MODELOMENU eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla MODELOMENU: " . mysqli_error($conn) . "<br>";}

$dropTABLE_MENUPERSONAL="DROP TABLE IF EXISTS MENUPERSONAL";
if (mysqli_query($conn, $dropTABLE_MENUPERSONAL)) {echo "MENUPERSONAL eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla MENUPERSONAL: " . mysqli_error($conn) . "<br>";}

$dropTABLE_SATISFACIONUSERNAMERESTAURANTESMENU="DROP TABLE IF EXISTS SATISFACIONUSERNAMERESTAURANTESMENU";
if (mysqli_query($conn, $dropTABLE_SATISFACIONUSERNAMERESTAURANTESMENU)) {echo "Tabla SATISFACIONUSERNAMERESTAURANTESMENU eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla SATISFACIONUSERNAMERESTAURANTESMENU: " . mysqli_error($conn) . "<br>";}

$dropTABLE_RELACIONMENUSNEGOCIOS="DROP TABLE IF EXISTS RELACIONMENUSNEGOCIOS";
if (mysqli_query($conn, $dropTABLE_RELACIONMENUSNEGOCIOS)) {echo "RELACIONMENUSNEGOCIOS eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla RELACIONMENUSNEGOCIOS: " . mysqli_error($conn) . "<br>";}

//---------------------------------------------



$dropTABLE_INTERFACE="DROP TABLE IF EXISTS INTERFACE";
if (mysqli_query($conn, $dropTABLE_INTERFACE)) {echo "INTERFACE eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla INTERFACE: " . mysqli_error($conn) . "<br>";}

$dropTABLE_RELACIONIPREMOTAINTERFACE="DROP TABLE IF EXISTS RELACIONIPREMOTAINTERFACE";
if (mysqli_query($conn, $dropTABLE_RELACIONIPREMOTAINTERFACE)) {echo "RELACIONIPREMOTAINTERFACE eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla RELACIONIPREMOTAINTERFACE  : " . mysqli_error($conn) . "<br>";}

$dropTABLE_POSICIONES="DROP TABLE IF EXISTS POSICIONES";
if (mysqli_query($conn, $dropTABLE_POSICIONES)) {echo "POSICIONES eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla POSICIONES: " . mysqli_error($conn) . "<br>";}


$dropTABLE_PUBLICIDADGENERAL="DROP TABLE IF EXISTS PUBLICIDADGENERAL";
if (mysqli_query($conn, $dropTABLE_PUBLICIDADGENERAL)) {echo "Tabla PUBLICIDADGENERAL eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla PUBLICIDADGENERAL: " . mysqli_error($conn) . "<br>";}



$dropTABLE_SUDOKU="DROP TABLE IF EXISTS SUDOKU";
 if (mysqli_query($conn, $dropTABLE_SUDOKU)) {echo "Tabla SUDOKU eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla SUDOKU: " . mysqli_error($conn) . "<br>";}

 $dropTABLE_HOTEL="DROP TABLE IF EXISTS HOTEL";
 if (mysqli_query($conn, $dropTABLE_HOTEL)) {echo "Tabla HOTEL eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla HOTEL: " . mysqli_error($conn) . "<br>";}
 
?>