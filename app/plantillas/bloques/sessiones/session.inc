<?php

namespace miId\app\plantillas\bloques\sessiones;
use miId\fuente\Repositorio\ClienteRepositorio;

class Session
{


// Función que devuelve la Sessión para un CLIENTE logueado
    public function sessionCliente($obj_datosCliente)
    {
        $_SESSION['perfil']=array(
            "nombre"=>$obj_datosCliente[0]->nombre,
            "apellidos"=>$obj_datosCliente[0]->apellidos,
            "tlfnoParticular"=>$obj_datosCliente[0]->TlfnoParticular,
            "email"=>$obj_datosCliente[0]->email,
            "ref_Cliente"=>$obj_datosCliente[0]->ref_Cliente,
            "username"=>$obj_datosCliente[0]->username,
            "contrasena"=>$obj_datosCliente[0]->contrasena,
            "roll"=>$obj_datosCliente[0]->roll);

           // var_dump($_SESSION['perfil']); die();
        return $_SESSION['perfil'];
    }

    // Función que devuelve la Sessión para una AGENCIAVIAJES logueada
    public function sessionAgenciaViajes($obj_datosAgenciaViajes)
    {
        $_SESSION['perfil']=array(
        "cod_AgenciaViajes"=>$obj_datosAgenciaViajes[0]->cod_AgenciaViajes,
        "ref_AgenciaViajes"=>$obj_datosAgenciaViajes[0]->ref_AgenciaViajes,
        "name"=>$obj_datosAgenciaViajes[0]->nombre_Agencia,
        "siglas_AgenciaViajes"=>$obj_datosAgenciaViajes[0]->siglas,
        "nif"=>$obj_datosAgenciaViajes[0]->nif,
        "direcion"=>$obj_datosAgenciaViajes[0]->direcion,
        "cp"=>$obj_datosAgenciaViajes[0]->cp,
        "localidad"=>$obj_datosAgenciaViajes[0]->localidad,
        "provincia"=>$obj_datosAgenciaViajes[0]->provincia,
        "comunidad"=>$obj_datosAgenciaViajes[0]->comunidad,
        "pais"=>$obj_datosAgenciaViajes[0]->pais,
        "email"=>$obj_datosAgenciaViajes[0]->email,
        "telefono_Reserva"=>$obj_datosAgenciaViajes[0]->telefono_Reserva,
        "telefono_Agencia"=>$obj_datosAgenciaViajes[0]->telefono_Agencia,
        "horario_Agencia"=>$obj_datosAgenciaViajes[0]->horario_Agencia,
        "lugar_SalidaPredeterminado"=>$obj_datosAgenciaViajes[0]->lugar_SalidaPredeterminado,
        "cod_CompaniaBusHabitual"=>$obj_datosAgenciaViajes[0]->ref_CompaniaBusHabitual,  // Necesito el nombre de la Compañia de Buses
        "nombreAgenciaBuses"=>$obj_datosAgenciaViajes[0]->nombre_Agencia,
        "username"=>$obj_datosAgenciaViajes[0]->username,
        "contrasena"=>$obj_datosAgenciaViajes[0]->contrasena,
        "pago_Online"=>$obj_datosAgenciaViajes[0]->pago_Online,
        "num_CuentaPagosOnline"=>$obj_datosAgenciaViajes[0]->num_CuentaPagosOnline,
        "roll"=>$obj_datosAgenciaViajes[0]->roll);
        return $_SESSION['perfil'];
    }



    // Función que devuelve la Sessión para una AGENCIAVIAJES logueada
    public function sessionPropietario($obj_datosPropietario,$contrasena)
    { var_dump($obj_datosPropietario);
        $_SESSION['perfil']=array(
        "ref_propietario"=>$obj_datosPropietario[0]->ref_propietario,
        "nombre"=>$obj_datosPropietario[0]->nombre,
        "apellidos"=>$obj_datosPropietario[0]->apellidos,
        "telefono"=>$obj_datosPropietario[0]->telefono,
        "email"=>$obj_datosPropietario[0]->email,
        "ref_negocio"=>$obj_datosPropietario[0]->ref_negocio,
        "username"=>$obj_datosPropietario[0]->username,
        "contrasena"=>$contrasena,
        "roll"=>$obj_datosPropietario[0]->roll);

        return $_SESSION['perfil'];
    }



    // Función que devuelve la Sessión para una AGENCIBUSES logueada
    public function sessionAgenciaBuses($obj_datosAgenciaBuses,$contrasena){ //var_dump($obj_datosAgenciaBuses);die();
       $_SESSION['perfil']=array( 
        "cod_AgenciaAutobus"=>$obj_datosAgenciaBuses[0]->cod_AgenciaBuses,
        "ref_AgenciaBuses"=>$obj_datosAgenciaBuses[0]->ref_AgenciaBuses,
        "name"=>$obj_datosAgenciaBuses[0]->nombre,
        "nif"=>$obj_datosAgenciaBuses[0]->nif,
        "cp"=>$obj_datosAgenciaBuses[0]->cp,
        "direccion"=>$obj_datosAgenciaBuses[0]->direccion,
        "localidad"=>$obj_datosAgenciaBuses[0]->localidad,
        "provincia"=>$obj_datosAgenciaBuses[0]->provincia,
        "comunidad"=>$obj_datosAgenciaBuses[0]->comunidad,
        "pais"=>$obj_datosAgenciaBuses[0]->pais,
        "email"=>$obj_datosAgenciaBuses[0]->email,
        "telefonoReserva"=>$obj_datosAgenciaBuses[0]->telefono_Reserva,
          "telefono_Agencia"=>$obj_datosAgenciaBuses[0]->telefono_Agencia,
          "horario_Agencia"=>$obj_datosAgenciaBuses[0]->horario_Agencia,
          "numero_Cuenta"=>$obj_datosAgenciaBuses[0]->numero_Cuenta,
        "username"=>$obj_datosAgenciaBuses[0]->username,
        "contrasena"=>$contrasena,
        "roll"=>$obj_datosAgenciaBuses[0]->roll);  
        return $_SESSION['perfil'];
    }

   
}
?>