<?php
/* Destinos de GOTRAVELL 2023 */

$pueblaDESTINO="INSERT INTO DESTINO (/*codDestino,*/ref_Destino, ref_Localidad, dia_Semana,fecha_Viaje,ref_AgenciaViajes,kilometrosIdaVuelta,euros,ref_bus)  
    VALUES	

/* Abril 2023 */
('D_GT1_1','SAS', ELT(WEEKDAY('2023-04-06') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'),'2023-04-06','AV002',174,16,'BUSJIM001'),  /* Jueves */    /* 169km 1h 48min */
('D_GT1_2','SAS', ELT(WEEKDAY('2023-04-06') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'),'2023-04-06','AV002',174,16,'BUSJIM002'),  /* Jueves */    /* 169km 1h 48min */
('D_GT1_3','SAS', ELT(WEEKDAY('2023-04-06') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'),'2023-04-06','AV002',174,16,'BUSJIM003'),  /* Jueves */    /* 169km 1h 48min */
('D_GT1_4','SAS', ELT(WEEKDAY('2023-04-06') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'),'2023-04-06','AV002',174,16,'BUSJIM004'),  /* Jueves */    /* 169km 1h 48min */





('D_GT2','SJL', ELT(WEEKDAY('2023-04-07') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'),'2023-04-07','AV002',194,16,'BUSJIM001'),	/* Viernes */   /* 194km 2h 04min */
('D_GT3','STR', ELT(WEEKDAY('2023-04-08') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'),'2023-04-08','AV002',193,16,'BUSJIM001'),  /* Sábado */    /* 234km 2h 17min */
('D_GT4','SAS', ELT(WEEKDAY('2023-04-09') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'),'2023-04-09','AV002',174,17,'BUSJIM001'),  /* Domingo */   /* 169km 1h 48min */

('D_GT5','CTS', ELT(WEEKDAY('2023-04-15') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'),'2023-04-15','AV002',284,16,'BUSJIM001'), 	/* Sábado */    /* 189km 1h 53min */ 
('D_GT6','SJL', ELT(WEEKDAY('2023-04-16') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'),'2023-04-16','AV002',194,16,'BUSJIM001'),	/* Domingo */   /* 194km 2h 04min */

('D_GT7','ZRT', ELT(WEEKDAY('2023-04-22') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'),'2023-04-22','AV002',284,18,'BUSJIM001'),  /* Sábado */    /* 174km 1h 46min */
('D_GT8','SAS', ELT(WEEKDAY('2023-04-23') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'),'2023-04-23','AV002',174,17,'BUSJIM001'),  /* Domingo */   /* 169km 1h 48min */

('D_GT9','SAS', ELT(WEEKDAY('2023-04-29') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'),'2023-04-29','AV002',174,16,'BUSJIM001'), 	/* Sábado */    /* 169km 1h 48min */
('D_GT10','BRZ', ELT(WEEKDAY('2023-04-30') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'),'2023-04-30','AV002',210,16,'BUSJIM001'),	/* Domingo */   /* 210km 2h 14min */


/* Mayo 2023 */
('D_GT11','ZRT', ELT(WEEKDAY('2023-05-03') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2023-05-03','AV002',234,17,'BUSJIM001'),     /* Miercoles */   /* 174km 1h 46min */
('D_GT12','HON', ELT(WEEKDAY('2023-05-06') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2023-05-06','AV002',169,16,'BUSJIM001'),     /* Sabado */      /* 169km 1h 48min */
('D_GT13','CTS', ELT(WEEKDAY('2023-05-07') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2023-05-07','AV002',174,16,'BUSJIM001'),     /* Domingo */     /* 177km 1h 45min */

('D_GT14','CTS', ELT(WEEKDAY('2023-05-10') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2023-05-10','AV002',189,16,'BUSJIM001'),     /* Miercoles */   /* 189km 1h 53min */ 
('D_GT15','SAS', ELT(WEEKDAY('2023-05-13') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2023-05-13','AV002',169,16,'BUSJIM001'),     /* Sabado */      /* 169km 1h 48min */
('D_GT16','ZRT', ELT(WEEKDAY('2023-05-14') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2023-05-14','AV002',169,16,'BUSJIM001'),     /* Domingo */     /* 169km 1h 43min */

('D_GT17','SAS', ELT(WEEKDAY('2023-05-17') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2023-05-17','AV002',177,16,'BUSJIM001'),     /* Miercoles */   /* 169km 1h 48min */
('D_GT18','SJL', ELT(WEEKDAY('2023-05-20') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2023-05-20','AV002',210,16,'BUSJIM001'),	    /* Sabado */      /* 194km 2h 04min */
('D_GT19','SAS', ELT(WEEKDAY('2023-05-21') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2023-05-21','AV002',169,16,'BUSJIM001'),     /* Domingo */     /* 169km 1h 48min */

('D_GT20','SAS', ELT(WEEKDAY('2023-05-24') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2023-05-24','AV002',194,18,'BUSJIM001'),     /* Miercoles */   /* 169km 1h 48min */
('D_GT21','STR', ELT(WEEKDAY('2023-05-27') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2023-05-27','AV002',169,16,'BUSJIM001'),     /* Sabado */      /* 169km 1h 48min */
('D_GT22','BRZ', ELT(WEEKDAY('2023-05-28') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2023-05-28','AV002',177,16,'BUSJIM001'),     /* Domingo */     /* 177km 1h 45min */
('D_GT23','CTS', ELT(WEEKDAY('2023-05-31') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sabado', 'Domingo'),'2023-05-31','AV002',234,17,'BUSJIM001')      /* Miercoles */   /* 189km 1h 53min */

";


// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaDESTINO)) {
    echo "Inserción en la tabla DESTINO exitosa <br>";
  } else {
    echo "Error al insertar en la tabla DESTINO: " . mysqli_error($conn) . "<br>";
  }
