<?php

/* Getaria */
$pueblaBARRESTAURANTES="INSERT INTO BARRESTAURANTES(ref_negocio,ruta_imagen1,ruta_imagen2,ruta_imagen3,
                                                    nombre,descripcion,telefono,direccion,veces_Votado, veces_Positivo,veces_Negativo,
                                                    ref_Localidad,cod_posiciones,
                                                    e_tripadvisor,e_facebook,e_web, e_restaurantGuru,e_theFork,e_menu,precio_menu,habilitado)
				VALUES(/*cod_barrestaurantes*/
        
'10001',
'https://media-cdn.tripadvisor.com/media/photo-w/0e/f8/98/55/photo0jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/14/39/f3/37/restaurante-pombera.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/21/b7/5f/9a/caption.jpg',
'R. Pombera','Comida Mediterránea y Española',942631750,'Calle Pinares 59, Noja',DEFAULT,DEFAULT,DEFAULT,'NJA',1,
'https://www.tripadvisor.es/Restaurant_Review-g780926-d10712672-Reviews-Restaurante_Pombera-Noja_Cantabria.html',
'https://www.facebook.com/R.POMBERA',
'#',
'#',
'https://www.thefork.es/restaurante/restaurante-pombera-r487963',
'https://oasisrestaurante.com/482-catalog_medium/menu-del-dia.jpg',14,
'SI'),

('10002',
'https://media-cdn.tripadvisor.com/media/photo-s/21/53/ee/11/terraza.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/1d/3f/05/9d/el-aguila.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1d/8e/95/0e/caption.jpg',
'El Águila','Comida Mediterránea y Barbacoa',635638698,'Los pinares 47, Noja',DEFAULT,DEFAULT,DEFAULT,'NJA',2,
'https://www.tripadvisor.es/Restaurant_Review-g780926-d2289822-Reviews-El_Aguila-Noja_Cantabria.html',
'https://www.facebook.com/Asador-El-%C3%81guila-935827403164429/',
'#',
'https://es.restaurantguru.com/El-Aguila-Noja/menu',/* Gran web */
'#',
'https://media-cdn.tripadvisor.com/media/photo-o/10/1c/fc/c0/20170802-152038-largejpg.jpg',13,  /* Está tumbada la foto */
'SI'),

('10003',
'https://media-cdn.tripadvisor.com/media/photo-s/1b/a8/ac/e0/restaurante-ciaboga.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/1b/92/2c/f7/racion-de-zamburinas.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/17/65/c8/a7/photo0jpg.jpg',
'Ciaboga','Bar-Restaurante,<br>Comida Mediterránea, Española,<br>Opciones sin gluten',625683404,
'Paseo Maritimo 8, Noja',DEFAULT,DEFAULT,DEFAULT,'NJA',3,
'https://www.tripadvisor.es/Restaurant_Review-g780926-d8444502-Reviews-Restaurante_Ciaboga-Noja_Cantabria.html',
'https://www.facebook.com/Ciaboga-noja-207457833333698/',
'https://www.sluurpy.es/noja/restaurante/1964870/restaurante-la-ciaboga',
'#',
'#',
null,null,
'SI'),


('10004',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/19/5a/ca/cc/20190922-221946-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-s/1b/ad/13/6c/restaurante-el-balcon.jpg', /* https://media-cdn.tripadvisor.com/media/photo-m/1280/1b/ad/13/6c/restaurante-el-balcon.jpg */
'https://media-cdn.tripadvisor.com/media/photo-s/1d/45/67/43/caption.jpg', /*https://media-cdn.tripadvisor.com/media/photo-m/1280/1d/69/fe/2f/caption.jpg */
'El Balcon De Ris','Bar-Restaurante,<br>Comida Mediterránea y Europea',670659248,
'Paseo Marítimo, 3, Noja',DEFAULT,DEFAULT,DEFAULT,'NJA',4,
'https://www.tripadvisor.es/Restaurant_Review-g780926-d8107384-Reviews-El_Balcon_de_Ris-Noja_Cantabria.html',
'#', /* No meto chapuzas de páginas  https://m.facebook.com/Restaurante-Balcon-de-Ris-100127772321450/ */
'https://maritimoris.com/', /* Buén Video */
'https://es.restaurantguru.com/Restaurante-El-Balcon-De-Ris-Noja',
'#',
null,null,
'SI'),

('10005',
'https://media-cdn.tripadvisor.com/media/photo-o/0f/59/88/55/hay-ambiente-al-mediodia.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1b/b4/65/62/bar-las-gaviotas.jpg',
'https://media-cdn.tripadvisor.com/media/photo-m/1280/18/86/9a/88/paella-de-marisco.jpg',
'Bar Las Gaviotas','Bar-Restaurante,<br>Comida Mediterránea y Española',629481090,
'Calle Rano 27, Noja',DEFAULT,DEFAULT,DEFAULT,'NJA',5,
'https://www.tripadvisor.es/Restaurant_Review-g780926-d10815646-Reviews-Bar_Las_Gaviotas-Noja_Cantabria.html#photos;aggregationId=101&albumid=101&filter=7&ff=422860314',
'https://www.facebook.com/Bar-Las-Gaviotas-Noja-1207169805982600/',
'#', /* Buén Video */
'https://es.restaurantguru.com/BAR-LAS-GAVIOTAS-Noja',
'#',
null,null,
'SI'),


('10006',
'https://media-cdn.tripadvisor.com/media/photo-o/0d/54/1f/21/photo0jpg.jpg', /* https://media-cdn.tripadvisor.com/media/photo-o/10/57/23/50/menu-diario-a-12-50-muy.jpg */
'https://media-cdn.tripadvisor.com/media/photo-o/15/a5/6c/1a/20181207-215152-largejpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/10/9d/06/47/img-20170910-153020-largejpg.jpg',
'Amaya Bus','Comida Mediterránea y Europea', 942630742,
'Av. de Ris 61, Noja',DEFAULT,DEFAULT,DEFAULT,'NJA',6,
'https://www.tripadvisor.es/Restaurant_Review-g780926-d5010924-Reviews-Amaya_Bus-Noja_Cantabria.html',
'https://www.facebook.com/Amaya-Bus-703446509682742/',
'#', 
'https://es.restaurantguru.com/Amaya-Bus-Spain',
'#',
'https://media-cdn.tripadvisor.com/media/photo-p/1b/f0/8c/b8/photo0jpg.jpg',15,
'SI')";




// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaBARRESTAURANTES)) {
    echo "Inserción en la tabla BARRESTAURANTES exitosa <br>";
  } else {
    echo "Error al insertar en la tabla BARRESTAURANTES: " . mysqli_error($conn) . "<br>";
  }
  



?>