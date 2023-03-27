<?php

/* Laredo */
$pueblaBARRESTAURANTES="INSERT INTO BARRESTAURANTES(ref_negocio,ruta_imagen1,ruta_imagen2,ruta_imagen3,
                                                    nombre,descripcion,telefono,direccion,veces_Votado, veces_Positivo,veces_Negativo,
                                                    ref_Localidad,cod_posiciones,
                                                    e_tripadvisor,e_facebook,e_web, e_restaurantGuru,e_theFork,e_menu,habilitado)
				VALUES(/*cod_barrestaurantes*/



'08001',  
'https://img.restaurantguru.com/r2a2-design-Bahia-2020-08.jpg',  /* https://media-cdn.tripadvisor.com/media/photo-o/0b/50/21/72/el-ruiloba.jpg */
'https://media-cdn.tripadvisor.com/media/photo-o/0b/50/21/56/el-ruiloba.jpg',  /*	https://10619-2.s.cdn12.com/rests/small/w400/110_507268551.jpg */
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1a/f5/a1/ff/img-20200220-wa0008-largejpg.jpg',
'El Ruiloba','Bar-Restaurante,<br>Comida Mediterránea y Española',942605116,
'Calle Lopez Sena 26',DEFAULT,DEFAULT,DEFAULT,'LDO',1,
'https://www.tripadvisor.es/Restaurant_Review-g644318-d999182-Reviews-El_Ruiloba-Laredo_Cantabria.html',
'#',
'#',
'https://es.restaurantguru.com/Casa-Ruiloba-Laredo-Cantabria',
'#',
'https://media-cdn.tripadvisor.com/media/photo-o/0c/4d/d5/55/el-ruiloba.jpg',
'SI'),


('08002',  
'https://img.restaurantguru.com/r08e-Bahia-food.jpg',
'https://img.restaurantguru.com/cdac-Bahia-Laredo-food.jpg',
'https://img.restaurantguru.com/r5a1-Bahia-meals.jpg',
'Cafetería Bahía','Bar Restaurante,<br>Comida Mediterránea y Española',942612768,
'C. López Seña 28, Laredo',DEFAULT,DEFAULT,DEFAULT,'LDO',2,
'#',
'#',
'#',
'https://es.restaurantguru.com/Bahia-Laredo-Cantabria',
'#',
null,
'SI'),

('08003',  
'https://media-cdn.tripadvisor.com/media/photo-o/07/a5/8e/de/asador-tiburon.jpg',  /* 	https://media-cdn.tripadvisor.com/media/photo-o/14/28/b8/ad/img-20180815-183017-largejpg.jpg */
'https://media-cdn.tripadvisor.com/media/photo-o/0c/26/09/9e/photo1jpg.jpg',  
'https://media-cdn.tripadvisor.com/media/photo-o/0c/26/09/a1/photo3jpg.jpg', /* 	https://10619-2.s.cdn12.com/rests/original/407_503748926.jpg */
'Asador Tiburon','Bar-Restaurante,<br>Comida Mediterránea y Española',942605634,
'Calle Puntal, S/N',DEFAULT,DEFAULT,DEFAULT,'LDO',3,
'https://www.tripadvisor.es/Restaurant_Review-g644318-d999175-Reviews-Asador_Tiburon-Laredo_Cantabria.html',
'#',
'#',
'https://es.restaurantguru.com/Tiburon-Laredo-Cantabria', /* Rango de precios por persona 9 €-22 €  del restaurantegurú*/
'#',
null,
'SI'),


('08004',  
'https://media-cdn.tripadvisor.com/media/photo-w/0e/11/9f/cb/photo0jpg.jpg',  /* Buscar una foto del lugar */
'https://media-cdn.tripadvisor.com/media/photo-o/0e/aa/23/89/fb-img-1489092110720.jpg',  
'https://media-cdn.tripadvisor.com/media/photo-o/0e/dd/17/d9/restaurante-palmanova.jpg', 
'Palmanova','Bar-Restaurante,<br>Comida Mediterránea y Española',942946126,
'Avenida de La Libertad 42, Laredo',DEFAULT,DEFAULT,DEFAULT,'LDO',4,
'https://www.tripadvisor.es/Restaurant_Review-g644318-d6780565-Reviews-Restaurante_Palmanova-Laredo_Cantabria.html#photos;aggregationId=101&albumid=101&filter=7&ff=263955993',
'https://www.facebook.com/Restaurante-Palmanova-333620130115716/',
'#',
'https://es.restaurantguru.com/Restaurante-Palmanova-Laredo-Cantabria', 
'#',
'https://media-cdn.tripadvisor.com/media/photo-p/0e/11/9f/cb/photo0jpg.jpg',
'SI'),


('08005',  
'https://media-cdn.tripadvisor.com/media/photo-o/07/04/ea/08/restaurante-casa-silvino.jpg',  
'https://media-cdn.tripadvisor.com/media/photo-o/0b/95/d0/29/mariscada.jpg',  
'https://media-cdn.tripadvisor.com/media/photo-o/0d/7f/a9/e5/photo0jpg.jpg', 
'Casa Silvino','Marisco,<br>Comida Mediterránea y Española',942613161,
'Calle Doctor Velasco 27,',DEFAULT,DEFAULT,DEFAULT,'LDO',5,
'https://www.tripadvisor.es/Restaurant_Review-g644318-d4988285-Reviews-Restaurante_Casa_Silvino-Laredo_Cantabria.html#photos;aggregationId=101&albumid=101&filter=7&ff=250939113',
'https://www.facebook.com/Restaurante-Casa-Silvino-1606393589585622/',
'#',
'https://es.restaurantguru.com/Casa-Silvino-Laredo-Cantabria',
'#',
null,
'SI'),


('08006',  
'https://media-cdn.tripadvisor.com/media/photo-o/07/0f/49/60/restaurante-traviatta.jpg',  
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1d/af/64/36/restaurante-traviatta.jpg',  
'https://media-cdn.tripadvisor.com/media/photo-o/1b/f7/28/9e/img-20200906-155238-largejpg.jpg', 
'Traviatta','Restaurante,<br>Comida Italiana y Española',942613134,
'Calle Marques de Comillas, 5,',DEFAULT,DEFAULT,DEFAULT,'LDO',6,
'https://www.tripadvisor.es/Restaurant_Review-g644318-d7304422-Reviews-Restaurante_Traviatta-Laredo_Cantabria.html#photos;aggregationId=101&albumid=101&filter=7&ff=365350334',
'https://www.facebook.com/TraviattaLaredo/',
'#',
'https://es.restaurantguru.com/Restaurante-Traviatta-Laredo-Laredo-Cantabria', /* Más restaurantes */
'#',
null,
'SI')


";

/*Restaurantes Laredo Class*/
/* Para laredo https://www.restaurantepescador.es/?utm_source=restaurantguru&utm_medium=referral */

// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaBARRESTAURANTES)) {
    echo "Inserción en la tabla BARRESTAURANTES exitosa <br>";
  } else {
    echo "Error al insertar en la tabla BARRESTAURANTES: " . mysqli_error($conn) . "<br>";
  }

?>