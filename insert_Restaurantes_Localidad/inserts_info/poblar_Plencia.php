<?php

/* PLENCIA */
$pueblaBARRESTAURANTES="INSERT INTO BARRESTAURANTES(ref_negocio,ruta_imagen1,ruta_imagen2,ruta_imagen3,
                                                    nombre,descripcion,telefono,direccion,veces_Votado, veces_Positivo,veces_Negativo,
                                                    ref_Localidad,cod_posiciones,
                                                    e_tripadvisor,e_facebook,e_web, e_restaurantGuru,e_theFork,e_menu,habilitado)
				VALUES(/*cod_barrestaurantes*/
          '12001',
'https://media-cdn.tripadvisor.com/media/photo-o/03/b2/e5/16/getlstd-property-photo.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/0d/b6/51/40/ensalada.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/17/3d/ea/f5/photo0jpg.jpg',
'Kai Eder','Comida Europea Y Española',682783366,
'Txurrua S/N, Plencia',DEFAULT,DEFAULT,DEFAULT,'PNZ',1,
'https://www.tripadvisor.es/Restaurant_Review-g1078426-d4067778-Reviews-Kai_Eder-Plentzia_Province_of_Vizcaya_Basque_Country.html',
'https://es-es.facebook.com/restaurante.kaieder/',
'#',
'https://es.restaurantguru.com/Kai-Eder-Plentzia',
'#',
'https://media-cdn.tripadvisor.com/media/photo-w/15/b6/97/88/photo0jpg.jpg',
'SI'),

('12002',
'https://media-cdn.tripadvisor.com/media/photo-o/10/22/7b/0d/photo0jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/17/54/48/be/photo1jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/12/b4/fb/5c/img-20180421-145016860.jpg',
'El Puerto','Comida Española y Vasca',946451646,
'Arrantzale Kalea, 1, Plencia',DEFAULT,DEFAULT,DEFAULT,'PNZ',2,
'https://www.tripadvisor.es/Restaurant_Review-g1078426-d2270707-Reviews-Restaurante_El_Puerto-Plentzia_Province_of_Vizcaya_Basque_Country.html#photos;aggregationId=101&albumid=101&filter=7&ff=277904743',
'https://www.facebook.com/elpuerto.plentzia/',
'#',
'https://es.restaurantguru.com/El-Puerto-Plentzia',
'#',
null,
'SI'),


('12003',
'https://media-cdn.tripadvisor.com/media/photo-o/12/2a/4f/e2/img-20180226-084935-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/12/2a/4f/df/img-20180226-085141-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/14/4c/64/f4/muy-bueno-todo-y-muy.jpg',
'Zuazua','Bar-Restaurante,<br>Comida rápidaEuropea',946773128,
'Calle/Iturgitxi 13, Plencia',DEFAULT,DEFAULT,DEFAULT,'PNZ',3,
'https://www.tripadvisor.es/Restaurant_Review-g1078426-d8024778-Reviews-Cafe_Bar_Zuazua_Zuazua-Plentzia_Province_of_Vizcaya_Basque_Country.html#photos;aggregationId=101&albumid=101&filter=7&ff=304762847',
'https://www.facebook.com/elpuerto.plentzia/',
'#',
'https://es.restaurantguru.com/Zuazua-Plentzia',
'#',
null,
'SI'),



('12004',
'https://media-cdn.tripadvisor.com/media/photo-o/12/2a/4f/e2/img-20180226-084935-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/21/c2/1c/9d/caption.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/08/eb/47/6a/kaian.jpg',
'kaian','Bar_Restaurante,<br>Comida Española y Contemporánea',946775470,
'C/Areatza 38 Plencia',DEFAULT,DEFAULT,DEFAULT,'PNZ',4,
'https://www.tripadvisor.es/Restaurant_Review-g1078426-d3963209-Reviews-Kaian-Plentzia_Province_of_Vizcaya_Basque_Country.html',
'https://www.facebook.com/elpuerto.plentzia/',
'https://kaianplentzia.com/',  /* Copiarle el código */
'https://es.restaurantguru.com/kaian-Plentzia',
'#',
null,
'SI'),


('12005',
'https://media-cdn.tripadvisor.com/media/photo-o/12/e4/f7/0f/es-un-local-que-da-a.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/1c/03/1f/e1/photo1jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1b/9f/f9/71/okela.jpg',
'Okela','Comida Mediterránea y Española,<br>Op. vegetarianas',946770213,
'C/ Jose Antonio Aguirre 3, Plencia',DEFAULT,DEFAULT,DEFAULT,'PNZ',5,
'https://www.tripadvisor.es/Restaurant_Review-g8560457-d2358086-Reviews-Okela-Gorliz_Province_of_Vizcaya_Basque_Country.html',
'https://es-es.facebook.com/restauranteokela/',
'https://www.gorlizokela.com/',  /* Copiarle el código, tambien */
'https://es.restaurantguru.com/kaian-Plentzia',
'#',
null,
'SI'),

('12006',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1b/6d/8e/06/excelente-terraza.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/1c/ee/56/82/photo1jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/1c/ee/56/81/photo0jpg.jpg',
'Batzoki Górliz','Bar_Restaurante,<br>Comida Española',946770009,
'Calle Itsasbide, 11 BAJO, Plencia',DEFAULT,DEFAULT,DEFAULT,'PNZ',6,
'https://www.tripadvisor.es/Restaurant_Review-g8560457-d15218105-Reviews-Batzoki-Gorliz_Province_of_Vizcaya_Basque_Country.html',
'#',
'#',  /* Copiarle el código, tambien */
'#',
'#',
null,
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