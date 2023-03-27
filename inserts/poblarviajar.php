<?php

 $creaVIAJAR="CREATE TABLE VIAJAR(
    cod_Viajar		INT NOT NULL AUTO_INCREMENT,
    ref_Viajar    VARCHAR (10) NOT NULL,
    ref_Destino		VARCHAR (10) NOT NULL,				
    ref_Persona	  VARCHAR (10) NOT NULL, /*int(4) NOT NULL default '0',*/
    ref_Bus 		  VARCHAR (10) NOT NULL, 
    plaza_Bus 		INT NOT NULL,
    embolso				DECIMAL(19,2) NOT NULL DEFAULT '14', 	/*euros_Adulto y euros_Niño falta*/ /*tiempo_viaje*/
  /*pago_Online				    VARCHAR (15) NOT NULL DEFAULT 'NO',	*/
    pagado        ENUM ('SI', 'NO') DEFAULT 'NO',

    /*UNIQUE(cod_Destino,cod_Cliente,cod_Bus),*/   
    /*https://suttonedfoundation.org/es/564227-i-need-to-auto_increment-a-field-in-mysql-that-is-not-primary-key-mysql-primary-key-auto-increment.html*/
  
    PRIMARY KEY (cod_Viajar),   
  
    CONSTRAINT UNIQUE_Viajar UNIQUE (ref_Destino,plaza_Bus),
    
    /* Lo que se referencia tiene que ser Primary Key o UNIQUE */
    FOREIGN KEY (ref_Destino)	  REFERENCES DESTINO	(ref_Destino) ON UPDATE CASCADE ON DELETE CASCADE,
    FOREIGN KEY (ref_Persona)	  REFERENCES PERSONA (ref_Persona) ON UPDATE CASCADE ON DELETE CASCADE,
    FOREIGN KEY (ref_Bus)		    REFERENCES BUS		  (ref_Bus)     ON UPDATE CASCADE ON DELETE CASCADE
    );";
  

  
  if (mysqli_query($conn, $creaVIAJAR)) {
    echo "Table VIAJAR created successfully <br>";
  } else {
    echo "Error al crear la tabla VIAJAR: " . mysqli_error($conn) . "<br>";
  }
  

  $pueblaViajar="INSERT INTO VIAJAR(/*cod_Viajar,*/ref_Viajar,ref_Destino,ref_Persona,ref_Bus,plaza_Bus,embolso,pagado)
                    VALUES
                    ('VI1','D_AM1','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI2','D_AM2','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI3','D_AM3','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI4','D_AM4','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI5','D_AM5','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI6','D_AM6','CLI0002','BUSRIO001',1,16,'NO'),
                    ('VI7','D_AM7','CLI0002','BUSRIO001',1,16,'NO'),
                    ('VI8','D_AM8','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI9','D_AM9','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI10','D_AM10','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI11','D_AM11','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI12','D_AM12','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI13','D_AM13','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI14','D_AM14','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI15','D_AM15','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI16','D_AM16','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI17','D_AM17','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI18','D_AM18','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI19','D_AM19','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI20','D_AM20','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI21','D_AM21','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI22','D_AM22','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI23','D_AM23','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI24','D_AM24','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI25','D_AM25','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI26','D_AM26','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI27','D_AM27','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI28','D_AM28','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI29','D_AM29','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI30','D_AM30','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI31','D_AM31','CLI0002','BUSRIO001',1,16,'SI'),
                    ('VI32','D_AM32','CLI0002','BUSRIO001',1,16,'SI'),

                    ('VI33','D_GT39','CLI0002','BUSRIO001',1,14,'SI')
                   ;";
  
  // Condicional PHP que creará la tabla
  if (mysqli_query($conn, $pueblaViajar)) {
    echo "Inserción en la tabla VIAJAR exitosa <br>";
  } else {
    echo "Error al insertar en la tabla VIAJAR: " . mysqli_error($conn) . "<br>";
  }
/* ENGINE=InnoDB*/
  ?>