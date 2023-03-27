<?php

$creaAGENCIABUSES="CREATE TABLE AGENCIABUSES(
    cod_AgenciaBuses   	INT NOT NULL AUTO_INCREMENT,
    ref_AgenciaBuses    VARCHAR (10) NOT NULL, 
    fecha_incripcion    datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
    nombre				      VARCHAR (30) NOT NULL,	
    nif					        VARCHAR (10) NOT NULL, 
    direccion			      VARCHAR (70) NOT NULL,	
    cp	  				      VARCHAR (6)  NOT NULL,
    localidad			      VARCHAR (20) NOT NULL, 
    provincia			      VARCHAR (20) NOT NULL, 
    comunidad			      VARCHAR (20) NOT NULL,	
    pais  				      VARCHAR (10) NOT NULL,	
    email				        VARCHAR (100) DEFAULT '-NO TIENE-' NOT NULL UNIQUE, 
    telefono_Reserva	  VARCHAR (15) NOT NULL, 
    telefono_Agencia 	  VARCHAR (15) NOT NULL,									
    horario_Agencia	    VARCHAR (80)  DEFAULT '10:00 a 13:00 y 17:00 a 20:00' NOT NULL, 
    pago_Online			    VARCHAR (15) NOT NULL, 
    numero_Cuenta 		  VARCHAR (64) NOT NULL,
    username			      VARCHAR (20) NOT NULL UNIQUE, 
    contrasena  		    VARCHAR (70) NOT NULL, 
    roll 				        VARCHAR(70)   DEFAULT 'agenciabuses' NOT NULL,
                          
    PRIMARY KEY (cod_AgenciaBuses),
    CONSTRAINT UNIQUE_AGENCIABUSES UNIQUE (ref_AgenciaBuses),
    FOREIGN KEY (ref_AgenciaBuses) REFERENCES AGENCIA (ref_Agencia) ON DELETE CASCADE ON UPDATE CASCADE
  );";
  
  /* Fax */
  
  // Condicional PHP que creará la tabla
  if (mysqli_query($conn, $creaAGENCIABUSES)) {
    // Mostramos mensaje si la tabla ha sido creado correctamente!
        echo "Table AGENCIABUSES created successfully <br>";
    } else {
        // Mostramos mensaje si hubo algún error en el proceso de creación
        echo "Error al crear la tabla AGENCIABUSES: <br>" . mysqli_error($conn);
    }
  
  
  /*1 MySql  OK */
  $pueblaAGENCIABUSES="INSERT INTO AGENCIABUSES (/*codAgenciaAutobus,*/ref_AgenciaBuses, fecha_incripcion, nombre, nif,direccion, cp, localidad, provincia, comunidad,pais, 
    email, telefono_Reserva, telefono_Agencia, horario_Agencia, pago_Online, numero_Cuenta, username, contrasena, roll)
  
  VALUES ('AB001',default,'Yanguas','A48265169','C/ Marques de Covarrubias 5','26003',   'Alberite', 'La Rioja','La Rioja','España',  
  'yanguas@yanguas.com','637117965','941-20-20-20', '10:15:00 a 13:30:00 y 17:30:00 a 20:30:00','SI','ES650123456789', 'yanguas21','$2y$10$91YosuvjXJim4.6eZcQccehkPJVKVNKjLbiJ9SJaGBoyUrThGNGDW',default),	
  /*username-> yanguas21		contrasena->yanguas21*/
  
  ('AB002',default,'Autobuses Riojacar','A234567891','Calle la Nevera, 12','26006',    'Logroño','La Rioja','La Rioja','España',  
  'riojacar@riojacar.com','941 50 02 00','941 50 02 00', '10:00:00 a 13:00:00 y 17:00:00 a 20:00:00','SI','ES65123456789','riojacar21','$2y$10\$FyUtPdH/FpUDdtmEfg697emLusRh8l9wdRmdc9uEbYDd1aKbUazVi',default),	
  /*username=> riojacar21     contrasena=> riojacar21 */
  
  ('AB003',default,'Victor Bayo','B40156598','C/ Mayor, nº 10','40551','Campo de San Pedro','Segovia','Castilla y León','España',	
  'victorbayo@victorbayo.com','921 55 60 35','921 55 63 36', /*Lunes a viernes: 10:00-13:00 ; 17:00-19:00*/' 10:00 a 13:00 ; 17:00 a 19:00','SI','ES65412569863',
  'victorbayo21','$2y$10\$WzAOf40fn03oxdAJ8cjUpuYWMo7zFgJfR.1Fm4j4ZMzlraNgeXZAG',default),
  /* username=> victorbayo21     contrasena=> victorbayo21 */
  
  ('AB004',default,'Autobuses Jimenez','A48265190','C/ Santa María 8','26006',   'Logroño','La Rioja','La Rioja','España',	
  'jimenez@jimenez.com','941 20 27 77','941 20 27 77',  '10:00:00 a 13:00:00 y 17:00:00 a 20:00:00','SI','ES65234567890','jimenez21','$2y$10\$YEqrNDwx800/PG7gxhS2iOtcNgwtE09c2B1Mxn4aJg60bBJuAkfuS',default),	
  /*username=> jimenez21      contrasena=> jimenez21 */
  
  ('AB005',default,'Logrobus','A00125478','Calle Rodejón, 24','26006','Logroño','La Rioja','La Rioja','España',	
  'logrobus@logrobus.com','609411262',' 941 26 33 51',default,'SI','ES65547896258',
  'logrobus21','$2y$10$3mPHpqDtmAvs3mvZaWmgxuVna4yM9LTKKZXcXFuN8TbVGwvnaALsy',default),
  
  ('AB006',default,'Autobuses Latasa','B31561616','Pol. Ind. La Fuente, 21','31250','Oteiza','Navarra','Navarra','España',	/* https://www.autobuseslatasa.es/es/  Fax: 948543141. */
  'autobuseslatasa@gmail.com','948 543 141','666 540 743',  '10:00:00 a 13:00:00 y 17:00:00 a 20:00:00','NO','-','latasa21','$2y$10\$YEqrNDwx800/PG7gxhS2iOtcNgwtE09c2B1Mxn4aJg60bBJuAkfuS',default)
;";	
  /*username=> logrobus21     contrasena=> logrobus21 */          /*Mirar que tiene unas animaciones muy bueneas de telefono, mundo y relog*/
  
  
  
  // Condicional PHP que creará la tabla
  if (mysqli_query($conn, $pueblaAGENCIABUSES)) {
    // Mostramos mensaje si la tabla ha sido creado correctamente!
        echo "Inserción en la Tabla AGENCIABUSES exitosa <br>";
    } else {
        // Mostramos mensaje si hubo algún error en el proceso de creación
        echo "Error al insertar en la tabla AGENCIABUSES: " . mysqli_error($conn) . "<br>";
    }
  
?>