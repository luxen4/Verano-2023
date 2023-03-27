<?php

$creaCLIENTE="CREATE TABLE CLIENTE(
	cod_Cliente		    INT NOT NULL AUTO_INCREMENT,
	ref_Cliente			VARCHAR (10) NOT NULL, 
	fecha_inscripcion   DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,
	username      		VARCHAR (20) NOT NULL UNIQUE,						
	nombre			  	VARCHAR (20) NOT NULL,   
	apellidos		  	VARCHAR (50) NOT NULL,	 
	nif 			    VARCHAR (15) NOT NULL,
	TlfnoParticular 	VARCHAR (10)  NOT NULL, 
	email 			  	VARCHAR (100) NOT NULL UNIQUE,
	fNacimiento 		DATE NOT NULL, 
	sexo 			    VARCHAR(7) NOT NULL,
	calle			    VARCHAR(50)  NOT NULL,		
	cp				    VARCHAR (5)  NOT NULL,	
	localidad		  	VARCHAR(50)  NOT NULL, 
	provincia		  	VARCHAR(15)  NOT NULL,
	comunidad		  	VARCHAR(15)  NOT NULL,		
	pais		      	VARCHAR (10) NOT NULL,
	num_cuenta			VARCHAR (30) NOT NULL,	
	contrasena			VARCHAR (70) NOT NULL,	
	roll        		VARCHAR(8) DEFAULT 'cliente' NOT NULL,

		PRIMARY KEY (cod_Cliente),
		CONSTRAINT UNIQUE_CLIENTE UNIQUE (ref_Cliente),
		FOREIGN KEY (ref_Cliente) REFERENCES PERSONA (ref_Persona) ON DELETE CASCADE ON UPDATE CASCADE 
);";

if (mysqli_query($conn, $creaCLIENTE)) {
	echo "Table CLIENTE created successfully <br>";
  } else {
	echo "Error al crear la tabla CLIENTE: " . mysqli_error($conn) . "<br>";
  }


/* 5 MySql OK */ 
$pueblaCLIENTE="INSERT INTO CLIENTE(ref_Cliente,username,nombre,apellidos,nif,TlfnoParticular,email,fNacimiento,sexo,calle,cp,localidad,provincia,comunidad,pais,num_cuenta,contrasena,roll)
				VALUES(/*codCliente*/'CLI0001','adri82','Adrián','Laya García','16606852R','637117965','superlaya50@gmail.com','1982-06-17','H', 
						'Obispo Blanco Nájera 7, 5ºA','26004','Logroño',
						'La Rioja','La Rioja','España','0000000000111111111122','$2y$10\$S7yWJPYZ0JviOB/NJaQW9.whGVigbK/yZn3DKFE27vDLBFSZEhw2m','admin'),						/*	Username=>adri82,	Contraseña=>alberite    roll=>admin */

						(/*codCliente*/'CLI0002','edu82','Eduardo','Hormilla Urraca','00000000A','637117965','medico@medico.com','1982-04-03','H',	
						'Obispo Blanco Nájera 7, 3ºD','26004','Logroño',
						'La Rioja','La Rioja','España','0000000000111111111122','$2y$10\$S7yWJPYZ0JviOB/NJaQW9.whGVigbK/yZn3DKFE27vDLBFSZEhw2m','cliente'),					/*	Username=>edu82,	Contraseña=>alberite	roll=>cliente */

						(/*codCliente*/'CLI0003','dayanna82','Dayanna','Syrbley Carrero','01234567R','123456789','dayanna@dayanna50.com','1978-07-19','H', 
						'C/ Venezuela 8 5ºA','44003','Navarrete',
						'La Rioja','La Rioja','España','0000000000111111111122','$2y$10\$S7yWJPYZ0JviOB/NJaQW9.whGVigbK/yZn3DKFE27vDLBFSZEhw2m','cliente'),					/*	Username=>dayanna82	Contrasena=>venezuela	roll=>cliente */

						(/*codCliente*/'CLI0004','borja82','Borja','García Barquín','00000000A','000000000','borja@borja.com','2000-01-01','H',	
						'Plaza de los Tilos 7, 5ºD','26004','Logroño',
						'La Rioja','La Rioja','España','0000000000111111111122','$2y$10\$S7yWJPYZ0JviOB/NJaQW9.whGVigbK/yZn3DKFE27vDLBFSZEhw2m','cliente')					/*	Username=>borja82,	Contraseña=>alberite	roll=>cliente */
						;";

// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaCLIENTE)) {
	echo "Inserción en la tabla CLIENTE exitosa <br>";
  } else {
	echo "Error al insertar en la tabla CLIENTE: " . mysqli_error($conn) . "<br>";
  }

?>