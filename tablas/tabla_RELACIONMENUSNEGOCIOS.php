 <?php 
 /*
  $dropTABLE_RELACIONMENUSNEGOCIOS="DROP TABLE RELACIONMENUSNEGOCIOS";
  if (mysqli_query($conn, $dropTABLE_RELACIONMENUSNEGOCIOS)) {echo "RELACIONMENUSNEGOCIOS eliminada exitosamente <br>";}
  else { echo "Error al eliminar la tabla RELACIONMENUSNEGOCIOS: " . mysqli_error($conn) . "<br>";}
  */
 

 
 $creaRELACIONMENUSNEGOCIOS="CREATE TABLE RELACIONMENUSNEGOCIOS(
    cod_RelacionMenusNegocios     INT NOT NULL AUTO_INCREMENT,
    ref_RelacionMenusNegocios     VARCHAR (15) NOT NULL,	
    ref_Negocio                   VARCHAR (7) NOT NULL,			
    ref_Menu                      VARCHAR (15) NOT NULL,
    /*precio                        VARCHAR (6) NOT NULL,*/
    /*tipo_Menu      ENUM ('BASICO','MOD','PERSONAL') DEFAULT 'BASICO',*/
    habilitado                    ENUM ('SI','NO') DEFAULT 'NO',

    
    PRIMARY KEY (cod_RelacionMenusNegocios),
    CONSTRAINT UNIQUE_RelacionMenusNegocios UNIQUE (/*ref_negocio,*/ ref_menu),
    FOREIGN KEY (ref_Negocio) REFERENCES BARRESTAURANTES (ref_negocio) ON DELETE CASCADE ON UPDATE CASCADE,
    FOREIGN KEY (ref_menu) REFERENCES MENU (ref_menu) ON DELETE CASCADE ON UPDATE CASCADE
  );";
  
  if (mysqli_query($conn, $creaRELACIONMENUSNEGOCIOS)) {
    echo "Table RELACIONMENUSNEGOCIOS created successfully <br>";
  } else {
    echo "Error al crear la tabla RELACIONMENUSNEGOCIOS: " . mysqli_error($conn) . "<br>";
  }
  
  $pueblaRELACIONMENUSNEGOCIOS="INSERT INTO RELACIONMENUSNEGOCIOS(/*cod_RelacionMenusNegocios,*/ref_RelacionMenusNegocios, ref_Negocio, ref_Menu, /*precio, tipo_Menu,*/ habilitado)
        VALUES 
        
        /* Laredo que lo borraremos */
          ('RMB08001/1','08001','MB08001/1'/*,'12','BASICO'*/,'NO'),
          ('RMB08001/2','08001','MB08001/2'/*,'13','BASICO'*/,'NO'),
          ('RMB08001/3','08001','MB08001/3'/*,'14','BASICO'*/,'NO'),

          ('RMM08001/1','08001','MM08001/1'/*,'15','MOD'*/,'NO'),
          ('RMM08001/2','08001','MM08001/2'/*,'16','MOD'*/,'NO'),
          ('RMM08001/3','08001','MM08001/3'/*,'17','MOD'*/,'NO'),

          ('RMP08001/1','08001','MP08001/1'/*,'18','PERSONAL'*/,'NO'),
          ('RMP08001/2','08001','MP08001/2'/*,'19','PERSONAL'*/,'NO'),
          ('RMP08001/3','08001','MP08001/3'/*,'20','PERSONAL'*/,'SI')
   
  ;";
  
  if (mysqli_query($conn, $pueblaRELACIONMENUSNEGOCIOS)) {
  echo "Inserción en la tabla RELACIONMENUSNEGOCIOS exitosa <br>";
  } else {
  echo "Error al insertar en la tabla RELACIONMENUSNEGOCIOS: " . mysqli_error($conn) . "<br>";
  }
 ?>