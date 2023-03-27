<?php
/*
$dropTABLE_VISITAFICHANEGOCIO="DROP TABLE VISITAFICHANEGOCIO";
if (mysqli_query($conn, $dropTABLE_VISITAFICHANEGOCIO)) {echo "VISITAFICHANEGOCIO eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla VISITAFICHANEGOCIO  : " . mysqli_error($conn) . "<br>";}
*/

$creaVISITAFICHANEGOCIO="CREATE TABLE VISITAFICHANEGOCIO(
  cod_VisitaFichaNegocio INT NOT NULL AUTO_INCREMENT,
  ref_VisitaFichaNegocio VARCHAR (9) NOT NULL,
  ref_IpRemota    VARCHAR (9) NOT NULL,
  ref_negocio     VARCHAR (9) NOT NULL,
  fecha           datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,

  PRIMARY KEY (cod_VisitaFichaNegocio),
  CONSTRAINT UNIQUE_VisitaFichaNegocio UNIQUE (ref_visitaFichaNegocio),

  FOREIGN KEY (ref_IpRemota) REFERENCES IPREMOTA (ref_IpRemota) ON DELETE CASCADE ON UPDATE CASCADE,
  FOREIGN KEY (ref_negocio) REFERENCES BARRESTAURANTES (ref_negocio) ON DELETE CASCADE ON UPDATE CASCADE
);";

if (mysqli_query($conn, $creaVISITAFICHANEGOCIO)) { echo "Table VISITAFICHANEGOCIO created successfully <br>"; } else { echo "Error al crear la tabla VISITAFICHANEGOCIO: " . mysqli_error($conn) . "<br>";}

$pueblaVISITAFICHANEGOCIO="INSERT INTO VISITAFICHANEGOCIO(/*cod_IpRemota,*/ref_VisitaFichaNegocio ,ref_IpRemota, ref_negocio, fecha)
      VALUES ('VI1','IP::1', '10002', default);";

if (mysqli_query($conn, $pueblaVISITAFICHANEGOCIO)) {echo "Inserción en la tabla VISITAFICHANEGOCIO exitosa <br>";} else { echo "Error al insertar en la tabla VISITAFICHANEGOCIO: " . mysqli_error($conn) . "<br>";}
?>