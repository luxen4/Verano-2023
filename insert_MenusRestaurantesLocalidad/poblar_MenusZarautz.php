<?php
$pueblaMENUZARAUTZ="INSERT INTO MENU(ref_menu, ref_modelomenu,ref_negocio,primero1,primero2,primero3,primero4,primero5,segundo1,segundo2,segundo3,segundo4,segundo5,
                postre1,postre2,postre3,
                incluido,precio,iva_incluido,comentario)
          
                VALUES   
                       (/*cod_menu* Garaban, Zarautz OK*/ 'M18001','MOD-0','18001',
                      'Ensalada de Boquerones, Gulas y Langostinos', 'Pisto de Verdura con Huevo Escalfado y Jamón','Arroz a la Marinera con Txipirones, Gambas y Almejas','Escalopines de Ternera con salsa Roquefort y Patatas',
                      'Muslo de Pollo Asado en su Jugo con Verduras y Patatas<br><br>Bacalao Frito con Piperrada y Patatas Panadera',
                      null,null,null,null,null,
                      null,null,null,
                      'Pan, Bebida y Postre incluido','13.50','IVA INCLUIDO','*Los Platos Pueden Variar Ligeramente*'),

                       ('M18003','MOD-0','18003',
                      'Paella Valenciana','Ensalada Mixta','Macarrones Bolognesa<br>Sopa de Pescado','Calamares Romana','Ensalada Templada de Gulas<br>Alubias Rojas<br>Croquetas',
                      'Muslo de Pollo Asado','Lomo de Cerdo','Entrecotte de Ternera','Chuletillas de Cerdo','Bacalao a la Vizcaina<br>Pimientos Rellenos',
                      null,null,null,
                      'Pan, Bebida y Postre incluido','13','IVA INCLUIDO','*Los Platos Pueden Variar Ligeramente*'),

                       ('M18005','MOD-0','18005',
                      'Ensalada Mixta','Hojaldre de Espinacas y Queso de Cabra','Menestra de Verduras','Revuelto de Bacalao',null,
                      'Pescado del dia','Txipirones a la Plancha','Moruno con Patatas Fritas','Carrilleras con Patatas',null,
                      null,null,null,
                      'Postre Casero, Pan y Bebida','15','IVA INCLUIDO','*OPCIÓN DE MEDIO MENU<br>Elegir un plato con postre y bebida*');";


  // Condicional PHP que poblará la tabla
  if (mysqli_query($conn, $pueblaMENUZARAUTZ)) {
    echo "Inserción en la tabla MENU exitosa (Zarautz) <br>";
  } else {
    echo "Error al insertar en la tabla MENU (Zarautz): " . mysqli_error($conn) . "<br>";
  }

?>