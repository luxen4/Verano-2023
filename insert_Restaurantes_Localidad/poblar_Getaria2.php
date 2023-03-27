<?php 

/* Getaria */
$pueblaBARRESTAURANTES="INSERT INTO BARRESTAURANTES(ref_negocio,ruta_imagen1,ruta_imagen2,ruta_imagen3,
nombre,descripcion,telefono,direccion,veces_Votado, veces_Positivo,veces_Negativo,
ref_Localidad,cod_posiciones,
e_tripadvisor,e_facebook,e_web, e_restaurantGuru,e_theFork,menu_premium,dto,habilitado)
				VALUES(/*cod_barrestaurantes*/
'05001',
'https://lh3.googleusercontent.com/p/AF1QipOrkRnugdaAptRDr4OkDKix0VTj1qQoaXM6OgyP=s1600-w400',
/* Sale la anterior mal https://media-cdn.tripadvisor.com/media/photo-w/13/c0/40/3f/photo3jpg.jpg 
https://mapsus.net/ES/alda-bier-561330*/
'https://media-cdn.tripadvisor.com/media/photo-m/1280/17/60/22/0f/photo0jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/17/60/22/10/photo1jpg.jpg',	
'Alda-Bier','Cervecería',605701679, /* 'Alda-Bier Garagardotegia' */
'Aldamar Kalea 20, Guetaria',101,1,100,'GTA',1,
'https://www.tripadvisor.es/Restaurant_Review-g1064419-d12690865-Reviews-Alda_Bier_Garagardotegia-Getaria_Province_of_Guipuzcoa_Basque_Country.html',
'https://www.facebook.com/aldabiergetaria/',
'#',
'https://es.restaurantguru.com/Alda-Bier-Garagardotegia-Spain',
'#',  /* GASTRORANKING https://gastroranking.es/r/alda-bier-garagardotegia_159355/ */
null,5,
'SI'),

('05009',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/22/3b/43/60/caption.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1d/bd/2b/c2/maruka-gastro.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1d/46/55/12/maruka-gastro.jpg',	
'Adrián','Bar-Restaurante',637117965,
'C/ ejemplo 17, Guetaria',DEFAULT,DEFAULT,DEFAULT,'GTA',5,
'https://www.tripadvisor.es/',
'https://www.facebook.com',
'#', 
'https://es.restaurantguru.com',
'https://www.thefork.es/', 
null,10,
'SI'),


('05002', /* Preguntarle si hay menú del dia */
'https://media-cdn.tripadvisor.com/media/photo-w/1c/24/dc/90/kaia-kaipe-restaurante.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/0f/99/fa/20/img-20170617-wa0023-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1a/0c/55/21/kaia-kaipe.jpg',	
'Kaia Kaipe','Marisco, Española, Saludable',943140500,
'General Arnao 4, Guetaria',DEFAULT,DEFAULT,DEFAULT,'GTA',2,
'https://www.tripadvisor.es/Restaurant_Review-g1064419-d1501313-Reviews-Kaia_Kaipe-Getaria_Province_of_Guipuzcoa_Basque_Country.html',
'https://www.facebook.com/Kaia-Kaipe-283504685161436/',
'http://www.kaia-kaipe.com/', /* Web para copiar */
'#', 
'#',
null,15,
'SI'),


('05003',
'https://media-cdn.tripadvisor.com/media/photo-o/09/ae/c8/66/itxaspe.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/0c/9c/90/30/photo0jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/09/ae/c8/71/itxaspe.jpg',	
'Itxaspe','Cocina Mediterranea y Española',943504420,
'C/ Nagusia 8, Guetaria',DEFAULT,DEFAULT,DEFAULT,'GTA',3,
'https://www.tripadvisor.es/Restaurant_Review-g1064419-d7249249-Reviews-Itxaspe-Getaria_Province_of_Guipuzcoa_Basque_Country.html',
'https://www.facebook.com/itxaspetaberna',
'#',
'https://es.restaurantguru.com/Itxaspe-Getaria',
'#', 
null,20,
'SI'),


('05004',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/13/b2/8f/db/bar-kasu-getaria.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/18/e2/82/45/kasu.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/13/b2/8e/c1/gazpacho-de-remolacha.jpg',	
'Kasu','Mediterranea, Española y Vasca',943252471,
'C/ Nagusia 14, Guetaria',DEFAULT,DEFAULT,DEFAULT,'GTA',4,
'https://www.tripadvisor.es/Restaurant_Review-g1064419-d14175029-Reviews-Kasu-Getaria_Province_of_Guipuzcoa_Basque_Country.html',
'https://www.facebook.com/KasuGetaria?ref=py_c',
'#',
'https://es.restaurantguru.com/Kasu-Getaria',
'#', 
null,25,
'SI'),


('05005',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/22/3b/43/60/caption.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1d/bd/2b/c2/maruka-gastro.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1d/46/55/12/maruka-gastro.jpg',	
'Maruka Gastro','Cocina Mexicana y Española',943140872,
'C/ Nagusia 17, Guetaria',DEFAULT,DEFAULT,DEFAULT,'GTA',5,
'https://www.tripadvisor.es/Restaurant_Review-g1064419-d23483184-Reviews-Maruka_Gastro-Getaria_Province_of_Guipuzcoa_Basque_Country.html#photos;aggregationId=101&albumid=101&filter=7&ff=498936770',
'https://www.facebook.com/KasuGetaria?ref=py_c',
'https://marukagastro.com/', /* Copiar */
'https://es.restaurantguru.com/Kasu-Getaria',
'#', 
null,30,
'SI'),


('05006',
'https://media-cdn.tripadvisor.com/media/photo-w/13/c3/68/a8/photo9jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/08/ed/28/e1/the-mayflower.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/12/b5/a3/55/photo0jpg.jpg',	
'Asador Mayflower','Europea, Española, Saludable',943140658,
'Lugar Katrapona 4, Guetaria',DEFAULT,DEFAULT,DEFAULT,'GTA',6,
'https://www.tripadvisor.es/Restaurant_Review-g1064419-d2174498-Reviews-Asador_Mayflower-Getaria_Province_of_Guipuzcoa_Basque_Country.html',
'https://www.facebook.com/pages/Bar%20Asador%20Mayflower/171979769502862/',
'#', 
'https://es.restaurantguru.com/Asador-Mayflower-Getaria',   /* https://placespain.com/asador-mayflower-getaria-fd32372 */
'#', 
null,35,
'SI')




";




// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaBARRESTAURANTES)) {
    echo "Inserción en la tabla BARRESTAURANTES(Getaria) exitosa <br>";
  } else {
    echo "Error al insertar en la tabla BARRESTAURANTES(Getaria): " . mysqli_error($conn) . "<br>";
  }
  






?>


