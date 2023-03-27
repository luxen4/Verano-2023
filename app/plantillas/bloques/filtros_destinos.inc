<form action="">
<div class="row aparecerbotones">
                    <div class=""><!--<i class="fa fa-search"></i> -->
                            <input  class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12 button" id="button_aparecer" type="button" name="verinformacionpasajeros" 
                            onclick="aparecemmmmmmmmmm()" value="Destinos"></a>    
                    </div>
               

    <!--Filtros-->
    <div id="filtros"  class="partes row text-center">
        
          
                
                <label for="fViaje" class="text-center">
                <div class="col-xl-12">
                <div class="row ">

                    <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-8">
                        <div class="row">                
                            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">   
                                <!-- style="background-image:url(web/imagenes/icons/ok.svg); border-radius:0.5em;" -->
                                <input style="width:100%" type="date" name="datos[fechaviaje]" id="sexo" value="<?php echo $datos['fechaviaje'] ?? '' ?>" >
                            </div>
                        </div>
                    </div>

                    <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-4">
                        <div class="row"> 
                            <div class="col-xl-12  col-lg-12 col-md-12 col-sm-12 col-12">
                                <input style="border-radius: 1em; padding-left:0.5em; padding-right:0.5em" type="submit" name="consultarporfecha" value="&#x1f44c; Consultar"> 
                            </div>
                        </div>
                    </div>

                </div>
                        <!--<input style="width: 20px;" type="image" id="image" alt="Botón consultar"  src="web/imagenes/icons/puntos.png"  
                        style="background-image:url(web/imagenes/icons/ok.png)">
                        https://developer.mozilla.org/en-US/docs/Web/HTML/Element/input/image


                        <span class="icon-input-btn">
                            <i class="fa fa-search"></i> 
                            <input type="submit" class="btn btn-secondary btn-lg" value="Search">
                        </span>
                        -->

                
                <label for="dia"><br><!--https://www.fileformat.info/index.htm-->
                    <div class="row">

                        <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-8">
                            <div class="row">                
                                <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">      
                                    <select style="width: 100%;" name="datos[diasemana]" >
                                        <option value="" selected>Dia</option>
                                        <option value="Lunes">Lunes</option>
                                        <option value="Martes">Martes</option>
                                        <option value="Miercoles">Miercoles</option>
                                        <option value="Jueves">Jueves</option>
                                        <option value="Viernes">Viernes</option>
                                        <option value="Sabado">Sábado</option>
                                        <option value="Domingo">Domingo</option>
                                    </select>
                                    </div>
                            </div>
                        </div>
                



                        <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-4">
                            <div class="row"> 
                                <div class="col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-12">
                                    <input style="border-radius: 1em; padding-left:0.5em; padding-right:0.5em" type="submit" name="consultarpordia" value="&#x1f44c; Consultar">
                                </div>
                            </div>
                        </div>

                    </div>
            
<br>



            <div class="col-xl-12">
                    <div class="row">

                        <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-7">
                            <div class="row">                
                                <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">      
                                    <select style="width: 100%;" name="datos[lugardestino]" >
                                                <option value="" selected>Destino</option><?php

                                            $result = $_SESSION['sololugares'];
                                            foreach ($result as $opciones) {
                                                $ref_Localidad=$opciones->ref_Localidad;
                                                $nombreLugar = $opciones->nombre_Localidad;?>
                                                    <option value="<?php echo $ref_Localidad; ?>"><?php echo pasarUtf8($nombreLugar); ?></option>

                                    <?php   }?>

                                    </select>
                                    </div>
                            </div>
                        </div>
                           
                        <div class="col-xl-12 text-right col-lg-12 col-md-12 col-sm-12 col-2">
                            <input style="border-radius: 1em; padding-left:0.5em; padding-right:0.5em" type="submit" name="consultarpordestino" value="&#x1f44c; Consultar">
                        </div>
                        
                    </div>
            </div>

<br>

            <div class="col-xl-12">
                <div class="row">

                    <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-6">
                        <div class="row">                
                            <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">     
                                <select  style="width: 100%;" name="datos[agenciaviajes]" >
                                <option value="" selected>Agencias</option>

                        <?php 
                            $result = $_SESSION['soloagenciasdeviajes'];
                                foreach ($result as $opciones) {
                                    $ref_AgenciaViajes = $opciones->ref_AgenciaViajes;
                                    $nombreAgenciaViajes = $opciones->nombre_Agencia;?>
                                    <option value="<?php echo pasarUtf8($ref_AgenciaViajes); ?>"><?php echo pasarUtf8($nombreAgenciaViajes); ?></option>

                        <?php   }?>

                                </select>
                                    </div>
                            </div>
                        </div>
                           
                        <div class="col-xl-12 text-right col-lg-12 col-md-12 col-sm-12 col-2">
                            <input style="border-radius: 1em; padding-left:0.5em; padding-right:0.5em" type="submit" name="consultarporagenciaviajes" value="&#x1f44c; Consultar">   
                            </div>
                        
                        </div>
                </div>
    </div>







    
</form>

<style>
    .row{margin-left: 0em; margin-right: 0em;}
</style>




   