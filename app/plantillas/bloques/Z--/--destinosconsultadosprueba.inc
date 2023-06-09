<?php
use miId\fuente\Repositorio\ComerRepositorio;
    $destinos = $_SESSION['destinos'];
    //var_dump($destinos);
 ?>

<div class="container">
    <div class="row">

                <?php     
                    for ($i = 0; $i < count($destinos); $i++) {
                        $codDestino = $destinos[$i]->cod_Destino;
                        $cod_Localidad=$destinos[$i]->ref_Localidad;
                        $localidad=$destinos[$i]->nombre_Localidad; 
                        //  $localidad = $destinoss[$i]->nombre;
                        $comunidad = $destinos[$i]->comunidad;
                        $fechaDestino = $destinos[$i]->fecha_Viaje;
                        $diaSemana = $destinos[$i]->dia_Semana;
                        $euros = $destinos[$i]->euros;
                        $urloficial = $destinos[$i]->ruta_imagen1;
                        // $codAgenciaViajes= $destinoss[$i]->cod_AgenciaOferta;
                        $nombreAgenciaViajes = $destinos[$i]->nombre_Agencia;
                        //$nombreAgenciaViajes=utf8_encode($destinoss[$i]->nombre);
                        try {
                            include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/conf/configuracionfantasma.inc';

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
                        }

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


                        require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ComerRepositorio.inc';
                        $vistaPublicidadGeneral=(new ComerRepositorio())->tipoPublicidadHome2();
                        $vistaPublicidadGeneral=$vistaPublicidadGeneral[0]->posicion;
                        
                        $ref_Localidad=$cod_Localidad;
                        $lugaresDondeComer = (new ComerRepositorio())->publicidadRestaurantes($ref_Localidad);
                        
                        $tipoPublicidadHome = (new ComerRepositorio())->tipoPublicidadHome($ref_Localidad);

                        if ($vistaPublicidadGeneral=="derecha") {?>
                            <?php
    
                                if (!empty($lugaresDondeComer)) {
                                    ?> 
                                
                                    <div class="row">
                                            <div id="situarprimerarticulo" class="col-xl-12 text-center col-lg-12 col-md-4 col-sm-6 col-12">
                                                        <hr>     
                                            </div>
                                        </div> 
                                        </div><?php
    
                                    
                                        
                                            if (!empty($tipoPublicidadHome)) {// Exceso de publicidad y espacios vacios //
                                                
                                                if ($tipoPublicidadHome[0]->modo_Apariencia==1) {
                                                    //require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/destinos/tarjetasarticulos.inc';
                                                    include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/publicidadderecha1negocio.inc';
                                                }
    
                                                if ($tipoPublicidadHome[0]->modo_Apariencia==3) {
                                                    //require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/destinos/tarjetasarticulos.inc';
                                                    include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/publicidadderecha3negocio.inc';
                                                }
    
                                                if ($tipoPublicidadHome[0]->modo_Apariencia==0) {
                                                    include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/sinhuecos.inc';
                                                }
                                                $veces=1;
                                            
                                        }
                                    
                                } else {
                                    include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/sinhuecos.inc';
    
                                    if (empty($tipoPublicidadHome)) {?>
    
                                        <div >
                                            <?php
    
                                            if ($tipoPublicidadHome[0]->modo_Apariencia==1) {
                                                include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/negociovacio1.inc';
                                            }?>
                                        </div>
    
    
                                        <div >
                                            <?php
                                            if ($tipoPublicidadHome[0]->modo_Apariencia==2) {
                                                include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/negociovacio3.inc';
                                            }?>
                                        </div>
    
                            <?php  } else {
                                            } ;
                                }
                        } elseif ($vistaPublicidadGeneral=="abajo") {//die();?> 
                        
                            <?php
                        
                        
                        
                        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/sinhuecos.inc'; ?>    
                        
                        
                        
                        <?php }
                    }
                ?>
</div>







