<?php

  $creaBUS="CREATE TABLE BUS(
    cod_Bus				      INT NOT NULL AUTO_INCREMENT,
    ref_Bus             VARCHAR (10) NOT NULL,
    tipo_Bus			      ENUM ('Grande', 'Mediano', 'Pequeño', 'Minibus') NOT NULL DEFAULT 'Grande' ,
    plazas				      SMALLINT NOT NULL,
    matricula			      VARCHAR (10)  NOT NULL unique,
    ano_Matriculacion	  INT NOT NULL,	
    ref_AgenciaBuses	   VARCHAR (10) NOT NULL,
  
    PRIMARY KEY (cod_Bus),
    CONSTRAINT UNIQUE_BUS UNIQUE (ref_Bus),
    FOREIGN KEY (ref_AgenciaBuses) REFERENCES AGENCIABUSES(ref_AgenciaBuses) ON DELETE CASCADE ON UPDATE CASCADE 
    /* https://qastack.mx/dba/74627/difference-between-on-delete-cascade-on-update-cascade-in-mysql */
  );";
  
  
    if (mysqli_query($conn, $creaBUS)) {
        echo "Table AGENCIABUSES created successfully <br>";
    } else {
        echo "Error al crear la tabla BUS: " . mysqli_error($conn) . "<br>";
    }
   
  /*2 MySql OK */
  $pueblaBUS="INSERT INTO BUS (ref_Bus,tipo_Bus,plazas,matricula,ano_Matriculacion,ref_AgenciaBuses) 
  VALUES  
          /*---JIMENEZ---------------------------------------------------- */
          ('BUSJIM001','Grande','63','---',2020,'AB002');"  /* Real con montacargas elevador sillas discapacitados */
          
          ;
           


  
  
  /* --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- */
  
  
  // Condicional PHP que creará la tabla
  if (mysqli_query($conn, $pueblaBUS)) {
        echo "Inserción en la tabla BUS exitosa <br>";
    } else {
        echo "Error al insertar en la tabla BUS: " . mysqli_error($conn) . "<br>";
    }

    ?>