<?php
/* Creación de la tabla Localidad */


// La variable que creara la tabla en la base de datos.
$creaLOCALIDAD="CREATE TABLE LOCALIDAD(
    id_Localidad   	    INT NOT NULL AUTO_INCREMENT, 
    ref_Localidad       VARCHAR (5) NOT NULL UNIQUE, 
    nombre_Localidad	VARCHAR (30) NOT NULL,
    provincia			VARCHAR (20) NOT NULL, 
    comunidad			VARCHAR (20) NOT NULL,	
    pais  				ENUM('España', 'Francia', 'Portugal') NOT NULL  DEFAULT 'España',	
    ruta_imagen1        VARCHAR (400) NOT NULL,
                          
    PRIMARY KEY (id_Localidad)
  );";
  
  
  // Condicional PHP que creará la tabla
  if (mysqli_query($conn, $creaLOCALIDAD)) {
    // Mostramos mensaje si la tabla ha sido creado correctamente!
        echo "Table LOCALIDAD created successfully <br>";
    } else {
        // Mostramos mensaje si hubo algún error en el proceso de creación
        echo "Error al crear la tabla LOCALIDAD: <br>" . mysqli_error($conn);
    }
  
  /*1 MySql  OK */
  $pueblaLOCALIDAD="INSERT INTO LOCALIDAD (ref_Localidad, nombre_Localidad, provincia, comunidad, pais, ruta_imagen1)
  VALUES   
  
  ('AJO','Ajo','Pirineos Atlanticos','N. Aquitania','Francia','https://ucmedia.er2.co/es/cor/3/0/1600/186.jpg'),
  ('BAK','Bakio','Bizkaia','País Vasco','España','https://imgs-akamai.mnstatic.com/bf/cd/bfcd5ac8ab050d01dc7f897b436ab467.jpg'),
  ('BRZ','Biarritz','Pirineos Atlanticos','N. Aquitania','Francia','https://www.ngenespanol.com/wp-content/uploads/2018/08/mardereyesp.jpg.imgw_.1280.1280-770x413.jpeg'),
  ('CTS','Castro Urdiales','Cantabria','Cantabria','España','https://live.staticflickr.com/251/31378320692_7e17baec1f_n.jpg'),
  
  ('COM','Comillas','Cantabria','Cantabria','España','https://eltomavistasdesantander.com/wp-content/uploads/2017/06/playa-comillas.jpg'),
  

  ('DEB','Deba','Guipúzcoa','País Vasco','España','https://ucmedia.er2.co/es/cor/8/1/1600/2206.jpg'),
  ('HON','Fuenterrabía','Guipúzcoa','País Vasco','España','https://fotos.euroresidentes.com/fotos/pais_vasco/fuenterrabia/images/Fuenterrabia%20(02).jpg'),
  ('GTA','Getaria','Guipúzcoa','País Vasco','España','https://costasyplayas.com/wp-content/uploads/Getaria.jpg'),
  ('HDY','Hendaya','Pirineos Atlanticos','N. Aquitania','Francia','https://www.inoutviajes.com/fotos/20/3832_PLAGE_HENDAYE_OT_1_thumb_300.jpg'),
  ('ISL','Isla','Cantabria','Cantabria','España','https://cdn.redcanina.es/wp-content/uploads/2018/06/07155738/Isla-Cantabria-Espana-750x375.jpg'),
  /* Muy bonita 'https://scontent-mad1-1.xx.fbcdn.net/v/t39.30808-6…B0ceQDflonMuxyiqhK6T7H4eLRxs8ldPc-aSA&oe=62008012' No muestra la foto */
  ('LDO','Laredo','Cantabria','Cantabria','España','https://fotos.hoteles.net/articulos/guia-laredo-cantabria-8237-1.jpg'),
  ('LKT','Lekeitio','Bizkaia','País Vasco','España','https://www.euskoguide.com/images/bg-large/lekeitio-small.jpg'),
  ('MUS','Muskiz','Guipúzcoa','País Vasco','España','https://petronor.eus/wp-content/uploads/2017/08/Petronor_laarena_manterola1.jpg'), /* https://tele7.tv/wp-content/uploads/2020/07/img-20200719-wa0006.jpg */
  ('NJA','Noja','Cantabria','Cantabria','España','https://i.pinimg.com/originals/7c/51/9c/7c519cbebdbaca5b176cde4bc98348eb.jpg'),
  
  ('OND','Ondarroa','BizKaia','País Vasco','España','https://lh5.googleusercontent.com/p/AF1QipOFfznC7-Ctlpmo1vOBBoYrtyS0DCcrZemKHFtC=s1600'), /* Fotos muy buenas y buena web */
  

  ('ORO','Orio','Guipúzcoa','País Vasco','España','https://rinconesgipuzkoa.diariovasco.com/fotos/2019/10/orio-playa-mar-rio-201910172336-670x.jpg'),
  ('PNZ','Plentzia','Bizkaia','País Vasco','España','https://fhimasa.com/wp-content/uploads/2020/02/dsc00190.jpg'),
  ('SJL','Saint-Jean-de-Luz','Pirineos Atlanticos','Nueva Aquitania','Francia','https://www.euskoguide.com/images/bg-large/st-jean-de-luz-small.jpg'),
  ('SAS','San Sebastián','Guipúzcoa','País Vasco','España','https://sh-assets.holidu.com/imagecache/blog-photos/14122_Fill_670_0.jpg'), 
  ('STR','Santander','Cantabria','Cantabria','España','https://fotos.hoteles.net/articulos/noja-villa-turistica-en-cantabria-3243-4.jpg'),
  ('STN','Santoña','Cantabria','Cantabria','España','https://www.losviajeros.com/foto/user/378599/playa_de_berria.png'),
  ('SMO','Somo','Cantabria','Cantabria','España','https://www.laposadadesomo.com/es/wp-content/uploads/2014/05/52-300x203.jpg'),  	/*https://www.laposadadesomo.com/es/wp-content/uploads/2014/05/52-300x203.jpg*/
  ('SOP','Sopelana','Guipúzcoa','País Vasco','España','https://ehbildu.eus/herriak/sopela/img/albisteak/1590743776.jpg'),
  ('ZRT','Zarautz','Guipuzkoa','País Vasco','España','https://www.cronicanorte.es/wp-content/uploads/2014/08/playa-zarautz-by-jlastras-768x449.jpg'),
  
  ('ZGA','Zaragoza','Zaragoza','Aragón','España','https://images.squarespace-cdn.com/content/v1/5a86b05bcf81e0af04936cc7/1647972241104-KOC7JJGQUSPTJX8IAWZC/que-ver-en-zaragoza-pilar.jpg?format=1000w'),
  

  ('ZMA','Zumaia','Guipúzkoa','Pais Vasco','España','https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSxVzCw4WuCteIBVbp2aK5jLH3UkhzqFZMDeA&usqp=CAU')
  ;";	
  
  
  if (mysqli_query($conn, $pueblaLOCALIDAD)) {
        echo "Inserción en la Tabla LOCALIDAD exitosa <br>";
    } else {
        echo "Error al insertar en la tabla LOCALIDAD: " . mysqli_error($conn) . "<br>";
    }

/*
    $dropTABLE_IMAGENESLOCALIDAD="DROP TABLE IMAGENESLOCALIDAD";
    if (mysqli_query($conn, $dropTABLE_IMAGENESLOCALIDAD)) {echo "Tabla IMAGENESLOCALIDAD eliminada exitosamente <br>";} else { echo "Error al eliminar la tabla IMAGENESLOCALIDAD: " . mysqli_error($conn) . "<br>";}
    
    // La variable que creara la tabla en la base de datos.
    $creaIMAGENESLOCALIDAD="CREATE TABLE IMAGENESLOCALIDAD(
        id_ImagenesLocalidad   	    INT NOT NULL AUTO_INCREMENT, 
        ref_ImagenesLocalidad       VARCHAR (5) NOT NULL UNIQUE, 
        nombre_img1			VARCHAR (15) NOT NULL,	
        nombre_img2			VARCHAR (15) NOT NULL,
        nombre_img3			VARCHAR (15) NOT NULL,

        PRIMARY KEY (id_ImagenesLocalidad),
        CONSTRAINT UNIQUE_RefImagenesLocalidad UNIQUE (ref_ImagenesLocalidad)
      );";
      
      
      // Condicional PHP que creará la tabla
      if (mysqli_query($conn, $creaIMAGENESLOCALIDAD)) {
        // Mostramos mensaje si la tabla ha sido creado correctamente!
            echo "Table IMAGENESLOCALIDAD created successfully <br>";
        } else {
            // Mostramos mensaje si hubo algún error en el proceso de creación
            echo "Error al crear la tabla IMAGENESLOCALIDAD: <br>" . mysqli_error($conn);
        }
      

      $pueblaIMAGENESLOCALIDAD="INSERT INTO IMAGENESLOCALIDAD (ref_ImagenesLocalidad, nombre_img1, nombre_img2, nombre_img3)
      VALUES  ('IL001','imgLaredo1.jpg','imgLaredo2.jpg','imgLaredo3.jpg'),
              ('IL002','imgCastro1.jpg','imgCastro2.jpg','imgCastro3.jpg');";	
      
      
      if (mysqli_query($conn, $pueblaIMAGENESLOCALIDAD)) {
            echo "Inserción en la Tabla IMAGENESLOCALIDAD exitosa <br>";
        } else {
            echo "Error al insertar en la tabla IMAGENESLOCALIDAD: " . mysqli_error($conn) . "<br>";
        }


 


        $dropTABLE_RELACIONIMAGENESLOCALIDAD="DROP TABLE RELACIONIMAGENESLOCALIDAD";
        if (mysqli_query($conn, $dropTABLE_RELACIONIMAGENESLOCALIDAD)) {echo "RELACIONIMAGENESLOCALIDAD eliminada exitosamente <br>";}
        else { echo "Error al eliminar la tabla RELACIONIMAGENESLOCALIDAD: " . mysqli_error($conn) . "<br>";}
        
       
       $creaRELACIONIMAGENESLOCALIDAD="CREATE TABLE RELACIONIMAGENESLOCALIDAD(
          cod_RelacionImagenesLocalidad     INT NOT NULL AUTO_INCREMENT,
          ref_RelacionImagenesLocalidad     VARCHAR (15) NOT NULL,	
          ref_Localidad                     VARCHAR (5) NOT NULL,			
          ref_ImagenesLocalidad             VARCHAR (5) NOT NULL,
          habilitado                    ENUM ('SI','NO') DEFAULT 'NO', 
      
          
          PRIMARY KEY (cod_RelacionImagenesLocalidad),
          CONSTRAINT UNIQUE_RelacionImagenesLocalidad UNIQUE (/*ref_negocio, ref_ImagenesLocalidad),
          FOREIGN KEY (ref_Localidad) REFERENCES LOCALIDAD (ref_Localidad) ON DELETE CASCADE ON UPDATE CASCADE,
          FOREIGN KEY (ref_ImagenesLocalidad) REFERENCES IMAGENESLOCALIDAD (ref_ImagenesLocalidad) ON DELETE CASCADE ON UPDATE CASCADE
        );";
        
        if (mysqli_query($conn, $creaRELACIONIMAGENESLOCALIDAD)) {
          echo "Table RELACIONIMAGENESLOCALIDAD created successfully <br>";
        } else {
          echo "Error al crear la tabla RELACIONIMAGENESLOCALIDAD: " . mysqli_error($conn) . "<br>";
        }
        
        $pueblaRELACIONIMAGENESLOCALIDAD="INSERT INTO RELACIONIMAGENESLOCALIDAD(/*cod_RelacionImagenesLocalidad , ref_RelacionImagenesLocalidad, ref_Localidad, ref_ImagenesLocalidad, habilitado)
              VALUES 
              
              /* Laredo que lo borraremos 
                ('RIL001','LDO','IL001','SI'),
                ('RIL002','CTS','IL002','SI')
         
        ;";
        
        if (mysqli_query($conn, $pueblaRELACIONIMAGENESLOCALIDAD)) {
        echo "Inserción en la tabla RELACIONIMAGENESLOCALIDAD exitosa <br>";
        } else {
        echo "Error al insertar en la tabla RELACIONIMAGENESLOCALIDAD: " . mysqli_error($conn) . "<br>";
        }
*/


        // La variable que creara la tabla en la base de datos.
        $creaIMAGENESLOCALIDAD="CREATE TABLE IMAGENESLOCALIDAD(
            id_ImagenesLocalidad   	    INT NOT NULL AUTO_INCREMENT, 
            ref_ImagenesLocalidad       VARCHAR (5) NOT NULL UNIQUE, 
            ref_Localidad			          VARCHAR (15) NOT NULL,
            nombre_Img			            VARCHAR (25) NOT NULL,
            posicion                    varchar (2) NOT NULL,	
    
            PRIMARY KEY (id_ImagenesLocalidad),
            CONSTRAINT UNIQUE_RefImagenesLocalidad UNIQUE (ref_ImagenesLocalidad),
            CONSTRAINT UNIQUE_NombreImg UNIQUE (nombre_Img),
            FOREIGN KEY (ref_Localidad) REFERENCES LOCALIDAD (ref_Localidad) ON DELETE CASCADE ON UPDATE CASCADE
          );";
          
          
          // Condicional PHP que creará la tabla
          if (mysqli_query($conn, $creaIMAGENESLOCALIDAD)) {
            // Mostramos mensaje si la tabla ha sido creado correctamente!
                echo "Table IMAGENESLOCALIDAD created successfully <br>";
            } else {
                // Mostramos mensaje si hubo algún error en el proceso de creación
                echo "Error al crear la tabla IMAGENESLOCALIDAD: <br>" . mysqli_error($conn);
            }
          
          /*1 MySql  OK */
          $pueblaIMAGENESLOCALIDAD="INSERT INTO IMAGENESLOCALIDAD (ref_ImagenesLocalidad, ref_Localidad, nombre_Img, posicion)
          VALUES  ('IL001','LDO','imgLaredo1.jpg','1'),
                  ('IL002','LDO','imgLaredo2.jpg','2'),
                  ('IL003','LDO','imgLaredo3.jpg','3'),

                  ('IL046','BRZ','imgBiarritz1.jpg','1'),
                  ('IL047','BRZ','imgBiarritz2.jpg','2'),
                  ('IL048','BRZ','imgBiarritz3.jpg','3'),

                  ('IL037','DEB','imgDeba1.jpeg','1'),
                  ('IL038','DEB','imgDeba2.jpeg','2'),
                  ('IL039','DEB','imgDeba3.jpeg','3'),

                  ('IL004','CTS','imgCastro1.jpg','1'),
                  ('IL005','CTS','imgCastro2.jpg','2'),
                  ('IL006','CTS','imgCastro3.jpg','3'),

                  ('IL043','COM','imgComillas1.jpg','1'),
                  ('IL044','COM','imgComillas2.jpg','2'),
                  ('IL045','COM','imgComillas3.jpg','3'),

                  ('IL007','SAS','imgSanSebastian1.jpg','1'),
                  ('IL008','SAS','imgSanSebastian2.jpg','2'),
                  ('IL009','SAS','imgSanSebastian3.jpg','3'),

                  ('IL010','NJA','imgNoja1.jpg','1'),
                  ('IL011','NJA','imgNoja2.jpg','2'),
                  ('IL012','NJA','imgNoja3.jpg','3'),

                  ('IL034','OND','imgOndarroa1.jpg','1'),
                  ('IL035','OND','imgOndarroa2.jpg','2'),
                  ('IL036','OND','imgOndarroa3.jpg','3'),

                  ('IL013','PNZ','imgPlentzia1.jpg','1'),
                  ('IL014','PNZ','imgPlentzia2.jpg','2'),
                  ('IL015','PNZ','imgPlentzia3.jpg','3'),

                  ('IL016','ZRT','imgZarautz1.png','1'),
                  ('IL017','ZRT','imgZarautz2.jpg','2'),
                  ('IL018','ZRT','imgZarautz3.jpg','3'),

                  ('IL025','ZMA','imgZumaia1.jpg','1'),
                  ('IL026','ZMA','imgZumaia2.jpg','2'),
                  ('IL027','ZMA','imgZumaia3.jpg','3'),

                  ('IL028','GTA','imgGetaria1.jpg','1'),
                  ('IL029','GTA','imgGetaria2.jpg','2'),
                  ('IL030','GTA','imgGetaria3.jpg','3'),
                  
                  ('IL019','BAK','imgBakio1.png','1'),
                  ('IL020','BAK','imgBakio2.jpg','2'),
                  ('IL021','BAK','imgBakio3.jpg','3'),

                  ('IL022','SJL','imgSanJuanDeLuz1.jpg','1'),
                  ('IL023','SJL','imgSanJuanDeLuz2.jpg','2'),
                  ('IL024','SJL','imgSanJuanDeLuz3.jpg','3'),

                  ('IL031','SOP','imgSopelana1.jpg','1'),
                  ('IL032','SOP','imgSopelana2.jpg','2'),
                  ('IL033','SOP','imgSopelana3.jpg','3'),

                  ('IL040','ZGA','imgZaragoza1.jpg','1'),
                  ('IL041','ZGA','imgZaragoza2.jpg','2'),
                  ('IL042','ZGA','imgZaragoza3.jpg','3')
                  
                  
                  ;";	
          
          
          if (mysqli_query($conn, $pueblaIMAGENESLOCALIDAD)) {
                echo "Inserción en la Tabla IMAGENESLOCALIDAD exitosa <br>";
            } else {
                echo "Error al insertar en la tabla IMAGENESLOCALIDAD: " . mysqli_error($conn) . "<br>";
            }






?>  







