<?php
/* Destinos de Rotuprint */
/* Bakio, Gorliz, Deba, Muskiz, Sopelana, Somo. */

$pueblaDESTINO="INSERT INTO DESTINO (/*codDestino,*/ref_Localidad, dia_Semana,fecha_Viaje,ref_AgenciaViajes,kilometrosIdaVuelta,euros,cod_bus)  
    VALUES	
    
/* Junio */
('BAK', ELT(WEEKDAY('2022-06-03') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-03','AV006',0,12,1),  /* Lunes */
('GOR', ELT(WEEKDAY('2022-06-04') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-04','AV006',0,12,1),	/* Martes */
('DEB', ELT(WEEKDAY('2022-06-06') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-06','AV006',0,12,1),  /* Viernes */
('MUS', ELT(WEEKDAY('2022-06-07') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-07','AV006',0,12,1),  /* Sábado */
('SOP', ELT(WEEKDAY('2022-06-10') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-10','AV006',0,12,1),	
('SOM', ELT(WEEKDAY('2022-06-11') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-11','AV006',0,12,1),
('ZRT', ELT(WEEKDAY('2022-06-13') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-13','AV006',0,12,1),
('CTS', ELT(WEEKDAY('2022-06-14') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-14','AV006',0,12,1),
('ZMA', ELT(WEEKDAY('2022-06-17') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-17','AV006',0,12,1),
('HON', ELT(WEEKDAY('2022-06-18') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-18','AV006',0,12,1),
('LDO', ELT(WEEKDAY('2022-06-20') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-20','AV006',0,12,1),	
('PNZ', ELT(WEEKDAY('2022-06-21') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-21','AV006',0,12,1),
('LDO', ELT(WEEKDAY('2022-06-24') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-24','AV006',0,12,1),	
('PNZ', ELT(WEEKDAY('2022-06-25') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-25','AV006',0,12,1),
('LDO', ELT(WEEKDAY('2022-06-27') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-27','AV006',0,12,1),	
('PNZ', ELT(WEEKDAY('2022-06-28') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-28','AV006',0,12,1),


/* Julio */
('LDO', ELT(WEEKDAY('2022-07-01') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-01','AV003',132,12,11),
('STR', ELT(WEEKDAY('2022-07-02') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-02','AV003',157,12,12),
('CTS', ELT(WEEKDAY('2022-07-04') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-04','AV003',118,12,13),
('ISL', ELT(WEEKDAY('2022-07-05') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-05','AV003',216,14,14), 
('NJA', ELT(WEEKDAY('2022-07-08') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-08','AV003',174,14,7),
('NJA', ELT(WEEKDAY('2022-07-09') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-09','AV003',174,14,7),
('LDO', ELT(WEEKDAY('2022-07-11') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-11','AV003',132,12,11),
('STR', ELT(WEEKDAY('2022-07-12') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-12','AV003',157,12,12),
('ISL', ELT(WEEKDAY('2022-07-15') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-15','AV003',216,14,14), 
('AJO', ELT(WEEKDAY('2022-07-16') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-16','AV003',216,14,15),	
('NJA', ELT(WEEKDAY('2022-07-18') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-18','AV003',174,14,7),
('NJA', ELT(WEEKDAY('2022-07-19') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-19','AV003',174,14,7),
('CTS', ELT(WEEKDAY('2022-07-22') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-22','AV003',118,12,13),
('ISL', ELT(WEEKDAY('2022-07-23') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-23','AV003',216,14,14), 
('AJO', ELT(WEEKDAY('2022-07-25') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-25','AV003',216,14,15),	
('NJA', ELT(WEEKDAY('2022-07-26') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-26','AV003',174,14,7),
('CTS', ELT(WEEKDAY('2022-07-29') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-29','AV003',118,12,13),
('ISL', ELT(WEEKDAY('2022-07-30') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-30','AV003',216,14,14), 

/* Agosto */
('LDO', ELT(WEEKDAY('2022-08-01') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-01','AV003',132,12,11),
('STR', ELT(WEEKDAY('2022-08-02') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-02','AV003',157,12,12),
('ISL', ELT(WEEKDAY('2022-08-05') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-05','AV003',216,14,14), 
('AJO', ELT(WEEKDAY('2022-08-06') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-06','AV003',216,14,15),	
('NJA', ELT(WEEKDAY('2022-08-08') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-08','AV003',174,14,7),
('LDO', ELT(WEEKDAY('2022-08-09') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-09','AV003',132,12,11),
('CTS', ELT(WEEKDAY('2022-08-12') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-12','AV003',118,12,13),
('ISL', ELT(WEEKDAY('2022-08-13') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-13','AV003',216,14,14), 
('AJO', ELT(WEEKDAY('2022-08-15') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-15','AV003',216,14,15),	
('NJA', ELT(WEEKDAY('2022-08-16') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-16','AV003',174,14,7),
('STR', ELT(WEEKDAY('2022-08-19') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-19','AV003',157,12,12),
('CTS', ELT(WEEKDAY('2022-08-20') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-20','AV003',118,12,13),
('ISL', ELT(WEEKDAY('2022-08-22') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-22','AV003',216,14,14), 
('AJO', ELT(WEEKDAY('2022-08-23') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-23','AV003',216,14,15),
('STR', ELT(WEEKDAY('2022-08-26') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-26','AV003',157,12,12),
('CTS', ELT(WEEKDAY('2022-08-27') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-27','AV003',118,12,13),
('ISL', ELT(WEEKDAY('2022-08-29') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-29','AV003',216,14,14), 
('CTS', ELT(WEEKDAY('2022-08-30') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-30','AV003',118,12,13),

/* Septiembre */
('LDO', ELT(WEEKDAY('2022-09-02') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-02','AV003',132,12,11),
('STR', ELT(WEEKDAY('2022-09-03') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-03','AV003',157,12,12),
('CTS', ELT(WEEKDAY('2022-09-05') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-05','AV003',118,12,13),
('ISL', ELT(WEEKDAY('2022-09-06') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-06','AV003',216,14,14), 	
('NJA', ELT(WEEKDAY('2022-09-09') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-09','AV003',174,14,7),
('LDO', ELT(WEEKDAY('2022-09-10') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-10','AV003',132,12,11),
('LDO', ELT(WEEKDAY('2022-09-12') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-12','AV003',132,12,11),
('STR', ELT(WEEKDAY('2022-09-13') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-13','AV003',157,12,12),
('CTS', ELT(WEEKDAY('2022-09-16') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-16','AV003',118,12,13),
('ISL', ELT(WEEKDAY('2022-09-17') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-17','AV003',216,14,14), 	
('NJA', ELT(WEEKDAY('2022-09-19') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-19','AV003',174,14,7),
('LDO', ELT(WEEKDAY('2022-09-20') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-20','AV003',132,12,11),
('LDO', ELT(WEEKDAY('2022-09-23') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-23','AV003',132,12,11),
('STR', ELT(WEEKDAY('2022-09-24') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-24','AV003',157,12,12),
('CTS', ELT(WEEKDAY('2022-09-26') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-26','AV003',118,12,13),
('ISL', ELT(WEEKDAY('2022-09-27') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-27','AV003',216,14,14), 	
('NJA', ELT(WEEKDAY('2022-09-30') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-30','AV003',174,14,7)

";


// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaDESTINO)) {
    echo "Inserción en la tabla DESTINO exitosa <br>";
  } else {
    echo "Error al insertar en la tabla DESTINO: " . mysqli_error($conn) . "<br>";
  }

?>

