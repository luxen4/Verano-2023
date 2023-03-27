<?php
$pueblaMENUZARAUTZ="INSERT INTO MENU(ref_menu, ref_modelomenu,ref_negocio,primero1,primero2,primero3,primero4,primero5,segundo1,segundo2,segundo3,segundo4,segundo5,
                postre1,postre2,postre3,
                incluido,precio,iva_incluido,comentario)
          
                VALUES   
                      (/*cod_menu* Kai Eder, Plencia OK*/ 'M12001','MOD-3','12001',
                      'Ensalada de Tomate con Bonito','Guisado de Patatas con Níscalos','Pasta Salteada con Verduras y Carne','Pencas Rebozadas con salsa de Setas',null,
                      'Filete de Ternera a la Plancha con Cebolla Pochada','Huevos Fritos con Jamón Asado','Bacalao a la Plancha con Piperrada','Pollo Asado a la Cerveza con Patata Panadera',null,
                      'pudin de Pan Brioche','Helado','Profiteroles de Crema Pastelera<br>Pannacotta de Frutos rojos',
                      'PAN Y VINO','10.5','IVA INCLUIDO','*Los Platos Pueden Variar Ligeramente*');";


  // Condicional PHP que poblará la tabla
  if (mysqli_query($conn, $pueblaMENUZARAUTZ)) {
    echo "Inserción en la tabla MENU exitosa (Zarautz) <br>";
  } else {
    echo "Error al insertar en la tabla MENU (Zarautz): " . mysqli_error($conn) . "<br>";
  }

?>