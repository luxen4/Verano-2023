<?php
use miId\fuente\Repositorio\ComerRepositorio; 
use miId\fuente\Repositorio\MenuRepositorio;
use miId\fuente\Repositorio\IpRemotaInterfaceRepositorio; 

if(empty($bar_rest->ref_negocio)){ /*echo"Entroa";*/ $referenciaNegocio = $bar_rest[0]->ref_negocio;
} else{ $referenciaNegocio = $bar_rest->ref_negocio;}
    $infoMenu = (new ComerRepositorio())->infoMenu($referenciaNegocio);

    if (!empty($infoMenu[0])) {
            if (!empty($menuSoloRotulo)) {?> 
                <p class="menu_rest" style="color:orange; margin-top:0.5em">
                    <i class="fa-solid fa-utensils"></i>&nbsp; Menú del día! <i class="fa-solid fa-utensils"></i><br>
                    <?php echo $infoMenu[0]->precio . '€'; ?>
                </p><?php 
            } else {?>
                    <div class="menu_dia" style="background-color: #F8F9FA; color:orange; margin-top:0.5em;     font-weight: bold;" class='col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12' style="margin-top: -0.1em;"><?php 
                        if(!empty($rotulo)){ ?> 
                            <p style="background-color: #F8F9FA;" class="menu_rest" style="color:orange; margin-top:0.5em">
                                <i class="fa-solid fa-utensils"></i>&nbsp; Menú del día! <i class="fa-solid fa-utensils"></i><br>
                                <?php echo $infoMenu[0]->precio . '€'; ?>
                            </p><?php 
                        }else{
                            if($menuSoloPopup==0){?>
                                <a id="<?php

                                    if (!empty($bar_rest->ref_negocio)){ echo $bar_rest->ref_negocio;
                                    }else{ echo $bar_rest[0]->ref_negocio; } ?>"
                                    
                                        href="#ventana1" onclick="nombreNegocioParaMenu(this),nombreLocalidad()" data-toggle="modal" > 
                                        <i style="color:orange;" class="fa-solid fa-utensils"></i> &nbsp;Menú del día!  
                                    <p class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12 menu_dia_precio"><?php 
                                    //echo $hayMenuEnNegocio[0]->precio_menu . " Euros"; ?></p>
                                </a><?php
                            }
                        }?>
                    </div>
    <?php   }
    }  

unset($_SESSION['vengodeficha']);?>

<style>
    .fa-utensils{color:#006293;}
</style>

   

