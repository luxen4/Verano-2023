<?php

/* ORIO */
$pueblaBARRESTAURANTES="INSERT INTO BARRESTAURANTES(ref_negocio,ruta_imagen1,ruta_imagen2,ruta_imagen3,
                                                    nombre,descripcion,telefono,direccion,veces_Votado, veces_Positivo,veces_Negativo,
                                                    ref_Localidad,cod_posiciones,
                                                    e_tripadvisor,e_facebook,e_web, e_restaurantGuru,e_theFork,e_menu,precio_menu,habilitado)
				VALUES(/*cod_barrestaurantes*/
'11001',
'https://media-cdn.tripadvisor.com/media/photo-w/16/39/48/3c/comedor.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/12/f1/8a/72/chuleta.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1d/81/db/29/caption.jpg',
'Orioko Barra','Bar-Restaurante,<br>Carne Mediterránea y Barbacoa',943106474,
'Playa de Antilla, Edif. 1, Orio',DEFAULT,DEFAULT,DEFAULT,'ORO',1,
'https://www.tripadvisor.es/Restaurant_Review-g1080359-d12715455-Reviews-Orioko_Barra_Asador-Orio_Province_of_Guipuzcoa_Basque_Country.html',
'https://es-es.facebook.com/Oriokobarra/',
'http://www.oriokobarra.com/',/* Web propia primer restaurante a considerar*/ 
'https://es.restaurantguru.com/Orioko-Benta-Jatetxea-Orio',
'https://www.thefork.es/restaurante/orioko-barra-jatetxea-r330407',
'https://oasisrestaurante.com/482-catalog_medium/menu-del-dia.jpg',14,
'SI'),



('11002',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/20/68/c0/49/la-decoracion-del-espacio.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/17/61/c2/9c/hamburguesa-balea.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/1a/4b/62/97/balea-jatetxea.jpg',
'Balea Jatetxea','Bar-Restaurante,<br>Comida Mediterránea Y Española',943841620,
'Calle Antilla 5, Orio',DEFAULT,DEFAULT,DEFAULT,'ORO',2,
'https://www.tripadvisor.es/Restaurant_Review-g1080359-d17380344-Reviews-Balea_Jatetxea-Orio_Province_of_Guipuzcoa_Basque_Country.html',
'https://www.facebook.com/Balea-Jatetxea-2241238012632805/',
'http://www.gruposarea.com/espacio-balea/',  /* Web propia primer restaurante PILLAR EL CARRUSEL*/ 
'https://es.restaurantguru.com/Balea-Jatetxea-Orio',
'#',
'https://media-cdn.tripadvisor.com/media/photo-p/1a/4b/62/4c/balea-jatetxea.jpg',15,
'SI'),

('11003',
'https://media-cdn.tripadvisor.com/media/photo-o/10/57/00/24/photo1jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1b/70/17/e2/img-20200610-145328-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/18/a9/42/49/mola-mola.jpg',
'Mola-mola','Tentempiés,<br>Comida Americana',943580037,
'Barreiatua 3, Orio',DEFAULT,DEFAULT,DEFAULT,'ORO',3,
'https://www.tripadvisor.es/Restaurant_Review-g1080359-d12658078-Reviews-Mola_mola-Orio_Province_of_Guipuzcoa_Basque_Country.html#photos;aggregationId=101&albumid=101&filter=7&ff=307377275',
'https://www.facebook.com/MolaMolaBar/',
'https://molamolabar.com/',  /* Web propia PILLAR*/ 
'https://es.restaurantguru.com/Mola-mola-Orio',
'#',
null,null,
'SI'),


('11004',
'https://media-cdn.tripadvisor.com/media/photo-o/0c/ae/1a/4f/a-beautiful-magical-lunch.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/15/fa/07/39/besugo-asado.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/10/56/44/d7/photo0jpg.jpg',
'Asador Xixario','Restaurante de carne,<br>Barbacoa Y Española',943830019,
'C/ EUSKO GUDARIEN 2, Orio',DEFAULT,DEFAULT,DEFAULT,'ORO',4,
'https://www.tripadvisor.es/Restaurant_Review-g1080359-d2153226-Reviews-Asador_Xixario-Orio_Province_of_Guipuzcoa_Basque_Country.html',
'https://www.facebook.com/Asador-Xixario-207145226702771/',
'http://asadorxixario.com/',  /* Web propia PILLAR*/ 
'https://es.restaurantguru.com/Asador-Xixario-Orio',
'#',
null,null,
'SI'),

('11005',
'https://media-cdn.tripadvisor.com/media/photo-w/1d/a4/61/ab/gran-experiencia-si-acudis.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/04/a0/ee/3c/bodegon-joxe-mari.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/0c/96/09/3f/photo0jpg.jpg',
'Bodegon Joxe Mari','Barbacoa,<br>Comida Española y Vasca',943830032,
'Herriko Emparantza, s/n, Orio',DEFAULT,DEFAULT,DEFAULT,'ORO',5,
'https://www.tripadvisor.es/Restaurant_Review-g1080359-d2105946-Reviews-Bodegon_Joxe_Mari-Orio_Province_of_Guipuzcoa_Basque_Country.html#photos;aggregationId=101&albumid=101&filter=7&ff=345283000',
'https://www.facebook.com/BodegonJoxeMari',
'#', 
'https://es.restaurantguru.com/Bodegon-Joxe-Mari-Orio',
'#',
'https://oasisrestaurante.com/482-catalog_medium/menu-del-dia.jpg',14,
'SI'),

('11006',
'https://media-cdn.tripadvisor.com/media/photo-p/1b/88/2f/e9/primeras-sardinas-de.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/21/8f/2a/a3/bodegon-sarasua-erretegia.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/1d/cd/e3/30/bodegon-sarasua-erretegia.jpg',
'B. Sarasua Erretegia','Asador,<br>Comida Española y Vasca',943830005,
'Eusko Gudarien Kalea 29, Orio',DEFAULT,DEFAULT,DEFAULT,'ORO',6,
'https://www.tripadvisor.es/Restaurant_Review-g1080359-d6547344-Reviews-Bodegon_Sarasua_Erretegia-Orio_Province_of_Guipuzcoa_Basque_Country.html#photos;aggregationId=101&albumid=101&filter=7&ff=461909984',
'https://www.facebook.com/bodegonsarasua/?ref=py_c',
'https://www.bodegonsarasua.com/', 
'https://es.restaurantguru.com/Bodegon-Sarasua-Orio',
'#',
'https://oasisrestaurante.com/482-catalog_medium/menu-del-dia.jpg',14,
'SI')


";



/* Batzoki Plentzia añadir también */

// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaBARRESTAURANTES)) {
    echo "Inserción en la tabla BARRESTAURANTES exitosa <br>";
  } else {
    echo "Error al insertar en la tabla BARRESTAURANTES: " . mysqli_error($conn) . "<br>";
  }

?>