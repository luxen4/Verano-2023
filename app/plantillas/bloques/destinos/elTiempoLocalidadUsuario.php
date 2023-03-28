<script src="http://maps.google.com/maps/api/js?sensor=false"></script>
 
<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/scripts/js_elTiempoLocalidadUsuario.inc';?>


<form action="" method="POST">
    <input id="latitud" type="text" name="datos[latitud]" value="" hidden >
    <input id="longitud" type="text" name="datos[longitud]" value="" hidden >
</form>

  <script src="https://unpkg.com/sweetalert/dist/sweetalert.min.js"></script>

<?php 

/* Para Logroño */ $lat=42.4574976; $lon=-2.4444928;
$googleApiUrl ="https://api.openweathermap.org/data/2.5/weather?lat=" . $lat . "&lon=" . $lon . "&appid=364b8c96a92b46376a612bae9241de67&lang=en"; ?>

<?php 
// Entra con la $googleApiUrl //
include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/destinos/curl_OpenWeather.inc';?><?php


?>

<div class="row"  style="margin-top:-2em;">



 <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6" style="padding: 0em;">

<?php

if (!$data == null) { ?>
<a href="https://www.eltiempo.es/" target="_blank"> <?php
        if ($data->cod != 200) { //exit("An error has occurred: ".$data->message);
            $data = json_decode($response);
        } ?>




    <div class="row">
        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12" style="padding: 0em;">
            <div style="">
                    <span><?php echo $data->name; ?></span>, 
                    <span class="weather-forecast">
                        <img src="http://openweathermap.org/img/w/<?php echo ($data->weather[0]->icon);?>.png" class="weather-icon" /> 
                        <?php echo (round(($data->main->temp) - 273, 0, PHP_ROUND_HALF_ODD));?> Cº 
                    </span>
            </div>
        </div>
    </div>
</a><?php
}; 

?>

</div>


<div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">
        <a href="https://www.eltiempo.es/" target="_blank"> 
            <div class="row">
                <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                    <div style="">
                            <span id="nombre_localidad"></span>
                            <span class="weather-forecast">
                            <span id="iconotiempo_localidad"></span> 
                            <span id="temperatura_localidad"> </span> Cº 
                            </span>
                    </div>
                </div>
            </div>
        </a>
</div>

</div>
