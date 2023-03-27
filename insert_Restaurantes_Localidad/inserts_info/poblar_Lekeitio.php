<?php

/* LEKEITIO */
$pueblaBARRESTAURANTES="INSERT INTO BARRESTAURANTES(ref_negocio,ruta_imagen1,ruta_imagen2,ruta_imagen3,
                                                    nombre,descripcion,telefono,direccion,veces_Votado, veces_Positivo,veces_Negativo,
                                                    ref_Localidad,cod_posiciones,
                                                    e_tripadvisor,e_facebook,e_web, e_restaurantGuru,e_theFork,e_menu,habilitado)
				VALUES(/*cod_barrestaurantes*/
          '09001', 
'https://media-cdn.tripadvisor.com/media/photo-o/0f/30/73/7d/terraza-del-local.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/0e/fd/bf/10/2-plato-dentro-del-menu.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-w/13/8c/74/74/photo1jpg.jpg', 
/*	https://media-cdn.tripadvisor.com/media/photo-m/1280/13/48/6e/18/20180614-143326-largejpg.jpg */

'Bar Oskarbi','Mediterránea, Europea y Española',946243859,'Muelle de Txatxo 2, Lekeitio',DEFAULT,DEFAULT,DEFAULT,'LKT',2,
'https://www.tripadvisor.es/Restaurant_Review-g1069109-d3684683-Reviews-Oskarbi-Lekeitio_Province_of_Vizcaya_Basque_Country.html',
'#',
'#',
'https://es.restaurantguru.com/Oskarbi-Lekeitio',
'#',
'https://oasisrestaurante.com/482-catalog_medium/menu-del-dia.jpg',
'SI'),


/* Willow's Tavern le faltan fotos y de todo */


('09002', 
'https://media-cdn.tripadvisor.com/media/photo-m/1280/18/02/f8/a1/photo1jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1c/c4/41/89/img-20210321-161124-largejpg.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-m/1280/14/d5/72/34/photo1jpg.jpg', 
'Jatetxea Goitiko','Mediterránea, Europea y Española',946843103,'Foru Enparantza, Lekeitio',DEFAULT,DEFAULT,DEFAULT,'LKT',2,
'https://www.tripadvisor.es/Restaurant_Review-g1069109-d10276593-Reviews-Jatetxea_Goitiko_Restaurante-Lekeitio_Province_of_Vizcaya_Basque_Country.html',
'#',
'#',
'https://es.restaurantguru.com/Goitiko-Lekeitio',
'#',
'https://oasisrestaurante.com/482-catalog_medium/menu-del-dia.jpg',
'SI'),


('09003', 
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1f/a2/63/39/caption.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1d/96/3f/31/caption.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1d/3b/d4/db/caption.jpg', 
'Antzarrak','Bar, Mediterránea y Española',4815162342,'Muelle Txatxo, Lekeitio',DEFAULT,DEFAULT,DEFAULT,'LKT',3,
'https://www.tripadvisor.es/Restaurant_Review-g1069109-d8800284-Reviews-Antzarrak-Lekeitio_Province_of_Vizcaya_Basque_Country.html',
'https://www.facebook.com/Antzarrak/',
'#',
'https://es.restaurantguru.com/Antzarrak-Lekeitio',
'#',
'https://oasisrestaurante.com/482-catalog_medium/menu-del-dia.jpg',
'SI'),


('09004', 
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1c/ce/d7/7e/erkiaga.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/0e/05/e1/7e/img-20161231-142245-largejpg.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-o/0e/57/9b/47/photo3jpg.jpg', 
'Erkiaga','Bar-Restaurante,<br>Comida Española, Vasca',944074399,'C/ Uribarren 6, Lekeitio',DEFAULT,DEFAULT,DEFAULT,'LKT',4,
'https://www.tripadvisor.es/Restaurant_Review-g1069109-d10413284-Reviews-Erkiaga-Lekeitio_Province_of_Vizcaya_Basque_Country.html',
'https://www.facebook.com/erkiaga2016/',
'#',
'https://es.restaurantguru.com/Erkiaga-Lekeitio',
'#',
null,
'SI'),

('09005', 
'https://media-cdn.tripadvisor.com/media/photo-o/0b/e2/3e/40/txatxo-kaia.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/0d/50/13/6b/photo0jpg.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-o/0d/eb/ff/a9/carne-a-la-brasa.jpg', 
'Erretegi Prim Asador','Bar-Restaurante,<br>Carne, Marisco, Mediterránea',946754832,'Txatxo Kaia, Lekeitio',DEFAULT,DEFAULT,DEFAULT,'LKT',5,
'https://www.tripadvisor.es/Restaurant_Review-g1069109-d10511006-Reviews-Erretegi_Prim_Asador-Lekeitio_Province_of_Vizcaya_Basque_Country.html#photos;aggregationId=101&albumid=101&filter=7&ff=472099253',
'#',
'https://asadorprim.com/', /* Buenísima Web  */
'https://es.restaurantguru.com/Erretegi-Prim-Asador-Lekeitio',
'#',
null,
'SI'),


('09006', 
'https://media-cdn.tripadvisor.com/media/photo-s/10/be/8a/d8/batzokia-jatetxea.jpg',
'https://media-cdn.tripadvisor.com/media/photo-s/1b/e4/c5/16/restaurante-batzokia.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-s/1b/e4/c5/19/restaurante-batzokia.jpg', /* Meter el rango de precios del restauranteguru.com */
'Batzokia Lekeitio','Comida Española y Vasca',635747407,'Sabino Arana No. 4, Lekeitio',DEFAULT,DEFAULT,DEFAULT,'LKT',6,
'https://www.tripadvisor.es/Restaurant_Review-g1069109-d10036379-Reviews-Restaurante_Batzokia_Lekeitio-Lekeitio_Province_of_Vizcaya_Basque_Country.html',
'#',
'#',
'https://es.restaurantguru.com/Restaurante-Batzokia-Lekeitio',
'#',
'https://oasisrestaurante.com/482-catalog_medium/menu-del-dia.jpg',
'SI')



";



// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaBARRESTAURANTES)) {
    echo "Inserción en la tabla BARRESTAURANTES exitosa <br>";
  } else {
    echo "Error al insertar en la tabla BARRESTAURANTES: " . mysqli_error($conn) . "<br>";
  }

?>