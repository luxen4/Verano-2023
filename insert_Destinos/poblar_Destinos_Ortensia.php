<?php
/* Destinos de Ortensia */

$pueblaDESTINO="INSERT INTO DESTINO (/*codDestino,*/ref_Destino, ref_Localidad, dia_Semana,fecha_Viaje,ref_AgenciaViajes,kilometrosIdaVuelta,euros,ref_Bus)  
    VALUES	
    

/* Junio */ 
('D_OR1','HON', ELT(WEEKDAY('2022-06-12') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-12','AV006',183,15,'BUSJIM001'), /* 183km 1h 53min */   	
('D_OR2','ZMA', ELT(WEEKDAY('2022-06-19') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-19','AV006',169,15,'BUSJIM001'), /* 169km 1h 43min */  
('D_OR3','STR', ELT(WEEKDAY('2022-06-26') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-26','AV006',215,15,'BUSJIM001'), /* 215km 2h 15min */   

/* Julio */ 
('D_OR4','HDY', ELT(WEEKDAY('2022-07-03') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-03','AV006',215,15,'BUSJIM001'),  /* 215km 2h 15min */  
('D_OR5','SAS', ELT(WEEKDAY('2022-07-10') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-10','AV006',169,15,'BUSJIM001'),  /* 169km 1h 48min */
('D_OR12','HON', ELT(WEEKDAY('2022-07-17') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-17','AV006',183,15,'BUSJIM001'),  /* 183km 1h 53min */   
('D_OR14','NJA', ELT(WEEKDAY('2022-07-24') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-24','AV006',213,15,'BUSJIM001'),  /* 213km 2h 05min */ 
('D_OR16','HDY', ELT(WEEKDAY('2022-07-31') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-31','AV006',183,15,'BUSJIM001')   /* 183km 1h 54min */

";


// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaDESTINO)) {
    echo "Inserción en la tabla DESTINO (Ortensia) exitosa <br>";
  } else {
    echo "Error al insertar en la tabla DESTINO (Ortensia): " . mysqli_error($conn) . "<br>";
  }

?>

