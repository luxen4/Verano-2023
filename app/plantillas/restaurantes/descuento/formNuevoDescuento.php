<?php ob_start();  
use miId\fuente\Repositorio\ComerRepositorio; // Ajax
?>                                

<link rel="stylesheet" type="text/css" href='web/css/create_account.css'/>    
<link rel="stylesheet" type="text/css" href="web/css/stylesmostrar.css">

<div id="menu_discount" class="container" style="max-width: 500px;">
  <div class="row">
    <div id="caja" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">

        <div id="titulo" class="row">
            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
              <h5>Menú Descuentos</h5>
            </div>
        </div>
  

        <div class="container">
                <div class="row"> 
                    <?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/ComerRepositorio.inc';
                        $datos['ref_negocio'] = $_SESSION['perfil']['ref_negocio'];            
                        $hayDescuento = (new ComerRepositorio())->hayDescuento($datos);

                        if($hayDescuento[0]->dto==null){?>
                        <h5 style="text-align:center;"> En estos momentos no tiene ningún Descuento </h5>
                        <?php
                           
                        }else{?>
                        <h5 style="text-align:center;">Su negocio ya tiene un Descuento de: <?php echo $hayDescuento[0]->dto . '%' ?> </h5>
                        <?php }

                        if($hayDescuento[0]->dto!=null){?>
                            <?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/barrestaurantes/descuentos/eliminardescuento.php';?>        
                            <?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/barrestaurantes/descuentos/modificardescuento.php';?><?php
                        }else{?>
                            <?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/barrestaurantes/descuentos/creardescuento.php';?><?php 
                        } ?>
                </div>
        </div>

    </div>
  </div>
</div>


<?php $contenido = ob_get_clean() ?>
<?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/basefantasma.php';?>



<style>/* Mútuo de los 3 */
    #menu_discount input, #menu_discount select {
    border: 1px solid #006293;
    width: 100%;
    border-radius: 5px;
    padding: 0.2em;
    margin: 0.5em;
}

#menu_discount select{margin: 1em;}
#form_menu_descuento{ margin-bottom: 0em;}
#form_menu_descuento label{margin: 0em;}

.modal-content{margin: auto;}

</style>

































<script>
   /*
$("#boton_crear_descuento").click(function() {	
    $("#form_crear_descuento").toggle();

// $("#filtros").css("display", "none");
//window.location.href="index.php?ctl=comerdestino";
});*/
    
</script>