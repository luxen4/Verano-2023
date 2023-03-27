<?php
$pueblaMENUCASTROURDIALES="INSERT INTO MENU(ref_menu, ref_modelomenu,ref_negocio,primero1,primero2,primero3,primero4,primero5,segundo1,segundo2,segundo3,segundo4,segundo5,
                postre1,postre2,postre3,
                incluido,precio,iva_incluido,comentario)
          
                VALUES   
                      (/*cod_menu* Bajamar, Castro-Urdiales OK*/ 'M03004','MOD-8','03004', /* Hay que preparar para que pueda aguantar más platos o postres, etc */
                      'Sopa de Pescado o Ensalada de Pasta',
                      'Ensalada Mixta o Ensalada Marisquera',
                      'Ensaladilla Rusa o Piquillo con Anchoas y Atún',
                      'Paella o Espárragos con Jamón',
                      'Revuelto de Gulas y Gambas',
                      
                      'Entrecot a la Plancha',
                      'Chuletillas de Cordero a la Plancha',
                      'Escalopines al Queso',
                      'Salmón al Horno o Lenguadina a la Plancha',
                      'Lubina o Dorada a la Plancha',
                      null,null,null,
                      'PAN, VINO, AGUA O REFRESCO,<br>POSTRE O CAFÉ','15','IVA INCLUIDO','*Los Platos Pueden Variar Ligeramente*');";

/* Menú del dia: https://www.tripadvisor.es/Restaurant_Review-g776898-d3935364-Reviews-Bajamar-Castro_Urdiales_Cantabria.html#photos;aggregationId=101&albumid=101&filter=7&ff=341193438 */

/*
Pencas Rellenas con Crema de Piquillo
Calabacines Rellenos de Carne

Lengua Rebozada con Pimientos
Solomillo de Cerdo a la Pimienta
Ternera en su Jugo o Albondigas
Bacalao Rebozado con Pimientos
Chuleta de Ternera a la Plancha
*/




  // Condicional PHP que poblará la tabla
  if (mysqli_query($conn, $pueblaMENUCASTROURDIALES)) {
    echo "Inserción en la tabla MENU exitosa (CastroUrdiales) <br>";
  } else {
    echo "Error al insertar en la tabla MENU (CastroUrdiales): " . mysqli_error($conn) . "<br>";
  }

?>