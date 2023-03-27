<?php

$creaAGENCIA="CREATE TABLE AGENCIA(
    cod_Agencia			int NOT NULL AUTO_INCREMENT,/* PRIMARY KEY NOT NULL,*/
    ref_Agencia   	VARCHAR (10) NOT NULL UNIQUE, 
    /*fecha_Inscripcion     	datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,*/
    /*roll				    VARCHAR(70) DEFAULT 'agenciaviajes' NOT NULL,*/
                        
        PRIMARY KEY (cod_Agencia),
        CONSTRAINT UNIQUE_AGENCIA UNIQUE (ref_Agencia)
        );";
    
    if (mysqli_query($conn, $creaAGENCIA)) {
      echo "Table AGENCIA created successfully <br>";
    } else {
      echo "Error al crear la tabla AGENCIA: " . mysqli_error($conn) . "<br>";
    }
    
    
    $pueblaAGENCIAS="INSERT INTO AGENCIA(/*cod_Agencia,*/ ref_Agencia)
        VALUES
            ('AV001'),('AV002'),('AV003'),('AV004'),('AV005'),
            ('AB001'),('AB002'),('AB003'),('AB004'),('AB005')
      ;";
      
      // Condicional PHP que creará la tabla
      if (mysqli_query($conn, $pueblaAGENCIAS)) {
      echo "Inserción en la tabla AGENCIAS exitosa <br>";
      } else {
      echo "Error al insertar en la tabla AGENCIAS: " . mysqli_error($conn) . "<br>";
      }
     

?>