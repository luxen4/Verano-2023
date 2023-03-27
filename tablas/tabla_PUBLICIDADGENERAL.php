<?php
/*
$dropTABLE_PUBLICIDADGENERAL="DROP TABLE PUBLICIDADGENERAL";
if (mysqli_query($conn, $dropTABLE_PUBLICIDADGENERAL)) {echo "Tabla PUBLICIDADGENERAL eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla PUBLICIDADGENERAL: " . mysqli_error($conn) . "<br>";}
*/

$creaPublicidadGeneral="CREATE TABLE PUBLICIDADGENERAL(
	cod_publicidadGeneral INT NOT NULL AUTO_INCREMENT,	
  tipo VARCHAR(10) NOT NULL,
  posicion  VARCHAR (10) NOT NULL,

	PRIMARY KEY (cod_publicidadGeneral)
  
);";

if (mysqli_query($conn, $creaPublicidadGeneral)) {
  echo "Table PUBLICIDADGENERAL created successfully <br>";
} else {
  echo "Error al crear la tabla PUBLICIDADGENERAL: " . mysqli_error($conn) . "<br>";
}

$pueblaPUBLICIDADGENERAL="INSERT INTO PUBLICIDADGENERAL(/*vistasnegocioshome,*/ tipo, posicion)
  VALUES('general','abajo')
        
;";


// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaPUBLICIDADGENERAL)) {
echo "Inserción en la tabla PUBLICIDADGENERAL exitosa <br>";
} else {
echo "Error al insertar en la tabla PUBLICIDADGENERAL: " . mysqli_error($conn) . "<br>";
}

?>