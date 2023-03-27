<?php 

//En el futuro que tenga 3 menús diferentes
$creaMENUPERSONAL="CREATE TABLE MENUPERSONAL(
  cod_Menupersonal	INT NOT NULL AUTO_INCREMENT,	
  ref_MenuPersonal  VARCHAR (10) NOT NULL UNIQUE,
  nombre_MenuPersonal VARCHAR (15) NOT NULL UNIQUE,
  ref_Negocio VARCHAR (10) NOT NULL,

  PRIMARY KEY (cod_Menupersonal),
  FOREIGN KEY (ref_Negocio) REFERENCES BARRESTAURANTES (ref_negocio) ON DELETE CASCADE ON UPDATE CASCADE,
  FOREIGN KEY (ref_MenuPersonal) REFERENCES MENU (ref_menu) ON DELETE CASCADE ON UPDATE CASCADE

);";

if(mysqli_query($conn, $creaMENUPERSONAL)) {echo "Table MENUPERSONAL created successfully <br>";}
else{ echo "Error al crear la tabla MENUPERSONAL: " . mysqli_error($conn) . "<br>";}

$pueblaMENUPERSONAL="INSERT INTO MENUPERSONAL(ref_menupersonal,nombre_MenuPersonal,ref_negocio)
                VALUES (/*cod_menuPersonal*/ 'MP08001/1','ruiloba.png','08001'),
                                            ('MP08001/2','estrella.jpg',   '08001'),
                                            ('MP08001/3','menu5.png',  '08001')
                
                ;";      

// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaMENUPERSONAL)) { echo "Inserción en la tabla MENUPERSONAL exitosa <br>";} 
else {echo "Error al insertar en la tabla MENUPERSONAL: " . mysqli_error($conn) . "<br>";}
?>