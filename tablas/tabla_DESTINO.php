<?php
/* Estructura de tabla para la tabla `DESTINO` */

/*
$dropTABLE_DESTINO="DROP TABLE DESTINO";
if (mysqli_query($conn, $dropTABLE_DESTINO)) {echo "Tabla DESTINO eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla DESTINO: " . mysqli_error($conn) . "<br>";}
*/

$creaDESTINO="CREATE TABLE DESTINO (
	cod_Destino				INT NOT NULL AUTO_INCREMENT,
	ref_Destino				VARCHAR	(10) NOT NULL,
	ref_Localidad     		VARCHAR	(5) NOT NULL,
	dia_Semana				VARCHAR (15) NOT NULL, 
	fecha_Viaje				VARCHAR (15) NOT NULL, 
	ref_AgenciaViajes		VARCHAR (5)  NOT NULL, 
	kilometrosIdaVuelta		INT NOT NULL,
	euros					DECIMAL(19,2)DEFAULT '14', 	/*euros_Adulto y euros_Niño falta*/ /*tiempo_viaje*/
	ref_Bus					VARCHAR (10) NOT NULL,	
	estado					ENUM ('COMPLETO', 'DISPONIBLE', 'NO DISPONIBLE') DEFAULT 'DISPONIBLE',
/*											   				                           
	direcion_Salida			NVARCHAR (100)   DEFAULT  (N'Estación de autobuses')NOT NULL,
	hora_Salida				TIME			 DEFAULT  (N'08:00:00.0000000') NOT NULL,

	direcion_Vuelta			NVARCHAR (100)	 DEFAULT  (N'Salida de la playa') NOT NULL,
	hora_Vuelta				TIME			 DEFAULT  (N'19:00:00') NOT NULL,
*/

		PRIMARY KEY (cod_Destino),
		CONSTRAINT UNIQUE_DESTINO UNIQUE (ref_Destino),
    	FOREIGN KEY (ref_Localidad) REFERENCES LOCALIDAD (ref_LOCALIDAD) ON UPDATE CASCADE ON DELETE CASCADE,
		FOREIGN KEY (ref_AgenciaViajes) REFERENCES AGENCIAVIAJES (ref_AgenciaViajes) ON UPDATE CASCADE ON DELETE CASCADE,
		FOREIGN KEY (ref_Bus) REFERENCES BUS (ref_Bus) ON UPDATE CASCADE ON DELETE CASCADE
);";


if (mysqli_query($conn, $creaDESTINO)) {
  echo "Table DESTINO created successfully <br>";
} else {
  echo "Error al crear la tabla DESTINO: " . mysqli_error($conn) . "<br>";
}


/*ACTUALIZADO SET lc_time_names = "es_ES"; /* Para que traduzca a Español el dia de la semana */

/* Inserción de Destinos */    
//require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Destinos/poblar_Destinos_GranReserva.php';
//require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Destinos/poblar_Destinos_ZafiroTours.php';
	// require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Destinos/poblar_Destinos_AzulMarino.php';
    require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Destinos/poblar_Destinos_GoTravell_2023.php';
//require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Destinos/poblar_Destinos_Ortensia.php';
//require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Destinos/poblar_Destinos_ComisionesObreras.php';
//require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Destinos/poblar_Destinos_Rotuprint.php';
// require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Destinos/poblar_Destinos_BidasoaViajes.php';


 

$creaAGENCIAVIAJESDESTINO="CREATE TABLE AGENCIAVIAJESDESTINO(
cod_AgenciaViajesDestino  INT NOT NULL AUTO_INCREMENT, /*bigint unsigned not null primary key auto_increment,*/
cod_AgenciaViajes	      INT NOT NULL, 
cod_Destino			      INT NOT NULL, 
	
	PRIMARY KEY (cod_AgenciaViajesDestino),	
	FOREIGN KEY (cod_AgenciaViajes) REFERENCES AGENCIAVIAJES (cod_AgenciaViajes) ON UPDATE CASCADE ON DELETE CASCADE,
	FOREIGN KEY (cod_Destino) REFERENCES DESTINO (cod_Destino) ON UPDATE CASCADE ON DELETE CASCADE
);";

if (mysqli_query($conn, $creaAGENCIAVIAJESDESTINO)) {
  echo "Table AGENCIADESTINO created successfully <br>";
} else {
  echo "Error al crear la tabla AGENCIADESTINO: " . mysqli_error($conn) . "<br>";
}

?>