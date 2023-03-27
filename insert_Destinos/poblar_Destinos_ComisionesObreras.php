<?php
/* Destinos de Comisiones Obreras */

$pueblaDESTINO="INSERT INTO DESTINO (/*codDestino,*/ref_Destino, ref_Localidad, dia_Semana,fecha_Viaje,ref_AgenciaViajes,kilometrosIdaVuelta,euros,ref_Bus)  
    VALUES	
    

/* Junio */
('D_CC1','SAS', ELT(WEEKDAY('2022-06-30') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-05','AV007',213,13,'BUSJIM001'), 	

/* Julio */ 
('D_CC2','LDO', ELT(WEEKDAY('2022-07-07') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-07','AV007',194,13,'BUSJIM001'),  /* 189km 1h 53min */
('D_CC3','ZRT', ELT(WEEKDAY('2022-07-14') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-14','AV007',177,13,'BUSJIM001'),  /* 174km 1h 46min */
('D_CC4','SAS', ELT(WEEKDAY('2022-07-21') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-21','AV007',183,13,'BUSJIM001'),  /* 169km 1h 48min */
('D_CC5','PNZ', ELT(WEEKDAY('2022-07-28') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-28','AV007',169,13,'BUSJIM001'),  /* 163km 1h 44min */

/* Agosto */
('D_CC6','CTS', ELT(WEEKDAY('2022-08-04') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-04','AV007',213,13,'BUSJIM001'),  /* 177km 1h 45min */
('D_CC7','LKT', ELT(WEEKDAY('2022-08-11') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-11','AV007',163,13,'BUSJIM001'),  /* 179km 2h 08min */
('D_CC8','HON', ELT(WEEKDAY('2022-08-18') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-18','AV007',163,13,'BUSJIM001'),  /* 183km 1h 53min */
('D_CC9','SNT', ELT(WEEKDAY('2022-08-25') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-25','AV007',174,13,'BUSJIM001'),  /* 194km 2h 04min */

/* Septiembre */
('D_CC10','ZMA', ELT(WEEKDAY('2022-09-01') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-01','AV007',183,13,'BUSJIM001')  /* 169km 1h 43min */


";


// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaDESTINO)) {
    echo "Inserción en la tabla DESTINO (Comisiones Obreras) exitosa <br>";
  } else {
    echo "Error al insertar en la tabla DESTINO (Comisiones Obreras): " . mysqli_error($conn) . "<br>";
  }

?>