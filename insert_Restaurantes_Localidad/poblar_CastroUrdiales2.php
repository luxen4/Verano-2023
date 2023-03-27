<?php

/* Castro Urdiales */
$pueblaBARRESTAURANTES="INSERT INTO BARRESTAURANTES(ref_negocio,ruta_imagen1,ruta_imagen2,ruta_imagen3,
                                                    nombre,descripcion,telefono,direccion,veces_Votado, veces_Positivo,veces_Negativo,
                                                    ref_Localidad,cod_posiciones,
                                                    e_tripadvisor,e_facebook,e_web, e_restaurantGuru,e_theFork,menu_premium,dto,habilitado)
				VALUES(/*cod_barrestaurantes*/
          '03001',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1d/66/13/5f/caption.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/13/a8/18/e4/bar-bitacora.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1d/66/13/5e/caption.jpg',
'Bar Bitácora','Comida Española y Vasca',942550437,
'Av. la Playa 10,<br> Castro Urdiales',DEFAULT,DEFAULT,DEFAULT,'CTS',1,
'https://www.tripadvisor.es/Restaurant_Review-g776898-d5866545-Reviews-Restaurante_Cafeteria_Bitacora-Castro_Urdiales_Cantabria.html',
'https://es-es.facebook.com/bitacoracastro/',
'https://restaurante-cafeteria-bitacora.negocio.site/',
'https://es.restaurantguru.com/Reataurante-Cafeteria-Bitacora-Castro-Urdiales',
'#', /* https://gastroranking.es/r/restaurante-bitacora-4_71106/ */
null,null,
'SI'),



('03002', /* Comentário-> Es difícil encontrar sitios donde pongan tan buen café */
'https://media-cdn.tripadvisor.com/media/photo-o/08/fe/2d/ea/cafe-riomar.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/0c/9f/30/31/photo0jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-p/18/95/3d/87/img-20190725-wa0002-largejpg.jpg',
'Cafe Riomar','Comida Española y Vasca',942867025,
'Av. Riomar 13,<br>Castro Urdiales',DEFAULT,DEFAULT,DEFAULT,'CTS',2,
'https://www.tripadvisor.es/Restaurant_Review-g776898-d8541131-Reviews-Cafe_Riomar-Castro_Urdiales_Cantabria.html',
'#',
'#',
'https://es.restaurantguru.com/Cafe-Riomar-Castro-Urdiales',
'#', /* https://gastroranking.es/r/restaurante-bitacora-4_71106/ */
null,null,
'SI'),


('03003',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/18/4d/72/2a/entrada-de-restaurante.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1b/ba/e6/e4/lubina.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/19/2a/5c/6d/rabas.jpg',
'Horizon','Comida Europea y Española,<br>Opciones sin gluten',604391804,
'Av. Constitución 4,<br>Castro Urdiales',DEFAULT,DEFAULT,DEFAULT,'CTS',3,
'https://www.tripadvisor.es/Restaurant_Review-g776898-d17648390-Reviews-Restaurante_Horizon-Castro_Urdiales_Cantabria.html',
'https://www.facebook.com/Restaurante-Horizon-434335977394664/',
'https://restaurantehorizon.es/',
'https://es.restaurantguru.com/Restaurante-Horizon-Castro-Urdiales',
'#',
null,null,
'SI'),


('03004',
'https://media-cdn.tripadvisor.com/media/photo-o/10/f9/33/6b/aqui-estamos.jpg',
'https://media-cdn.tripadvisor.com/media/photo-s/10/f9/31/ab/foto-de-grupo.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1c/b0/00/f1/bajamar.jpg',
'BAJAMAR','Comida Mediterránea y Española',942861579,
'C/ la Mar 23,<br>Castro Urdiales',DEFAULT,DEFAULT,DEFAULT,'CTS',4,
'https://www.tripadvisor.es/Restaurant_Review-g776898-d3935364-Reviews-Bajamar-Castro_Urdiales_Cantabria.html',
'#',
'#',
'https://es.restaurantguru.com/Bajamar-Castro-Urdiales',
'#',
'M03004',10,
'SI'),


('03005', /* Tiene menú del dia, pero no lo tiene en foto, prguntarle si lo quiere meter */
'https://media-cdn.tripadvisor.com/media/photo-o/0d/1f/da/94/fachada.jpg',  /* https://www.tripadvisor.es/Restaurant_Review-g776898-d3578711-Reviews-Sidreria_Marcelo-Castro_Urdiales_Cantabria.html#photos;aggregationId=101&albumid=101&filter=7&ff=220191380 */
'https://media-cdn.tripadvisor.com/media/photo-w/12/ff/2d/07/photo9jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/14/8d/57/3d/img-20180909-145058-largejpg.jpg',
'Sidreria Marcelo','Comida Española y Vasca',942782310,
'C/ Silvestre Ochoa,<br>Castro Urdiales',DEFAULT,DEFAULT,DEFAULT,'CTS',5,
'https://www.tripadvisor.es/Restaurant_Review-g776898-d3578711-Reviews-Sidreria_Marcelo-Castro_Urdiales_Cantabria.html#photos;aggregationId=101&albumid=101&filter=7&ff=124858696',
'https://www.facebook.com/sidreriamarcelo/',
'#',
'https://es.restaurantguru.com/SIDRERIA-MARCELO-Castro-Urdiales',
'#',
null,null,
'SI'),


('03006', /* Comentario->Buena comida y personal muy amable , comentario en mi nube*/
'https://media-cdn.tripadvisor.com/media/photo-w/0c/b5/11/5c/vaya-estafaaaaaaaaa.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/18/24/4c/d4/20190630-145325-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/18/24/4c/d3/20190630-145313-largejpg.jpg',
'La Marina','Comida Española',942861345,
'C/ Plazuela 16,<br>Castro Urdiales',DEFAULT,DEFAULT,DEFAULT,'CTS',6,
'https://www.tripadvisor.es/Restaurant_Review-g776898-d3612123-Reviews-La_Marina_Pension_Restaurante-Castro_Urdiales_Cantabria.html',
'https://www.facebook.com/Restaurante-La-Marina-301547609951650/',
'#',
'https://es.restaurantguru.com/La-Marina-Castro-Urdiales',
'#',
null,null,
'SI')



";



// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaBARRESTAURANTES)) {
    echo "Inserción en la tabla BARRESTAURANTES(Castro-Urdiales) exitosa <br>";
  } else {
    echo "Error al insertar en la tabla BARRESTAURANTES(Castro-Urdiales): " . mysqli_error($conn) . "<br>";
  }

?>