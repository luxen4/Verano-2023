<?php
/* Destinos de Azul Marino */

$pueblaDESTINO="INSERT INTO DESTINO (/*codDestino,*/ref_Destino, ref_Localidad, dia_Semana,fecha_Viaje,ref_AgenciaViajes,kilometrosIdaVuelta,euros,ref_Bus,estado)  
    VALUES	
    
/*Mayo */
/*('D_AM','STR', ELT(WEEKDAY('2022-05-22') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-05-22','AV004',234,16,'BUSLOG001'), */	/* Domingo */ /* 234km 2h 17min */
/*('D_AM1','SAS', ELT(WEEKDAY('2022-05-29') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-05-29','AV004',169,16,'BUSLOG001'),   /* 169 1h 48min */

/* Junio */
/*('D_AM2','NJA', ELT(WEEKDAY('2022-06-05') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-05','AV004',213,16,'BUSLOG001'), 	/* Domingo */   /* 213km 2h 05min */
/*('D_AM3','SJL', ELT(WEEKDAY('2022-06-10') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-10','AV004',194,16,'BUSLOG001'),   /* Viernes */   /* 194km 2h 04min */   
/*('D_AM4','CTS', ELT(WEEKDAY('2022-06-12') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-12','AV004',177,16,'BUSLOG001'),   /* 177km 1h 45min */	
/*('D_AM5','HDY', ELT(WEEKDAY('2022-06-19') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-19','AV004',183,16,'BUSLOG001'),   /* 183km 1h 54min */
/*('D_AM6','SAS', ELT(WEEKDAY('2022-06-26') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-26','AV004',169,16,'BUSLOG001'),   /* 169km 1h 48min */

/* Julio */
/*('D_AM7','NJA', ELT(WEEKDAY('2022-07-01') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-01','AV004',213,16,'BUSLOG001'),   /* 213km 2h 05min */
/*('D_AM8','PNZ', ELT(WEEKDAY('2022-07-03') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-03','AV004',163,16,'BUSLOG001'),   /* 163km 1h 44min */
/*('D_AM9','CTS', ELT(WEEKDAY('2022-07-08') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-08','AV004',163,16,'BUSLOG001'),   /* 163km 1h 44min */
/*('D_AM10','ZRT', ELT(WEEKDAY('2022-07-10') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-10','AV004',174,16,'BUSLOG001'),   /* 174km 1h 46min */
/*('D_AM11','ONR', ELT(WEEKDAY('2022-07-15') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-15','AV004',183,16,'BUSLOG001'),   /* 183km 1h 52min */
/*('D_AM12','LDO', ELT(WEEKDAY('2022-07-17') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-17','AV004',189,16,'BUSLOG001'),   /* 189km 1h 53min */
/*('D_AM13','ZRT', ELT(WEEKDAY('2022-07-22') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-22','AV004',174,16,'BUSLOG001'),   /* 174km 1h 46min */
/*('D_AM14','HON', ELT(WEEKDAY('2022-07-24') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-24','AV004',183,16,'BUSLOG001'),   /* 183km 1h 53min */
/*('D_AM15','GTA', ELT(WEEKDAY('2022-07-29') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-29','AV004',171,16,'BUSLOG001'),   /* 141km 1h 49min */
/*('D_AM16','BRZ', ELT(WEEKDAY('2022-07-31') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-31','AV004',210,16,'BUSLOG001'),   /* 210km 2h 14min */

/* Agosto */
/*('D_AM17','SAS', ELT(WEEKDAY('2022-08-05') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-05','AV004',169,16,'BUSLOG001'),   /* 169km 1h 48min */
/*('D_AM18','SJL', ELT(WEEKDAY('2022-08-07') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-07','AV004',194,16,'BUSLOG001'),   /* 194km 2h 04min */
/*('D_AM19','PNZ', ELT(WEEKDAY('2022-08-12') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-12','AV004',163,16,'BUSLOG001'),   /* 163km 1h 44min */  /* Real de 63 plazas */
/*('D_AM20','STN', ELT(WEEKDAY('2022-08-14') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-14','AV004',202,16,'BUSLOG002'),   /* 202km 2h 02min */  /* Real de 61 plazas */
/*('D_AM21','BRZ', ELT(WEEKDAY('2022-08-19') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-19','AV004',210,16,'BUSLOG003'),   /* 210km 2h 14min */
/*('D_AM22','LDO', ELT(WEEKDAY('2022-08-21') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-21','AV004',189,16,'BUSLOG004'),   /* 189km 1h 53min */
/*('D_AM23','SJL', ELT(WEEKDAY('2022-08-26') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-26','AV004',194,16,'BUSLOG001','DISPONIBLE'),   /* 194km 2h 04min */
/*('D_AM24','ZMA', ELT(WEEKDAY('2022-08-28') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-28','AV004',169,16,'BUSLOG001','DISPONIBLE'),   /* 169km 1h 43min */

/* Septiembre */
  ('D_AM25','ISL', ELT(WEEKDAY('2022-09-02') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-02','AV004',213,16,'BUSLOG003','DISPONIBLE'),   /* 213km 2h 05min */
('D_AM26','GTA', ELT(WEEKDAY('2022-09-04') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-04','AV004',194,16,'BUSLOG002','DISPONIBLE'),   /* 194km 2h 04min */
  ('D_AM27','STR', ELT(WEEKDAY('2022-09-09') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-09','AV004',233,16,'BUSLOG003','DISPONIBLE'),   /* 233km 2h 15min */
('D_AM28','CTS', ELT(WEEKDAY('2022-09-11') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-11','AV004',177,16,'BUSLOG002','DISPONIBLE'),   /* 177km 1h 45min */
  ('D_AM29','LDO', ELT(WEEKDAY('2022-09-16') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-16','AV004',189,16,'BUSLOG003','DISPONIBLE'),   /* 189km 1h 53min */
('D_AM30','OND', ELT(WEEKDAY('2022-09-18') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-18','AV004',164,16,'BUSLOG002','DISPONIBLE'),   /* 164km 1h 57min */
  ('D_AM31','SJL', ELT(WEEKDAY('2022-09-23') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-23','AV004',194,16,'BUSLOG003','DISPONIBLE'),   /* 194km 2h 04min */
('D_AM32','SAS', ELT(WEEKDAY('2022-09-25') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-25','AV004',233,16,'BUSLOG002','DISPONIBLE'),    /* 215km 2h 15min */


('D_AM33','ZGA', ELT(WEEKDAY('2022-10-16') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-10-16','AV004',170,16,'BUSLOG003','DISPONIBLE')    /* 215km 2h 15min */


";


// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaDESTINO)) {
    echo "Inserción en la tabla DESTINO exitosa <br>";
  } else {
    echo "Error al insertar en la tabla DESTINO: " . mysqli_error($conn) . "<br>";
  }

?>