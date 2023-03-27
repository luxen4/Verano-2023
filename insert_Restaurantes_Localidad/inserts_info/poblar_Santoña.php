<?php

/* Santoña */
$pueblaBARRESTAURANTES="INSERT INTO BARRESTAURANTES(ref_negocio,ruta_imagen1,ruta_imagen2,ruta_imagen3,
                                                    nombre,descripcion,telefono,direccion,veces_Votado, veces_Positivo,veces_Negativo,
                                                    ref_Localidad,cod_posiciones,
                                                    e_tripadvisor,e_facebook,e_web, e_restaurantGuru,e_theFork,e_menu,habilitado)
				VALUES(/*cod_barrestaurantes*/
          '16001', /* Tiene en el Tripadvisor la imagen de la plaza */
'https://media-cdn.tripadvisor.com/media/photo-o/06/27/bd/2c/la-taberna-de-berto.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/15/a5/2f/c4/taberna-de-alberto.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/0c/8d/d9/54/photo3jpg.jpg',
'T. De Alberto','Bar restaurante,<br>Comida Española',943038795,
'C/ Los Claveles 8, Santoña',DEFAULT,DEFAULT,DEFAULT,'STN',2,
'https://www.tripadvisor.es/Restaurant_Review-g608999-d8320772-Reviews-Taberna_De_Alberto-Santona_Cantabria.html',
'#',
'https://baresautenticos.com/2011/11/14/taberna-alberto/',
'#',
'#',
null,
'SI'),

('16002',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1b/8a/af/c6/20200712-202415-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/1b/d2/88/44/img-20200820-202243-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/17/25/cc/f6/img-20190413-141018-275.jpg',
'Meson Pachi','Bar restaurante,<br>Comida Española',942662054,
'C/ Rentería Reyes 15, Santoña',DEFAULT,DEFAULT,DEFAULT,'STN',2,
'https://www.tripadvisor.es/Restaurant_Review-g608999-d3635703-Reviews-Meson_Pachi-Santona_Cantabria.html',
'https://www.facebook.com/MESON-PACHI-Santo%C3%B1a-104840377899079/',
'#',
'https://es.restaurantguru.com/Meson-Pachi-Santona',
'#',
null,
'SI'),

('16003',
'https://media-cdn.tripadvisor.com/media/photo-o/0c/96/99/39/fachada-murga-bar-desengano.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/0b/d8/70/e1/murga-bar-desengano.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/1f/fd/f3/0d/caption.jpg', /* Menú */ /* Sería conveniente dado la gente que vean los precios del menúen las targetas */
'Murga Bar','Comida Mediterránea, Española',942790944,  /* Murga Bar Desengaño  */
'C/ Serna Occina 17, Santoña',DEFAULT,DEFAULT,DEFAULT,'STN',3,
'https://www.tripadvisor.es/Restaurant_Review-g608999-d10441616-Reviews-Murga_Bar_Desengano-Santona_Cantabria.html',
'https://www.facebook.com/Murga-bar-desenga%C3%B1o-477185809140886/',
'#',
'https://es.restaurantguru.com/Murga-Bar-Desengano-Santona',
'#',
'https://media-cdn.tripadvisor.com/media/photo-w/1f/fd/f3/0f/caption.jpg',
'SI'),


('16004',  /* https://www.mulecarajonero.com/hemos-comido/item/2799-santona-la-amayuela       Opiniones Raciones buenas y baratas*/
'https://media-cdn.tripadvisor.com/media/photo-m/1280/21/6c/21/07/caption.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/19/3e/62/d4/amayuela.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/12/fa/2b/4d/cazuela-de-marisco-dentro.jpg', /* Menú */ /* https://media-cdn.tripadvisor.com/media/photo-w/10/60/ed/9d/photo5jpg.jpg */
'Amayuela','Marisco, Comida Española',620891621,
'C/ Santander 8, Santoña',DEFAULT,DEFAULT,DEFAULT,'STN',4,
'https://www.tripadvisor.es/Restaurant_Review-g608999-d12319692-Reviews-Amayuela-Santona_Cantabria.html#photos;aggregationId=101&albumid=101&filter=7&ff=560734471',
'https://www.facebook.com/TabernaAmayuela',
'#',
'#',
'#',
'https://media-cdn.tripadvisor.com/media/photo-p/10/60/ed/9b/photo3jpg.jpg',
'SI'),



('16005', 
'https://media-cdn.tripadvisor.com/media/photo-o/0d/45/d9/08/photo0jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/19/8a/e3/01/20191009-135017-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/0e/f8/ad/cc/20170414-215156-largejpg.jpg', /* Menú */ /* https://media-cdn.tripadvisor.com/media/photo-m/1280/19/e7/34/3a/photo2jpg.jpg */
'Casa Tino','Comida Mediterránea, Española',942661645,
'C/ Alfonso XII, Santoña',DEFAULT,DEFAULT,DEFAULT,'STN',5,
'https://www.tripadvisor.es/Restaurant_Review-g608999-d999124-Reviews-Casa_Tino_Santona-Santona_Cantabria.html',
'https://www.facebook.com/Casa-Tino-Santo%C3%B1a-1425877710981487/',
'#',
'https://es.restaurantguru.com/Casa-Tino-Santona',
'#',
'https://media-cdn.tripadvisor.com/media/photo-o/07/07/3f/83/constantino-san-emeterio.jpg',
'SI'),


('16006', 
'https://media-cdn.tripadvisor.com/media/photo-s/02/1d/c5/31/napoleon.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/12/ca/37/09/20180429-160836-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/1d/7e/52/a8/napoleon.jpg', /* Menú */ /* https://media-cdn.tripadvisor.com/media/photo-m/1280/19/e7/34/3a/photo2jpg.jpg */
'Napoleon','Bar-Restaurante,<br>Comida Española, Vasca',942662347,
'C/ Alfonso XII 34, Santoña',DEFAULT,DEFAULT,DEFAULT,'STN',6,
'https://www.tripadvisor.es/Restaurant_Review-g608999-d985896-Reviews-Napoleon-Santona_Cantabria.html#photos;aggregationId=101&albumid=101&filter=7&ff=292963282',
'https://www.facebook.com/Restaurante.Napoleon.santona',
'#',
'https://es.restaurantguru.com/Napoleon-Santona',
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