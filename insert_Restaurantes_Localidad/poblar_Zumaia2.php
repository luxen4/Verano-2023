<?php

/* ZUMAIA */
$pueblaBARRESTAURANTES="INSERT INTO BARRESTAURANTES(ref_negocio,ruta_imagen1,ruta_imagen2,ruta_imagen3,
                                                    nombre,descripcion,telefono,direccion,veces_Votado, veces_Positivo,veces_Negativo,
                                                    ref_Localidad,cod_posiciones,
                                                    e_tripadvisor,e_facebook,e_web, e_restaurantGuru,e_theFork,menu_premium,dto,habilitado)
				VALUES(/*cod_barrestaurantes*/
'19001', 
'https://media-cdn.tripadvisor.com/media/photo-o/19/be/26/34/tximista-garagarditegia.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1b/b7/38/95/photo0jpg.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-o/19/be/26/44/tximista-garagarditegia.jpg', 	
'Tximista Garagarditegia','Comida Española',943573905,
'Itzurun Zuhaizbidea, Zumaia',DEFAULT,DEFAULT,DEFAULT,'ZMA',1,  
'https://www.tripadvisor.es/Restaurant_Review-g1026464-d19245664-Reviews-Tximista_Garagarditegia-Zumaia_Province_of_Guipuzcoa_Basque_Country.html', 
'#',
'https://zumaia.eus/es/turismo/donde-dormir-y-comer/tximista', 
'https://es.restaurantguru.com/Tximista-Garagarditegia-Zumaia', 
'#',
null,null,
'SI'),


('19002', 
'https://media-cdn.tripadvisor.com/media/photo-w/0d/54/26/37/labarra-taberna.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-m/1280/15/07/40/fa/20181013-152544-largejpg.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-o/0d/54/26/3b/labarra-taberna.jpg', 	
'Labarra Taberna','Bar, Española, Comedor',943860484,
'Ondartxo Plaza 5 Bajo, Zumaia',DEFAULT,DEFAULT,DEFAULT,'ZMA',2,  
'https://www.tripadvisor.es/Restaurant_Review-g1026464-d11612434-Reviews-Labarra_Taberna-Zumaia_Province_of_Guipuzcoa_Basque_Country.html', 
'https://www.facebook.com/Labarra-Taberna-1761453007432334/',
'#', 
'https://es.restaurantguru.com/Labarra-taberna-Zumaia', 
'#',
null,null,
'SI'),


('19003', 
'https://media-cdn.tripadvisor.com/media/photo-o/1a/4b/4e/d4/idoia-ardotegia.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1a/12/21/46/photo3jpg.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1c/03/df/9a/idoia-ardotegia.jpg', 	
'Idoia Ardotegia','Mediterránea, Europea, Española',943574986,
'Julio Beobide 2, Zumaia',DEFAULT,DEFAULT,DEFAULT,'ZMA',3,  
'https://www.tripadvisor.es/Restaurant_Review-g1026464-d8036940-Reviews-Idoia_Ardotegia-Zumaia_Province_of_Guipuzcoa_Basque_Country.html', 
'https://www.facebook.com/idoia.ardotegia.zumaia',
'#', 
'#', 
'#',
null,null,
'SI'),


('19004', 
'https://media-cdn.tripadvisor.com/media/photo-o/13/d4/db/cc/img-20180724-141509-largejpg.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-m/1280/1c/2b/60/46/goiko-bodegoia.jpg', 
'https://media-cdn.tripadvisor.com/media/photo-w/1c/07/49/ca/photo1jpg.jpg', 	
'Goiko Bodegoia','Bar, Mediterránea, Vasca',943861391,
'Erribera 9, Zumaia',DEFAULT,DEFAULT,DEFAULT,'ZMA',4,  
'https://www.tripadvisor.es/Restaurant_Review-g1026464-d10310639-Reviews-Goiko_Bodegoia-Zumaia_Province_of_Guipuzcoa_Basque_Country.html', 
'https://www.facebook.com/Goiko-Bodegoia-606746419679769/',
'#', 
'https://es.restaurantguru.com/Goiko-Bodegoia-Zumaia', 
'#',
/*'https://media-cdn.tripadvisor.com/media/photo-p/13/d4/db/cd/img-20180724-141518-largejpg.jpg', */
null,7,
'SI')



";



// Condicional PHP que creará la tabla
if (mysqli_query($conn, $pueblaBARRESTAURANTES)) {
    echo "Inserción en la tabla BARRESTAURANTES(Zumaia) exitosa <br>";
  } else {
    echo "Error al insertar en la tabla BARRESTAURANTES(Zumaia): " . mysqli_error($conn) . "<br>";
  }

?>