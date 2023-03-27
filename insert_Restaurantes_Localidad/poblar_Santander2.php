<?php

/* SANTANDER */
$pueblaBARRESTAURANTES="INSERT INTO BARRESTAURANTES(ref_negocio,ruta_imagen1,ruta_imagen2,ruta_imagen3,
                                                    nombre,descripcion,telefono,direccion,veces_Votado, veces_Positivo,veces_Negativo,
                                                    ref_Localidad,cod_posiciones,
                                                    e_tripadvisor,e_facebook,e_web, e_restaurantGuru,e_theFork,menu_premium,dto,habilitado)
				VALUES(/*cod_barrestaurantes*/
'15001',
'https://media-cdn.tripadvisor.com/media/photo-w/10/20/62/4c/parte-de-la-terraza-que.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/12/c2/c1/5a/photo0jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/10/20/62/8f/ricas-rabas.jpg',
'Panorama','Internacional, Mediterránea y Europea',686388007,
'Av. Manuel García Lago 9, Santander',DEFAULT,DEFAULT,DEFAULT,'STR',1,
'https://www.tripadvisor.es/Restaurant_Review-g187484-d12290938-Reviews-Panorama-Santander_Cantabria.html#photos;aggregationId=101&albumid=101&filter=7&ff=428280706',
'https://www.facebook.com/panoramasantander',
'https://panoramasantander.com/',/* Web propia, no se puede hacer peor una web */
'https://es.restaurantguru.com/Panorama-Santander-Santander',
'https://www.thefork.es/restaurante/panorama-r367681',   /* Pillar de aquí cosas pa mi web */
null,5,
'SI'),

('15002',
'https://media-cdn.tripadvisor.com/media/photo-w/08/aa/29/50/el-parque-de-trueba.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/14/8e/34/ee/caption.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/18/2d/c3/e6/pulpo.jpg',
'El Parque de Trueba','Mediterránea, Europea y Española',942271032,
'Calle Manuel Garcia Lago 2, Santander',DEFAULT,DEFAULT,DEFAULT,'STR',2,
'https://www.tripadvisor.es/Restaurant_Review-g187484-d2302202-Reviews-Restaurante_El_Parque_de_Trueba-Santander_Cantabria.html',
'https://www.facebook.com/parquedetrueba/',
'https://restauranteelparquedetrueba.com/',/* Web propia, ejemplar */
'#',
'#',
null,10,   
'SI'),


('15003',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/18/aa/80/d9/cormoran-by-sergi-arola.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/15/56/20/98/img-20181111-154155-008.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/17/e2/ea/f3/photo1jpg.jpg',
'Cormorán','Mediterránea, Europea, Fusión',942747358,
'El Sardinero Playa del Sardinero, Santander',DEFAULT,DEFAULT,DEFAULT,'STR',3,
'https://www.tripadvisor.es/Restaurant_Review-g187484-d999398-Reviews-Cormoran-Santander_Cantabria.html#photos;aggregationId=101&albumid=101&filter=7&ff=332241386',
'https://www.facebook.com/cormoransantander/',
'https://www.bonviveur.es/restaurantes/cormoran-la-reconversion-de-un-clasico-de-santander',/* Web propia, ejemplar */
'https://es.restaurantguru.com/The-Old-Cormoran-Tavern-Santander',
'#',
null,15,   
'SI'),


('15004', /* Mexicano */
'https://media-cdn.tripadvisor.com/media/photo-o/0a/94/74/b1/20160313-140620-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/0f/05/9a/23/img-20170418-153241-largejpg.jpg',  /*Hemos repetido y mejor aun si cabe Foto de viajero enviada por Zelia (abr de 2017) */
'https://media-cdn.tripadvisor.com/media/photo-w/0f/05/9a/27/img-20170418-152006-largejpg.jpg',
'Mar de Cortes','Mexicana, Latina y Sudamericana',942272605,
'Ruben Dario Barrio EL Collado, Santander',DEFAULT,DEFAULT,DEFAULT,'STR',4,
'https://www.tripadvisor.es/Restaurant_Review-g187484-d3419262-Reviews-Mar_de_Cortes-Santander_Cantabria.html#photos;aggregationId=101&albumid=101&filter=7&ff=175026482',
'https://www.facebook.com/Mar-de-Cortes-547091915329757/',
'#',
'https://es.restaurantguru.com/Mar-de-Cortes-Santander',
'#',
null,20,
'SI'),


('15005', /* Cojonudo */
'https://media-cdn.tripadvisor.com/media/photo-w/08/cf/4e/7b/restaurante-parrilla.jpg', /* https://media-cdn.tripadvisor.com/media/photo-w/08/cf/4e/8d/restaurante-parrilla.jpg */
'https://media-cdn.tripadvisor.com/media/photo-w/17/3e/34/59/photo3jpg.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-w/08/9f/6f/9e/restaurante-parrilla.jpg',
'Parrilla Ginés','Mediterránea, Europea y Española',942281020,
'Av. Castaneda 15, Santander',DEFAULT,DEFAULT,DEFAULT,'STR',5,
'https://www.tripadvisor.es/Restaurant_Review-g187484-d1551324-Reviews-Restaurante_Parrilla_Gines-Santander_Cantabria.html',
'https://www.facebook.com/parrillagines/',
'https://www.parrillagines.com/es/',  /* Me encanta */
'https://es.restaurantguru.com/Parrilla-Gines-Santander',
'#',
null,25,  
'SI'),


('15006',  /* Tiene just Eat */
'https://media-cdn.tripadvisor.com/media/photo-o/0a/c3/5c/57/restaurante.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-w/11/4e/32/ff/chipirones.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-o/03/8b/d9/f6/piquio.jpg',
'Restaurante Piquio','Española',942278719,
'Plaza Las Brisas s/n, Santander',DEFAULT,DEFAULT,DEFAULT,'STR',6,
'https://www.tripadvisor.es/Restaurant_Review-g187484-d3820968-Reviews-Restaurante_Piquio-Santander_Cantabria.html',
'#',
'#',
'https://es.restaurantguru.com/Piquio-Santander-2',
'#',
null,30,  
'SI')";




// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaBARRESTAURANTES)) {
    echo "Inserción en la tabla BARRESTAURANTES(Santander) exitosa <br>";
  } else {
    echo "Error al insertar en la tabla BARRESTAURANTES(Santander): " . mysqli_error($conn) . "<br>";
  }
  



?>