<?php

/* Cosntantes */
include_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2023/app/utilidades/constantes.inc'; 

 	$lat=$_POST['latitude']; $lon=$_POST['longitude'];
    $googleApiUrl ="https://api.openweathermap.org/data/2.5/weather?lat=" . $lat . "&lon=" . $lon . "&appid=364b8c96a92b46376a612bae9241de67&lang=en"; ?>

    <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/destinos/curl_OpenWeather.inc';?> <?php

    if (!$data == null) { 

        if ($data->cod != 200) { //exit("An error has occurred: ".$data->message);
            $data = json_decode($response);
            
        } ?>
        
        <?php 
        
        if(!empty($data->name)){
            echo $data->name . '_' . $data->weather[0]->icon . '_' . (round(($data->main->temp) - 273, 0, PHP_ROUND_HALF_ODD));
        }else{

        }
    }       
?> 