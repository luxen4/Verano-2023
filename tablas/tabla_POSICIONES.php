 <?php

$creaPOSICIONES="CREATE TABLE POSICIONES(
	cod_posiciones INT NOT NULL AUTO_INCREMENT,	
  posicion  TINYINT NOT NULL,
  cuantia_dia SMALLINT NOT NULL,
  dias    TINYINT NOT NULL,

	PRIMARY KEY (cod_posiciones)
  /*FOREIGN KEY (ref_negocio) REFERENCES BARRESTAURANTESS (ref_negocio) ON DELETE CASCADE ON UPDATE CASCADE,*/
  /*FOREIGN KEY (cod_contrato) REFERENCES CONTRATO (cod_contrato) ON DELETE CASCADE ON UPDATE CASCADE */ 
);";

if (mysqli_query($conn, $creaPOSICIONES)) {
  echo "Table POSICIONES created successfully <br>";
} else {
  echo "Error al crear la tabla POSICIONES: " . mysqli_error($conn) . "<br>";
}

$pueblaPOSICIONES="INSERT INTO POSICIONES(/*cod_posiciones,*/ posicion, cuantia_dia, dias)
                    VALUES (1,5,3),(2,5,3),(3,3,3),(4,3,3),(5,3,3),(6,3,3);";



// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaPOSICIONES)) {
  echo "Inserción en la tabla POSICIONES exitosa <br>";
  } else {
  echo "Error al insertar en la tabla POSICIONES: " . mysqli_error($conn) . "<br>";
  }

 ?>