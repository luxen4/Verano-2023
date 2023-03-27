<?php ob_start();
use miId\fuente\Repositorio\DestinoRepositorio;
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" type="text/css" href="web/css/stylesmostrar.css">

</head>
<body>
<?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/utilidades/utilidades.inc';?>

        <div class="col-xl-12">
            <?php
              require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/DestinoRepositorio.inc'; 
              $soloAgenciasDeViajes= (new DestinoRepositorio())->soloAgenciasDeViajes();
              //var_dump($soloAgenciasDeViajes);die();
              //$_SESSION['soloagenciasdeviajes']=$soloAgenciasDeViajes; ?>
        </div>     
 



<div id="buscadordestinos" class="container">
    <div class="row">
        <div id="caja" class="col-xl-6 text-center col-lg-6 col-md-10 col-sm-10 col-12">
        <form action="" method="POST"> 

                <div id="titulo" class="row">
                    <div class="col-xl-12 text-center">
                    <h5>Buscador Destinos</h5>
                    </div>
                </div>



           
                <div class="row">

                    <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">
                                <!-- style="background-image:url(web/imagenes/icons/ok.svg); border-radius:0.5em;" -->
                                <input style="width:100%" type="date" name="datos[fechaviaje]" id="sexo" value="<?php echo $datos['fechaviaje'] ?? '' ?>" >
                    </div>
                   
                    <div class="col-xl-6 col-lg-6 col-md-6 col-sm-6 col-6">      
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
                
                    <div class="col-xl-6 col-lg-6 col-md-6 col-sm-6 col-6">
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
                    
                    <div class="col-xl-6 col-lg-6 col-md-6 col-sm-6 col-6">     
                        <select  style="width: 100%;" name="datos[agenciaviajes]" >
                        <option value="" selected>Agencias</option>

                            <?php 

                                $result = $_SESSION['soloagenciasdeviajes'];
                                    foreach ($result as $opciones) {
                                        $ref_AgenciaViajes = $opciones->ref_AgenciaViajes;
                                        $nombreAgenciaViajes = $opciones->nombre_Agencia;?>

                                        <?php 
                                            if(!empty($_SESSION['perfil'])){
                                                if($_SESSION['perfil']['name']==$nombreAgenciaViajes){ ?>
                                                    <option value="<?php echo pasarUtf8($ref_AgenciaViajes); ?>"><?php echo pasarUtf8($nombreAgenciaViajes); ?></option> <?php
                                                }
                                            }else{?>
                                                <option value="<?php echo pasarUtf8($ref_AgenciaViajes); ?>"><?php echo pasarUtf8($nombreAgenciaViajes); ?></option> <?php

                                            }
                                    } ?>

                        </select>
                    </div>
                               
                                
                        <div id="consultar" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">     
                            <input type="submit" name="consultardestinos" value="&#x1f44c;Consultar"> 
                        </div>
                   
                </div>
        </form>
        </div>
    </div>          
</div>


</body>
</html>

<?php $contenido = ob_get_clean()?>
<?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/basefantasma.php';?>


<style>
    
   
#caja{border:1px solid #006293; border-radius: 5px;  margin: auto; padding:1em;
background-color: #f6f6f6; margin-bottom: 1em; margin-top: 1em;
box-shadow: inset 0px 0px 20px 4px #c1c1c1;}


#buscadordestinos input, #buscadordestinos select {
    border: 1px solid #006293; width: 51%;
    border-radius: 5px;     padding: 0.2em;
    margin: 0.2em 0.2em 0em 0em; color: #006293;
}

#consultar input{
    border-radius: 1em; margin-top: 1em;
}


</style>