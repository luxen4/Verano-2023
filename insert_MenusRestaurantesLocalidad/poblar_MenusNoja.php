<?php
$pueblaMENUNOJA="INSERT INTO MENU(ref_menu, ref_modelomenu,ref_negocio,primero1,primero2,primero3,primero4,primero5,segundo1,segundo2,segundo3,segundo4,segundo5,
                postre1,postre2,postre3,
                incluido,precio,iva_incluido,comentario)
          
                VALUES   
                      (/*cod_menu  El Águila, Noja*/ 'M10002','MOD-4','10002',
                        'Croquetas variadas','Crema Verdura con Picatostes','Ensalada Mixta','Ensalada de queso de Cabra','Gazpacho/Marmitaco',
                      'Cruceta Ibérica','Costilla Ibérica','Entrecotte de Buey','Pescado del Dia',null,
                      null,null,null,
                      'POSTRE, PAN Y VINO','15','IVA INCLUIDO','*Los Platos Pueden Variar Ligeramente*');";


  // Condicional PHP que poblará la tabla
  if (mysqli_query($conn, $pueblaMENUNOJA)) {
    echo "Inserción en la tabla MENU exitosa (Noja) <br>";
  } else {
    echo "Error al insertar en la tabla MENU (Noja): " . mysqli_error($conn) . "<br>";
  }

?>