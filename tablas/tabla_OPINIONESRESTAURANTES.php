 <?php
/*
$dropTABLE_OPINIONESRESTAURANTES="DROP TABLE OPINIONESRESTAURANTES";
if (mysqli_query($conn, $dropTABLE_OPINIONESRESTAURANTES)) {echo "Tabla OPINIONESRESTAURANTES eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla OPINIONESRESTAURANTES: " . mysqli_error($conn) . "<br>";}
*/
$creaOpinionesRestaurantes="CREATE TABLE OPINIONESRESTAURANTES(
	cod_opinionesrestaurantes INT NOT NULL AUTO_INCREMENT,
  ref_Opinion     VARCHAR (6) NOT NULL,	
  username        VARCHAR (20) NOT NULL,			
  ref_negocio     VARCHAR (10) NOT NULL,
  texto_Opinion   VARCHAR (200) NOT NULL,


	PRIMARY KEY (cod_opinionesrestaurantes),
  CONSTRAINT UNIQUE_OpinionesRestaurantes UNIQUE (username, ref_negocio),
  FOREIGN KEY (username) REFERENCES CLIENTE (username) ON DELETE CASCADE ON UPDATE CASCADE,
  FOREIGN KEY (ref_negocio) REFERENCES BARRESTAURANTES (ref_negocio) ON DELETE CASCADE ON UPDATE CASCADE
);";

if (mysqli_query($conn, $creaOpinionesRestaurantes)) {
  echo "Table OPINIONESRESTAURANTES created successfully <br>";
} else {
  echo "Error al crear la tabla OPINIONESRESTAURANTES: " . mysqli_error($conn) . "<br>";
}


$pueblaOPINIONESRESTAURANTES="INSERT INTO OPINIONESRESTAURANTES(/*cod_opinionesrestaurantes,*/ username, ref_negocio, ref_opinion, texto_Opinion)
  VALUES('adri82','02001','OP001','Estoy muy contento de haber ido a comer allí!')
 
;";

if (mysqli_query($conn, $pueblaOPINIONESRESTAURANTES)) {
echo "Inserción en la tabla OPINIONESRESTAURANTES exitosa <br>";
} else {
echo "Error al insertar en la tabla OPINIONESRESTAURANTES: " . mysqli_error($conn) . "<br>";
}


 ?>