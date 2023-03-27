   <td><?php
        echo $destino->nombre_Localidad . "<br>"; 
        echo $destino->dia_Semana . ", " . $destino->fecha_Viaje;
        ?>
    </td>


    <td><?php 
              echo $destino->nombre_Agencia;
            ?>
    </td>

    <td><?php
        echo round($destino->euros, 2, PHP_ROUND_HALF_DOWN) . "€"; ?>
    </td>
  

                                                                  