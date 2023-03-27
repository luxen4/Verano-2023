<?php

/* SOPELANA */
$pueblaBARRESTAURANTES="INSERT INTO BARRESTAURANTES(ref_negocio,ruta_imagen1,ruta_imagen2,ruta_imagen3,
                                                    nombre,descripcion,telefono,direccion,veces_Votado, veces_Positivo,veces_Negativo,
                                                    ref_Localidad,cod_posiciones,
                                                    e_tripadvisor,e_facebook,e_web, e_restaurantGuru,e_theFork,menu_premium,dto,habilitado)
				VALUES(/*cod_barrestaurantes*/
'SOP-001',
'https://media-cdn.tripadvisor.com/media/photo-w/16/95/07/30/photo0jpg.jpg',
'https://media-cdn.tripadvisor.com/media/photo-w/19/7b/7b/87/burger-con-vistas.jpg',
'https://media-cdn.tripadvisor.com/media/photo-o/0c/25/02/13/ensalada-de-langostinos.jpg',
'El Peñón de Sopelana','Marisco,<br>Cocina Mediterránea y Europea',946760786,
'Kalea Atxabiribil Etorbidea 82, Sopelana',DEFAULT,DEFAULT,DEFAULT,'SOP',1,
'https://www.tripadvisor.es/Restaurant_Review-g1069105-d6699568-Reviews-El_Penon_de_Sopela-Sopelana_Province_of_Vizcaya_Basque_Country.html#photos;aggregationId=101&albumid=101&filter=7&ff=464231034',
'https://www.facebook.com/elpenon.sopela/',
'http://www.elpenondesopelana.com/',
'https://es.restaurantguru.com/El-Penon-de-Sopelana-Sopelana',
'#',
null,5,
'SI')



";


// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaBARRESTAURANTES)) {
    echo "Inserción en la tabla BARRESTAURANTES(Sopelana) exitosa <br>";
  } else {
    echo "Error al insertar en la tabla BARRESTAURANTES(Sopelana): " . mysqli_error($conn) . "<br>";
  }

?>