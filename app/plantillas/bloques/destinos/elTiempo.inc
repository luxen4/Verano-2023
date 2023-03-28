<?php 
// https://github.com/bjpublic/raspberrypi/blob/master/chapter05/weather-station.php

if (in_array($localidad, $_SESSION['fotosLugares'])) { ;
    $foto = $localidad;
    $localidadTitulo = $localidad;
    $googleApiUrl = "api.openweathermap.org/data/2.5/weather?q=" . $localidad . "&appid=364b8c96a92b46376a612bae9241de67"; // https://openweathermap.org/current  // BUENA
   // $googleApiUrl = "api.openweathermap.org/data/2.5/weather?q=Saint-Jean-de-Luz&appid=364b8c96a92b46376a612bae9241de67"; // https://openweathermap.org/current


if($localidad=="Laredo"){
    $googleApiUrl = "http://api.openweathermap.org/data/2.5/weather?id=6360682&lang=en&units=metric&APPID=364b8c96a92b46376a612bae9241de67";
    //6360682 En un futuro, trabajar con los id en la base de datos con el atributo coordenadas
}

}else{
    $foto = "predeterminada";
    $localidadTitulo = $localidad;
    $googleApiUrl = "api.openweathermap.org/data/2.5/weather?q=Santander&appid=364b8c96a92b46376a612bae9241de67";
} ?>

<?php 
    // Entra con la $googleApiUrl // No puedo meter el include porque en el movil no funciona
    // include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app\plantillas\bloques\destinos\curl_OpenWeather.inc'; ?>

<?php

$ch = curl_init();       
        curl_setopt($ch, CURLOPT_HEADER, 0);
        curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
        curl_setopt($ch, CURLOPT_URL, $googleApiUrl);
        curl_setopt($ch, CURLOPT_FOLLOWLOCATION, 1);
        curl_setopt($ch, CURLOPT_VERBOSE, 0);
        curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, false);
        $response = curl_exec($ch);
    curl_close($ch);

    /* Decode and check cod */
    $data = json_decode($response);
?>

<?php


if (!$data == null) { ?>
<a href="https://www.eltiempo.es/" target="_blank"> 

<?php

    if ($data->cod != 200) { //exit("An error has occurred: ".$data->message);
    $data = json_decode($response);
    }


    if (in_array($destino->nombre_Localidad, $_SESSION['fotosLugares'])) {
    //var_dump(($data->main->temp)-273);//die();?>

        <div class="weather-forecast">
            <img src="http://openweathermap.org/img/w/<?=pasarUtf8($data->weather[0]->icon);?>.png" class="weather-icon" /> 

            <?php //var_dump($data); ?>
            <?php // echo round(($data->main->temp) - 273, 0, PHP_ROUND_HALF_ODD)?> <!--Cº-->

<?php 

if($localidad=="Laredo"){?>
 <?=round(($data->main->temp) - 0, 0, PHP_ROUND_HALF_ODD)?> Cº <?php
}else{?>
    <?=round(($data->main->temp) - 273, 0, PHP_ROUND_HALF_ODD)?> Cº <?php
}
?>


        </div><?php
    } else {?>
        <div class="weather-forecast">
            <img src="http://openweathermap.org/img/w/03n.png" class="weather-icon" /> ??º
           

        </div><?php
    }
};   




?></a>

<style>
 /*.weather-forecast{   position: relative; font-size: 0.5em;
top: -1.5em;
left: 5.5em;}*/
</style>

