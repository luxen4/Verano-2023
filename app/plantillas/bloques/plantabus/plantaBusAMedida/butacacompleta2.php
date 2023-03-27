<?php use miId\fuente\Repositorio\ViajarRepositorio; ?>
<script>
    
// Función que hace cambiar el color del asiento si se encuentra libre
function cambioColorSVG(codigo){
    var asiento="#" + codigo.id + "F";
    if(document.getElementById(codigo.id).checked==true){
        $(asiento).css("filter", "invert(90%) sepia(7%) saturate(2200%) hue-rotate(61deg) brightness(96%) contrast(112%)"); 
    }else if(document.getElementById(codigo.id).checked ==false){
        $(asiento).css("filter", "invert(0%) sepia(97%) saturate(28%) hue-rotate(12deg) brightness(93%) contrast(95%)"); 
    }
}
    
</script>

<?php   
include_once $_SERVER['DOCUMENT_ROOT'] . VIAJARREPOSITORIO;
$obj = (new ViajarRepositorio())->infoEstadoPagado($ref_Destino, $i); // var_dump($ref_Destino); ?>


<?php if($i!='mesa' && $i!='pasillo' && $i!='escalera' && $i!='bano' ){ ?>
    <div class="butacacompleta2">
        <div style="">
            <img <?php   
            
                if (!empty($_SESSION['perfil'])) {
                    if ($_SESSION['perfil']['roll']=='agenciaviajes') { 
                        if($obj!=null){
                            if ($obj[0]->pagado=="NO") {?>
                                    style="filter: invert(22%) sepia(91%) saturate(7391%) hue-rotate(358deg) brightness(98%) contrast(113%);" <?php
                            } else { ?>
                                style="filter: invert(90%) sepia(7%) saturate(2200%) hue-rotate(61deg) brightness(96%) contrast(112%);" <?php
                            }
                        } 
                    }

                    if ($_SESSION['perfil']['roll']=='cliente') { 
                        if($obj!=null){ ?> style="filter: invert(22%) sepia(91%) saturate(7391%) hue-rotate(358deg) brightness(98%) contrast(113%);" <?php } 
                    }
                }else{ // Sin logueado
                    if($obj!=null){ ?> style="filter: invert(22%) sepia(91%) saturate(7391%) hue-rotate(358deg) brightness(98%) contrast(113%);" <?php } 
                }?> 
                
                id="asiento<?= $i; ?>F"  src="web/imagenes/bus<?='/butacacompleta3.svg';?>" alt="Foto brazo izquierdo">

                <div class="check_plaza"><?php
                    if($obj==null){ ?>
                    <label for="asiento<?= $i; ?>">
                    <input class="checkasiento" id="asiento<?= $i; ?>" onclick="cambioColorSVG(this)" type="checkbox" name="asientos[asientoseleccionado_<?=$i;?>]" value="<?=$i;?>"><?php }?>
                 <?= $i; ?></label>
                </div>
        </div>
    </div>
<?php

}else{ 
    
    if($i=='mesa'){ ?><div class="butacacompleta2"><div style=""><h2>Mesa</h2></div></div><?php }
    if($i=='escalera'){ ?><div class="butacacompleta2"><div style=""><h2>Esc.</h2></div></div><?php }
    if($i=='bano'){ ?><div class="butacacompleta2"><div style=""><h2>Baño</h2></div></div><?php }
    if($i=='pasillo'){ ?><div class="butacacompleta2"><div style=""></div></div><?php }

} ?>


<style>
   .butacacompleta2 img,.butacacompleta2 .check_plaza{border: solid 1px black;}




</style>