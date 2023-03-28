<?php  
use miId\fuente\Repositorio\ClienteRepositorio;
include_once $_SERVER['DOCUMENT_ROOT'] . CLIENTEREPOSITORIO; ?>

<script>
    function borrarDesdeCliente(formnocliente,formsocioagenciaviajes){
        var formularioNoCliente='#' + formnocliente;
        var formularioSocioAgenciaViajes='#' + formsocioagenciaviajes;
     $(formularioNoCliente).remove();
     $(formularioSocioAgenciaViajes).remove();
    }

    function borrarDesdeSocio(formnocliente,formclienteplataforma){
        var formularioNoCliente='#' + formnocliente;
        var formularioClientePlataforma='#' + formclienteplataforma;
     $(formularioNoCliente).remove();
     $(formularioClientePlataforma).remove();
    }
    
    
</script>

<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/formulariosReservaBilletes.inc'; ?>

<div id="formnocliente" class="row sentar"> 
    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
        <h4>Inscribir Pasajero</h4>
        <?php // var_dump($destino[0]); ?>
    </div>

    <div id="" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
        <div>
            <label for="nombree" >Nombre</label>
            <!-- value="<?php echo $_SESSION['perfil']['nombre'] ?? '' ?>"-->
            <input type="text" name="datos[nombre]" id="nombree" 

            <?php 
            
            if (!empty($_SESSION['perfil']['roll'])) {
                if ($_SESSION['perfil']['roll']==='cliente') { ?>
                    value="<?php echo($_SESSION['perfil']['nombre'] . $_SESSION['perfil']['apellidos']); ?>"
                <?php }
            };?>
            
            placeholder="Adrián" size="10" required><br>
            <?php if(isset($datos)){if(isset($errores['nombre'])){?><span class="error"><?= $errores['nombre'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
                    
        </div>


        <div style="margin: 0.5em;">
            <label for="tlfnoParticular">Teléfono</label>
            <input type="text" name="datos[tlfno]" id="tlfnoParticular" value="<?php echo $datos['tlfnoParticular'] ?? '' ?>" placeholder="637117965" size="7" required><br>
            <?php if(isset($datos)){if(isset($errores['tlfnoParticular'])){?><span class="error"><?= $errores['tlfnoParticular'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
        </div>

        <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">
            <label for="email">Email</label>
            <input type="text" name="datos[email]" id="email" value="<?php echo $datos['email'] ?? '' ?>" 
            placeholder="superlaya50@gmail.com" size="21">
            <?php if(isset($datos)){if(isset($errores['email'])){?><span class="error"><?="<br>" . $errores['email'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
        </div>


        <div class="row">
            <div class="col-xl-4 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                            <label for="edadpasajero">Edad</label><br>
                            <input id="edadpasajero" type="number" name="datos[edadpasajero]" value="<?php echo $datos['edadpasajero'] ?? '' ?>" placeholder="18 años" size="6" required min="1" max="120"> <br>
                            <?php if(isset($datos)){if(isset($errores['edadpasajero'])){?><span class="error"><?= $errores['edadpasajero'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
            </div>

            <div class="col-xl-4 text-left col-lg-12 col-md-12 col-sm-12 col-12" style="margin: 1em 0em 1em 0em;">
                        <h5 style="text-align: center; text-decoration: underline; border-bottom: none; ">PAGADO</h5>
                        <label for="pagadosi">
                        <input type="radio" id="pagadosi" name="datos[pagado]" value="SI" checked> SI</label>

                        <label for="pagadono" style="margin-left:2em">
                        <input type="radio" id="pagadono" name="datos[pagado]" value="NO"> NO</label> 
            </div> 

            <div class="col-xl-4 text-left col-lg-12 col-md-12 col-sm-12 col-12">
                            <label for="importepasajero">Importe</label><br>
                            <input id="importepasajero" type="number" name="datos[importepasajero]"  value="<?php echo $destino[0]->euros; ?>" placeholder="<?php echo $destino[0]->euros; ?>" size="6" required min="10" max="50"> <br>
                            <?php if(isset($datos)){if(isset($errores['importepasajero'])){?><span class="error"><?= $errores['importepasajero'].'</span>'?><?php }else{?><span class="ok">OK</span><?php }};?>
            </div>
        </div>

            <!--<div id="" style="margin-bottom: 1em;" class="row">
                    <div id="contpagado" class="col-xl-12 text-center">
                        <label for="pagado">
                        <input id="pagado" type="checkbox" name="datos[pagado]"> PAGADO</label>
                    </div>
                </div>
                -->                                
    
    </div>



            
    <div id="seguridad" class="row">
        <div id="seg" class="col-xl-12 text-center">
            <label for="estaseguro">
            <input id="estaseguro" type="checkbox" name="asegura"> Estoy seguro de reservar esta/s plazas.</label>
        </div>
    </div> 

    <div style="margin: 1em 2em 1em 2em;" class="row">
        <div class="col-xl-12 text-center">
            <div  id="botones">  
                    <input type="submit" name="ocupaplazas" value="Ocupar">
                    <input type="reset" value="Limpiar">
            </div>
        </div>
    </div>
</div>



 <?php //include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/infoOcupacionBus.php' ?>

 <style>
    #formnocliente, #formclienteplataforma, #formsocioagenciaviajes{
        border: 1px solid #006293;
    border-radius: 5px;
    margin: auto;
    padding: 1em;
    background-color: #f6f6f6;
    margin-bottom: 1em;
    margin-top: 1em;
    box-shadow: inset 0px 0px 20px 4px #c1c1c1;
}
 </style>
 
<?php
    $infoClientesPlataforma = (new ClienteRepositorio())->mostrarTodosClientesRef_Nombre_Apellidos(); ?>
    <div id="formclienteplataforma" style="margin-top: 0.5em;" class="row sentar"> 
        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
            <div>
                <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12 cont">
                    <label for="nombrecliente" >Nombre Cliente</label><br>
                    <input style="" class="checkasiento" id="asiento78" type="checkbox" name="asientos[asientoseleccionado_78]" value="78">
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
                                } ?><option value="<?php echo $ref_Cliente; ?>"><?php echo pasarUtf8($nombre_Cliente . ' '. $apellidos_Cliente); ?></option><?php
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
                        <input type="radio" id="pagadosi" class="radiopagado" name="datos[pagado]" value="SI" checked> SI</label>

                        <label for="pagadono" style="margin-left:2em">
                        <input type="radio" id="pagadono" class="radiopagado" name="datos[pagado]" value="NO"> NO</label> 
            </div> 
        </div>

    <div id="seguridad" class="row">
        <div id="seg" class="col-xl-12 text-center">
            <label for="estaseguro">
            <input id="estaseguro" type="checkbox" name="asegura"> Estoy seguro de reservar esta/s plazas.</label>
        </div>
    </div> 

    <div style="margin: 1em 2em 1em 2em;" class="row">
        <div class="col-xl-12 text-center">
            <div  id="botones">  
                    <!--<input onclick="reservar('clienteplataforma')" type="button" name="ocupaplazas" value="Ocupar Cliente">-->
                    <input type="submit" name="ocupaplazas" value="Reservar Cliente" onclick="borrarDesdeCliente('formnocliente','socioagencia')">
                    <input type="reset" value="Limpiar">
            </div>
        </div>
    </div>



    </div>




    

<?php
    $ref_AgenciaViajes=$_SESSION['perfil']['ref_AgenciaViajes'];
    $infoSociosAgenciaViajes = (new ClienteRepositorio())->mostrarTodosSociosRef_Nombre_Apellidos($ref_AgenciaViajes); ?>
    <div id="formsocioagenciaviajes" style="margin-top: 0.5em;" class="row sentar"><?php 

        if(!empty($infoSociosAgenciaViajes)){ ?>
            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                    <div>
                        <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12 cont">
                            <label for="nombrecliente" >Nombre Socio Agencia Viajes</label><br>
                                <select id="nombresocio" name="datos[ref_Socio]" >
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
                                        } ?><option value="<?php echo $ref_Socio; ?>"><?php echo pasarUtf8($nombre_Socio . ' '. $apellidos_Socio); ?></option><?php
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


        <div id="seguridad" class="row">
                <div id="seg" class="col-xl-12 text-center">
                    <label for="estaseguro">
                    <input id="estaseguro" type="checkbox" name="asegura"> Estoy seguro de reservar esta/s plazas.</label>
                </div>
            </div> 

            <div style="margin: 1em 2em 1em 2em;" class="row">
                <div class="col-xl-12 text-center">
                    <div  id="botones">  
                            <!--<input onclick="reservar('socio')" type="button" name="ocupaplazas" value="Ocupar Socio de <?php echo $_SESSION['perfil']['name'];?>">-->
                            <input type="submit" name="ocupaplazas" value="Reservar Cliente" onclick="borrarDesdeSocio('formnocliente','formclienteplataforma')">
                            <input type="reset" value="Limpiar">
                    </div>
                </div>
            </div>
        
    </div>

    





    <style>
          .sentar{margin-top: 0.5em;}
    </style>

