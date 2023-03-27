<?php
$pueblaMENUZUMAIA="INSERT INTO MENU(ref_menu, ref_modelomenu,ref_negocio,primero1,primero2,primero3,primero4,primero5,segundo1,segundo2,segundo3,segundo4,segundo5,
                postre1,postre2,postre3,
                incluido,precio,iva_incluido,comentario)
          
                VALUES   
                       (/*cod_menu* GoiKo Bodegoia, Zumaia OK*/ 'M19004','MOD-10','19004',
                      'Ensalada de Pollo y Mozarela','Setas a la Plancha con Jamón ','etc...',null,null,
                      'Bonito Encebollado','Lomo con Patatas y Pimientos','Muslito de Pato',null,null,
                      null,null,null,
                      'Pan, Postre y Vino de La Casa incluido','10','IVA INCLUIDO','*Los Platos Pueden Variar Ligeramente*');";


  // Condicional PHP que poblará la tabla
  if (mysqli_query($conn, $pueblaMENUZUMAIA)) {
    echo "Inserción en la tabla MENU exitosa (Zumaia) <br>";
  } else {
    echo "Error al insertar en la tabla MENU (Zumaia): " . mysqli_error($conn) . "<br>";
  }

?> 