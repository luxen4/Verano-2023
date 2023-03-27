<?php
$pueblaMENUZARAUTZ="INSERT INTO MENU(ref_menu, ref_modelomenu,ref_negocio,primero1,primero2,primero3,primero4,primero5,segundo1,segundo2,segundo3,segundo4,segundo5,
                postre1,postre2,postre3,
                incluido,precio,iva_incluido,comentario)
          
                VALUES   
                      (/*cod_menu* El Parque de Trueba, Santander */ 'M15002','MOD-3','15002',
                      'Cocido Montañés con su Compango<br>Esparragos 2 Salsas','Ensalada de Foie con Frutos del Bosque en Vinagreta y Tostaditas de Pasas','Pudding de Cabracho de Roca y sus Tostaditas','Sopa de Pescado a la Santanderina','Ensalada de Atún con Rodajas de Tomate, Cebolla Confitada y Pimientos de Isla',
                      'Rollitos de Solomillo de Ternera Rellenos de Setas y Paleta Ibérica en Salsa Española con Verduritas de Tempura',
                      'Lomo de Verduras a la Cazuela con Almejas y Colas de Langostinos','Rodaballo a la Plancha con su Refrito y Patatas Panaderas','Lubina a la Espalda con Patatas Panaderas<br>Rabo de Buey Estofado al estilo Cordobés','Entrecot de Vaca con Patatas Fritas y Pimiento Asado en casa',
                      'Carta de Postres Caseros',null,null,
                      'Pan, Agua, Refresco, Cerveza San Miguel, Rioja Crianza, Rosado o Blanco de Rueda','24','IVA INCLUIDO','*Los Platos Pueden Variar Ligeramente*'),

                      /* (cod_menu* Cormoran, Santander */ /* 'M15003','MOD-7','15003',
                      'Rollitos de Cecina con trío de Quesos y Vinagreta Balsámica',
                      'Cronut con salsa Tártara de Salmón y Brotes Verdes',
                      'Cogollos de Tudela Braseados con Vinagreta de Ajo Negro y Melocotón',
                      'Huevos Rotos con cremoso de Patatas y Demiglace',
                      'Merluza de Pincho en Salsa Veloute con Crujientes de Alcachofa',
                      'Callos a Modo Tradicional',
                      'Tallarines de Calabacín a la Crema de Soja y Crujientes de Boniato',
                      null,null,null,null,
                      'Tabla de Quesucos Lebaniegos con Tostaditas de Sobao',null,null,
                      'El Menú incluye una copa de Vino (Tinto o Blanco), una caña, refresco o Agua','20','IVA INCLUIDO',
                      'Lunes a Viernes 13:00h a 16:00h (Excluidos festivos)*Los Platos Pueden Variar Ligeramente*')*/

                      (/*cod_menu* Tiene cuadro de alérgenos El Parque de Trueba, Santander */ 'M15006','MOD-3','15006',
                      'Alubias Pintas','Paella Mixta','Ensalada con Frutos Secos',null,null,
                      'Secreto al Horno','Breca a la Plancha con Ensalada','Melba en Salsa',null,null,
                      'Cuajada','Arroz con Leche','Flan de Huevo con Café<br>Crema de Yogur<br>Natillas',
                      'El Menú incluye una bebida, pan, postre o café,<br>el menú es individual','24','IVA INCLUIDO','Puedes seguirnos en nuestra página de Facebook<br>*Los Platos Pueden Variar Ligeramente*')

;";


  // Condicional PHP que poblará la tabla
  if (mysqli_query($conn, $pueblaMENUZARAUTZ)) {
    echo "Inserción en la tabla MENU exitosa (Zarautz) <br>";
  } else {
    echo "Error al insertar en la tabla MENU (Zarautz): " . mysqli_error($conn) . "<br>";
  }

?> 