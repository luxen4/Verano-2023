<?php

/* SAN JUAN DE LUZ */
$pueblaBARRESTAURANTES="INSERT INTO BARRESTAURANTES(ref_negocio,ruta_imagen1,ruta_imagen2,ruta_imagen3,
                                                    nombre,descripcion,telefono,direccion,veces_Votado, veces_Positivo,veces_Negativo,
                                                    ref_Localidad,cod_posiciones,
                                                    e_tripadvisor,e_facebook,e_web, e_restaurantGuru,e_theFork,e_menu,habilitado)
				VALUES(/*cod_barrestaurantes*/
          '13001',
'https://media-cdn.tripadvisor.com/media/photo-w/0d/7a/0c/ca/exterior-with-patio.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/07/f4/80/33/le-majestic.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/16/97/fe/03/photo0jpg.jpg',
'Le Majestic','Francesa',33559260136,
'Place Louis XIV, St-Jean-de-Luz',DEFAULT,DEFAULT,DEFAULT,'SJL',1,
'https://www.tripadvisor.es/Restaurant_Review-g187089-d4993005-Reviews-Le_Majestic-Saint_Jean_de_Luz_Basque_Country_Pyrenees_Atlantiques_Nouvelle_Aquita.html',
'https://www.facebook.com/seb.lemajestic',
'http://www.oriokobarra.com/',
'https://es.restaurantguru.com/Le-Majestic-Saint-Jean-de-Luz',
'#',
null,
'SI'),


('13002',
'https://media-cdn.tripadvisor.com/media/photo-w/0c/b5/02/19/photo0jpg.jpg',   /* Falta la fachada, que la tendré que saca yo */
'https://media-cdn.tripadvisor.com/media/photo-o/0b/de/39/2c/20160706-132657-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/1d/96/27/ce/caption.jpg',
'Le Prado','Francesa, Europea y Vasca',33559263433,
'3 Promenade de la Plage, St-Jean-de-Luz',DEFAULT,DEFAULT,DEFAULT,'SJL',2,
'https://www.tripadvisor.es/Restaurant_Review-g187089-d3566985-Reviews-Restaurant_Le_Prado-Saint_Jean_de_Luz_Basque_Country_Pyrenees_Atlantiques_Nouvell.html',
'https://www.facebook.com/leprado.saintjeandeluz/',
'#',
'https://es.restaurantguru.com/Le-Prado-Saint-Jean-de-Luz',
'#',
null,
'SI'),

('13003',
'https://media-cdn.tripadvisor.com/media/photo-o/04/7d/d9/a8/macadam-caffe.jpg',   /* Falta la fachada, que la tendré que saca yo */
'https://media-cdn.tripadvisor.com/media/photo-m/1280/10/3f/94/2f/20170729-201604-largejpg.jpg',  /* Decirle al tio que quite las fotos de las patatas aceleradas */
'https://media-cdn.tripadvisor.com/media/photo-o/19/df/61/78/20191030-204132-largejpg.jpg',
'Macadam Caffè','Internacional, Europea, Fusión',33559245162,
'3 Boulevard Victor Hugo, St-Jean-de-Luz',DEFAULT,DEFAULT,DEFAULT,'SJL',3,
'https://www.tripadvisor.es/Restaurant_Review-g187089-d3428062-Reviews-Macadam_Caffe-Saint_Jean_de_Luz_Basque_Country_Pyrenees_Atlantiques_Nouvelle_Aqui.html',
'https://www.facebook.com/MacadamCaffe/',  /* Buén juego de colores */
'https://carta.menu/restaurants/saint-jean-de-luz/macadam-caffe', /* Copiar página */
'https://es.restaurantguru.com/Macadam-Caffe-Saint-Jean-de-Luz',
'#',
null,
'SI'),


('13004',
'https://media-cdn.tripadvisor.com/media/photo-w/21/e0/47/7a/restaurant-la-cueva.jpg',   /* Fachada Regular */
'https://media-cdn.tripadvisor.com/media/photo-w/22/13/2c/a1/caption.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/21/b9/ac/df/caption.jpg',
'Restaurant La Cueva','Europea, Opciones vegetarianas',33624124022,
'32 Rue Joseph Garat, St-Jean-de-Luz',DEFAULT,DEFAULT,DEFAULT,'SJL',4,
'https://www.tripadvisor.es/Restaurant_Review-g187089-d1327805-Reviews-Restaurant_La_Cueva-Saint_Jean_de_Luz_Basque_Country_Pyrenees_Atlantiques_Nouvell.html',
'https://www.facebook.com/lacuevassaintjeandeluz',
'#',
'https://es.restaurantguru.com/LA-CUEVA-Saint-Jean-de-Luz',
'#',
null,
'SI'),

('13005',
'https://media-cdn.tripadvisor.com/media/photo-s/02/94/f5/37/attrape-maladies.jpg', /*	https://media-cdn.tripadvisor.com/media/photo-w/1b/08/7f/87/photo3jpg.jpg */
'https://media-cdn.tripadvisor.com/media/photo-w/15/48/ae/e9/le-burger-basque.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/06/a8/37/e9/paella.jpg',
'Le Dauphin','Francesa, Bar, Barbacoa',33559260069,
'39 Place Maurice Ravel',DEFAULT,DEFAULT,DEFAULT,'SJL',5,
'https://www.tripadvisor.es/Restaurant_Review-g187089-d1797192-Reviews-Le_Dauphin-Saint_Jean_de_Luz_Basque_Country_Pyrenees_Atlantiques_Nouvelle_Aquitai.html#photos;aggregationId=101&albumid=101&filter=7&ff=324383272',
'https://www.facebook.com/lacuevassaintjeandeluz',
'#',  /*  https://www.guide-du-paysbasque.com/en/tourism/restaurants/restaurants/saint-jean-de-luz-75/restaurant-le-dauphin-1156.html    Para Cabecera */
'https://es.restaurantguru.com/Le-Dauphin-Saint-Jean-de-Luz',
'#',
null,
'SI'),

('13006',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/14/71/c6/5b/restaurant-chez-pablo.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/20/bf/2f/0c/chipirons-et-riz.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/18/c8/76/aa/restaurant-chez-pablo.jpg',
'Restaurant Chez Pablo','Francesa, Europea, Española',33559263781,
'5, Rue Mademoiselle Etcheto',DEFAULT,DEFAULT,DEFAULT,'SJL',6,
'https://www.tripadvisor.es/Restaurant_Review-g187089-d939969-Reviews-Restaurant_Chez_Pablo-Saint_Jean_de_Luz_Basque_Country_Pyrenees_Atlantiques_Nouvel.html',
'https://www.facebook.com/ChezPablo/',
'http://www.restaurant-chez-pablo.com/',  /* Para Cabecera */
'https://es.restaurantguru.com/Le-Dauphin-Saint-Jean-de-Luz',
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