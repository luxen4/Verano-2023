<?php
$pueblaMENUSOMO="INSERT INTO MENU(ref_menu, ref_modelomenu,ref_negocio,primero1,primero2,primero3,primero4,primero5,segundo1,segundo2,segundo3,segundo4,segundo5,
                postre1,postre2,postre3,
                incluido,precio,iva_incluido,comentario)
          
                VALUES   
                      /* Somo */
                      (/*cod_menu* Marisqueria Pinar, Somo No sé si es este menú*/ 'M17001','MOD-3','17001',
                      'Paella de Marisco<br>Pisto con Crujiente de Jamón','Patatas con Calamar y Langostinos<br>Macarrones con tomate y Chorizo','Ensalada de queso Fresco y Sandia','Alubias con Almejas<br>Ensalada Campera','Ensalada de Pasta',
                      'Sardinas a la Plancha','Costilla Asada con Salsa Barbacoa','Pollo Asado<br>Pimientos Rellenos de Marisco','Calamar Encebollado<br>Carrilleras Estofadas','Cruceta de Cerdo a la Plancha con Pimientos<br>Churrasco a la Plancha',
                      null,null,null,
                      'POSTRE, PAN, VINO Y AGUA','14','IVA INCLUIDO','Medio Menú: 12€<br>*Los Platos Pueden Variar Ligeramente*'),


                      (/*cod_menu* , Somo No sé si es este menú*/ 'M17002','MOD-3','17002',
                      'Garbanzos con Marisco','Paella Mixta','Parrillada de Verduras','Ensalada Mixta',null,
                      'Bocartes Fritos','Chipirones Encebollados','Pollo de Corral en Salsa','Hamburguesa de Carne',null,
                      'Flan de Huevo<br>Tarta de la Abuela<br>Tabla de Quesos','Creppe Relleno de Dulce de Leche<br>Natillas','Helado de Turrón Casero<br>Terta de Zanahoria',
                      'POSTRE, PAN, VINO Y AGUA','14','IVA INCLUIDO','NO SE COMPARTEN MENÚS<br>*Los Platos Pueden Variar Ligeramente*'),

                      (/*cod_menu* , Restaurante Melly Somo OK*/ 'M17006','MOD-3','17006',
                      'Marmita de Bonito','Puding de Merluza y Gambas','Espaguetis Boloñesa','Ensalada Melly<br>Ensaladilla Rusa','Salmorejo<br>Mejillones',
                      'Pollo Asado','Rabo Estofado','Raya al Ajillo','Lomo Sajonia con Patatas Fritas','Albondigas de Ternera<br>Salmón a la Sartén',
                      null,null,null,
                      'PAN, VINO-AGUA, POSTRE Y CAFÉ','16','10% IVA INCLUIDO','*Los Platos Pueden Variar Ligeramente*');";


  // Condicional PHP que poblará la tabla
  if (mysqli_query($conn, $pueblaMENUSOMO)) {
    echo "Inserción en la tabla MENU exitosa (Somo) <br>";
  } else {
    echo "Error al insertar en la tabla MENU (Somo): " . mysqli_error($conn) . "<br>";
  }

?> 