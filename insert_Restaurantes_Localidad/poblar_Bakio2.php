<?php /* BAKIO */
$pueblaBARRESTAURANTES="INSERT INTO BARRESTAURANTES(ref_negocio,ruta_imagen1,ruta_imagen2,ruta_imagen3,
                              nombre,descripcion,telefono,direccion,veces_Votado, veces_Positivo,veces_Negativo,
                              ref_Localidad,cod_posiciones,
                              e_tripadvisor,e_facebook,e_web, e_restaurantGuru,e_theFork,menu_premium,dto,habilitado)
VALUES(/*cod_barrestaurantes*/
'BAK-001',
'https://media-cdn.tripadvisor.com/media/photo-s/06/b2/54/87/gotzon.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/06/37/6d/b5/linguado.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/0b/8f/95/b2/gotzon-jatetxea.jpg',
'Gotzon Jatetxea','Marisco,<br>Cocina Mediterránea y Europea',946194330,
'Luzarragako Bidea 2, Bakio',DEFAULT,DEFAULT,DEFAULT,'BAK',1,
'https://www.tripadvisor.es/Restaurant_Review-g1069106-d4754412-Reviews-Gotzon_Jatetxea-Bakio_Province_of_Vizcaya_Basque_Country.html#photos;aggregationId=101&albumid=101&filter=7&ff=341077764',
'https://www.facebook.com/gotzonjatetxea/community/',
'https://www.gotzonjatetxea.com/',
'https://es.restaurantguru.com/Gotzon-Jatetxea-Bakio',
'#',
/*'https://oasisrestaurante.com/482-catalog_medium/menu-del-dia.jpg',*/
null,5,
'SI'),

('BAK-002',
'https://media-cdn.tripadvisor.com/media/photo-o/10/a6/94/ea/20170907-153643-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/1a/d8/03/cf/photo1jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/17/dc/bf/4d/photo2jpg.jpg',
'La Bakiense','Bar-Restaurante,<br>Cocina Española y Vasca',946194232, /* La Bakiense Jatetxea */
'Luzarragako Bidea 2, Bakio',DEFAULT,DEFAULT,DEFAULT,'BAK',2,
'https://www.tripadvisor.es/Restaurant_Review-g1069106-d4754413-Reviews-La_Bakiense_Jatetxea-Bakio_Province_of_Vizcaya_Basque_Country.html',
'#',
'#',
'https://es.restaurantguru.com/Baquiense-Bakio',
'#',
null,10,
'SI'),

('BAK-003',
'https://media-cdn.tripadvisor.com/media/photo-w/18/15/b5/fa/img-20190622-131653-hdr.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/18/a9/18/14/croquetas-caseras.jpg',
'https://media-cdn.tripadvisor.com/media/photo-p/14/01/27/0a/restaurante-arimune.jpg',
'Arimune','Bar-Restaurante,<br>Cocina Europea y Española',946194022,  /* 652 73 49 16 de restaurantguru */
'Bentako Plazea 1, Bakio',DEFAULT,DEFAULT,DEFAULT,'BAK',3,
'https://www.tripadvisor.es/Restaurant_Review-g1069106-d1897372-Reviews-Restaurante_Arimune-Bakio_Province_of_Vizcaya_Basque_Country.html',
'https://www.facebook.com/hotelarimune/',
'https://arimune.es/',  /* Copiar los efectos de las fotos */
'https://es.restaurantguru.com/Arimune-Bakio',
'#',
null,15,
'SI'),

('BAK-004',
'https://media-cdn.tripadvisor.com/media/photo-w/0c/85/dd/74/img-20160814-152414-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/18/24/99/b0/img-20190701-wa0022-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/15/82/20/19/la-parra.jpg',
'La parra','Pizza,<br>Opciones vegetarianas y veganas',659862471,
'Areagako Bidea 4, Bakio',DEFAULT,DEFAULT,DEFAULT,'BAK',4,
'https://www.tripadvisor.es/Restaurant_Review-g1069106-d7033027-Reviews-La_Parra-Bakio_Province_of_Vizcaya_Basque_Country.html#photos;aggregationId=101&albumid=101&filter=7&ff=464585352',
'https://www.facebook.com/hotelarimune/',
'http://laparrabakio.com/',  /* Copiar el diseño de la carta */  /* http://laparrabakio.com/BARLAPARRA.pdf */
'https://es.restaurantguru.com/La-Parra-Bakio',
'#',
null,20,
'SI'),

('BAK-005',
'https://media-cdn.tripadvisor.com/media/photo-o/0f/81/ef/c3/restaurante-bolibar.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/14/1b/1a/3a/img-20180716-wa0025-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/13/ec/26/6b/img-20180730-014558-868.jpg',
'Bar Bolibar','Bar-Restaurante,<br>Cocina Mediterránea y Española',946194985,
'Portuondoko Bidea 1, Bakio',DEFAULT,DEFAULT,DEFAULT,'BAK',5,
'https://www.tripadvisor.es/Restaurant_Review-g1069106-d10449858-Reviews-Bar_Bolibar-Bakio_Province_of_Vizcaya_Basque_Country.html',
'https://www.facebook.com/BarBolibarbakio',
'#',
'https://es.restaurantguru.com/Bar-Bolibar-Bakio',
'#',
null,25,
'SI'),

('BAK-006',
'https://media-cdn.tripadvisor.com/media/photo-w/14/58/46/b3/photo0jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/10/e1/08/e4/arroz-con-leche.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/10/e1/08/9d/cordon-bleu.jpg',
'Bar Itsasargi','Bar-Restaurante,<br>Cocina Española y Vasca',946193193,
'Zarrakoa Bidea 7, Bakio',DEFAULT,DEFAULT,DEFAULT,'BAK',6,
'https://www.tripadvisor.es/Restaurant_Review-g1069106-d8023546-Reviews-Bar_Itsasargi-Bakio_Province_of_Vizcaya_Basque_Country.html',
'https://www.facebook.com/permalink.php?story_fbid=3555954531127671&id=190050341051457',
'https://baritsasargi.com/',
'https://es.restaurantguru.com/Bar-Bolibar-Bakio',
'#',
null,30,
'SI')

";


// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaBARRESTAURANTES)) {
    echo "Inserción en la tabla BARRESTAURANTES(Bakio) exitosa <br>";
  } else {
    echo "Error al insertar en la tabla BARRESTAURANTES(Bakio): " . mysqli_error($conn) . "<br>";
  }

?>