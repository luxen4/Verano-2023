<!--Inicio estadodestino.inc-->
<?php
    if($estado=='DISPONIBLE'){ ?>    
            <div style="">
                <?php  echo $numPlazasOcupadasBus; ?> / <?php echo $numPlazasTotalesBus; ?> plazas  &nbsp;                   
                <?php  echo $evento->euros .' €'; ?>
            </div><?php
    }else{?>
        <div><h5>COMPLETO</h5></div><?php 
    } ?>
<!--Fin estadodestino.inc--> 