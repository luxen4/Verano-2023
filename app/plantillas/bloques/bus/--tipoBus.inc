        <!--
        <div class="col-xl-12">
            <label for="busasignado">Matricula Bus</label>

            <select style="max-width: 150px;" id="" name="datos[busasignado]" >
                <option value="" selected>Seleccione!</option>
               
                <?php
 
                $busesCompaniaPredeterminada=$busesCompania;
                for($i=0; $i<count($busesCompaniaPredeterminada);$i++){
                $matriculaBus=$busesCompaniaPredeterminada[$i]->matricula; 
                $plazas=$busesCompaniaPredeterminada[$i]->plazas; 
                $nombreCompaniaBuses=$busesCompaniaPredeterminada[$i]->nombre; 
                $ref_Bus= $busesCompaniaPredeterminada[$i]->ref_Bus; 
                $opcionBus=$matriculaBus . " // " .  $plazas . " plazas... " . $nombreCompaniaBuses;?>
                <option  style="color: #006293; background-color:#CEF0FA; font-weight: bold" value="<?php echo($ref_Bus);?>"><?php echo($opcionBus);?></option><?php }


                $busesCompania=$busesOtrasCompanias;
                for($i=0; $i<count($busesCompania);$i++){
                      $matriculaBus=$busesCompania[$i]->matricula; 
                      $plazas=$busesCompania[$i]->plazas; 
                      $nombreCompaniaBuses=$busesCompania[$i]->nombre; 
                      $codBus= $busesCompania[$i]->cod_Bus; 
                      $opcionBus=$matriculaBus . " // " .  $plazas . " plazas... " . $nombreCompaniaBuses;?>
                        <option value="<?php echo($codBus);?>"><?php echo($opcionBus);?></option><?php }
                        
                        
                        ?>
            </select><br>
            <?php if(isset($datos)){if(isset($errores['busasignado'])){?><span class="error"><?= $errores['busasignado'].'</span>'?><?php 
                                    }else{?><span class="ok">OK</span><?php }};?>
      
                </select>
        
        </div> 
        -->