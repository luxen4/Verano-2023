<?php
namespace miId\fuente\Controlador;
use miId\fuente\Modelo\Destino;
use miId\fuente\Repositorio\BusRepositorio;

class HotelesController
{
    // Función que crea un nuevo destino
    public function hotelesLocalidad()
    {
        //include_once $_SERVER['DOCUMENT_ROOT'] . BUSREPOSITORIO;

        //$todasLocalidades = (new LocalidadRepositorio())-> todasLocalidades();

        if (isset($_POST['nuevodestino'])) {
            $datos=$_POST['datos'];

        }
        require __DIR__ . '/../../app/plantillas/hoteles/mostrarhoteleslocalidad.php';
    }
}