<?php
$pueblaMENUISLA="INSERT INTO MENU(ref_menu, ref_modelomenu,ref_negocio,primero1,primero2,primero3,primero4,primero5,segundo1,segundo2,segundo3,segundo4,segundo5,
                postre1,postre2,postre3,
                incluido,precio,iva_incluido,comentario)
          
                VALUES   
                      (/*cod_menu* Bajamar, Isla OK*/ 'M07003','MOD-6','07003',
                      'Ensalada de Frutos Secos, Jamón Iberico y Foie','Pudding de Cabracho','Verduras a la Plancha con Salsa de Romesco','Cocido Montañés','Entremeses Frios y Calientes',
                      'Lubina del Cantábrico a la Parrilla','Pimientos Rellenos de Marisco','Solomillo de Cerdo Ibérico al pedro Ximenez','Costilla de Cerdo a la Parrilla con su Guarnición','Entrecot de Buey a la Parrilla con su Guarnición',
                      null,null,null,
                      'Vino, Incluye una Botella por Pareja,<br>Postre Y Café','22','por persona (I.V.A INCLUIDO)','*Los Platos Pueden Variar Ligeramente*');";


  // Condicional PHP que poblará la tabla
  if (mysqli_query($conn, $pueblaMENUISLA)) {
    echo "Inserción en la tabla MENU exitosa (Isla) <br>";
  } else {
    echo "Error al insertar en la tabla MENU (Isla): " . mysqli_error($conn) . "<br>";
  }

?>