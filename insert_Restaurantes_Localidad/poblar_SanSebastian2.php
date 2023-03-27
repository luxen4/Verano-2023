<?php

/* ZUMAIA */
$pueblaBARRESTAURANTES="INSERT INTO BARRESTAURANTES(ref_negocio,ruta_imagen1,ruta_imagen2,ruta_imagen3,
                                                    nombre,descripcion,telefono,direccion,veces_Votado, veces_Positivo,veces_Negativo,
                                                    ref_Localidad,cod_posiciones,
                                                    e_tripadvisor,e_facebook,e_web, e_restaurantGuru,e_theFork,menu_premium,dto,habilitado)
				VALUES(/*cod_barrestaurantes*/
'14001',                                                                        /* RANGO DE PRECIOS 4 € - 15 € */
'https://media-cdn.tripadvisor.com/media/photo-o/0f/5d/eb/7d/ambiente-bar.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/0e/86/ca/c3/photo2jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/0f/c9/fd/ef/remo-degustacion.jpg',
'Mala Gissona','Bar-Restaurante',943045615, /* 'Mala Gissona Beer House Gros' */
'C/ Zabaleta 53, San Sebastián',DEFAULT,DEFAULT,DEFAULT,'SAS',1,
'https://www.tripadvisor.es/Restaurant_Review-g187457-d10119605-Reviews-Mala_Gissona_Beer_House_Gros-San_Sebastian_Donostia_Province_of_Guipuzcoa_Basque.html#photos;aggregationId=101&albumid=101&filter=7&ff=208893663',
'https://www.facebook.com/MalaGissonabhGros/',
'http://malagissona.beer/',  /* Buena web */
'https://es.restaurantguru.com/Mala-Gissona-Beer-House-San-Sebastian',
'#',
null,5, /* Hay más */
'SI'),


('14002',
'https://media-cdn.tripadvisor.com/media/photo-o/13/eb/3d/4a/meson-portaletas.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/17/c6/28/49/am-eingang-gleich-alles.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/0e/38/de/fe/photo1jpg.jpg',
'Mesón Portaletas','Bar-Restaurante,<br>Comida Mediterránea y Española',943434723,
'C/ Puerto Kalea 21, San Sebastián',DEFAULT,DEFAULT,DEFAULT,'SAS',2,
'https://www.tripadvisor.es/Restaurant_Review-g187457-d989097-Reviews-Meson_Portaletas-San_Sebastian_Donostia_Province_of_Guipuzcoa_Basque_Country.html',
'https://www.facebook.com/meson.portaletas/',
'#', 
'https://es.restaurantguru.com/Portaletas-San-Sebastian',
'#',
null,10,  
'SI'),



('14003',
'https://media-cdn.tripadvisor.com/media/photo-s/02/d2/fe/83/fachada-casa-bartolo.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/14/5b/d0/ab/y-seguian-sacando.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/17/40/18/a9/comptoir-a-tapas.jpg',
'Bartolo','Bar-Restaurante,<br>Comida Mediterránea y Española',943424736,
'C/ Fermin Calbeton 38, San Sebastián',DEFAULT,DEFAULT,DEFAULT,'SAS',3,
'https://www.tripadvisor.es/Restaurant_Review-g187457-d989142-Reviews-Bartolo-San_Sebastian_Donostia_Province_of_Guipuzcoa_Basque_Country.html',
'https://www.facebook.com/bartoloetxea/',
'https://bartoloetxea.com/',  /* Buena web */
'#',
'#',
null,15,
'SI'),



('14004',/* MICHELIN */
'https://media-cdn.tripadvisor.com/media/photo-o/0b/22/cb/0c/photo0jpg.jpg', /*  https://media-cdn.tripadvisor.com/media/photo-s/02/d2/fe/83/fachada-casa-bartolo.jpg      https://media-cdn.tripadvisor.com/media/photo-o/19/ff/e3/b5/img-20190418-124859-largejpg.jpg */
'https://media-cdn.tripadvisor.com/media/photo-o/12/e2/35/3b/20180508-093733-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/14/ec/f3/fc/vista-general.jpg',
'Bar Bergara','Bar-Restaurante,<br>Comida Española y Vasca',943275026,
'C/ General Artetxe 8, San Sebastián',DEFAULT,DEFAULT,DEFAULT,'SAS',4,
'https://www.tripadvisor.es/Restaurant_Review-g187457-d989163-Reviews-Bar_Bergara-San_Sebastian_Donostia_Province_of_Guipuzcoa_Basque_Country.html#photos;aggregationId=101&albumid=101&filter=7&ff=308622225',
'https://www.facebook.com/BarBergara',
'https://pinchosbergara.es/',  /* Buena web */
'https://es.restaurantguru.com/Bergara-San-Sebastian',
'#',
null,20,
'SI'),


('14005',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/19/55/9e/77/baga-biga-faktoria-craft.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/19/56/f3/8e/photo0jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-p/17/c2/b8/b4/cerveza-artesana-craft.jpg',
'Baga Biga Faktoria','Bar-Restaurante,<br>Comida Internacional y Mediterránea',943381753,
'C/ Ramon María Lili 8, San Sebastián',DEFAULT,DEFAULT,DEFAULT,'SAS',5,
'https://www.tripadvisor.es/Restaurant_Review-g187457-d17383952-Reviews-Baga_Biga_Faktoria-San_Sebastian_Donostia_Province_of_Guipuzcoa_Basque_Country.html#photos;aggregationId=101&albumid=101&filter=7&ff=441818376',
'https://www.facebook.com/bagabigafaktoria/',
'https://bagabigafaktoria.com/', 
'https://es.restaurantguru.com/Baga-Biga-Faktoria-San-Sebastian',
'#',
null,25,
'SI')



";



// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaBARRESTAURANTES)) {
    echo "Inserción en la tabla BARRESTAURANTES(San Sebastián) exitosa <br>";
  } else {
    echo "Error al insertar en la tabla BARRESTAURANTES(San Sebastián): " . mysqli_error($conn) . "<br>";
  }

?>