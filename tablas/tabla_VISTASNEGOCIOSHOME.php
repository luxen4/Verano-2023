<?php


$creaVistasNegociosHome="CREATE TABLE VISTASNEGOCIOSHOME(
	cod_vistasnegocioshome INT NOT NULL AUTO_INCREMENT,	
  ref_localidad VARCHAR(4) NOT NULL,
  modo_Apariencia  VARCHAR (2) NOT NULL,


	PRIMARY KEY (cod_vistasnegocioshome),
  CONSTRAINT UNIQUE_VistasNegociosHomer  UNIQUE (ref_localidad, modo_Apariencia),
  FOREIGN KEY (ref_localidad) REFERENCES LOCALIDAD (ref_localidad) ON DELETE CASCADE ON UPDATE CASCADE
  /*FOREIGN KEY (cod_contrato) REFERENCES CONTRATO (cod_contrato) ON DELETE CASCADE ON UPDATE CASCADE */ 
);";

if (mysqli_query($conn, $creaVistasNegociosHome)) {
  echo "Table VISTASNEGOCIOSHOME created successfully <br>";
} else {
  echo "Error al crear la tabla VISTASNEGOCIOSHOME: " . mysqli_error($conn) . "<br>";
}

$pueblaVISTASNEGOCIOSHOME="INSERT INTO VISTASNEGOCIOSHOME(/*vistasnegocioshome,*/ ref_Localidad, modo_Apariencia)
  VALUES('AJO',3),('BRZ',3),('CTS',3),('HON',3),('GTA',3),('HDY',3),('ISL',3), ('LDO',1),('LKT',3),('NJA',3),('ORO',3),
  ('PNZ',3),('SJL',3),('SAS',3),('STR',3),('STN',0),('SMO',3),('ZRT',1),('ZMA',3)
;";

if (mysqli_query($conn, $pueblaVISTASNEGOCIOSHOME)) {
echo "Inserción en la tabla VISTASNEGOCIOSHOME exitosa <br>";
} else {
echo "Error al insertar en la tabla VISTASNEGOCIOSHOME: " . mysqli_error($conn) . "<br>";
}

?>