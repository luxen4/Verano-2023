<?php
use miId\fuente\Repositorio\ComerRepositorio;
    $destinos = $_SESSION['destinos'];?>

<div class="container">
    <div class="row"><?php $veces=0;
        foreach($destinos as $destino){
        //include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/muestradestinoTarjeta.inc';


        if($veces / 4 == 1){ ?>
                </div> <div class="row"><?php $veces++;
            
        }else{?>
            <div class="col-xl-3 text-left col-lg-3 col-md-3 col-sm-12 col-12" style="border:1px solid #212721; padding:1em"><?php

                $codDestino = $destino->cod_Destino;
                            $cod_Localidad=$destino->ref_Localidad;
                            $localidad=$destino->nombre_Localidad;
                        //  $localidad = $destino->nombre;
                            $comunidad = $destino->comunidad;
                            $fechaDestino = $destino->fecha_Viaje;
                            $diaSemana = $destino->dia_Semana;
                            $euros = $destino->euros;
                            $urloficial = $destino->ruta_imagen1;
                         // $codAgenciaViajes= $destino->cod_AgenciaOferta;
                            $nombreAgenciaViajes = $destino->nombre_Agencia;
                            //$nombreAgenciaViajes=utf8_encode($destino->nombre);

                            try {
                                include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/conf/configuracionfantasma.inc';

                                $sqlCodigoBus = "SELECT distinct cod_Bus FROM DESTINO
                                                            WHERE cod_Destino=$codDestino";

                                $result0 = $gbd->query($sqlCodigoBus);
                                $results0 = $result0->fetchAll(\PDO::FETCH_OBJ);

                                if (!empty($results0)) {
                                    $codigoDeBus = $results0[0]->cod_Bus;
                                    $sql1PlazasTotalesDelBus = "SELECT plazas FROM BUS WHERE cod_Bus=$codigoDeBus";
                                    $result1 = $gbd->query($sql1PlazasTotalesDelBus);
                                    $results1 = $result1->fetchAll(\PDO::FETCH_OBJ);
                                } else {
                                }

                                $sql2PlazasOcupadasDelBus = "SELECT count(plaza_Bus) as 'plazas' FROM VIAJAR WHERE cod_Destino=$codDestino";

                                $result2 = $gbd->query($sql2PlazasOcupadasDelBus);
                                $results2 = $result2->fetchAll(\PDO::FETCH_OBJ);
                            } catch (\PDOException$e) {
                                echo $e->getMessage();
                            } catch (\Exception$ex) {
                                throw $ex;
                            } finally {
                                $gbd = null;
                            }

                            if (isset($results1)) {
                                if ($results1[0]->plazas != $results2[0]->plazas) {
                                    $estado = "DISPONIBLE"; //die();
                                } else {
                                    $estado = "COMPLETO";
                                }
                            } else {
                                $estado = "COMPLETO";
                            }?>
                                        <?php

                            if (in_array($localidad, $_SESSION['fotosLugares'])) {
                                $foto = $localidad;
                                $localidadTitulo = $localidad;
                                $googleApiUrl = "api.openweathermap.org/data/2.5/weather?q=" . $localidad . "&appid=364b8c96a92b46376a612bae9241de67"; // https://openweathermap.org/current
                                //$googleApiUrl = "api.openweathermap.org/data/2.5/weather?q=Saint-Jean-de-Luz&appid=364b8c96a92b46376a612bae9241de67"; // https://openweathermap.org/current

                            } else {
                                $foto = "predeterminada";
                                $localidadTitulo = $localidad;
                                $googleApiUrl = "api.openweathermap.org/data/2.5/weather?q=Santander&appid=364b8c96a92b46376a612bae9241de67";
                            }
                            
require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/ComerRepositorio.inc';
$vistaPublicidadGeneral=(new ComerRepositorio())->tipoPublicidadHome2();
$vistaPublicidadGeneral=$vistaPublicidadGeneral[0]->posicion;

$ref_Localidad=$cod_Localidad; 
$lugaresDondeComer = (new ComerRepositorio())->publicidadRestaurantes($ref_Localidad);
$tipoPublicidadHome = (new ComerRepositorio())->tipoPublicidadHome($ref_Localidad);
                         
                            

if($vistaPublicidadGeneral=="derecha"){?><?php

    if (!empty($lugaresDondeComer)) {?> 
    
      <div class="row"><?php

        //foreach ($lugaresDondeComer as $lugar) {

                if (!empty($tipoPublicidadHome)) {
                    
                    if ($tipoPublicidadHome[0]->modo_Apariencia==1) {
                        include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/publicidadderecha1negocio.inc';}

                    if ($tipoPublicidadHome[0]->modo_Apariencia==3) {
                            include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/publicidadderecha3negocio.inc';}

                    if ($tipoPublicidadHome[0]->modo_Apariencia==0) {
                            include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/sinhuecos.inc';}
                   
                }?>
                </div><?php
                }else{

                            include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/sinhuecos.inc';

        if(empty($tipoPublicidadHome)){?>

            <div>
                <?php 

              /*  if($tipoPublicidadHome[0]->modo_Apariencia==1){
                    
                    include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/negociovacio1.inc'; 
                } */ ?>
            </div>


            <div >
                <?php
               /* if($tipoPublicidadHome[0]->modo_Apariencia==2){
                    
                    include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/negociovacio3.inc';

                } */?>
            </div>

<?php       }else{
        } ; 
    } 
}elseif($vistaPublicidadGeneral=="abajo"){
    include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/sinhuecos.inc';?>    
<?php } ?>                         
                   
            </div><?php
        }
    }
    
    
    ?>

       

    
   
</div>

<style>



/* Cards */
.fotodestino{border-radius: 0.3em; z-index: -1; width: 100%; height: 100px; }

.modelo_publicitario1 h6{text-align: center; margin-bottom: 0.5em;}

.comunidad,.destino,.fecha,.info_plazas,.precio,.agencia {text-align: center;}
.fecha{
    margin-top: 0.7em;
}
.articulo, .publicidad{
 /* background-color: #F8F9FA; */
  border-radius: 0.4em; border: 2px solid #c1c1c1; 
 /* padding: 0.5em 0.3em 0.3em; */
  /*box-shadow: 5px 5px 5px #888888;*/ 
  box-shadow: inset 0px 0px 20px 4px #c1c1c1;}


.comunidad{color: #006293; font-weight: bold; margin-bottom: 0.5em; font-size: 0.8em;}

.destino{color: #212721; font-weight: bold;}  
.destino a {font-size: 0.36em; text-decoration: underline; }


.info_plazas{font-size: 0.7em; margin-top: -1.4em;}
.precio{margin-top: -1em; margin-bottom: -0.1em; } 
.textoprecio{font-size: 1.3em; float: right; text-align: right; }
.apuntar, .apuntar2{ border-radius:0.3em;}
.apuntar{ border: 1px solid #006293;}
.apuntar2{ color: red; border: 1px solid red;}
#boton_apuntar{ padding-top: -2em; border-radius: 0.5em; margin: auto;}


@media only screen and (min-width: 1400px) and (max-width: 3000px) {
.precio{font-size: 1.5em; margin-top: -0.6em; margin-bottom: 0.05em;}
}


@media only screen and (min-width: 970px) and (max-width: 1400px) {
.comunidad{ font-size: 0.8em; margin: auto;}
.destino a {font-size: 0.49em; text-decoration: underline;}
.fecha{ font-size: 0.6em;}
.info_plazas{font-size: 0.7em; text-align: center; margin-top: -1.4em;} 
}

@media only screen and (min-width: 970px) and (max-width: 1400px) {
.comunidad{ font-size: 0.8em; margin: auto;}
.destino a {font-size: 0.45em; text-decoration: underline;}
.fecha{ font-size: 0.6em;}
.info_plazas{font-size: 0.7em; text-align: center; margin-top: -1.4em;} 
}


@media only screen and (min-width: 740px) and (max-width: 999px) {

header img{padding: 0px; height: 550px; }
.a{width: 375px; height:140px; margin-top: 7.5em;}
.plaza{font-size: 1em;} 
h2{font-size: 1.3em;}
header img{height:200px;}
.fotoplantabus{margin-top: 6em; }

.fotodestino{height: 70px;}

.info_plazas {font-size: 0.6em;}
}
/*--------------------------------*/
 </style>












