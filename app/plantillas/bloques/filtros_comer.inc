<!--Donde Comer para dirigir a Todos los Negocios de una Localidad, tarjetas a 100%-->
<form action="" method="POST">
<div class="row aparecerbotones">
    <div><!--<i class="fa fa-search"></i> -->
    
    <!--<i class="fas fa-utensils">--></i><!--https://fontawesome.com/v5.15/icons/utensils-->

     <!--   <span><!--https://www.tripadvisor.es/Tourism-g776898-Castro_Urdiales_Cantabria-Vacations.html
            <svg viewBox="0 0 24 24" width="16px" height="16px" class="bDFSd d Vb ymbyq">
                <path d="M18.753 21.459l-5.502-5.504-2.85 2.851-1.663-1.662-4.315 4.315-1.343-1.344 4.316-4.316-4.004-4.003A4.718 4.718 0 012 8.438c0-1.269.494-2.461 1.392-3.358l.834-.835 7.362 7.362.866-.866c-1.099-1.719-.777-3.972.912-5.661l2.538-2.538 1.343 1.344-2.538 2.537c-.785.787-1.254 1.903-.852 2.916l4.423-4.422 1.343 1.344-4.429 4.428c.31.13.64.188.977.164.646-.043 1.299-.364 1.838-.904a630.937 630.937 0 002.642-2.653L22 8.631s-1.241 1.255-2.647 2.66c-.865.865-1.951 1.383-3.057 1.456a4.027 4.027 0 01-2.501-.66l-.864.862 7.166 7.166-1.344 1.344zM4.291 6.995A2.835 2.835 0 003.9 8.438c0 .762.296 1.478.835 2.015l5.666 5.667 1.506-1.507-7.616-7.618z">

                </path>
            </svg>
        </span>

        <input class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12 button " id="button_aparecerdondecomer" type="button" 
        onclick="apareceDondeComerrrrrrr()" value="&#127869;Donde Comer">--><!--https://unicode-table.com/en/1F374/-->
    
    
                                                            
    
    
    
   
    </div>

</div>

 <?php  

 $localidades = $_SESSION['sololocalidades'];?>
    <div id="dondecomer" class="text-center">
        <label for="dondecomer">

       
            <div class="row">                
                    <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-6"> 
                        <select  name="datos[codlocalidad]" >
                            <option value="" selected>Lugar</option><?php

                            // $localidades = $_SESSION['sololugares'];
                                //var_dump($localidades);
                                
                                for($i=1; $i<=count($localidades); $i++) {
                                
                                        $nombre_Localidad = $localidades[$i-1]->nombre_Localidad;
                                        $ref_Localidad=$localidades[$i-1]->ref_Localidad;?>
                                        <option value="<?php echo $ref_Localidad; ?>"><?php echo pasarUtf8($nombre_Localidad); ?></option>
                        <?php   }?>

                        </select>
                    </div>
                
            
                     
                <div class="col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-6">
                    <input style="border-radius: 1em; padding-left:0.5em; padding-right:0.5em" type="submit" name="dondecomerlugar" value="🍽️ Consultar"><!--w3school &spades; &#128521;-->
                    <!--https://www.compart.com/en/unicode/U+1F60B    &#128521;-->
                    <!--https://es.emojiguide.com/comida-bebida/fork-and-knife-with-plate/ -->
                    <!--https://emojiterra.com/es/plato-con-cuchillo-tenedor/ 🍽️-->
                </div>
            </div>  
                   
                
    </div>
</form>



