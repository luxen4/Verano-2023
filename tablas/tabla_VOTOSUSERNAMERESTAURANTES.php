<?php
/*
$dropTABLE_VOTOSUSERNAMERESTAURANTES="DROP TABLE VOTOSUSERNAMERESTAURANTES";
if (mysqli_query($conn, $dropTABLE_VOTOSUSERNAMERESTAURANTES)) {echo "Tabla VOTOSUSERNAMERESTAURANTES eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla VOTOSUSERNAMERESTAURANTES: " . mysqli_error($conn) . "<br>";}
*/

$creaVotosUsernameRestaurantes="CREATE TABLE VOTOSUSERNAMERESTAURANTES(
	cod_votosusernamerestaurantes     INT NOT NULL AUTO_INCREMENT,
  ref_votosusernamerestaurantes     VARCHAR (6) NOT NULL,	
  username        VARCHAR (20) NOT NULL,			
  ref_negocio     VARCHAR (10) NOT NULL,
  calificacion    VARCHAR (10) NOT NULL,

	PRIMARY KEY (cod_votosusernamerestaurantes),
  CONSTRAINT UNIQUE_VotosUsernameRestaurantes UNIQUE (username, ref_negocio),
  FOREIGN KEY (username) REFERENCES CLIENTE (username) ON DELETE CASCADE ON UPDATE CASCADE,
  FOREIGN KEY (ref_negocio) REFERENCES BARRESTAURANTES (ref_negocio) ON DELETE CASCADE ON UPDATE CASCADE
);";

if (mysqli_query($conn, $creaVotosUsernameRestaurantes)) {
  echo "Table VOTOSUSERNAMERESTAURANTES created successfully <br>";
} else {
  echo "Error al crear la tabla VOTOSUSERNAMERESTAURANTES: " . mysqli_error($conn) . "<br>";
}


$pueblaVOTOSUSERNAMERESTAURANTES="INSERT INTO VOTOSUSERNAMERESTAURANTES(/*cod_votosusernamerestaurantes,*/ ref_votosusernamerestaurantes, username, ref_negocio, calificacion)
  VALUES('Vot001','adri82','02001','Positivo')
 
;";

if (mysqli_query($conn, $pueblaVOTOSUSERNAMERESTAURANTES)) {
echo "Inserción en la tabla VOTOSUSERNAMERESTAURANTES exitosa <br>";
} else {
echo "Error al insertar en la tabla VOTOSUSERNAMERESTAURANTES: " . mysqli_error($conn) . "<br>";
}

?>