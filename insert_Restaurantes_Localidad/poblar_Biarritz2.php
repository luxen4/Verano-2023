<?php 

/* BIARRITZ */
$pueblaBARRESTAURANTES="INSERT INTO BARRESTAURANTES(ref_negocio,ruta_imagen1,ruta_imagen2,ruta_imagen3,
                                                    nombre,descripcion,telefono,direccion,veces_Votado, veces_Positivo,veces_Negativo,
                                                    ref_Localidad,cod_posiciones,
                                                    e_tripadvisor,e_facebook,e_web, e_restaurantGuru,e_theFork,menu_premium,dto,habilitado)
				VALUES(/*cod_barrestaurantes*/
'02001',
'https://media-cdn.tripadvisor.com/media/photo-w/17/a4/f1/4a/sea-view-terrace.jpg',
'https://media-cdn.tripadvisor.com/media/photo-s/1d/53/34/d1/dodin.jpg', /* https://media-cdn.tripadvisor.com/media/photo-w/0f/cb/00/da/roche-percee.jpg	Si acepta, que meta esta con más ancho*/
'https://media-cdn.tripadvisor.com/media/photo-w/1d/53/34/d1/dodin.jpg',
'Dodin','Postres,<br>Cocina Francesa y Europea',33559221043,
'Q. de la Grande Plage, Biarritz',DEFAULT,DEFAULT,DEFAULT,'BRZ',1,
'https://www.tripadvisor.es/Restaurant_Review-g187080-d3577044-Reviews-Dodin-Biarritz_Basque_Country_Pyrenees_Atlantiques_Nouvelle_Aquitaine.html#photos;aggregationId=101&albumid=101&filter=7&ff=491992273',
'https://www.facebook.com/dodinbiarritz/',
'https://dodin-biarritz.fr/',
'hhttps://es.restaurantguru.com/Dodin-Biarritz',
'#',
null,5,
'SI'),

('02002',
'https://media-cdn.tripadvisor.com/media/photo-w/14/27/b1/22/la-vue-depuis-la-terrasse.jpg', /* https://media-cdn.tripadvisor.com/media/photo-w/18/0e/35/f2/le-galion.jpg */
'https://media-cdn.tripadvisor.com/media/photo-w/14/27/b1/22/la-vue-depuis-la-terrasse.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/0b/8c/ab/57/plateau-de-fruits-de.jpg', /* Torre de Mariscos */
'Le Galion','Marisco,<br>Cocina Francesa y Europea',33564115640,
'17 B. General de Gaulle, Biarritz',DEFAULT,DEFAULT,DEFAULT,'BRZ',2,
'https://www.tripadvisor.es/Restaurant_Review-g187080-d1998731-Reviews-Le_Galion-Biarritz_Basque_Country_Pyrenees_Atlantiques_Nouvelle_Aquitaine.html',
'#',
'#', /* http://www.restaurant-legalion.net/  Tia tumbada oyendo música */  /* Mal enrutado por Tripadvisor */
'#',
'#',
null,10,
'SI'),

('02003',                                                                      /* https://media-cdn.tripadvisor.com/media/photo-w/1b/a0/b1/31/photo0jpg.jpg */
'https://media-cdn.tripadvisor.com/media/photo-s/1b/a0/b1/31/photo0jpg.jpg', /* 	https://media-cdn.tripadvisor.com/media/photo-o/07/4a/62/9d/bar-de-la-cote.jpg */
'https://media-cdn.tripadvisor.com/media/photo-w/0b/e0/67/62/magret-de-canard-excellent.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/0c/c6/83/de/20160830-221757-largejpg.jpg', 
'Bar de la Cote','Marisco,<br>Cocina Francesa y Europea',33559223067,
'10 B. Prince de Galles, Biarritz',DEFAULT,DEFAULT,DEFAULT,'BRZ',3,
'https://www.tripadvisor.es/Restaurant_Review-g187080-d5259675-Reviews-Bar_de_la_Cote-Biarritz_Basque_Country_Pyrenees_Atlantiques_Nouvelle_Aquitaine.html#photos;aggregationId=101&albumid=101&filter=7&ff=289303044',
'https://www.facebook.com/bardelacote/',
'https://bardelacotedesbasques.com/', /* Ojo a los efectos */
'https://es.restaurantguru.com/Bar-de-la-Cote-Biarritz',
'#',
null,15, 
'SI'),

('02004', 
'https://media-cdn.tripadvisor.com/media/photo-o/11/f2/7e/75/superbe-vue-sur-l-ocean.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/1b/98/85/5b/biarritz-beach.jpg', /* 	https://media-cdn.tripadvisor.com/media/photo-w/19/0d/c5/27/photo0jpg.jpg */
'https://media-cdn.tripadvisor.com/media/photo-w/12/b5/0a/29/photo0jpg.jpg', 
'Biarritz Beach','Marisco,<br>Cocina Francesa y Europea',33559858931,
'17 B. Général de Gaulle, Biarritz',DEFAULT,DEFAULT,DEFAULT,'BRZ',4,
'https://www.tripadvisor.es/Restaurant_Review-g187080-d13456644-Reviews-Biarritz_Beach-Biarritz_Basque_Country_Pyrenees_Atlantiques_Nouvelle_Aquitaine.html#photos;aggregationId=101&albumid=101&filter=7&ff=498364361',
'https://www.facebook.com/BIARRITZBeach/', 
'#', 
'#',
'https://www.thefork.es/restaurante/biarritz-beach-r495513',
null,20,
'SI'),

/* 
29 boulevard general de gaulle 64200 Biarritz, Francia  Bar de La plage Pub que no defrauda https://www.facebook.com/bardelaplagebiarritz/*/

('02005', 
'https://media-cdn.tripadvisor.com/media/photo-m/1280/14/51/e6/ba/20180826-110637-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/19/1a/5f/05/buffet-de-desserts.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-w/0a/b8/eb/34/photo1jpg.jpg',
'Grande Plage','Cocina Francesa y Europea,<br>Opciones Vegetarianas',33559227788, /* Le Cafe de la Grande Plage */
'1 Av. Edouard VII, Biarritz',DEFAULT,DEFAULT,DEFAULT,'BRZ',5,
'https://www.tripadvisor.es/Restaurant_Review-g187080-d2250669-Reviews-Le_Cafe_de_la_Grande_Plage-Biarritz_Basque_Country_Pyrenees_Atlantiques_Nouvelle_.html#photos;aggregationId=101&albumid=101&filter=7&ff=461212237',
'https://www.facebook.com/bardelaplagebiarritz/', 
'#',
'#',
'https://www.thefork.es/restaurante/le-cafe-de-la-grande-plage-r66039',
null,25,
'SI'),

('02006', /* Trattoria - La Pizzeria Des Arceaux Buén sitio para quedar bién*/
'	https://media-cdn.tripadvisor.com/media/photo-s/06/6b/1b/89/pizzeria-trattoria-des.jpg',
'https://media-cdn.tripadvisor.com/media/photo-s/0c/ae/a4/c5/photo1jpg.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-p/19/29/95/61/img-20190903-wa0014-largejpg.jpg',
'Trattoria','Italiana, Pizza,<br> Opciones Vegetarianas',33559241147, /* Trattoria - La Pizzeria Des Arceaux */
'20 Av. Edouard VI, Biarritz',DEFAULT,DEFAULT,DEFAULT,'BRZ',6,
'https://www.tripadvisor.es/Restaurant_Review-g187080-d3392822-Reviews-Trattoria_La_Pizzeria_Des_Arceaux-Biarritz_Basque_Country_Pyrenees_Atlantiques_No.html',
'https://www.facebook.com/latrattoriabiarritz/', 
'https://la-pizzeria-biarritz.com/',  /* Me encantan los efectos y se pueden sacar iconos, */
'https://es.restaurantguru.com/Pizzeria-Des-Arcades-La-Trattoria-Biarritz',
'#',
null,30,
'SI')
";



// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaBARRESTAURANTES)) {
    echo "Inserción en la tabla BARRESTAURANTES(Biarritz) exitosa <br>";
  } else {
    echo "Error al insertar en la tabla BARRESTAURANTES(Biarritz): " . mysqli_error($conn) . "<br>";
  }

?> 
<!--/* Para imagen de Biarritz, para Destinos https://media-cdn.tripadvisor.com/media/photo-w/19/58/5b/8e/biarritz.jpg */-->