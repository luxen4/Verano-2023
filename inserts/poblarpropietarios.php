<?php

$creaPROPIETARIO=
"CREATE TABLE PROPIETARIO(
	cod_propietario		  INT NOT NULL AUTO_INCREMENT,
  ref_propietario     VARCHAR (20) NOT NULL,
	fecha_inscripcion   DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,
  nombre			  VARCHAR (20) NOT NULL, 
  apellidos		  VARCHAR (50) NOT NULL,	 
  telefono      VARCHAR (15)  NOT NULL, 
  email 			  VARCHAR (100) NOT NULL UNIQUE,
  ref_negocio   VARCHAR (10)  NOT NULL, 
	username      VARCHAR (20) NOT NULL UNIQUE,	
  contrasena		VARCHAR (90) NOT NULL,	
  roll        	VARCHAR (70) DEFAULT 'propietario' NOT NULL,

	PRIMARY KEY (cod_propietario),
  CONSTRAINT UNIQUE_PROPIETARIO UNIQUE (ref_propietario, ref_negocio),
  FOREIGN KEY (ref_negocio) REFERENCES BARRESTAURANTES (ref_negocio) ON DELETE CASCADE ON UPDATE CASCADE);
  
  ";


if (mysqli_query($conn, $creaPROPIETARIO)) {
  echo "Table PROPIETARIO created successfully <br>";
} else {
  echo "Error al crear la tabla PROPIETARIO: " . mysqli_error($conn) . "<br>";
}

/* 5 MySql OK */   /* Los símbolos de $ se escapan con: \$ */
$pueblaPROPIETARIO=
  "INSERT INTO PROPIETARIO (ref_propietario, fecha_inscripcion, nombre,apellidos, telefono, email, ref_negocio, username, contrasena, roll)
    VALUES(/*cod_Propietario*/'LDO08001',default,'Carlos','Alcalde Morales','637117965','alcalde@gmail.com','08001','alcalde82','$2y$10\$FhqZhRh8xKNH1gTU91Gma.QizLS02fRB4SJDb42LxKrDDPS4yQ9Bq','propietario')			

  ";

// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaPROPIETARIO)) {
  echo "Inserción en la tabla PROPIETARIO exitosa <br>";
} else {
  echo "Error al insertar en la tabla PROPIETARIO: " . mysqli_error($conn) . "<br>";
}

?>