
  <table class="table table-striped table-bordered table-hover">
  <thead>
      <th>Nombre</th><th>Dirección</th><th>Localidad</th><th>Teléfono</th><th>Horario Oficina</th><th>Salida desde...</th>
      <!--<th>Sócio</th>-->
  </thead>

  <tbody>
          
                                  <?php //$veces=0;

      $numAgencias=count($agenciaViajes);

      for($i=0; $i<$numAgencias; $i++){

      $cod_AgenciaViajes=$agenciaViajes[$i]->cod_AgenciaViajes;?>
      </tr> 
      <td><?= pasarUtf8($agenciaViajes[$i]->nombre_Agencia);?></td>
      <td><?= pasarUtf8($agenciaViajes[$i]->direcion);?></td>
      <td><?= pasarUtf8($agenciaViajes[$i]->localidad);?></td> 
      <td><?= pasarUtf8($agenciaViajes[$i]->telefono_Agencia);?></td>
      <td><?= pasarUtf8($agenciaViajes[$i]->horario_Agencia);?></td>
      <td><?= pasarUtf8($agenciaViajes[$i]->lugar_SalidaPredeterminado);?></td>
 
      <?php

      if (!empty($_SESSION['perfil'])) {
          if ($_SESSION['perfil']['roll']=="admin") {?>

      <td>
          <label for="<?=$cod_AgenciaViajes;?>">
          <input type="checkbox" id="<?=$cod_AgenciaViajes;?>" name="datos[<?=$cod_AgenciaViajes;?>]" value="<?=$cod_AgenciaViajes;?>"> Selecionar</label>
      </td>

      </tr> 
      <?php };

          /*    if ($_SESSION['perfil']['roll']=="cliente") {?>
                  <td>
                      <label for="<?=$cod_AgenciaViajes;?>">
                      <input type="checkbox" id="<?=$cod_AgenciaViajes;?>" name="datos[<?=$cod_AgenciaViajes;?>]" value="<?=$cod_AgenciaViajes;?>"> </label>
                  </td>
      </tr> 

      <?php   }*/
      }

      } ?>
  </tbody>
</table>
