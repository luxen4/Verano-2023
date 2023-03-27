<?php
$pueblaMENUSANTONA="INSERT INTO MENU(ref_menu, ref_modelomenu,ref_negocio,primero1,primero2,primero3,primero4,primero5,segundo1,segundo2,segundo3,segundo4,segundo5,
                postre1,postre2,postre3,
                incluido,precio,iva_incluido,comentario)
          
                VALUES   
                       (/*cod_menu* Murga, Santoña OK*/ 'M16003','MOD-7','16003',
                      'Alubias con Pulpo  a la Gallega','Espaguetis Carbonara','Parrilla de Verduras a la Brasa',null,null,
                      'Chuleta deCerdo con Queso Treviso','Churrasco a la Brasa con Patatas','Morcilla con un Par de Huevos y Patatas',null,null,
                      null,null,null,
                      'Vino de la Casa,<br>Pan, Postre o Café','16','I.V.A INCLUIDO','Tenemos Menú Infantil!<br>*Los Platos Pueden Variar Ligeramente*'),

                      (/*cod_menu* Amayuela, Santoña OK*/ 'M16004','MOD-8','16004',
                      'Ostras Gratinadas','Alubias con Almejas','Ensalada de Queso de Cabra, Foie,<br>Frutos Secos y Cebola Caramelizada','Pasta con Marisco',null,
                      'Jibiones (Calamares) Encebollados','Pimientos Rellenos de Atún con Salsa','Solomillo de Cerdo al Pedro Ximenez','Filetes de Pollo, Salsa de Mostaza y Miel',null,
                      'Tarta de Chocolate','Flan de Queso','Tarta de Queso',
                      'Pan y Vino','12','I.V.A INCLUIDO','*Los Platos Pueden Variar Ligeramente*'),

                      (/*cod_menu* Casa Tino, Santoña OK*/ 'M16005','MOD-9','16005',
                      'Ensalada de Anchoas con Paté de Pimientos','Langostinos a la Plancha','Pudin de Bonito','Ensalada Casa Tino',null,
                      'Lubina a la Plancha','Bacalao con Tomate','Carrilleras Pedro Ximenez','Rabo de Ternera','Estofado de Buey',
                      'Tarta de Queso','Tarta de Turrón y Tres Chocolates',null,
                      'Vino Don Jacobo','18','I.V.A INCLUIDO','*Los Platos Pueden Variar Ligeramente*');";


  // Condicional PHP que poblará la tabla
  if (mysqli_query($conn, $pueblaMENUSANTONA)) {
    echo "Inserción en la tabla MENU exitosa (Santoña) <br>";
  } else {
    echo "Error al insertar en la tabla MENU (Santoña): " . mysqli_error($conn) . "<br>";
  }

?>