 <?php
 
 /*
$dropTABLE_CONTRATO="DROP TABLE CONTRATO";
if (mysqli_query($conn, $dropTABLE_CONTRATO)) {echo "Tabla CONTRATO eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla CONTRATO: " . mysqli_error($conn) . "<br>";}
*/


$creaCONTRATO="CREATE TABLE CONTRATO(
	cod_contrato	INT NOT NULL AUTO_INCREMENT,	
  f_inicio DATE,
  f_final DATE, 

	PRIMARY KEY (cod_contrato)
);";


if (mysqli_query($conn, $creaCONTRATO)) {
  echo "Table CONTRATO created successfully <br>";
} else {
  echo "Error al crear la tabla CONTRATO: " . mysqli_error($conn) . "<br>";
}

$pueblaContrato="INSERT INTO CONTRATO(/*cod_CONTRATO,*/ f_inicio, f_final)
                VALUES('2022-06-1','2022-06-25'),
                      ('2022-06-2','2022-06-26'),
                      ('2022-06-3','2022-06-27'),
                      ('2022-06-4','2022-06-28'),
                      ('2022-06-5','2022-06-29')
;";

// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaContrato)) {
echo "Inserción en la tabla CONTRATO exitosa <br>";
} else {
echo "Error al insertar en la tabla CONTRATO: " . mysqli_error($conn) . "<br>";
}


 





$creaCONTRATOBARRESTAURANTES="CREATE TABLE CONTRATOBARRESTAURANTES(
	cod_contratobarrestaurantes	INT NOT NULL AUTO_INCREMENT,	
  ref_negocio  VARCHAR(10) NOT NULL,
  cod_contrato INT NOT NULL,

	PRIMARY KEY (cod_contratobarrestaurantes),
  CONSTRAINT UNIQUE_ContratoBaresRestaurantes UNIQUE (ref_negocio, cod_contrato),
  FOREIGN KEY (ref_negocio) REFERENCES BARRESTAURANTESS (ref_negocio) ON DELETE CASCADE ON UPDATE CASCADE,
  FOREIGN KEY (cod_contrato) REFERENCES CONTRATO (cod_contrato) ON DELETE CASCADE ON UPDATE CASCADE  
);";

if (mysqli_query($conn, $creaCONTRATOBARRESTAURANTES)) {
  echo "Table CONTRATOBARRESTAURANTES created successfully <br>";
} else {
  echo "Error al crear la tabla CONTRATOBARRESTAURANTES: " . mysqli_error($conn) . "<br>";
}

$pueblaCONTRATOBARRESTAURANTES="INSERT INTO CONTRATOBARRESTAURANTES(/*cod_CONTRATO,*/ ref_negocio, cod_contrato)
  VALUES
/* Biarritz */    (02001,'1'),(02002,'2'),(02003,'3'),(02006,'1'),(02006,'2'),(02006,'3'),
/* Castro */      (03001,'3'),(03002,'3'),(03003,'3'),(03004,'3'),(03005,'3'),(03006,'3'),
/* Hondarribia */ (04001,'3'),(04002,'3'),(04003,'1'),(04004,'3'),(04005,'3'),(04006,'1'),
/* Getaria */     (05001,'3'),(05002,'3'),(05003,'3'),(05004,'3'),(05005,'3'),(05006,'3'),
/* Hendaya */     (06001,'3'),(06002,'3'),(06003,'3'),(06004,'3'),(06005,'3'),(06006,'3'),
/* Isla */        (07001,'1'),(07002,'2'),(07003,'3'),(07004,'1'),(07005,'2'),(07006,'3'),
/* Laredo */      (08001,'3'),(08002,'3'),(08003,'3'),(08004,'3'),(08005,'3'),(08006,'3'),
/* Lekeitio */    (09001,'3'),(09002,'3'),(09003,'3'),(09004,'3'),(09005,'3'),(09006,'3'),
/* Noja */        (10001,'1'),(10002,'2'),(10003,'3'),(10004,'3'),(10005,'3'),(10006,'3'),
/* Orio */        (11001,'3'),(11002,'3'),(11003,'3'),(11004,'3'),(11005,'3'),(11006,'3'),
/* Plencia */     (12001,'1'),(12002,'1'),(12003,'1'),(12004,'1'),(12005,'1'),(12006,'1'),
/* S.Juán de Luz*/(13001,'3'),(13002,'3'),(13003,'3'),(13004,'3'),(13005,'3'),(13006,'3'),
/* San Sebastián*/(14001,'3'),(14002,'3'),(14003,'3'),(14004,'3'),(14005,'3'),(14006,'3'),
/* Santander */   (15001,'3'),(15002,'3'),(15003,'3'),(15004,'3'),(15005,'3'),(15006,'3'),
/* Santoña */     (16001,'1'),(16002,'1'),(16003,'1'),(16004,'1'),(16005,'1'),(16006,'1'),
/* Somo */        (17001,'1'),(17002,'1'),(17003,'1'),(17004,'1'),(17005,'1'),(17006,'1'),
/* Zarautz */     (18001,'3'),(18002,'3'),(18003,'3'),(18004,'3'),(18005,'3'),(18006,'3'),
/* Zumaia */      (19001,'3'),(19002,'3'),(19003,'3'),(19004,'3'),(19005,'3'),(19006,'3')

        
;";

// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaCONTRATOBARRESTAURANTES)) {
echo "Inserción en la tabla CONTRATOBARRESTAURANTES exitosa <br>";
} else {
echo "Error al insertar en la tabla CONTRATOBARRESTAURANTES: " . mysqli_error($conn) . "<br>";
}



?>

