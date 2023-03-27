<?php

$creaSatisfacionUsernameRestaurantes="CREATE TABLE SATISFACIONUSERNAMERESTAURANTES(
	cod_Satisfacionusernamerestaurantes     INT NOT NULL AUTO_INCREMENT,
  ref_Satisfacionusernamerestaurantes     VARCHAR (6) NOT NULL,	
  username            VARCHAR (20) NOT NULL,			
  ref_negocio         VARCHAR (10) NOT NULL,
  grado_Satisfacion   VARCHAR (1) NOT NULL,

	PRIMARY KEY (cod_satisfacionusernamerestaurantes),
  CONSTRAINT UNIQUE_SatisfacionUsernameRestaurantes UNIQUE (username, ref_negocio),
  FOREIGN KEY (username) REFERENCES CLIENTE (username) ON DELETE CASCADE ON UPDATE CASCADE,
  FOREIGN KEY (ref_negocio) REFERENCES BARRESTAURANTES (ref_negocio) ON DELETE CASCADE ON UPDATE CASCADE
);";

if (mysqli_query($conn, $creaSatisfacionUsernameRestaurantes)) {
  echo "Table SATISFACIONUSERNAMERESTAURANTES created successfully <br>";
} else {
  echo "Error al crear la tabla SATISFACIONUSERNAMERESTAURANTES: " . mysqli_error($conn) . "<br>";
}

$pueblaSATISFACIONUSERNAMERESTAURANTES="INSERT INTO SATISFACIONUSERNAMERESTAURANTES(/*cod_votosusernamerestaurantes,*/ref_Satisfacionusernamerestaurantes, username, ref_negocio, grado_Satisfacion)
      VALUES /*('Sat-1','borja82'  ,'05001', '5'),
            ('Sat-2','borja82'  ,'02002', '4'),
            ('Sat-3','javi82'   ,'02002', '4'),
            ('Sat-4','dayanna82','02002', '3'),
            ('Sat-5','adri82'   ,'02002', '1'),*/
            ('Sat-6','edu82'    ,'02001', '4')
 
;";

if (mysqli_query($conn, $pueblaSATISFACIONUSERNAMERESTAURANTES)) {
echo "Inserción en la tabla SATISFACIONUSERNAMERESTAURANTES exitosa <br>";
} else {
echo "Error al insertar en la tabla SATISFACIONUSERNAMERESTAURANTES: " . mysqli_error($conn) . "<br>";
}
?>