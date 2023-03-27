<?php
use miId\fuente\Repositorio\BusRepositorio;
    // Para buscar las plazas
    $plazasTotalesCadaBus=[];  $plazasQuedanCadaBus=[];     $plazasOcupadas=[];
    include $_SERVER['DOCUMENT_ROOT'] . BUSREPOSITORIO;

    if(!empty($destinos)){
    for($i=0; $i<count($destinos); $i++){

            $ref_Destino=$destinos[$i]->ref_Destino;
            $plazasBusTotales = (new BusRepositorio())->plazasTotalesBus($ref_Destino);
            array_push($plazasTotalesCadaBus, $plazasBusTotales[0]->plazas);

            $totalPlazas=$plazasBusTotales[0]->plazas;

            $plazasQuedanBus = (new BusRepositorio())-> plazasQuedanEnUnBus($ref_Destino);
            $plaz=($totalPlazas - count($plazasQuedanBus)); 
            array_push($plazasQuedanCadaBus, $plaz);

            $disp=$totalPlazas - $plaz;
            array_push($plazasOcupadas, $disp);

        }
    }
?>