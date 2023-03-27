<?php  
use miId\fuente\Repositorio\ClienteRepositorio;
include_once $_SERVER['DOCUMENT_ROOT'] . CLIENTEREPOSITORIO; 
$infoClientesPlataforma = (new ClienteRepositorio())->mostrarTodosClientesRef_Nombre_Apellidos(); ?>
 
    <div id="formclienteplataforma" style="margin-top: 0.5em;" class="row sentar"> 
        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
            <div>
                <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12 cont">
                    <label for="nombrecliente" >Nombre Cliente</label><br>
                        <select id="nombrecliente" name="datos[ref_ClientePlataforma]" >
                                    <option value="" selected>Seleccione!</option><?php

                            foreach($infoClientesPlataforma as $info_Cliente){ 
                                $veces=0;
                                foreach ($info_Cliente as $atributo) {
                                    if ($veces==0) {
                                        $veces++;
                                        $ref_Cliente=$atributo;
                                    } elseif ($veces==1) {
                                        $nombre_Cliente=$atributo;
                                        $veces++;
                                    } elseif ($veces==2) {
                                        $apellidos_Cliente=$atributo;
                                        $veces++;
                                    }
                                } ?><option value="<?php echo $ref_Cliente; ?>"><?php echo $nombre_Cliente . ' '. $apellidos_Cliente; ?></option><?php
                            };?>

                        </select>
                </div>
            </div>           
        </div>

        <div class="row">
            <div class="col-xl-6 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                
                <input style="width:6.5em; margin:1em;" id="importepasajero" type="number" name="datos[importepasajero]" value="<?php echo $precioBilleteNormal[0]->euros . ' euros'; ?>" placeholder="<?php echo $precioBilleteNormal[0]->euros . ' euros'; ?>" size="6" readonly required min="10" max="50"> <br>
               <!-- <label for="importepasajero">Importe Predeterminado del Viaje (podría tener descuento) </label><?php if(isset($datos)){if(isset($errores['importepasajero'])){?><span class="error"><?= $errores['importepasajero'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>-->
            </div>

            <div class="col-xl-6 text-center col-lg-12 col-md-12 col-sm-12 col-12" style="">
                        <h5 style="text-align: center; text-decoration: underline; border-bottom: none; ">PAGADO</h5>
                        <label for="pagadosi">
                        <input type="radio" id="pagadosi" name="datos[pagado]" value="SI" checked> SI</label>

                        <label for="pagadono" style="margin-left:2em">
                        <input type="radio" id="pagadono" name="datos[pagado]" value="NO"> NO</label> 
            </div> 
        </div>

    </div>



    <style>
          .sentar{margin-top: 0.5em;}
    </style>