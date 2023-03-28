<?php ob_start();
use miId\fuente\Repositorio\DestinoRepositorio;
?>

<link rel="stylesheet" type="text/css" href="web/css/stylesmostrar.css">
<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades.inc';?>     

<div id="buscadordestinos" class="container" style="max-width: 400px;">
    <div class="row">
        <div id="caja" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
            <form action="" method="POST"> 
                <div id="titulo" class="row">
                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">    
                        <h5>¿En qué Localidad comemos?</h5>
                    </div>
                </div>

                <div class="row">
                    <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">
                        <select style="width: 100%;" name="datos[lugardestino]" >
                            <option value="" selected>Destino</option><?php

                                $result = $_SESSION['sololocalidades'];
                                foreach ($result as $opciones) {
                                    $ref_Localidad=$opciones->ref_Localidad;
                                    $nombreLugar = $opciones->nombre_Localidad;?>
                                        <option value="<?php echo $ref_Localidad; ?>"><?php echo pasarUtf8($nombreLugar); ?></option><?php   
                                }?>
                        </select>
                    </div>
                        
                    <div class="col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-12">
                        <input style="border-radius: 1em; padding-left:0.5em; padding-right:0.5em" type="submit" name="dondecomerlugar" value="🍽️ Consultar"><!--w3school &spades; &#128521;-->
                        <!--https://www.compart.com/en/unicode/U+1F60B    &#128521;-->
                        <!--https://es.emojiguide.com/comida-bebida/fork-and-knife-with-plate/ -->
                        <!--https://emojiterra.com/es/plato-con-cuchillo-tenedor/ 🍽️-->
                    </div>
                </div>
            </form>
        </div>
    </div>          
</div>

<?php $contenido = ob_get_clean()?>
<?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA .  BASE;?>


<style>
#caja{border:1px solid #006293; border-radius: 5px;  margin: auto; padding:1em;
background-color: #f6f6f6; margin-bottom: 1em; margin-top: 1em;
box-shadow: inset 0px 0px 20px 4px #c1c1c1;}

#buscadordestinos input, #buscadordestinos select {
    border: 1px solid #006293; width: 51%;
    border-radius: 5px;     padding: 0.2em;
    margin: 0.2em 0.2em 0em 0em; color: #006293;
}

#consultar input{ border-radius: 1em; margin-top: 1em;}

</style>