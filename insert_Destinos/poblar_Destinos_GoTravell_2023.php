<?php
/* Destinos de GOTRAVELL 2023*/

$pueblaDESTINO="INSERT INTO DESTINO (/*codDestino,*/ref_Destino, ref_Localidad, dia_Semana,fecha_Viaje,ref_AgenciaViajes,kilometrosIdaVuelta,euros,ref_bus)  
    VALUES	
    

 /* Abril 2023 */
('D_GT1','SAS', ELT(WEEKDAY('2023-04-06') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'),'2023-04-06','AV002',174,16,'BUSJIM001'),  /* Jueves */ 
('D_GT2','SJL', ELT(WEEKDAY('2023-04-07') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'),'2023-04-07','AV002',194,16,'BUSJIM001'),	/* Viernes */
('D_GT3','STA', ELT(WEEKDAY('2023-04-08') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'),'2023-04-08','AV002',193,16,'BUSJIM001'),  /* Sábado */
('D_GT4','SAS', ELT(WEEKDAY('2023-04-09') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'),'2023-04-09','AV002',174,17,'BUSJIM001'),  /* Domingo */
('D_GT5','CTS', ELT(WEEKDAY('2023-04-15') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'),'2023-04-15','AV002',284,16,'BUSJIM001'), 	/* Sábado */
('D_GT6','SJL', ELT(WEEKDAY('2023-04-16') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'),'2023-04-16','AV002',194,16,'BUSJIM001'),	/* Domingo */
('D_GT7','ZRT', ELT(WEEKDAY('2023-04-22') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'),'2023-04-22','AV002',284,18,'BUSJIM001'),  /* Sábado */
('D_GT8','SAS', ELT(WEEKDAY('2023-04-23') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'),'2023-04-23','AV002',174,17,'BUSJIM001'),  /* Domingo */
('D_GT9','SAS', ELT(WEEKDAY('2023-04-29') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'),'2023-04-29','AV002',174,16,'BUSJIM001'), 	/* Sábado */
('D_GT10','BRZ', ELT(WEEKDAY('2023-04-30') + 1, 'Lunes', 'Martes', 'Miercoles', 'Jueves', 'Viernes', 'Sábado', 'Domingo'),'2023-04-30','AV002',210,16,'BUSJIM001')	/* Domingo */

";


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

*/


// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaDESTINO)) {
    echo "Inserción en la tabla DESTINO exitosa <br>";
  } else {
    echo "Error al insertar en la tabla DESTINO: " . mysqli_error($conn) . "<br>";
  }

?>