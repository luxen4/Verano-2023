<?php

/* ZARAUTZ */
$pueblaBARRESTAURANTES="INSERT INTO BARRESTAURANTES(ref_negocio,ruta_imagen1,ruta_imagen2,ruta_imagen3,
                                                    nombre,descripcion,telefono,direccion,veces_Votado, veces_Positivo,veces_Negativo,
                                                    ref_Localidad,cod_posiciones,
                                                    e_tripadvisor,e_facebook,e_web, e_restaurantGuru,e_theFork,e_menu,precio_menu,habilitado)
				VALUES(/*cod_barrestaurantes*/
          '18001',
'https://media-cdn.tripadvisor.com/media/photo-w/13/e7/be/f5/photo0jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/10/bb/b5/20/img-20170921-wa0012-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/0c/3f/21/25/cenar-en-un-lugar-maravilloso.jpg',
'Garaban','Bar restaurante',943038795,
'Paseo Malecon 25, Zarautz',DEFAULT,DEFAULT,DEFAULT,'ZRT',1,
'https://www.tripadvisor.es/Restaurant_Review-g897148-d8549726-Reviews-Garaban-Zarautz_Province_of_Guipuzcoa_Basque_Country.html',
'https://www.facebook.com/pages/Garaban-Bar-Restaurante/604331512922779',
'http://restaurantegaraban.com/',
'#',
'#',
'https://media-cdn.tripadvisor.com/media/photo-p/0d/04/2e/62/menue-del-dia.jpg',13.50,       /* Hay otra más */
'SI'),



('18002',
'https://media-cdn.tripadvisor.com/media/photo-o/0a/ed/54/a2/chez-charly-a-zarautz.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/11/5b/ad/70/img-20171115-141418-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/11/5b/ad/74/img-20171124-wa0016-largejpg.jpg',
'Restaurant Charly','Comida Española',943132473,
'Paseo Malecon,Zarautz',DEFAULT,DEFAULT,DEFAULT,'ZRT',2,
'https://www.tripadvisor.es/Restaurant_Review-g897148-d9705556-Reviews-Cafe_Restaurant_Charly-Zarautz_Province_of_Guipuzcoa_Basque_Country.html',
'#', /* https://www.facebook.com/panaderiacesarascaso/  Le sale una dirección de Huesca */
'#',
'https://es.restaurantguru.com/bar-charly-Zarautz',
'#',
null,null,
'SI'),



('18003',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/18/aa/f0/96/caption.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1c/c8/0e/16/photo0jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/14/6f/7d/66/photo0jpg.jpg',
'Izarra Restaurante','Comida Europea',943134135,
'Itsasertza Kalea s/n, Zarautz',DEFAULT,DEFAULT,DEFAULT,'ZRT',3,
'https://www.tripadvisor.es/Restaurant_Review-g897148-d3607479-Reviews-Izarra_Restaurante-Zarautz_Province_of_Guipuzcoa_Basque_Country.html#photos;aggregationId=101&albumid=101&filter=7&ff=158826057',
'#',
'#',
'https://es.restaurantguru.com/Izarra-Zarautz',
'#',
'https://media-cdn.tripadvisor.com/media/photo-w/1c/c8/0e/16/photo0jpg.jpg',13,
'SI'),


('18004',
'https://media-cdn.tripadvisor.com/media/photo-o/14/4b/cd/16/img-20180810-215217-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/0a/cd/77/9b/delicioso-solomillo-de.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1b/67/f5/d1/buena-comida.jpg',
'La Perla','Bar-Restaurante,<br>Comida Española',943013873,
'Itsasertza Kalea s/n, Zarautz',DEFAULT,DEFAULT,DEFAULT,'ZRT',4,
'https://www.tripadvisor.es/Restaurant_Review-g897148-d2286536-Reviews-La_Perla-Zarautz_Province_of_Guipuzcoa_Basque_Country.html',
'https://www.facebook.com/LaPERLAZarautz/',
'#',
'https://es.restaurantguru.com/La-Perla-Zarautz',
'#',
null,null,
'SI'),


('18005',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/16/f7/2e/90/facade.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/19/0d/01/ae/20190830-154707-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/0a/d0/30/9f/photo0jpg.jpg',
'Bar Iruna','Comida Española',943004023,
'Ipar Kalea, Zarautz',DEFAULT,DEFAULT,DEFAULT,'ZRT',5,
'https://www.tripadvisor.es/Restaurant_Review-g897148-d7066736-Reviews-Bar_Iruna-Zarautz_Province_of_Guipuzcoa_Basque_Country.html#photos;aggregationId=101&albumid=101&filter=7&ff=385298064',
'#', /* https://www.facebook.com/comilaocf/  Malísimamente enrutado */
'#',
'https://es.restaurantguru.com/Iruna-Zarautz',
'#',
'https://media-cdn.tripadvisor.com/media/photo-p/16/f7/2e/7a/menu.jpg',10,
'SI'),


('18006',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/13/c6/79/9c/20180720-143305-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/02/35/0d/2b/pas.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/0f/63/05/fb/rice-with-seafood.jpg',
'Kulixka','Comida Española y Vasca',943134604,
'Bixkonde Kalea 1,Zarautz',DEFAULT,DEFAULT,DEFAULT,'ZRT',6,
'https://www.tripadvisor.es/Restaurant_Review-g897148-d2406752-Reviews-Kulixka-Zarautz_Province_of_Guipuzcoa_Basque_Country.html#photos;aggregationId=101&albumid=101&filter=7&ff=145329306',
'https://www.facebook.com/KulixkaJatetxea/', 
'#',/* En blanco desde Tripadvisor */
'#',
'#',
'https://oasisrestaurante.com/482-catalog_medium/menu-del-dia.jpg',15,
'SI')



";



// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaBARRESTAURANTES)) {
    echo "Inserción en la tabla BARRESTAURANTES exitosa <br>";
  } else {
    echo "Error al insertar en la tabla BARRESTAURANTES: " . mysqli_error($conn) . "<br>";
  }

?>

<!--

        ('zarautz_baibarcoia.jpg','Bar Restaurante Baibatzokia','Restaurante vasco',943252679,
          'Nafarroa Kalea, 11, 20800 Zarautz, Gipuzkoa, España',4,'#'),
-->