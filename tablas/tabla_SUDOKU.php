 <?php  
/*
 $dropTABLE_SUDOKU="DROP TABLE SUDOKU";
 if (mysqli_query($conn, $dropTABLE_SUDOKU)) {echo "Tabla SUDOKU eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla SUDOKU: " . mysqli_error($conn) . "<br>";}
*/
 $creaSudoku="CREATE TABLE SUDOKU(
   cod_sudoku INT NOT NULL AUTO_INCREMENT,	
   ref_sudoku varchar (5) NOT NULL UNIQUE,
   dificultad    ENUM ('Dificil','Média','Fácil') NOT NULL DEFAULT 'Média',
   numeros    VARCHAR (82) NOT NULL UNIQUE,
 
   PRIMARY KEY (cod_sudoku)
  
 );";
 
 if (mysqli_query($conn, $creaSudoku)) {
   echo "Table SUDOKU created successfully <br>";
 } else {
   echo "Error al crear la tabla SUDOKU: " . mysqli_error($conn) . "<br>";
 }
 
 $pueblaSUDOKU="INSERT INTO SUDOKU(/*cod_sudoku,*/ ref_sudoku, dificultad, numeros)
   VALUES('SU001','Média'  ,'34****2**5*9******2*75*8**9***1528***61***5*29**4*******8*****7****3**5***2**1***'),
         ('SU002','Média'  ,'*87***********9**762**3*********652*******6****12*7*3****96****5**1*4*89*49*****3'),
         ('SU003','Média'  ,'**75*623**5*13*6*71*6*7*8**86***297327*85**6434***7*28***32*7**6*8*41*9**936****2'),
         ('SU004','Dificil','***5**4*15*36*******27****37***69***3*9***7*4***1**2**25**3**8*6**85*************'),    /* La Rioja, Sábado 12.02.2022 */
         ('SU005','Média'  ,'**32**7***1***7**6**9*5*4******14*5*********2****3****9*83***************71*8*93*'),    /* Gente Del 18 al 24 Febrero 2022 */
         ('SU006','Média'  ,'**1**********8749**********2****31*4*3*2***7*5*8******9***58*2**1*7*6******9***45'),    /* Ídem */
         ('SU007','Média'  ,'6****1***584******9**67********27169***19*7*8*********1**9**4********8*****8*4*12'),    /* Ídem */
         ('SU008','Média'  ,'****82****3**6***2*85****13*********1*9*4*5277**91******15***8**9673**5********7*'),    /* La Rioja, Viernes 18.02.2022 */
         ('SU009','Média'  ,'**2*****8**3*8****61*42*93*******52*79**5*****2*6*8*1*5*1*6**94***7**6****7*9****'),    /* La Rioja, Viernes 01.02.2022 */
         ('SU010','Média'  ,'****5*****19**6**2**4***3*94**62*************6*85***3*7*54**2******1**852*****9*7'),    /* Gente */
         ('SU011','Média'  ,'3**4**58***6***1********3*9*********83*****2***2**6*719643*2*******4***82*7******'),    /* Ídem */
         ('SU012','Média'  ,'3*61**7801************64**982***9**5*****29605****7****374**********8******500004'),    /* Ídem */
         ('SU013','Fácil'  ,'*1*7*24***6****81**3**48**915***693**2*********953*1***9**2***48*****5**24*85*3*1'),    /* La Rioja, Lunes 21.02.2022 */
         ('SU014','Dificil','*****9*632*5*6***1*8*1******6*2***5*9******4***285*6***7***61*****9*****1*3*8*5**'),    /* La Rioja, Miércoles 16.02.2022 */
         ('SU015','Média'  ,'**********6***83******51****3*2***6**4*****3161**9**58******4**5*1**9*239*43*****'),    /* El Día de La Rioja Jueves 17.02.2022 */
         ('SU016','Média'  ,'15**3****4*86*7****3****95******84*7*7**************15***874**********2*61***93**'),    /* Gente 25.02.2022 al 03.03.2022 */
         ('SU017','Média'  ,'3***1**9**1***3*****79******8**251***2**91**5********82**6**94*4*****2**5**7*****'),    /* Ídem */
         ('SU018','Média'  ,'15*9***7*8**6********7****5***4****6*6*******2215*****3***74******923**40****1**5')    /* Ídem */
 ;";
 
 if (mysqli_query($conn, $pueblaSUDOKU)) {
 echo "Inserción en la tabla SUDOKU exitosa <br>";
 } else {
 echo "Error al insertar en la tabla SUDOKU: " . mysqli_error($conn) . "<br>";
 }
 ?>