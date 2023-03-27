<?php

/* Hondarribia */
$pueblaBARRESTAURANTES="INSERT INTO BARRESTAURANTES(ref_negocio,ruta_imagen1,ruta_imagen2,ruta_imagen3,
                                                    nombre,descripcion,telefono,direccion,veces_Votado, veces_Positivo,veces_Negativo,
                                                    ref_Localidad,cod_posiciones,
                                                    e_tripadvisor,e_facebook,e_web, e_restaurantGuru,e_theFork,e_menu,habilitado)
				VALUES(/*cod_barrestaurantes*/
'04001', 
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1a/7b/19/0f/rodeo-burger.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/0b/49/5b/f5/se-podrian-decir-muchas.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1d/15/0c/51/caption.jpg',
'Rodeo Burger', 'Comida Americana',943580521,'Minatera, Hondarribia',DEFAULT,DEFAULT,DEFAULT,'HON',1,
'https://www.tripadvisor.es/Restaurant_Review-g616235-d10177687-Reviews-Rodeo_Burger-Hondarribia_Province_of_Guipuzcoa_Basque_Country.html',
'https://m.facebook.com/profile.php?id=139854619440064&__tn__=C-R',
'#',
'#',
'https://es.restaurantguru.com/Rodeo-Burger-Hondarribia',
null,
'SI'),
  
('04002',
'https://media-cdn.tripadvisor.com/media/photo-o/0d/46/ef/86/img-20161009-161840-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/0d/46/ef/7d/img-20161009-145642-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/0d/46/ef/7d/img-20161009-145642-largejpg.jpg',
'Le Port Rigaud','Comida Francesa y Española',943642320,'Pto. deportivo édificio C call 2, Hondarribia',DEFAULT,DEFAULT,DEFAULT,'HON',3,
'https://www.tripadvisor.es/Restaurant_Review-g616235-d11651892-Reviews-Le_Port_Rigaud-Hondarribia_Province_of_Guipuzcoa_Basque_Country.html',
'#',
'#',
'https://es.restaurantguru.com/Le-Port-Rigaud-Hondarribia',
'#',
null,
'SI'),

('04003', 
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1c/0b/d8/40/exterior-restaurante.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1c/19/69/09/gran-variedad-de-pizzas.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/1c/55/07/95/algunas-de-nuestras-ensaladas.jpg',
'Ilcapo','Pizza Mediterránea Española',943643532,'Minatera, Hondarribia',DEFAULT,DEFAULT,DEFAULT,'HON',2,
'https://www.tripadvisor.es/Restaurant_Review-g616235-d5534468-Reviews-Ilcapo-Hondarribia_Province_of_Guipuzcoa_Basque_Country.html',
'https://m.facebook.com/profile.php?id=523716334490269',
'https://www.ilcapo.net/', /* home */
'https://es.restaurantguru.com/Rodeo-Burger-Hondarribia',
'#',  /* https://www.yelp.com/biz/ristorante-ilcapo-hondarribia Para otra plataforma */
null,
'SI'),

('04004', /* Tiene menú del día pero no hay foto */
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1d/21/7b/8c/letrero-del-bar.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/18/1a/05/6e/salade-mixte.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/18/1a/05/ea/morue-aux-pommes-de-terre.jpg',
'Kaia Jatetxea','Comida Española',943644212,'Ramon Iribarren 29, Hondarribia',DEFAULT,DEFAULT,DEFAULT,'HON',4,  /* Kaia Taberna Jatetxea' */  /* 'Ramon Iribarren Pasealekua Ibilbidea, 29 */
'https://www.tripadvisor.es/Restaurant_Review-g616235-d10948223-Reviews-Kaia_Taberna_Jatetxea-Hondarribia_Province_of_Guipuzcoa_Basque_Country.html',
'#',
'#',
'https://es.restaurantguru.com/Kaia-Taberna-Jatetxea-Hondarribia',
'#',  
'https://oasisrestaurante.com/482-catalog_medium/menu-del-dia.jpg',
'SI'),

('04005', 
'https://media-cdn.tripadvisor.com/media/photo-o/17/0e/d5/50/img-20190404-143134-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/1f/1a/4b/b8/caption.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-o/1b/bd/7a/50/20200810-201359-largejpg.jpg',
'Ardoka Vinoteka','Comida Europea y Española',943643169,'San Pedro Kalea 32, Hondarribia',DEFAULT,DEFAULT,DEFAULT,'HON',5,
'https://www.tripadvisor.es/Restaurant_Review-g616235-d3294180-Reviews-Ardoka_Vinoteka-Hondarribia_Province_of_Guipuzcoa_Basque_Country.html#photos;aggregationId=101&albumid=101&filter=7&ff=386848080',
'https://www.facebook.com/Vinoteka-Ardoka-495174797282963/',
'https://www.ardokavinoteka.com/#prettyPhoto', /* Ver ideas */
'https://es.restaurantguru.com/Ardoka-Vinoteka-Hondarribia',
'#',  
null,
'SI'),

('04006',                               /* https://media-cdn.tripadvisor.com/media/photo-o/10/8a/47/0e/local.jpg */     /* 	https://media-cdn.tripadvisor.com/media/photo-o/10/82/77/83/hermandad-de-pescadores.jpg */
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1b/77/2a/3a/photo0jpg.jpg',                   /* https://media-cdn.tripadvisor.com/media/photo-m/1280/18/a1/58/55/entrada-al-restaurante.jpg */
'https://media-cdn.tripadvisor.com/media/photo-m/1280/15/79/46/13/alcachofas-con-almejas.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-o/0a/0b/7f/d3/hermandad-de-pescadores.jpg',
'Hd. De Pescadores','Española, Saludable, Vasca',943642738,'Zuloaga Kalea, 12, Hondarribia',DEFAULT,DEFAULT,DEFAULT,'HON',6,
'https://www.tripadvisor.es/Restaurant_Review-g616235-d1590309-Reviews-Hermandad_De_Pescadores-Hondarribia_Province_of_Guipuzcoa_Basque_Country.html#photos;aggregationId=101&albumid=101&filter=7&ff=5303992450',
'https://www.facebook.com/LaHermandadDePescadores/',
'#', /* wordpress sin hacer */
'https://es.restaurantguru.com/Hermandad-De-Pescadores-Hondarribia',
'#',  
null,
'SI')";




// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaBARRESTAURANTES)) {
    echo "Inserción en la tabla BARRESTAURANTES exitosa <br>";
  } else {
    echo "Error al insertar en la tabla BARRESTAURANTES: " . mysqli_error($conn) . "<br>";
  }

?>