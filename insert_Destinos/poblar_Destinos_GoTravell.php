<?php
/* Destinos de GOTRAVELL */

$pueblaDESTINO="INSERT INTO DESTINO (/*codDestino,*/ref_Destino, ref_Localidad, dia_Semana,fecha_Viaje,ref_AgenciaViajes,kilometrosIdaVuelta,euros,ref_bus)  
    VALUES	
    

/* Mayo 
('D_GT1','SAS', ELT(WEEKDAY('2022-05-01') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-05-01','AV002',174,16,7), 	/* Domingo 
('D_GT2','ZRT', ELT(WEEKDAY('2022-05-04') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-05-04','AV002',284,16,6),	/* Miercoles 
('D_GT3','LDO', ELT(WEEKDAY('2022-05-21') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-05-21','AV002',174,16,8),  
('D_GT4','STA', ELT(WEEKDAY('2022-05-08') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-05-08','AV002',193,17,9),
('D_GT5','CTS', ELT(WEEKDAY('2022-05-11') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-05-11','AV002',174,16,7), 	
('D_GT6','ZRT', ELT(WEEKDAY('2022-05-14') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-05-14','AV002',284,16,6),	
('D_GT7','SJL', ELT(WEEKDAY('2022-05-15') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-05-15','AV002',194,18,8),
('D_GT8','NJA', ELT(WEEKDAY('2022-05-18') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-05-18','AV002',193,17,9),
('D_GT9','SAS', ELT(WEEKDAY('2022-05-21') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-05-21','AV002',174,16,7), 	
('D_GT10','CTS', ELT(WEEKDAY('2022-05-22') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-05-22','AV002',284,16,6),	
('D_GT11','SAS', ELT(WEEKDAY('2022-05-25') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-05-25','AV002',174,16,8),
('D_GT12','CTS', ELT(WEEKDAY('2022-05-28') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-05-28','AV002',193,16,9),
('D_GT13','LDO', ELT(WEEKDAY('2022-05-29') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-05-29','AV002',193,16,9)

*/







 /* Abril 2023 */
('D_GT1','SAS', ELT(WEEKDAY('2023-04-06') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2023-04-06','AV002',174,16,7,'BUSJIM001'),  /* Jueves */ 
('D_GT2','SJL', ELT(WEEKDAY('2023-04-07') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2023-04-07','AV002',194,16,6,'BUSJIM001'),	/* Viernes */
('D_GT3','STA', ELT(WEEKDAY('2023-04-08') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2023-04-08','AV002',193,16,8',BUSJIM001'),  /* Sabado */
('D_GT4','SAS', ELT(WEEKDAY('2023-04-09') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2023-04-09','AV002',174,17,9,'BUSJIM001'),  /* Domingo */
('D_GT5','CTS', ELT(WEEKDAY('2023-04-15') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2023-04-15','AV002',284,16,7,'BUSJIM001'), 	/* Sabado */
('D_GT6','SJL', ELT(WEEKDAY('2023-04-16') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2023-04-16','AV002',194,16,6,'BUSJIM001'),	/* Domingo */
('D_GT7','ZRT', ELT(WEEKDAY('2023-04-22') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2023-04-22','AV002',284,18,8,'BUSJIM001'),  /* Sabado */
('D_GT8','SAS', ELT(WEEKDAY('2023-04-23') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2023-04-23','AV002',174,17,9,'BUSJIM001'),  /* Domingo */
('D_GT9','SAS', ELT(WEEKDAY('2023-04-29') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2023-04-29','AV002',174,16,7,'BUSJIM001'), 	/* Sabado */
('D_GT10','BRZ', ELT(WEEKDAY('2023-04-30') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2023-04-30','AV002',210,16,6,'BUSJIM001'),	/* Domingo */



/*
semana santa 
6/4 san sebastian
7/4 san juan
8 santander
9 san sebasti

15 castro
16 san juan
22 zarautz
23 san sebastian
29 san sebastian
30 biarritz

1mayo san sebastian
3zarautz
6hondarri
7castro
10castro
13 san sebas
14 zarautz
17 san sebast
20 san juan
21 san sebas
24 san sebast
27 santander
28 biarritz
31 castro



/* Junio */
('D_GT14','LDO', ELT(WEEKDAY('2022-06-04') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-04','AV002',189,16,'BUSJIM001'), /* 189km 1h 53min */
('D_GT15','SAS', ELT(WEEKDAY('2022-06-05') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-05','AV002',169,16,'BUSJIM001'), /* 169km 1h 48min */
('D_GT16','ZMA', ELT(WEEKDAY('2022-06-10') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-10','AV002',169,16,'BUSJIM001'), /* 169km 1h 43min */
('D_GT17','CTS', ELT(WEEKDAY('2022-06-11') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-11','AV002',177,16,'BUSJIM001'),  /* Sabado */ /* 177km 1h 45min */
('D_GT18','BRZ', ELT(WEEKDAY('2022-06-12') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-12','AV002',210,16,'BUSJIM001'),		/* Domingo */ /* 210km 2h 14min */
('D_GT19','SAS', ELT(WEEKDAY('2022-06-18') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-18','AV002',169,16,'BUSJIM001'), /* 169km 1h 48min */
('D_GT20','SJL', ELT(WEEKDAY('2022-06-19') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-19','AV002',194,18,'BUSJIM001'), /* 194km 2h 04min */ 
('D_GT21','SAS', ELT(WEEKDAY('2022-06-21') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-21','AV002',169,16,'BUSJIM001'), /* 169km 1h 48min */
('D_GT22','CTS', ELT(WEEKDAY('2022-06-22') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-22','AV002',177,16,'BUSJIM001'), /* 177km 1h 45min */
('D_GT23','STA', ELT(WEEKDAY('2022-09-25') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-25','AV002',234,17,'BUSJIM001'), /* 234km 2h 17min */
('D_GT24','SAS', ELT(WEEKDAY('2022-06-26') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-06-26','AV002',169,16,'BUSJIM001'), /* 169km 1h 48min */


/* Julio */ 
('D_GT25','SAS', ELT(WEEKDAY('2022-07-02') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-02','AV002',169,16,'BUSJIM001'), /* 169km 1h 48min */
('D_GT26','BRZ', ELT(WEEKDAY('2022-07-03') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-03','AV002',210,14,'BUSJIM001'), /* 210km 2h 14min */
('D_GT27','ZRT', ELT(WEEKDAY('2022-07-09') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-09','AV002',174,16,'BUSJIM001'), /* 174km 1h 46min */
('D_GT28','LDO', ELT(WEEKDAY('2022-07-10') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-10','AV002',189,16,'BUSJIM001'), /* 189km 1h 53min */
('D_GT29','SAS', ELT(WEEKDAY('2022-07-16') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-16','AV002',169,16,'BUSJIM001'), /* 169km 1h 48min */
('D_GT30','SJL', ELT(WEEKDAY('2022-07-17') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-17','AV002',194,18,'BUSJIM001'), /* 194km 2h 04min */ 
('D_GT31','HON', ELT(WEEKDAY('2022-07-20') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-20','AV002',183,17,'BUSJIM001'), /* 183km 1h 53min */
('D_GT32','CTS', ELT(WEEKDAY('2022-07-22') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-22','AV002',177,16,'BUSJIM001'), /* 177km 1h 45min */
('D_GT33','LDO', ELT(WEEKDAY('2022-07-23') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-23','AV002',189,16,'BUSJIM001'), /* 189km 1h 53min */
('D_GT34','SAS', ELT(WEEKDAY('2022-07-24') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-24','AV002',169,16,'BUSJIM001'), /* 169km 1h 48min */
('D_GT35','SAS', ELT(WEEKDAY('2022-07-27') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-27','AV002',169,16,'BUSJIM001'), /* 169km 1h 48min */
('D_GT36','STA', ELT(WEEKDAY('2022-07-29') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-29','AV002',234,17,'BUSJIM001'), /* 234km 2h 17min */
('D_GT37','BRZ', ELT(WEEKDAY('2022-07-30') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-30','AV002',210,14,'BUSJIM001'), /* 210km 2h 14min */
('D_GT38','ZRT', ELT(WEEKDAY('2022-07-31') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-07-31','AV002',174,16,'BUSJIM001'), /* 174km 1h 46min */


/* Agosto */
('D_GT39','ZRT', ELT(WEEKDAY('2022-08-03') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-03','AV002',174,16,'BUSJIM001'), /* 174km 1h 46min */
('D_GT40','CTS', ELT(WEEKDAY('2022-08-05') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-05','AV002',177,16,'BUSJIM001'), /* 177km 1h 45min */
('D_GT41','HON', ELT(WEEKDAY('2022-08-06') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-06','AV002',183,17,'BUSJIM001'), /* 183km 1h 53min */
('D_GT42','BRZ', ELT(WEEKDAY('2022-08-07') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-07','AV002',210,14,'BUSJIM001'), /* 210km 2h 14min */
('D_GT43','NJA', ELT(WEEKDAY('2022-08-10') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-10','AV002',213,17,'BUSJIM001'), /* 213km 2h 05min */
('D_GT44','ZRT', ELT(WEEKDAY('2022-08-12') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-12','AV002',174,16,'BUSJIM001'), /* 174km 1h 46min */
('D_GT45','CTS', ELT(WEEKDAY('2022-08-13') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-13','AV002',177,16,'BUSJIM001'), /* 177km 1h 45min */	
('D_GT46','SAS', ELT(WEEKDAY('2022-08-14') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-14','AV002',169,16,'BUSJIM001'), /* 169km 1h 48min */
('D_GT47','CTS', ELT(WEEKDAY('2022-08-17') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-17','AV002',177,16,'BUSJIM001'), /* 177km 1h 45min */	
('D_GT48','STA', ELT(WEEKDAY('2022-08-19') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-19','AV002',233,17,'BUSJIM001'), /* 233km 2h 15min */
('D_GT49','LDO', ELT(WEEKDAY('2022-08-20') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-20','AV002',189,16,'BUSJIM001'), /* 189km 1h 53min */
('D_GT50','SJL', ELT(WEEKDAY('2022-08-21') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-21','AV002',194,18,'BUSJIM001'), /* 194km 2h 04min */   
('D_GT51','SAS', ELT(WEEKDAY('2022-08-24') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-24','AV002',169,16,'BUSJIM001'), /* 169km 1h 48min */
('D_GT52','BRZ', ELT(WEEKDAY('2022-08-26') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-26','AV002',210,14,'BUSJIM001'), /* 210km 2h 14min */
('D_GT53','ZRT', ELT(WEEKDAY('2022-08-27') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-27','AV002',174,16,'BUSJIM001'), /* 174km 1h 46min */
('D_GT54','LDO', ELT(WEEKDAY('2022-08-28') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-28','AV002',189,16,'BUSJIM001'), /* 189km 1h 53min */
('D_GT55','SJL', ELT(WEEKDAY('2022-08-31') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2022-08-31','AV002',194,18,'BUSJIM001')  /* 194km 2h 04min */   

";












// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaDESTINO)) {
    echo "Inserción en la tabla DESTINO exitosa <br>";
  } else {
    echo "Error al insertar en la tabla DESTINO: " . mysqli_error($conn) . "<br>";
  }

?>