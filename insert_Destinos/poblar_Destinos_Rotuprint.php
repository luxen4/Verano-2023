<?php
/* Destinos de Rotuprint  Meter Getxo*/ 

$pueblaDESTINO="INSERT INTO DESTINO (/*codDestino,*/ref_Destino, ref_Localidad, dia_Semana,fecha_Viaje,ref_AgenciaViajes,kilometrosIdaVuelta,euros,ref_Bus)  
  VALUES	
    

/* Julio */
  ('D_RT1','LDO', ELT(WEEKDAY('2022-07-03') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-03','AV003',189,12,'BUSVIC001'), /* 189km 1h 53min */
  ('D_RT2','CTS', ELT(WEEKDAY('2022-07-04') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-04','AV003',177,12,'BUSVIC001'), /* 177km 1h 45min */
  ('D_RT3','GTX', ELT(WEEKDAY('2022-07-06') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-06','AV003',150,14,'BUSVIC001'), /* 150km 1h 30min */
  ('D_RT4','PNZ', ELT(WEEKDAY('2022-07-11') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-11','AV003',163,12,'BUSVIC001'), /* 163km 1h 44min */
  ('D_RT5','BAK', ELT(WEEKDAY('2022-07-13') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-13','AV003',164,12,'BUSVIC001'), /* 164km 1h 52min */
  ('D_RT6','ZRT', ELT(WEEKDAY('2022-07-10') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-10','AV003',174,14,'BUSVIC001'), /* 174km 1h 46min */
  ('D_RT7','CTS', ELT(WEEKDAY('2022-07-17') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-17','AV003',177,14,'BUSVIC001'),	/* 177km 1h 45min */
  ('D_RT8','BRZ', ELT(WEEKDAY('2022-07-18') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-18','AV003',210,14,'BUSVIC001'),	/* 210km 2h 14min */
  ('D_RT9','NJA', ELT(WEEKDAY('2022-07-20') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-20','AV003',213,12,'BUSVIC001'), /* 213km 2h 05min */
  ('D_RT10','STR', ELT(WEEKDAY('2022-07-24') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-24','AV003',233,14,'BUSVIC001'), /* 233km 2h 24min */
  ('D_RT11','ISL', ELT(WEEKDAY('2022-07-25') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-25','AV003',213,14,'BUSVIC001'), /* 213km 2h 05min */
  ('D_RT12','LDO', ELT(WEEKDAY('2022-07-27') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-27','AV003',189,12,'BUSVIC001'), /* 189km 1h 53min */
  ('D_RT13','BAK', ELT(WEEKDAY('2022-07-31') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-31','AV003',164,14,'BUSVIC001'), /* 164km 1h 52min */

/* Agosto */
  ('D_RT14','LKT', ELT(WEEKDAY('2022-08-01') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-01','AV003',179,12,'BUSVIC001'), /* 179km 2h 08min */
  ('D_RT15','SJL', ELT(WEEKDAY('2022-08-03') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-03','AV003',194,12,'BUSVIC001'), /* 194km 2h 04min */ 
  ('D_RT16','CTS', ELT(WEEKDAY('2022-08-07') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-07','AV003',177,14,'BUSVIC001'), /* 177km 1h 45min */
  ('D_RT17','HON', ELT(WEEKDAY('2022-08-08') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-08','AV003',182,14,'BUSVIC001'), /* 182km 1h 57min */
  ('D_RT18','BRZ', ELT(WEEKDAY('2022-08-10') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-10','AV003',210,12,'BUSVIC001'), /* 210km 2h 14min */
  ('D_RT19','STA', ELT(WEEKDAY('2022-08-15') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-14','AV003',233,14,'BUSVIC001'), /* 233km 2h 15min */
  ('D_RT20','LDO', ELT(WEEKDAY('2022-08-15') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-15','AV003',189,14,'BUSVIC001'), /* 189km 1h 53min */
  ('D_RT21','CTS', ELT(WEEKDAY('2022-08-17') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-17','AV003',177,14,'BUSVIC001'),  /* 177km 1h 45min */
  ('D_RT22','NJA', ELT(WEEKDAY('2022-08-21') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-21','AV003',213,12,'BUSVIC001'), /* 213km 2h 05min */
  ('D_RT23','BAK', ELT(WEEKDAY('2022-08-22') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-22','AV003',164,14,'BUSVIC001'), /* 164km 1h 52min */
  ('D_RT24','LKT', ELT(WEEKDAY('2022-08-24') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-24','AV003',179,14,'BUSVIC001'),  /* 179km 2h 08min */
  ('D_RT25','PNZ', ELT(WEEKDAY('2022-08-28') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-27','AV003',163,12,'BUSVIC001'), /* 163km 1h 44min */
  ('D_RT26','CTS', ELT(WEEKDAY('2022-08-29') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-29','AV003',177,14,'BUSVIC001'), /* 177km 1h 45min */
  ('D_RT27','SJL', ELT(WEEKDAY('2022-08-31') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-31','AV003',194,14,'BUSVIC001'), /* 194km 2h 04min */ 

/* Septiembre */
  ('D_RT28','LDO', ELT(WEEKDAY('2022-09-04') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-09-04','AV003',157,12,'BUSVIC001')
";


// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaDESTINO)) {
    echo "Inserción en la tabla DESTINO (ROTUPRINT) exitosa <br>";
  } else {
    echo "Error al insertar en la tabla DESTINO (ROTUPRINTPO): " . mysqli_error($conn) . "<br>";
  }

?>