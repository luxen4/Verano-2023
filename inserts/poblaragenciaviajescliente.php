<?php

$creaSOCIOSAGENCIAVIAJES="CREATE TABLE SOCIOSAGENCIAVIAJES(
    cod_SociosAgenciaViajes INT NOT NULL AUTO_INCREMENT,
/*    ref_SociosAgenciaViajes VARCHAR(10) NOT NULL,  */
    ref_AgenciaViajes	      VARCHAR(10) NOT NULL,  
    ref_ClientePlataforma		 VARCHAR(10) NOT NULL,
    fecha_Inscripcion        DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,

  PRIMARY KEY (cod_SociosAgenciaViajes),

   CONSTRAINT UNIQUE_AgenciaViajesCliente UNIQUE (ref_AgenciaViajes,ref_ClientePlataforma),    
   /* o UNIQUE (ID)*/
   
  FOREIGN KEY (ref_AgenciaViajes) REFERENCES AGENCIAVIAJES (ref_AgenciaViajes) ON DELETE CASCADE ON UPDATE CASCADE,
  FOREIGN KEY (ref_ClientePlataforma) REFERENCES CLIENTE (ref_Cliente) ON DELETE CASCADE ON UPDATE CASCADE
  );";


if (mysqli_query($conn, $creaSOCIOSAGENCIAVIAJES)) {
 echo "Table SOCIOSAGENCIAVIAJES created successfully <br>";
} else {
 echo "Error al crear la tabla SOCIOSAGENCIAVIAJES: " . mysqli_error($conn) . "<br>";
}




$pueblaSOCIOSAGENCIAVIAJES="INSERT INTO SOCIOSAGENCIAVIAJES (/*cod_sOCIOSaGENCIAvIAJES,*/ref_AgenciaViajes,ref_ClientePlataforma)  
    VALUES	('AV002','CLI0002')
";


// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaSOCIOSAGENCIAVIAJES)) {
    echo "Inserción en la tabla SOCIOSAGENCIAVIAJES exitosa <br>";
  } else {
    echo "Error al insertar en la tabla SOCIOSAGENCIAVIAJES: " . mysqli_error($conn) . "<br>";
  }
?>