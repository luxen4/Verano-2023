 <?php 

 $creaMODELOMENU="CREATE TABLE MODELOMENU(
    cod_modelomenu	INT NOT NULL AUTO_INCREMENT,	
    ref_modelomenu  VARCHAR (10) NOT NULL UNIQUE,
    nombre_modelomenu VARCHAR (15) NOT NULL,
    tipo_menu         ENUM ('Basico', 'Premium') DEFAULT 'Basico',
  
    PRIMARY KEY (cod_modelomenu)
    /*FOREIGN KEY (ref_negocio) REFERENCES BARRESTAURANTES (ref_negocio) ON DELETE CASCADE ON UPDATE CASCADE/*,  
    FOREIGN KEY (cod_posiciones) REFERENCES POSICIONES (cod_posiciones) ON DELETE CASCADE ON UPDATE CASCADE*/
   
  );";
  
  if (mysqli_query($conn, $creaMODELOMENU)) {
    echo "Table MODELOMENU created successfully <br>";
  } else {
    echo "Error al crear la tabla MODELOMENU: " . mysqli_error($conn) . "<br>";
  }
  
  
  /* 8 MySql OK */    ///require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/insert_Restaurantes_Localidad/insertnegocioshondarribia.php';
  $pueblaMODELOMENU="INSERT INTO MODELOMENU(ref_modelomenu, nombre_modelomenu, tipo_menu)
          VALUES(/*cod_modelomenu*/
           
          'MOD-0','menu0.jpg',default),
          ('MOD-1','menu1.jpg','Premium'),
          ('MOD-2','menu2.jpg','Premium'),
          ('MOD-3','menu3.jpg','Premium'),
          ('MOD-4','menu4.jpg','Premium'),
          ('MOD-5','menu5.jpg','Premium'),
          ('MOD-6','menu6.jpg','Premium'),
          ('MOD-7','menu7.jpg','Premium'),
          ('MOD-8','menu8.jpg','Premium'),
          ('MOD-9','menu9.jpg','Premium')
  ;";      
        
  // Condicional PHP que creará la tabla
  if (mysqli_query($conn, $pueblaMODELOMENU)) {
    echo "Inserción en la tabla MODELOMENU exitosa <br>";
  } else {
    echo "Error al insertar en la tabla MODELOMENU: " . mysqli_error($conn) . "<br>";
  }

 ?>