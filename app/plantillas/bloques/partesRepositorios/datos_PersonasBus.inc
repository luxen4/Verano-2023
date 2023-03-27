<?php
  use miId\fuente\Repositorio\ViajarRepositorio; 
  use miId\fuente\Repositorio\PasajeroRepositorio;
  use miId\fuente\Repositorio\ClienteRepositorio; 

    $plaza_Bus=$i;  
    include_once $_SERVER['DOCUMENT_ROOT'] . VIAJARREPOSITORIO; 
    $clienteOPasajero = (new ViajarRepositorio())->clienteOpasajero($ref_Destino, $plaza_Bus);

    $nomenclatura="";

    if (!empty($clienteOPasajero)) {
        $ref_Persona = $clienteOPasajero[0]->ref_Persona;
        $nomenclatura = substr($ref_Persona, 0, 3);
    }


    if ($nomenclatura=='CLI') {
        // Si es Cliente que consulte sus datos
        include_once $_SERVER['DOCUMENT_ROOT'] . CLIENTEREPOSITORIO;
        $infoCliente = (new ClienteRepositorio())->infoCliente($ref_Destino, $plaza_Bus);
                        
        // Debe consultar si es SOCIO de la Agencia de Viajes
        $ref_AgenciaViajes=$_SESSION['perfil']['ref_AgenciaViajes'];
        $esSocioAgenciaViajes = (new ClienteRepositorio())->esSocio($ref_Persona, $ref_AgenciaViajes);

    } elseif ($nomenclatura=='PAS') {

        // Si es Pasajero que va a una ref_Destino y se sienta en el asiento ($asiento) que consulte sus datos
        include_once $_SERVER['DOCUMENT_ROOT'] . PASAJEROREPOSITORIO;
        $ref_Pasajero = $ref_Persona;
        $infoNoCliente = (new PasajeroRepositorio())->infoPasajero($ref_Destino, $plaza_Bus);

    } else { } 
?>