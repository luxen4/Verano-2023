<?php

/* HENDAYA */
$pueblaBARRESTAURANTES="INSERT INTO BARRESTAURANTES(ref_negocio,ruta_imagen1,ruta_imagen2,ruta_imagen3,
                                                    nombre,descripcion,telefono,direccion,veces_Votado, veces_Positivo,veces_Negativo,
                                                    ref_Localidad,cod_posiciones,
                                                    e_tripadvisor,e_facebook,e_web, e_restaurantGuru,e_theFork,habilitado)
				VALUES(/*cod_barrestaurantes*/
          '06001',
'https://media-cdn.tripadvisor.com/media/photo-w/1d/11/a7/35/caption.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/12/f1/8a/72/chuleta.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1d/2f/bd/34/bavette-d-aloyau-a-l.jpg',
'Casino Hendaye','Pub restaurante,<br>Comida Francesa',33559480248,
'121 Boulevard De La Mer, 64700 Hendaya',DEFAULT,DEFAULT,DEFAULT,'HDY',1,
'https://www.tripadvisor.es/Restaurant_Review-g196509-d23384104-Reviews-Restaurant_Casino_Hendaye-Hendaye_Basque_Country_Pyrenees_Atlantiques_Nouvelle_A.html#photos;aggregationId=101&albumid=101&filter=7&ff=487696182',
'https://www.facebook.com/RestaurantCasinoHendaye/',
'https://casino-hendaye.com/',  /* Buena barra de navegación  */
'https://es.restaurantguru.com/Restaurant-du-Casino-dHendaye-Hendaye', /* Sacar de aquí fos de platos */
'#',
'SI'),
 


('06002',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/18/15/a4/62/brasserie-solsol.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/1b/b2/e7/0f/20200730-214133-largejpg.jpg', /* 	https://media-cdn.tripadvisor.com/media/photo-o/17/88/8b/33/20190514-210258-largejpg.jpg */
'https://media-cdn.tripadvisor.com/media/photo-m/1280/17/50/97/22/photo2jpg.jpg',
'LE SOLSOL','Francesa, Op. vegetarianas y veganas',33535398306,
'123 Boulevard De La Mer,<br>Hendaya',DEFAULT,DEFAULT,DEFAULT,'HDY',2,
'https://www.tripadvisor.es/Restaurant_Review-g196509-d12571707-Reviews-Restaurant_LE_SOLSOL-Hendaye_Basque_Country_Pyrenees_Atlantiques_Nouvelle_Aquita.html#photos;aggregationId=101&albumid=101&filter=7&ff=498723051',
'https://www.facebook.com/team.patasab/?ref=page_internal',
'https://www.le-solsol-restaurant-hendaye.com/',    /* Buena barra de navegación  */
'https://es.restaurantguru.com/Le-Sol-Sol-Hendaye', /* Sacar de aquí fos de platos */
'#',
'SI'),

('06003',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1a/c3/9e/12/notre-terrasse.jpg', /* https://media-cdn.tripadvisor.com/media/photo-o/0f/dd/ed/2d/belle-terrasse.jpg */ /* 	https://media-cdn.tripadvisor.com/media/photo-m/1280/1a/c3/9e/19/notre-terrasse.jpg */
'https://media-cdn.tripadvisor.com/media/photo-w/12/bf/68/65/la-bretonne-pommes-caramel.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-o/16/25/23/36/dsc-0495-largejpg.jpg',
'Creperie Iguzkian','Francesa, Europea, Op. vegetarianas',33559202073,
'82 Avenue des Mimosas,<br>Hendaya',DEFAULT,DEFAULT,DEFAULT,'HDY',3,
'https://www.tripadvisor.es/Restaurant_Review-g196509-d8307240-Reviews-Creperie_Iguzkian-Hendaye_Basque_Country_Pyrenees_Atlantiques_Nouvelle_Aquitaine.html',
'https://www.facebook.com/Iguzkian/',
'https://www.creperiebrasserieiguzkian.fr/',
'https://es.restaurantguru.com/Creperie-Iguzkian-Hendaye', /* Sacar de aquí fos de platos */
'#',
'SI'),

('06004',  /* Se me ocurre yo en todos sitios haciendome fotos con la comida */
'https://media-cdn.tripadvisor.com/media/photo-m/1280/17/22/62/a6/terrasse-sur-la-promenade.jpg', /* https://media-cdn.tripadvisor.com/media/photo-o/0f/dd/ed/2d/belle-terrasse.jpg */ /* 	https://media-cdn.tripadvisor.com/media/photo-m/1280/1a/c3/9e/19/notre-terrasse.jpg */
'https://media-cdn.tripadvisor.com/media/photo-m/1280/19/ff/1a/75/parecida-a-la-tipica.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-w/17/4c/01/ca/bar-a-manger.jpg',
'Bar a Manger','Italiana, Pizza',33559034217,
'123 boulevard de la Mer,<br>Hendaya',DEFAULT,DEFAULT,DEFAULT,'HDY',4,
'https://www.tripadvisor.es/Restaurant_Review-g196509-d17243527-Reviews-Bar_a_Manger-Hendaye_Basque_Country_Pyrenees_Atlantiques_Nouvelle_Aquitaine.html',
'https://www.facebook.com/baramanger64/photos/',
'https://pizzeria-baramanger.fr/', /* Buena Web */
'https://es.restaurantguru.com/Baramanger-Hendaye-Hendaye',
'#',
'SI'),

('06005',
'https://media-cdn.tripadvisor.com/media/photo-o/0f/d6/20/c2/dsc-0731-largejpg.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-w/15/f2/78/8a/olivier.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-m/1280/15/d4/55/88/cafe-liegois.jpg',
'Olivier','Francesa, Europea',33559200329,
'115 Bd de la Mer,<br>Hendaya',DEFAULT,DEFAULT,DEFAULT,'HDY',5,
'https://www.tripadvisor.es/Restaurant_Review-g196509-d4366881-Reviews-Olivier-Hendaye_Basque_Country_Pyrenees_Atlantiques_Nouvelle_Aquitaine.html',
'https://www.facebook.com/restaurant.olivier.hendaye',
'#',
'https://fr.restaurantguru.com/Olivier-Hendaye',
'#',
'SI'),


('06006',  /* El de la plaza de toros */
'https://media-cdn.tripadvisor.com/media/photo-o/09/34/76/a0/la-pinta.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-w/10/31/c6/dd/photo0jpg.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-w/14/fa/f6/7a/photo3jpg.jpg',
'La Pinta','Europea, Española y Vasca',33559481212,
'Plaza Sokoburu<br>64700 Hendaya',DEFAULT,DEFAULT,DEFAULT,'HDY',6,
'https://www.tripadvisor.es/Restaurant_Review-g196509-d1335574-Reviews-La_Pinta-Hendaye_Basque_Country_Pyrenees_Atlantiques_Nouvelle_Aquitaine.html',
'#',
'https://lapintasergeblanco.com/es/',  /* Buena Web */ /* https://www.flixbus.es/rutas/hendaya-valence-francia */
'https://es.restaurantguru.com/La-Pinta-Hendaye',
'#',
'SI')


";



// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaBARRESTAURANTES)) {
    echo "Inserción en la tabla BARRESTAURANTES exitosa <br>";
  } else {
    echo "Error al insertar en la tabla BARRESTAURANTES: " . mysqli_error($conn) . "<br>";
  }

?>