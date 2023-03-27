<?php
$pueblaMENUSANSEBASTIAN="INSERT INTO MENU(ref_menu, ref_modelomenu,ref_negocio,primero1,primero2,primero3,primero4,primero5,segundo1,segundo2,segundo3,segundo4,segundo5,
                postre1,postre2,postre3,
                incluido,precio,iva_incluido,comentario)
          
                VALUES   
                        (/*cod_menu* PortaLetras (Este diseño, hacer una cosa personalizada), San Sebastián OK*/ 'M14002','MOD-3','14002',
                      'Ensalada Templada con Crujiente de Queso de Cabra y Vinagreta Módena','Tagliatelle con Salsa de Setas y Crujiente de Jamón','Sopa de Pescado al Estilo Tradicional','Coca de Verduras Escalivadas con antxoa Marinada','Surtido de 3 pintxos calientes: Croqueta de Jamón, Brocheta de Gambas y Bacon, Txistorra a la Brasa<br>3 pintxos de nuestra Surtida Barra (a elegir)',
                      'Chuletillas de Cordero con Ajos Tiernos y Parmentier','Merluza de Anzuelo en Papillote con Espinacas','Paella de Verduritas y Costilla de Cerdo Ibérico (min. 2 pax)','Arroz Meloso de Langostino y Txipirón','Salmón Asado con Ensaladas de Crudités<br>Brochetas de Pollo con Cous-Cous de Limón',
                      'Espuma de Yogurt con Frutos Rojos','Brownie con Salsa de Chocolate','Tarta de Queso',
                      'Copa de Vino, Cerveza o Agua','24.75','IVA INCLUIDO','Aviso a Personas con alergias o Intolerancias: Consulte a nuestro personal.<br>Este establecimiento tiene a su disposición información de los platos que ofrece.<br>*Los Platos Pueden Variar Ligeramente*')
                      ;";


  // Condicional PHP que poblará la tabla
  if (mysqli_query($conn, $pueblaMENUSANSEBASTIAN)) {
    echo "Inserción en la tabla MENU exitosa (San Sebastián) <br>";
  } else {
    echo "Error al insertar en la tabla MENU (San Sebastián): " . mysqli_error($conn) . "<br>";
  }

?>