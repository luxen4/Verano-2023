<?php

/* Isla */
$pueblaBARRESTAURANTES="INSERT INTO BARRESTAURANTES(ref_negocio,ruta_imagen1,ruta_imagen2,ruta_imagen3,
                                                    nombre,descripcion,telefono,direccion,veces_Votado, veces_Positivo,veces_Negativo,
                                                    ref_Localidad,cod_posiciones,
                                                    e_tripadvisor,e_facebook,e_web, e_restaurantGuru,e_theFork,e_menu,habilitado)
				VALUES(/*cod_barrestaurantes*/

'07001', /* Pedirles el Menú del día */
'https://media-cdn.tripadvisor.com/media/photo-o/0a/b6/39/22/restaurante-el-pescador.jpg', /* Meter */ /* https://media-cdn.tripadvisor.com/media/photo-s/18/d6/bd/45/photo0jpg.jpg    'https://media-cdn.tripadvisor.com/media/photo-o/0b/97/5d/79/photo1jpg.jpg'*/
'https://media-cdn.tripadvisor.com/media/photo-o/0a/b6/38/01/impresionantes-platos.jpg',
'https://media-cdn.tripadvisor.com/media/photo-s/0c/88/e2/c2/20160813-141551-largejpg.jpg',
'R. El Pescador','Marisco,<br>Cocina Mediterránea y Europea',609380577,'P. Del Sable 53, Isla',DEFAULT,DEFAULT,DEFAULT,'ISL',1,
'https://www.tripadvisor.es/Restaurant_Review-g1592256-d8426601-Reviews-Restaurante_el_pescador_de_isla-Arnuero_Cantabria.html',
'https://www.facebook.com/Restaurante-el-pescador-de-isla-242708142775916/',
'https://www.restameta.com/ES/Isla/242708142775916/Restaurante-el-pescador-de-isla#gsc.tab=0',
'#',
'#',
null,
'SI'),


('07002',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/14/27/c5/6f/img-20180811-144731-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/13/83/94/b6/20180623-142819-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/1b/b8/9b/2a/img-20200721-161527-largejpg.jpg',  
'C. Hotelero Alfar','Marisco,<br>Cocina Mediterránea y Europea',942679348,'Paseo Sable 4, Isla',DEFAULT,DEFAULT,DEFAULT,'ISL',2,
'https://www.tripadvisor.es/Restaurant_Review-g664610-d7002064-Reviews-Complejo_Hotelero_Alfar-Isla_Cantabria.html',
'https://www.facebook.com/HotelAlfar/posts/492040858613485',
'#',
'#',
'#',
null,
'SI'),


('07003', /* Asador cojonudo */
'https://media-cdn.tripadvisor.com/media/photo-o/18/d8/3f/16/img-20190817-202242-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/0f/e7/18/f3/img-20170715-wa0028-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1d/2c/34/69/la-huerta-asador.jpg',  
'La Huerta Asador','Carne Mediterránea y Barbacoa',942679531,
'Av. J. Hormaechea Cazon 20, Isla',DEFAULT,DEFAULT,DEFAULT,'ISL',6,
'https://www.tripadvisor.es/Restaurant_Review-g664610-d4988833-Reviews-La_Huerta_Asador-Isla_Cantabria.html',
'https://www.facebook.com/hotelasadorlahuerta/',
'#',
'https://es.restaurantguru.com/La-Huerta-Asador-Isla-Playa',
'#',
'https://media-cdn.tripadvisor.com/media/photo-p/1d/0d/57/3d/la-huerta-asador.jpg',
'SI'),


('07004', 
'https://www.parrillasenisla.com/wp-content/uploads/2020/05/terraza-parrilla-la-piscina-4.jpg', /* Es de su web */
'https://media-cdn.tripadvisor.com/media/photo-m/1280/18/e4/0e/f4/photo1jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/14/27/c1/2c/img-20180812-221910-largejpg.jpg',  
'La Piscina Parrilla','Bar Restaurante,<br>Comida Mediterránea y Española',696994855, /* 'Tentempiés, Mediterránea, Española */
'Av. J. Hormaechea Cazon 4, Isla',DEFAULT,DEFAULT,DEFAULT,'ISL',4,
'https://www.tripadvisor.es/Restaurant_Review-g664610-d6942176-Reviews-La_piscina_parrilla-Isla_Cantabria.html',
'https://www.facebook.com/LaPiscina4/?eid=ARCW7MRRQhy9hSCv5nhmV-2vbOZ615aPJXlUnOZ83g-B5Z0s2KsDvioVYPVxrIxi3Igl5yhdoSFN--OS',
'https://www.parrillasenisla.com/',  /* Muy buena para meter */  /* y para coger ideas */
'https://es.restaurantguru.com/La-Piscina-Isla-Playa',
'#',
null,
'SI'),


('07005', /* Tiene Ménú del día pero no se lo veo */
'https://media-cdn.tripadvisor.com/media/photo-m/1280/17/da/e5/8d/photo0jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1a/28/15/18/20191128-152054-largejpg.jpg',
'https://www.tripadvisor.es/Restaurant_Review-g1592256-d2306561-Reviews-Restaurante_Astuy-Arnuero_Cantabria.html#photos;aggregationId=101&albumid=101&filter=7&ff=287984068',  
'Restaurante Astuy','Marisco,<br>Cocina Mediterránea y Europea',942679540,
'Av. J. Hormaechea Cazon 1, Isla',DEFAULT,DEFAULT,DEFAULT,'ISL',5,
'https://www.tripadvisor.es/Restaurant_Review-g1592256-d2306561-Reviews-Restaurante_Astuy-Arnuero_Cantabria.html#photos;aggregationId=101&albumid=101&filter=7&ff=473074757',
'https://www.facebook.com/hotelastuy/',
'https://www.hotel-astuy.es/restaurante-de-langosta-isla-cantabria/',  /* Muy buena para meter */  /* y para coger ideas */
'https://es.restaurantguru.com/Restaurante-Astuy-Isla-Playa',
'#',
null,
'SI'),


('07006',  
'https://10619-2.s.cdn12.com/rests/original/104_214466628.jpg',
'https://img.restaurantguru.com/rff9-Bar-El-Rompeolas-food.jpg',
'https://img.restaurantguru.com/r885-Bar-El-Rompeolas-exterior.jpg',
'Bar El Rompeolas','Bar Restaurante,<br>Comida Mediterránea y Española',659874545,
'Paseo del sable 13, Isla',DEFAULT,DEFAULT,DEFAULT,'ISL',1,
'#',
'#',
'#',
'https://es.restaurantguru.com/El-Rompeolas-Bar-Arnuero',
'#',
null,
'SI')





";



// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaBARRESTAURANTES)) {
    echo "Inserción en la tabla BARRESTAURANTES exitosa <br>";
  } else {
    echo "Error al insertar en la tabla BARRESTAURANTES: " . mysqli_error($conn) . "<br>";
  }

?>