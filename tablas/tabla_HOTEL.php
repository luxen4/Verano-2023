 <?php 
 
 /*
$dropTABLE_BARRESTAURANTES="DROP TABLE BARRESTAURANTES";
if (mysqli_query($conn, $dropTABLE_BARRESTAURANTES)) {echo "BARRESTAURANTES eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla BARRESTAURANTES: " . mysqli_error($conn) . "<br>";}
*/

$creaHOTEL="CREATE TABLE HOTEL(
	cod_Hotel	INT NOT NULL AUTO_INCREMENT,	
  ref_Hotel   VARCHAR (10) NOT NULL UNIQUE,
  ref_Localidad       VARCHAR (5) NOT NULL UNIQUE, 
	nombre_Hotel			  VARCHAR (50) NOT NULL,  
  e_web         	VARCHAR (200),  
  cod_Posiciones  INT NOT NULL,
  habilitado 	VARCHAR (3) DEFAULT 'SI' NOT NULL,

	PRIMARY KEY (cod_Hotel),
  FOREIGN KEY (ref_Localidad) REFERENCES LOCALIDAD (ref_Localidad) ON DELETE CASCADE ON UPDATE CASCADE

);";

if (mysqli_query($conn, $creaHOTEL)) {
  echo "Table HOTEL created successfully <br>";
} else {
  echo "Error al crear la tabla HOTEL: " . mysqli_error($conn) . "<br>";
}


/* Laredo */
$pueblaHOTEL="INSERT INTO HOTEL(ref_Hotel,ref_Localidad,nombre_Hotel,e_web,cod_Posiciones,habilitado)
				VALUES(/*cod_Hotel*/'08006H','LDO','Playamar','https://www.hotelplayamarlaredo.es/',1,'SI')";

// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaHOTEL)) {
    echo "Inserción en la tabla Hotel(Laredo) exitosa <br>";
  } else {
    echo "Error al insertar en la tabla HOTEL(Laredo): " . mysqli_error($conn) . "<br>";
  }





















/* 10 LAREDO */ //require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Hoteles_Localidad/poblar_HotelesLaredo.php';
