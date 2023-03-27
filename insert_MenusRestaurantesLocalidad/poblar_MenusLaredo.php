<?php
$pueblaMENULAREDO="INSERT INTO MENUMOD(ref_menu,ref_modelomenu,ref_negocio,
                primero1,primero2,primero3,primero4,primero5,
                segundo1,segundo2,segundo3,segundo4,segundo5,
                postre1,postre2,postre3,
                incluido,precio,iva_incluido,comentario)
          
                VALUES   
                    (/*cod_menu* Ruiloba, Laredo OK*/ 'MB08001/1','MOD-3','08001',
                    'Paella de Marisco','Langostinos a la Plancha','Ensalada de Cangrejo','Esparragos con Jamón','Croquetas Caseras', /* 'Marmitaco', 'Ensalada de Ventyresca' */
                    'Chuletillas de Lechazo','Pimientos Rellenos','Lenguadina a la Plancha','Bistec de Toro','Lubina a la Plancha',
                    null,null,null,
                    'Pan Bodega Postre','20','IVA INCLUIDO','*Los Platos Pueden Variar Ligeramente*'),



                    (/*cod_menu* Ruiloba, Laredo OK*/ 'MB08001/2','MOD-3','08001',
                      '*','*','*','*','*',
                    '*','*','*','*','*',
                    null,null,null,
                    '*','20','IVA INCLUIDO','*Los Platos Pueden Variar Ligeramente*'),

                    (/*cod_menu* Ruiloba, Laredo OK*/ 'MB08001/3','MOD-3','08001',
                      '*','*','*','*','*',
                    '*','*','*','*','*',
                    null,null,null,
                    '*','20','IVA INCLUIDO','*Los Platos Pueden Variar Ligeramente*'),


                    ('MB08004/1','MOD-1','08004',
                    'Ensalada de Gulas','Crema de Calabaza','Pasta Boloñesa','Guisantes Salteados con Cherry y Parmesano',null,
                    'Merluza a la Romana','Chipirones a la Plancha','Jamoncito de Pollo a la Cerveza','Chuleta Ibérica',null,
                    null,null,null,
                    'POSTRE, PAN Y VINO','13','IVA INCLUIDO','*Los Platos Pueden Variar Ligeramente*')
;";


  // Condicional PHP que poblará la tabla
  if (mysqli_query($conn, $pueblaMENULAREDO)) {
    echo "Inserción en la tabla MENU exitosa (Laredo) <br>";
  } else {
    echo "Error al insertar en la tabla MENU (Laredo): " . mysqli_error($conn) . "<br>";
  }

?>