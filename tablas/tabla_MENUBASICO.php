 <?php 

 $creaMENUMOD="CREATE TABLE MENUMOD(
    cod_menuMOD	INT NOT NULL AUTO_INCREMENT,	
    ref_menu  VARCHAR (10) NOT NULL UNIQUE,
    ref_modelomenu VARCHAR (10) NOT NULL,
    ref_negocio VARCHAR (10) NOT NULL,

    primero1	VARCHAR (150) NOT NULL,	
    primero2  VARCHAR (150) NOT NULL,	
    primero3  VARCHAR (150) NOT NULL,	
    primero4  VARCHAR (150),	
    primero5  VARCHAR (150),	
    
    segundo1  VARCHAR (150) NOT NULL,	
    segundo2  VARCHAR (150) NOT NULL,	
    segundo3  VARCHAR (150) NOT NULL,	
    segundo4  VARCHAR (150),	
    segundo5  VARCHAR (150),

    postre1  VARCHAR (40),
    postre2  VARCHAR (40),
    postre3  VARCHAR (40),
    

    incluido	VARCHAR (70) NOT NULL,
    precio    VARCHAR (6) NOT NULL,
    iva_incluido  VARCHAR (40) NULL,

    comentario VARCHAR (40) NOT NULL,
  
    PRIMARY KEY (cod_menuMOD),
    FOREIGN KEY (ref_modelomenu) REFERENCES MODELOMENU (ref_modelomenu) ON DELETE CASCADE ON UPDATE CASCADE,  
    FOREIGN KEY (ref_menu) REFERENCES MENU (ref_menu) ON DELETE CASCADE ON UPDATE CASCADE
   
  );";
  
  if (mysqli_query($conn, $creaMENUMOD)) {
    echo "Table MENUMOD created successfully <br>";
  } else { 
    echo "Error al crear la tabla MENUMOD: " . mysqli_error($conn) . "<br>";
  }
  
   
  $pueblaMENUMOD="INSERT INTO MENUMOD(ref_menu,ref_modelomenu,ref_negocio,primero1,primero2,primero3,primero4,primero5,segundo1,segundo2,segundo3,segundo4,segundo5,
                postre1,postre2,postre3,
                incluido,precio,iva_incluido,comentario)
          
                VALUES
                      
                      (/*cod_menu* Jatechea, Orio OK*/ 'MM11001/1','MOD-3','11001',
                      'Alubias Blancas con Chorizo','Hojaldre de pollo y Verduras con base de Piquillo','Ensalada de Piña','Risotto de Hongos',null,
                      'Costilla Ibérica','Cruceta Iberica','Entrecotte de Buey','Pescado del día',null,
                      null,null,null,
                      'POSTRE, PAN Y VINO','16','IVA INCLUIDO','*Los Platos Pueden Variar Ligeramente*'),



                      (/* Laredo OK*/ 'MM08001/1','MOD-3','08001',
                      '*','*','*','*',null,
                      '*','*','*','*',null,
                      null,null,null,
                      '*','16','IVA INCLUIDO','*Los Platos Pueden Variar Ligeramente*'),

                      (/* Laredo OK*/ 'MM08001/2','MOD-3','08001',
                      '*','*','*','*',null,
                      '*','*','*','*',null,
                      null,null,null,
                      '*','16','IVA INCLUIDO','*Los Platos Pueden Variar Ligeramente*'),

                      (/* Laredo OK*/ 'MM08001/3','MOD-3','08001',
                      '*','*','*','*',null,
                      '*','*','*','*',null,
                      null,null,null,
                      '*','16','IVA INCLUIDO','*Los Platos Pueden Variar Ligeramente*')

             
  ;";      

require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/insert_MenusRestaurantesLocalidad/poblar_Menus.php';

  // Condicional PHP que creará la tabla
  if (mysqli_query($conn, $pueblaMENUMOD)) {
    echo "Inserción en la tabla MENUMOD exitosa <br>";
  } else {
    echo "Error al insertar en la tabla MENUMOD: " . mysqli_error($conn) . "<br>";
  }


  
 
  $creaMENU="CREATE TABLE MENU(
     cod_menu	INT NOT NULL AUTO_INCREMENT,	
     ref_menu  VARCHAR (10) NOT NULL UNIQUE,
     precio    VARCHAR (5) NOT NULL,
     ref_negocio VARCHAR (10) NOT NULL,

 
     PRIMARY KEY (cod_menu),
     FOREIGN KEY (ref_negocio) REFERENCES BARRESTAURANTES (ref_negocio) ON DELETE CASCADE ON UPDATE CASCADE
    
   );";
   
   if (mysqli_query($conn, $creaMENU)) {
     echo "Table MENU created successfully <br>";
   } else { 
     echo "Error al crear la tabla MENU: " . mysqli_error($conn) . "<br>";
   }
   
    
   $pueblaMENU="INSERT INTO MENU(ref_menu,precio,ref_negocio)
                  VALUES 
                  
                  /* Menús Básicos */
                  ('MB08001/1',19,'08001'),
                  ('MB08001/2',19,'08001'),
                  ('MB08001/3',19,'08001'),

                  /* Menús MOD */
                  ('MM08001/1',19,'08001'),
                  ('MM08001/2',19,'08001'),
                  ('MM08001/3',19,'08001'),
                  
                  /* Menús Personalizados */
                  ('MP08001/1',19,'08001'),
                  ('MP08001/2',19,'08001'),
                  ('MP08001/3',19,'08001') 
                  
                  
                  ;";    
                 
 
 
   // Condicional PHP que creará la tabla
   if (mysqli_query($conn, $pueblaMENU)) {
     echo "Inserción en la tabla MENU exitosa <br>";
   } else {
     echo "Error al insertar en la tabla MENU: " . mysqli_error($conn) . "<br>";
   }


































 ?>