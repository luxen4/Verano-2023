<?php


//---------------------------------------------------------------------------------------------
$creaRECUPERACONTRASENA="CREATE TABLE RECUPERACONTRASENA(
	cod_Recuperacontrasena     int NOT NULL AUTO_INCREMENT,/* PRIMARY KEY NOT NULL,*/
	last_Session    datetime NOT 	NULL DEFAULT CURRENT_TIMESTAMP,
	ref_Usuario   	VARCHAR (10) 	NOT NULL UNIQUE,
	correo_Usuario	VARCHAR (100)	NOT NULL UNIQUE,
	activacion		VARCHAR (90) DEFAULT 0,
	token			VARCHAR (70),
	token_Password		VARCHAR	(70),
	password_Request	VARCHAR (70),
						
	PRIMARY KEY (cod_Recuperacontrasena));";
	
	if (mysqli_query($conn, $creaRECUPERACONTRASENA)) {
	  echo "Table RECUPERACONTRASENA created successfully <br>";
	} else {
	  echo "Error al crear la tabla RECUPERACONTRASENA: " . mysqli_error($conn) . "<br>";
	}

	// Se verifica el correo electronico en creaUSUARIO
	// Si es válido se manda el token, etc a ese correo
	// Se presenta la página de cambio de contraseña
	// Se hace el UPDATE a la tabla WHERE ref_Usuario


	
$pueblaRECUPERACONTRASENA="INSERT INTO RECUPERACONTRASENA
(/*cod_Recuperacontrasena,*/ last_Session,ref_Usuario,correo_Usuario,activacion)
	VALUES (default,'AV004','superlaya51@gmail.com',0);";
  
  // Condicional PHP que creará la tabla
  if (mysqli_query($conn, $pueblaRECUPERACONTRASENA)) {
  echo "Inserción en la tabla RECUPERACONTRASENA exitosa <br>";
  } else {
  echo "Error al insertar en la tabla RECUPERACONTRASENA: " . mysqli_error($conn) . "<br>";
  }
//-----------------------------------------------------------------------------------------------


// Hacer tabla USUARIO QUE HEREDEN CLIENTE Y AGENCIA DE VIAJES


$creaAGENCIAVIAJES="CREATE TABLE AGENCIAVIAJES(
cod_AgenciaViajes     	int NOT NULL AUTO_INCREMENT,/* PRIMARY KEY NOT NULL,*/
fecha_Inscripcion     	datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
ref_AgenciaViajes   	VARCHAR (10) NOT NULL UNIQUE, 
nombre_Agencia			VARCHAR (90) NOT NULL,
siglas					VARCHAR (4) NOT NULL,
logo_AgenciaViajes		VARCHAR	(30),
nombre_Folleto			VARCHAR (30),
nif					    VARCHAR (100), 
direcion			    VARCHAR (70), 
cp					    VARCHAR (10), /*varchar(4) NOT NULL default '',*/
localidad			    VARCHAR (40) NOT NULL,	
provincia			    VARCHAR (20) NOT NULL,	
comunidad			    VARCHAR (20) NOT NULL,	
pais				    VARCHAR (10) NOT NULL,	
web						VARCHAR (100)NOT NULL DEFAULT '-NO TIENE-', 
email				  	VARCHAR (100)NOT NULL DEFAULT '-NO TIENE-',
telefono_Reserva	    VARCHAR (15)  NOT NULL DEFAULT 'NO',																									
telefono_Agencia	    VARCHAR (15)  NOT NULL DEFAULT 'NO',																								
horario_Agencia	      	VARCHAR (180)  DEFAULT '10:00 a 13:00 y 17:00 a 20:00',
lugar_SalidaPredeterminado  VARCHAR (100)  DEFAULT 'Estación de autobuses (Logroño)' NOT NULL,	
ref_CompaniaBusHabitual	   VARCHAR (10) NOT NULL,	
username             		VARCHAR (20) NOT NULL UNIQUE, 
contrasena	 			    VARCHAR (70) NOT NULL,		
pago_Online				    VARCHAR (15) NOT NULL DEFAULT 'NO',																														
num_CuentaPagosOnline 		VARCHAR (35),
roll				        VARCHAR(20) DEFAULT 'agenciaviajes' NOT NULL,
					
		PRIMARY KEY (cod_AgenciaViajes),
		CONSTRAINT UNIQUE_AGENCIAVIAJES UNIQUE (ref_AgenciaViajes),
		FOREIGN KEY (ref_AgenciaViajes) REFERENCES AGENCIA (ref_Agencia) ON DELETE CASCADE ON UPDATE CASCADE,
		FOREIGN KEY (ref_CompaniaBusHabitual) REFERENCES AGENCIABUSES (ref_AgenciaBuses) ON DELETE CASCADE ON UPDATE CASCADE  
	);";

if (mysqli_query($conn, $creaAGENCIAVIAJES)) {
  echo "Table AGENCIAVIAJES created successfully <br>";
} else {
  echo "Error al crear la tabla AGENCIAVIAJES: " . mysqli_error($conn) . "<br>";
}








/*-------------------------------------------------------------------------------- */
 


$creaRELACIONAGENCIAS="CREATE TABLE RELACIONAGENCIAS(
  	cod_RelacionAgencias    INT NOT NULL AUTO_INCREMENT,
	ref_AgenciaViajes       VARCHAR (10) NOT NULL, /*bigint unsigned not null primary key auto_increment,*/
	ref_AgenciaBuses	    VARCHAR (10) NOT NULL,	
	fecha_Inscripcion		datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,

		PRIMARY KEY (cod_RelacionAgencias),	
    	CONSTRAINT UNIQUE_RelacionAgencias UNIQUE (ref_AgenciaViajes,ref_AgenciaBuses),  
		FOREIGN KEY (ref_AgenciaBuses)  REFERENCES AGENCIABUSES (ref_AgenciaBUSES) ON UPDATE CASCADE ON DELETE CASCADE,
		FOREIGN KEY (ref_AgenciaViajes) REFERENCES AGENCIAVIAJES (ref_AgenciaViajes) ON UPDATE CASCADE ON DELETE CASCADE
);";

if (mysqli_query($conn, $creaRELACIONAGENCIAS)) {
  echo "Table RELACIONAGENCIAS created successfully <br>";
} else {
  echo "Error al crear la tabla RELACIONAGENCIAS: " . mysqli_error($conn) . "<br>";
}

/*---------------------------------------------------------------------------------- */


$pueblaRELACIONAGENCIAS="INSERT INTO RELACIONAGENCIAS(/*cod_Viajar,*/ ref_AgenciaViajes,ref_AgenciaBuses,fecha_Inscripcion)
  VALUES
  	('AV001','AB001',default), ('AV001','AB002',default), ('AV001','AB003',default), ('AV001','AB004',default), ('AV001','AB005',default),
	('AV002','AB001',default), ('AV002','AB002',default), ('AV002','AB003',default), ('AV002','AB004',default), ('AV002','AB005',default),
	('AV003','AB001',default), ('AV003','AB002',default), ('AV003','AB003',default), ('AV003','AB004',default), ('AV003','AB005',default),
	('AV004','AB001',default), ('AV004','AB002',default), ('AV004','AB003',default), ('AV004','AB004',default), ('AV004','AB005',default),
	('AV005','AB001',default), ('AV005','AB002',default), ('AV005','AB003',default), ('AV005','AB004',default), ('AV005','AB005',default),
	
	('AV007','AB001',default), ('AV007','AB002',default), ('AV007','AB003',default), ('AV007','AB004',default), ('AV007','AB005',default)
;";

// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaRELACIONAGENCIAS)) {
echo "Inserción en la tabla RELACIONESAGENCIAS exitosa <br>";
} else {
echo "Error al insertar en la tabla RELACIONESAGENCIAS: " . mysqli_error($conn) . "<br>";
}


$pueblaAGENCIAVIAJES="INSERT INTO AGENCIAVIAJES (/*codigoAgencia*/fecha_Inscripcion,ref_AgenciaViajes,nombre_Agencia,siglas,logo_AgenciaViajes,nombre_Folleto,nif,direcion,cp,localidad,provincia,comunidad,pais,
											web,email,telefono_Reserva,telefono_Agencia,horario_Agencia,lugar_SalidaPredeterminado,ref_CompaniaBusHabitual, 
											username,contrasena,pago_Online,num_CuentaPagosOnline)

	VALUES  (default,'AV004','Azul Marino','AM','AzulMarino.png','folletoAzulMarino.jpeg','B95860615','C/Gran Vía 45, entrada por calle Lardero','26002','Logroño','La Rioja','La Rioja','España',
			'https://www.viajesazulmarino.com/',
			'superlaya51@gmail.com','941 899 200','941 899 200',default,default,'AB005',
			'azulmarino21','$2y$10\$B.aNV5BQo8K7BwtQLs0lXuzLbjrmLkQ6j6A/rzSXTCHmi1YjQ373q','NO','NO'),
	
	
/* (default,'AV001','Gran Reserva','GR','GranReserva.png','folletogranReserva.png','A48265169','C/ Vara de Rey 42','26003','Logroño','La Rioja','La Rioja','España',
			'yanguas@yanguas.com','602263181','602263181',
			'Lunes a Viernes:<br>Mañanas de 09:30:00 a 13:00:00 <br>Tardes de 17:15:00 a 19:45:00<br>Sábados<br>Mañanas de 09:30:00 a 13:00:00<br>Festivos Cerrado',
			'Estación de autobuses (Logroño)','AB001',
			'reser21','$2y$10\$T.k.0Xfk3If3FPDJZnlKl.D6ByRd2..N4X2tHgKO.kYNa2iModk1O','SI','ES650123456789'),										/* Agencia de Viajes: Gran Reserva  username:reser21  contraseña:reser21 */

	/* username:gotravell21  contrasena:gotravell21 */ 
	(default,'AV002','GO TRAVELL','GT','GoTravel.png','folletoGoTravell_2023.jpg','B26562918','C/ Avenida de la Solidaridad 9','26003','Logroño','La Rioja','La Rioja','España',
			'gotravell@gotravell.com',
			'superlaya51@gmail.com','653107390','643674634',default,'C/ Avenida de la Solidaridad 9','AB002',
			'gotravell21','$2y$10\$rwK1HGaQotvT0dkt9G3Fhu/4.55cZ2WEOxY.UP1VwCT/7RWnjpNkC','SI','ES65987654321')";	
/*
	(default,'AV003','ROTUPRINT','RT',null,'folletoRotuprint.jpeg','R2600077H','Padre Claret, 1 bajo','26004', 'Logroño','La Rioja','La Rioja','España',
			'rotuprint@rotuprintrioja.com.','941235217','941235217','10:15:00 a 13:15:00 y 17:00:00 a 20:00:00','Varias Paradas','AB003',
			'rotu21','$2y$10\$eO.U2FPgNtbGBgnRvvvsY.tpFGDoXCOmxZJXBAp0gAG5EqlsiDsbq', 'SI','ES65987654321'),											/* Agencia de Viajes: username:rotu21  contrasena:rotu21 */
		
			/* Agencia de Viajes: username:azulmarino21	contraseña:azulmarino21 */

/*	(default,'AV005','Zafiro Tours','ZT',null,'folletoAzulMarino.jpeg','A03357340','C/ Río Miño, nº 1','26140','Lardero','La Rioja','La Rioja','España',
			'saltoangel@zafirotours.es','941 21 65 12','941 21 65 12','9:15:00 a 13:18:00 y 17:19:00 a 20:01:00','Iglesia de Lardero','AB004',
			'zafiro21','$2y$10$99PP47nOJr.RFed4ZO5NIepk5rpKYQTupLdAzYFguUWYBE43/oNxC','SI','ES65987654321'),/*,										/* Agencia de Viajes: username:zafiro21	contraseña:zafiro21 */


/*	(default,'AV006','Anonima1','OR',null,'folletoOrtensia.jpeg',null,null,null,'Logroño','La Rioja','La Rioja','España',
			default,'600849306','600849306',null,default,'AB004',
			'ortensia21','$2y$10$99PP47nOJr.RFed4ZO5NIepk5rpKYQTupLdAzYFguUWYBE43/oNxC','NO',null),


/*	(default,'AV007','CC.OO','CCOO','ComisionesObreras.png','folletoComisionesObreras.jpg',null,'Pio XII 33 2ºPl.-Dpcho. 45','26003','Logroño','La Rioja','La Rioja','España',
			default,'941125871','941125872','Despacho de Billetes Lunes y Martes',default,'AB004',
			'comisiones21','$2y$10\$S7yWJPYZ0JviOB/NJaQW9.whGVigbK/yZn3DKFE27vDLBFSZEhw2m','NO',null)





/*
	(default,'AV006','BIDASOA Viajes','BV',null,null,'A20215067','C/ Monseñor Estenaga Kalea, 10','01002','Gasteiz','Álaba','País Vasco','España',
				'viajesbidasoa.com','945 25 93 00','941 25 93 00','9:15:00 a 13:18:00 y 17:19:00 a 20:01:00','***','AB004',
				'bidasoa21','---','SI','ES65987654321');
				*/
				
				
					

// Condicional PHP que insertará en la tabla
if (mysqli_query($conn, $pueblaAGENCIAVIAJES)) {
  echo "Inserción en la tabla AGENCIAVIAJES exitosa <br>";
} else {
  echo "Error al insertar en la tabla AGENCIAVIAJES: " . mysqli_error($conn) . "<br>";
}
?>