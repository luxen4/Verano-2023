<?php

/* Somo */
$pueblaBARRESTAURANTES="INSERT INTO BARRESTAURANTES(ref_negocio,ruta_imagen1,ruta_imagen2,ruta_imagen3,
                                                    nombre,descripcion,telefono,direccion,veces_Votado, veces_Positivo,veces_Negativo,
                                                    ref_Localidad,cod_posiciones,
                                                    e_tripadvisor,e_facebook,e_web, e_restaurantGuru,e_theFork,e_menu,habilitado)
				VALUES(/*cod_barrestaurantes*/
'17001',
'https://media-cdn.tripadvisor.com/media/photo-w/11/24/e1/47/photo0jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/1b/ff/36/fa/photo2jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/1b/ff/36/fc/photo4jpg.jpg',
'Marisqueria Pinar','Marisco, Mediterránea y Europea',942510039,
'Calle de la Isla de Mouro 4, Somo',DEFAULT,DEFAULT,DEFAULT,'SMO',1,
'https://www.tripadvisor.es/Restaurant_Review-g644321-d12710071-Reviews-Restaurant_Marisqueria_Pinar-Somo_Cantabria.html',
'#',  /* https://www.facebook.com/profile.php?id=151102931581653  Toma Mejico-lindo desde Tripadvisor*/
'#',  /* Buena web */
'https://es.restaurantguru.com/Pinar-Spain',
'#',
'https://media-cdn.tripadvisor.com/media/photo-p/13/a7/57/6a/photo1jpg.jpg',
'SI'),

('17002', /* Menú del dia a 12 euros */
'https://media-cdn.tripadvisor.com/media/photo-w/0f/c5/2f/d3/photo0jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/1a/3d/b5/c1/photo0jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/07/05/69/90/carrilleras-de-ternera.jpg',
'Rompeolas Somo','Mediterránea y Europea',942510103,
'Calle Quebrantas 9, Somo',DEFAULT,DEFAULT,DEFAULT,'SMO',2,
'https://www.tripadvisor.es/Restaurant_Review-g644321-d985884-Reviews-Rompeolas-Somo_Cantabria.html',
'#', 
'#',  
'https://es.restaurantguru.com/Restaurante-El-Rompeolas-Somo',
'#',
'https://media-cdn.tripadvisor.com/media/photo-p/1d/0b/92/ba/menu-del-dia.jpg',
'SI'),

('17003', 
'https://media-cdn.tripadvisor.com/media/photo-o/12/95/45/d0/el-nuevo-restaurante.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/18/4c/e5/f2/20190713-160414-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/10/ff/0c/37/photo3jpg.jpg',
'Las Quebrantas','Op. vegetarianas, veganas y sin gluten',942510259,
'C/ Isla de Mouro 8, Somo',DEFAULT,DEFAULT,DEFAULT,'SMO',3,
'https://www.tripadvisor.es/Restaurant_Review-g644321-d4311864-Reviews-Las_Quebrantas-Somo_Cantabria.html',
'https://www.facebook.com/LasQuebrantas', 
'#',  
'https://es.restaurantguru.com/Las-Quebrantas-Spain',
'#',
null,
'SI'),

('17004', /* Tiene JUst EAT */
'https://media-cdn.tripadvisor.com/media/photo-o/09/74/96/56/20151107-162154-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/0a/97/15/8b/pizza-mitad-capprese.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/1b/0f/2c/54/restaurante-mamma-angelina.jpg',
'Mamma Angelina','Italiana, Pizza, Op. vegetarianas',942510708,
'C/ Fuente Nº 3, Somo',DEFAULT,DEFAULT,DEFAULT,'SMO',4,
'https://www.tripadvisor.es/Restaurant_Review-g644321-d6740685-Reviews-Restaurante_Mamma_Angelina-Somo_Cantabria.html',
'https://www.facebook.com/mammaangelinasomo/', 
'#',  
'https://es.restaurantguru.com/Mamma-Angelina-Somo',
'#',
null,
'SI'),


('17005',   /* Se podría hacer una sugerencia de ruta del día, comer en otro sitio y llegar a aquía acomer tarta*/
'https://media-cdn.tripadvisor.com/media/photo-w/09/65/9d/83/como-otras-muchas-veces.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/1d/20/c2/56/caption.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/08/93/fe/b4/currus-co-bakery-meals.jpg',
'Currus&CO','Confiterías/panaderías, Tienda gourmet',942510100,
'Isla de Mouro, 4, Somo',DEFAULT,DEFAULT,DEFAULT,'SMO',5,
'https://www.tripadvisor.es/Restaurant_Review-g644321-d8466779-Reviews-Currus_Co-Somo_Cantabria.html#photos;aggregationId=101&albumid=101&filter=7&ff=144275552',
'https://www.facebook.com/currusco.somo/', 
'http://www.currusco.com/', /* Copiar Web, fabulosa */  
'https://restaurantguru.com/CurrusandCO-Spain',
'#',
null,
'SI'),

('17006',  
'https://media-cdn.tripadvisor.com/media/photo-w/04/69/84/05/melly-gaviota.jpg', /* Menú 	https://media-cdn.tripadvisor.com/media/photo-w/08/a4/9f/2f/restaurante-melly.jpg */
'https://media-cdn.tripadvisor.com/media/photo-w/0b/70/08/b0/marmita.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/18/cb/7d/c6/img-20190814-153531-largejpg.jpg',
'Restaurante Melly','Mediterránea, Europea, Española',942510641,
'Calle Penas Blancas 5, Somo',DEFAULT,DEFAULT,DEFAULT,'SMO',6,
'https://www.tripadvisor.es/Restaurant_Review-g644321-d3313827-Reviews-Restaurante_Melly-Somo_Cantabria.html',
'https://www.facebook.com/Restaurante-Melly-1703427783057903/', 
'#',
'https://es.restaurantguru.com/Melly-Santander',
'https://www.thefork.es/restaurante/melly-r701445/menu',
'https://media-cdn.tripadvisor.com/media/photo-p/08/a4/9f/2f/restaurante-melly.jpg',  /* https://media-cdn.tripadvisor.com/media/photo-p/18/cb/7d/cf/img-20190814-145200-largejpg.jpg */
'SI')



";



// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaBARRESTAURANTES)) {
    echo "Inserción en la tabla BARRESTAURANTES exitosa <br>";
  } else {
    echo "Error al insertar en la tabla BARRESTAURANTES: " . mysqli_error($conn) . "<br>";
  }

?>
