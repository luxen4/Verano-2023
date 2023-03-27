<?php
$pueblaMENUZARAUTZ="INSERT INTO MENU(ref_menu, ref_modelomenu,ref_negocio,primero1,primero2,primero3,primero4,primero5,segundo1,segundo2,segundo3,segundo4,segundo5,
                postre1,postre2,postre3,
                incluido,precio,iva_incluido,comentario)
          
                VALUES   
                    (/*cod_menu* Jatechea, (Prepararlo para que admita el 20euros) Biarritz OK*/ 'M02003','MOD-3','02003',
                    'Ensalada Balearri','Croquetas de Jamón','Espaguettis con Tomate','Arroz con Calamares en su Tinta','Arroz a la Cubana<br>Brocheta de Langostinos<br>Mejillones al Vapor',
                    'Pez Raya (Gaztaka) a la Parrilla','Pescado en Salsa Verde','Lomo con Patatas y Pimientos',null,null,
                    null,null,null,
                    'POSTRE, PAN, 1/2 VINO, Agua o 1/2 Sidra','18','IVA INCLUIDO','*Los Platos Pueden Variar Ligeramente*');";


  // Condicional PHP que poblará la tabla
  if (mysqli_query($conn, $pueblaMENUZARAUTZ)) {
    echo "Inserción en la tabla MENU exitosa (Zarautz) <br>";
  } else {
    echo "Error al insertar en la tabla MENU (Zarautz): " . mysqli_error($conn) . "<br>";
  }

?>