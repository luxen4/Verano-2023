<?php  
use miId\fuente\Repositorio\ClienteRepositorio;
include_once $_SERVER['DOCUMENT_ROOT'] . CLIENTEREPOSITORIO; 
    $ref_AgenciaViajes=$_SESSION['perfil']['ref_AgenciaViajes'];
    $infoSociosAgenciaViajes = (new ClienteRepositorio())->mostrarTodosSociosRef_Nombre_Apellidos($ref_AgenciaViajes); 
?>
    <div id="formsocioagenciaviajes" style="margin-top: 0.5em;" class="row sentar"><?php 

        if(!empty($infoSociosAgenciaViajes)){ ?>
            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                    <div>
                        <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12 cont">
                            <label for="nombrecliente" >Nombre Socio Agencia Viajes</label><br>
                                <select id="nombrecliente" name="datos[ref_Socio]" >
                                            <option value="" selected>Seleccione!</option><?php

                                    foreach($infoSociosAgenciaViajes as $info_SocioAgenciaViajes){ 
                                        $veces=0;
                                        foreach ($info_SocioAgenciaViajes as $atributo) {
                                            if ($veces==0) {
                                                $veces++;
                                                $ref_Socio=$atributo;
                                            } elseif ($veces==1) {
                                                $nombre_Socio=$atributo;
                                                $veces++;
                                            } elseif ($veces==2) {
                                                $apellidos_Socio=$atributo;
                                                $veces++;
                                            }
                                        } ?><option value="<?php echo $ref_Socio; ?>"><?php echo $nombre_Socio . ' '. $apellidos_Socio; ?></option><?php
                                    };?>

                                </select>
                        </div>
                    </div>           
                </div>

                <div class="row">
                    <div class="col-xl-6 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                    <input style="width: 6em; margin:1em;" id="importepasajero" type="number" name="datos[importepasajero]" value="<?php echo $precioBilleteNormal[0]->euros . ' euros'; ?>" placeholder="<?php echo $precioBilleteNormal[0]->euros . ' euros'; ?>" size="6" readonly required min="10" max="50"> <br>
               <!-- <label for="importepasajero">Importe Predeterminado del Viaje (podría tener descuento) </label><?php if(isset($datos)){if(isset($errores['importepasajero'])){?><span class="error"><?= $errores['importepasajero'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>-->
                        <?php if(isset($datos)){if(isset($errores['importepasajero'])){?><span class="error"><?= $errores['importepasajero'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
                    </div>

                    <div class="col-xl-6 text-center col-lg-12 col-md-12 col-sm-12 col-12" style="margin: 1em 0em 1em 0em;">
                                <h5 style="text-align: center; text-decoration: underline; border-bottom: none; ">PAGADO</h5>
                                <label for="pagadosi">
                                <input type="radio" id="pagadosi" name="datos[pagado]" value="SI" checked> SI</label>

                                <label for="pagadono" style="margin-left:2em">
                                <input type="radio" id="pagadono" name="datos[pagado]" value="NO"> NO</label> 
                    </div> 
                </div><?php
        }else{
            echo "No tiene Socios";
        }?>
        
    </div>

    


