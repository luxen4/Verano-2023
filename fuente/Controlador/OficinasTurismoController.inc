<?php
namespace miId\fuente\Controlador;
use miId\fuente\Modelo\Cliente; use miId\fuente\Repositorio\PersonaRepositorio;
use miId\fuente\Repositorio\ClienteRepositorio;
use miId\fuente\Repositorio\AgenciaViajesRepositorio;

class OficinasTurismoController
{
    // Función que crea una Nueva Cuenta de Cliente
    public function mostraroficinasturismo()
    {
        
        require __DIR__ . '/../../app/plantillas/oficinasTurismo/oficinas_turismo.php';
    }
}
