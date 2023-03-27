<?php
/* Destinos de Zafiro Tours */

$pueblaDESTINO="INSERT INTO DESTINO (/*codDestino,*/ref_Destino, ref_Localidad, dia_Semana,fecha_Viaje,ref_AgenciaViajes,kilometrosIdaVuelta,euros,ref_Bus)  
    VALUES	
    
/* Junio */
/*('NJA', ELT(WEEKDAY('2022-06-05') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-05','AV005',174,14,7), 	/* Domingo */
('D_ZT1','BRZ', ELT(WEEKDAY('2022-06-12') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-12','AV005',284,14,'BUSLOG001'),	
('D_ZT2','HDY', ELT(WEEKDAY('2022-06-19') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-19','AV005',174,14,'BUSLOG001'),
('D_ZT3','SJL', ELT(WEEKDAY('2022-06-26') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-26','AV005',193,14,'BUSLOG001'),

/* Julio */
('D_ZT4','STR', ELT(WEEKDAY('2022-07-03') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-03','AV005',157,14,'BUSLOG001'),
('D_ZT5','HDY', ELT(WEEKDAY('2022-07-10') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-10','AV005',174,14,'BUSLOG001'),
('D_ZT6','HDY', ELT(WEEKDAY('2022-07-17') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-17','AV005',174,14,'BUSLOG001'),
('D_ZT7','SJL', ELT(WEEKDAY('2022-07-24') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-24','AV005',193,14,'BUSLOG001'),
('D_ZT8','STR', ELT(WEEKDAY('2022-07-31') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-31','AV005',157,14,'BUSLOG001'),

/* Agosto */
('D_ZT9','HDY', ELT(WEEKDAY('2022-08-07') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-07','AV005',174,14,'BUSLOG001'),
('D_ZT10','STR', ELT(WEEKDAY('2022-08-14') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-14','AV005',157,14,'BUSLOG001'),
('D_ZT11','HDY', ELT(WEEKDAY('2022-08-21') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-21','AV005',174,14,'BUSLOG002'),
('D_ZT12','HDY', ELT(WEEKDAY('2022-08-28') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-28','AV005',174,14,'BUSLOG003'),

/* Septiembre */
('D_ZT13','SJL', ELT(WEEKDAY('2022-09-04') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-04','AV005',193,14,'BUSLOG004'),
('D_ZT14','STR', ELT(WEEKDAY('2022-09-11') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-11','AV005',157,14,'BUSLOG005'),
('D_ZT15','HDY', ELT(WEEKDAY('2022-09-18') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-18','AV005',174,14,'BUSLOG006'),
('D_ZT16','SJL', ELT(WEEKDAY('2022-09-25') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-25','AV005',193,14,'BUSLOG007')

";


// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaDESTINO)) {
    echo "Inserción en la tabla DESTINO (Zafiro Tour) exitosa <br>";
  } else {
    echo "Error al insertar en la tabla DESTINO (Zafiro Tour): " . mysqli_error($conn) . "<br>";
  }

?>