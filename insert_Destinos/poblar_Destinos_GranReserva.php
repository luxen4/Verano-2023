<?php
/* Destinos Agencia de Viajes 'Gran Reserva' */

/*ACTUALIZADO SET lc_time_names = "es_ES"; /* Para que traduzca a Español el dia de la semana */


    $pueblaDESTINO="INSERT INTO DESTINO (/*codDestino,*/ref_Destino, ref_Localidad, dia_Semana,fecha_Viaje,ref_AgenciaViajes,kilometrosIdaVuelta,euros,ref_Bus)  
    VALUES	
    

/* Julio */ 
/*('D_GR1','LKT', ELT(WEEKDAY('2022-07-01') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-01','AV001',189,17,'BUSYAN001'),   /* 179km 2h 08min */ 
/*('D_GR2','SAS', ELT(WEEKDAY('2022-07-02') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-02','AV001',169,17,'BUSYAN001'),   /* 169km 1h 48min */          
/*('D_GR3','CTS', ELT(WEEKDAY('2022-07-03') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-03','AV001',177,17,'BUSYAN001'),   /* 177km 1h 45min */ 

/*('D_GR4','HON', ELT(WEEKDAY('2022-07-08') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-08','AV001',183,17,'BUSYAN001'),   /* 183km 1h 52min */
/*('D_GR5','LDO', ELT(WEEKDAY('2022-07-09') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-09','AV001',189,17,'BUSYAN001'),   /* 189km 1h 53min */  
/*('D_GR6','NJA', ELT(WEEKDAY('2022-07-10') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-10','AV001',213,17,'BUSYAN001'),   /* 213km 2h 05min */

/*('D_GR7','PNZ', ELT(WEEKDAY('2022-07-15') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-15','AV001',163,17,'BUSYAN001'),   /* 163km 1h 44min */
/*('D_GR8','STA', ELT(WEEKDAY('2022-07-16') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-16','AV001',233,17,'BUSYAN001'),   /* 233km 2h 15min */
/*('D_GR9','SJL', ELT(WEEKDAY('2022-07-17') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-17','AV001',183,17,'BUSYAN001'),   /* 183km 1h 52min */

/*('D_GR10','ZRT', ELT(WEEKDAY('2022-07-22') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-22','AV001',174,17,'BUSYAN001'),   /* 174km 1h 46min */
/*('D_GR11','ZMA', ELT(WEEKDAY('2022-07-23') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-23','AV001',169,17,'BUSYAN001'),   /* 169km 1h 43min */   
/*('D_GR12','BRZ', ELT(WEEKDAY('2022-07-24') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-24','AV001',210,17,'BUSYAN001'),   /* 210km 2h 14min */ 

/*('D_GR13','SAS', ELT(WEEKDAY('2022-07-29') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-29','AV001',169,17,'BUSYAN001'),   /* 169km 1h 48min */  
/*('D_GR14','CTS', ELT(WEEKDAY('2022-07-30') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-30','AV001',177,17,'BUSYAN001'),   /* 177km 1h 45min */   
/*('D_GR15','LDO', ELT(WEEKDAY('2022-07-31') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-31','AV001',189,17,'BUSYAN001'),   /* 189km 1h 53min */   

/* Agosto */
/*('D_GR16','SAS', ELT(WEEKDAY('2022-08-05') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-05','AV001',169,17,'BUSYAN001'),   /* 169km 1h 48min */ 
/*('D_GR17','CTS', ELT(WEEKDAY('2022-08-06') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-06','AV001',177,17,'BUSYAN001'),   /* 177km 1h 45min */   
/*('D_GR18','HON', ELT(WEEKDAY('2022-08-07') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-07','AV001',183,17,'BUSYAN001'),   /* 183km 1h 52min */

/*('D_GR19','SJL', ELT(WEEKDAY('2022-08-12') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-12','AV001',183,17,'BUSYAN001'),   /* 183km 1h 52min */
/*('D_GR20','CTS', ELT(WEEKDAY('2022-08-13') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-13','AV001',177,17,'BUSYAN001'),   /* 177km 1h 45min */   
/*('D_GR21','HON', ELT(WEEKDAY('2022-08-14') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-14','AV001',183,17,'BUSYAN001'),   /* 183km 1h 52min */

/*('D_GR22','BRZ', ELT(WEEKDAY('2022-08-19') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-19','AV001',210,17,'BUSYAN001'),   /* 210km 2h 14min */
/*('D_GR23','ZMA', ELT(WEEKDAY('2022-08-20') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-20','AV001',169,17,'BUSYAN001'),   /* 169km 1h 43min */   
('D_GR24','LDO', ELT(WEEKDAY('2022-08-21') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-21','AV001',189,17,'BUSYAN001'),   /* 189km 1h 53min */   

('D_GR25','SJL', ELT(WEEKDAY('2022-08-26') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-26','AV001',183,17,'BUSYAN001'),   /* 183km 1h 52min */
('D_GR26','HON', ELT(WEEKDAY('2022-08-27') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-27','AV001',183,17,'BUSYAN001'),   /* 183km 1h 52min */
('D_GR27','ZMA', ELT(WEEKDAY('2022-08-28') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-28','AV001',169,17,'BUSYAN001')   /* 169km 1h 43min */   
/* A Santander no va Gran Reserva pero sí a Lekeitio */
";


// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaDESTINO)) {
    echo "Inserción en la tabla DESTINO ('Gran Reserva') exitosa <br>";
  } else {
    echo "Error al insertar en la tabla DESTINO ('Gran Reserva'): " . mysqli_error($conn) . "<br>";
  }

?>


