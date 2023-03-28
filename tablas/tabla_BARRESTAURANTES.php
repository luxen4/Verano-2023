 <?php 
 
 /*
$dropTABLE_BARRESTAURANTES="DROP TABLE BARRESTAURANTES";
if (mysqli_query($conn, $dropTABLE_BARRESTAURANTES)) {echo "BARRESTAURANTES eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla BARRESTAURANTES: " . mysqli_error($conn) . "<br>";}
*/

$creaBARRESTAURANTES="CREATE TABLE BARRESTAURANTES(
	cod_barrestaurantes	INT NOT NULL AUTO_INCREMENT,	
  ref_negocio   VARCHAR (10) NOT NULL UNIQUE,
  ruta_imagen1	  VARCHAR (500) NOT NULL,	
  ruta_imagen2	  VARCHAR (500) NOT NULL,		
  ruta_imagen3	  VARCHAR (500) NOT NULL,			
	nombre			  VARCHAR (50) NOT NULL,  
  descripcion   VARCHAR (80) NOT NULL,
  telefono      VARCHAR (18) NOT NULL,
  direccion     VARCHAR (40) NOT NULL,

  veces_Votado    int NOT NULL DEFAULT 1,  /* Sin parentesis */
  veces_Positivo  int NOT NULL DEFAULT 1,
  veces_Negativo  int NOT NULL DEFAULT 1,

  /*nombre_Lugar VARCHAR (50) NOT NULL,*/

  ref_Localidad	  VARCHAR (5) NOT NULL, 
  cod_posiciones  INT NOT NULL,
  e_tripadvisor   VARCHAR (200),
  e_facebook 	    VARCHAR (200),  
  e_web         	VARCHAR (200), 

  e_restaurantGuru  VARCHAR (200), 
  e_theFork         VARCHAR (200),
  menu_Basico       ENUM ('SI', 'NO') DEFAULT 'NO',
  menu_Premium      ENUM ('SI', 'NO') DEFAULT 'NO',
  menu_Personal     ENUM ('SI', 'NO') DEFAULT 'NO',
  
/*
  e_menu   VARCHAR (200),
  precio_menu TINYINT,
*/


 /* ref_menu VARCHAR (10),*/




  dto TINYINT,
  habilitado 	VARCHAR (3) DEFAULT 'SI' NOT NULL,

	PRIMARY KEY (cod_barrestaurantes),
  FOREIGN KEY (ref_Localidad) REFERENCES LOCALIDAD (ref_Localidad) ON DELETE CASCADE ON UPDATE CASCADE,  
  FOREIGN KEY (cod_posiciones) REFERENCES POSICIONES (cod_posiciones) ON DELETE CASCADE ON UPDATE CASCADE
  /*FOREIGN KEY (ref_menu) REFERENCES MENU (ref_menu) /*ON DELETE CASCADE ON UPDATE CASCADE*/
);";

if (mysqli_query($conn, $creaBARRESTAURANTES)) {
  echo "Table BARRESTAURANTES created successfully <br>";
} else {
  echo "Error al crear la tabla BARRESTAURANTES: " . mysqli_error($conn) . "<br>";
}



/* AJO */
/* BAKIO */                 require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Restaurantes_Localidad/poblar_Bakio2.php';
/* 03 Biarritz */           require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Restaurantes_Localidad/poblar_Biarritz2.php';
/* 04 CASTRO URDIALES */    require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Restaurantes_Localidad/poblar_CastroUrdiales2.php';
/* DEBA */
/* 06 Hondarribia */        require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Restaurantes_Localidad/poblar_Hondarribia2.php';
/* 07 Getaria */            require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Restaurantes_Localidad/poblar_Getaria2.php';
/* 08 Hendaya */            require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Restaurantes_Localidad/poblar_Hendaya2.php';
/* 09 ISLA */               require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Restaurantes_Localidad/poblar_Isla2.php';
/* 10 LAREDO */             require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Restaurantes_Localidad/poblar_Laredo2.php';
/* 11 LEKEITIO */           require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Restaurantes_Localidad/poblar_Lekeitio2.php';
/* 12 MUSKIZ */
/* 13 NOJA */               require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Restaurantes_Localidad/poblar_Noja2.php';
/* 14 ORIO */               require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Restaurantes_Localidad/poblar_Orio2.php';
/* 15 PLENTZIA */           require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Restaurantes_Localidad/poblar_Plentzia2.php';
/* 16 SAN JUAN DE LUZ */    require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Restaurantes_Localidad/poblar_SanJuanDeLuz2.php';
/* 17 SAN SEBASTIAN */      require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Restaurantes_Localidad/poblar_SanSebastian2.php';
/* 18 SANTANDER */          require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Restaurantes_Localidad/poblar_Santander2.php';
/* 19 SANTOÑA */            require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Restaurantes_Localidad/poblar_Santona2.php';
/* 20 SOMO */               require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Restaurantes_Localidad/poblar_Somo2.php';
/* 21 SOPELANA */           require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Restaurantes_Localidad/poblar_Sopelana2.php';
/* 22 ZARAUTZ */            require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Restaurantes_Localidad/poblar_Zarautz2.php'; 
/* 23 ZUMAIA */             require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Restaurantes_Localidad/poblar_Zumaia2.php'; /* BUSCAR EL BAR CHIC */
 ?>