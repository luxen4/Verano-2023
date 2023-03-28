<?php // Ajax
use miId\fuente\Repositorio\ViajarRepositorio;
use miId\fuente\Repositorio\BusRepositorio; 
use miId\fuente\Repositorio\DestinoRepositorio;


 include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app\utilidades\constantes.inc';
    include $_SERVER['DOCUMENT_ROOT'] . VIAJARREPOSITORIO;
    include $_SERVER['DOCUMENT_ROOT'] . BUSREPOSITORIO;
    include $_SERVER['DOCUMENT_ROOT'] . DESTINOREPOSITORIO;

    //ref_Viajar,
    $numRegistrosViajar=(new ViajarRepositorio())->numRegistrosViajar();
    $ref_Viajar="VI" . intval($numRegistrosViajar[0]->numRegistros) +1;
    $info_Viajar['ref_Viajar']=$ref_Viajar;

    //ref_Destino,
    $info_Viajar['ref_Destino']=$_POST['ref_Destino']; $ref_Destino= $info_Viajar['ref_Destino'];

    //ref_Persona,
    $info_Viajar['ref_Persona']=$_POST['ref_Cliente'];

    //ref_Bus,
    $obj_refBus=(new BusRepositorio())->refBus($ref_Destino);          
    $info_Viajar['ref_Bus']=$obj_refBus[0]->ref_Bus;

    //plaza_Bus,
    $info_Viajar['asientos']=$_POST['asientos'];

    //embolso,
    // Saber cual es el valor del Billete desde la ref_Destino  
    $precioBilleteNormal=(new DestinoRepositorio())->precioBillete($ref_Destino);
    $info_Viajar['importepasajero']=$precioBilleteNormal[0]->euros;

    //pagado
    $info_Viajar['pagado']=$_POST['pagado'];
     
                        $obj = (new ViajarRepositorio())->ocuparPlazaBus($info_Viajar);
                        if ($obj==true) { echo "Las Plazas acaban de Reservarse"; } else{ echo "Las Plazas No se han Reservado";}
    
    //echo "Marco";
?>