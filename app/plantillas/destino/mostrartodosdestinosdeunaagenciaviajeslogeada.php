<?php 
    use miId\fuente\Repositorio\ViajarRepositorio; 
    /*use miId\fuente\Repositorio\DestinoRepositorio;
    use SebastianBergmann\CodeCoverage\Report\PHP;*/
?>

<?php ob_start() ?>

<title>Todos los Destinos de una Agencia de Viajes Logueada</title>

<div class="container-fluid" style="padding: 0em;"> 
    <div class="row">
        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12 ">
            <h5 style="text-align: center;"><?php echo $_SESSION['perfil']['name']; ?><br> Todos los Destinos de la Agencia de Viajes</h5>
        </div>
    </div>

    <div class="container">
        <div class="row">
            <div id="crear_nuevodestino" class="col-xl-6 text-center col-lg-12 col-md-12 col-sm-12 col-12" style="margin: auto;">
                <a class="dropdown-item" href="index.php?ctl=nuevodestino"><i class="fas fa-umbrella-beach"></i> Crear Nuevo Destino</a> 
            </div>

            <div id="activar_suspender_viajes" class="col-xl-6 text-center col-lg-12 col-md-12 col-sm-12 col-12" style="margin: auto;">
                <input style="border:none" class="botones_disparadores" type="button" value="Activar Suspender Viajes" onclick="asdf(this)">
            </div>
        </div>    
    </div>

</div>

<form action="" method="post" style="text-align: center;">
    <div class="container">
        <div class="row">
            <?php $i=0;
                if (!empty($destinos)) {
                    foreach ($destinos as $destino) { 
                    $ref_Destino=$destino->ref_Destino;
                        require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ViajarRepositorio.inc';
                        $plazasOcupadas = (new ViajarRepositorio())-> numPlazasOcupadasDestino($ref_Destino); 
                        $plazasOcupadasPagadas = (new ViajarRepositorio())-> numPlazasOcupadasPagadas($ref_Destino); 
                        $plazasOcupadasNoPagadas = (new ViajarRepositorio())-> numPlazasOcupadasNoPagadas($ref_Destino); ?>
                    
                        <div class="col-xl-4 text-center col-lg-6 col-md-6 col-sm-6 col-12" style="padding: 0.5em;">
                            <?php  include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/card_modificacion_destino.inc'; ?>
                        </div><?php   
                    }
                } ?>                          
        </div>
    </div>
</form>
     
<?php $contenido = ob_get_clean() ?>

<?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA .  BASE;?>

<style>
    .container{max-width: 1800px;}
#crear_nuevodestino a, 
#activar_suspender_viajes {background-color:#EFEFEF ; border:1px solid #006293; border-radius:1em;}

.table-responsive{max-width: 1200px;margin: auto;}
#contenido{padding: 0em;}
.btn{font-size: 0.5rem; padding: 0.2em;}
td{vertical-align: middle; font-size: 1em;}

</style>

<script>
    function asdf(e){
        if(e.value=="Activar Suspender Viajes"){
            $('.boton_suspenderviaje').prop("disabled", false); 
            $('.botones_disparadores').val('Desactivar Suspender Viajes');

        }else{
            $('.boton_suspenderviaje').prop("disabled", true); 
            $('.botones_disparadores').val('Activar Suspender Viajes');
        }
        
    }
   
</script>



