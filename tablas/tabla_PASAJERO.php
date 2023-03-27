<?php


$creaPASAJERO="CREATE TABLE PASAJERO(
	cod_Pasajero		INT NOT NULL AUTO_INCREMENT,
	ref_Pasajero		VARCHAR (10) NOT NULL, 
	fecha_inscripcion   DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,					
	nombreApellidos		VARCHAR (30) NOT NULL,  
	anos				TINYINT NOT NULL,	  
	TlfnoParticular 	VARCHAR (10) NOT NULL, 
	email 			  	VARCHAR (100) /*UNIQUE*/,
	roll        		VARCHAR(9) DEFAULT 'pasajero' NOT NULL,

		PRIMARY KEY (cod_Pasajero)
		/* CONSTRAINT UNIQUE_Pasajero UNIQUE (email) Un Pasajero se puede sentar en muchos sitios y con mismo imeil*/
		/*FOREIGN KEY (ref_Pasajero) REFERENCES PERSONA (ref_Persona) ON DELETE CASCADE ON UPDATE CASCADE  Ya veremos si lo tengo que colgar de la tabla PERSONA*/
);";

if (mysqli_query($conn, $creaPASAJERO)) {
	echo "Table PASAJERO created successfully <br>";
  } else {
	echo "Error al crear la tabla PASAJERO: " . mysqli_error($conn) . "<br>";
  }

 
$pueblaPASAJERO="INSERT INTO PASAJERO(ref_Pasajero,nombreApellidos,anos,TlfnoParticular,email,roll)
				VALUES
					(/*cod_Pasajero*/'PAS1','Adriano Laya García',49,'637117965','superlaya50@gmail.com',default),
					('PAS2','Alvaro García Alvarez',40,'9999999999',null,default)
					

						";

// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaPASAJERO)) {
	echo "Inserción en la tabla PASAJERO exitosa <br>";
  } else {
	echo "Error al insertar en la tabla PASAJERO: " . mysqli_error($conn) . "<br>";
  }

  ?>