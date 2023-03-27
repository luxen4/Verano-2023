<?php

 $creaPERSONA="CREATE TABLE PERSONA(
    cod_Persona		INT NOT NULL AUTO_INCREMENT,
    ref_Persona    VARCHAR (10) NOT NULL,

  
    PRIMARY KEY (cod_Persona),  
    CONSTRAINT UNIQUE_Persona UNIQUE (ref_Persona)
    );";
  
  
  
  if (mysqli_query($conn, $creaPERSONA)) {
    echo "Table PERSONA created successfully <br>";
  } else {
    echo "Error al crear la tabla PERSONA: " . mysqli_error($conn) . "<br>";
  }



$pueblaPERSONA="INSERT INTO PERSONA (ref_Persona)
				VALUES
					(/*cod_Persona*/'CLI0001'),('CLI0002'),('CLI0003'),('CLI0004'),('CLI0005')";

// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaPERSONA)) {
	echo "Inserción en la tabla PERSONA exitosa <br>";
  } else {
	echo "Error al insertar en la tabla PERSONA: " . mysqli_error($conn) . "<br>";
  }

?>