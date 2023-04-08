<?php
namespace miId\fuente\Controlador;

use miId\fuente\Modelo\Bus;
use miId\fuente\Repositorio\PersonaRepositorio; use miId\fuente\Repositorio\ClienteRepositorio; use miId\fuente\Repositorio\PasajeroRepositorio;
use miId\fuente\Repositorio\BusRepositorio; use miId\fuente\Repositorio\DestinoRepositorio;
use miId\fuente\Repositorio\ViajarRepositorio;





class BusController
{
// Función que Da de Alta un Bus.
    public function nuevoBus(){
        if (isset($_POST['crearnuevobus'])) {
            $datos = $_POST['datos'];
            if (isset($_POST['asegura'])) {

                try {
                    //require __DIR__ . '/../../fuente/Modelo/Bus.inc';   // Ha entrado //
                    require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Modelo/Bus.inc';    // Para el host
                    $bus = new Bus($datos);

                    require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/BusRepositorio.inc';
                    $datos = (new BusRepositorio())->nuevoBus($datos);
                    
                    ?><script>window.location.href="index.php?ctl=inicio/";</script><?php
                    //header('Location: index.php?ctl=inicio');
  

                } catch (\BusException$ex) {
                    $errores = $ex->getErrores();?>             <!--Para que marque cada error en la plantilla-->
                  <pre>  <script>alert("  ¡LO SENTIMOS,\n Hay campos que no son correctos!")</script></pre><?php
                    echo ("No ha pasado los filtros");
                }
            } else { ?>
          <pre>  <script>alert("¡Debe seleccionar su consentimiento!")</script></pre>
      <?php

            }
        }
        require __DIR__ . '/../../app/plantillas/bus/formNuevoBus.php';
    }
 
// Función que muestra la planta de un bus.
    public function motrarPlantaBus(){ 

       // include_once $_SERVER['DOCUMENT_ROOT'] . VIAJARREPOSITORIO;
        include $_SERVER['DOCUMENT_ROOT'] . PASAJEROREPOSITORIO;
        include $_SERVER['DOCUMENT_ROOT'] . PERSONAREPOSITORIO;


       /* $datos=$_POST['datos'];
       */


        $ref_Destino=$_SESSION['info_Destino']['ref_Destino']; 
 
       // $ref_Destino=$_SESSION['destinoseleccionado']; var_dump($datos['destinoseleccionado']);die();
        $precioBilleteNormal="";

        $plazasOcupadas=[]; 

        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/plazasOcupadas.inc'; 
  


       

         // Saber cual es el valor del Billete desde la ref_Destino
         include_once $_SERVER['DOCUMENT_ROOT'] . DESTINOREPOSITORIO;  
         $precioBilleteNormal= (new DestinoRepositorio())->precioBillete($ref_Destino);


                if (isset($_POST['ocupaplazas'])) { 
                      
                    if (isset($_POST['asegura'])) {
                        if (!empty($_POST['asientos'])) { 
                          //var_dump($_POST);die();
                            $asientos=$_POST['asientos'];
                            $datos=$_POST['datos']; 

                            $info_Viajar['importepasajero']=$precioBilleteNormal[0]->euros;
                           
                            if (!empty($_SESSION['perfil'])) { 

                                if ($_SESSION['perfil']['roll'] == 'agenciaviajes') {
                                    $info_Viajar['pagado']=$datos['pagado'];
                                }
                            }

                            

                            $ref_Destino=$_SESSION['info_Destino']['ref_Destino']; 
                            //$datos[ref_Viajar]', '$datos[ref_Destino]', '$datos[ref_Persona]', '$datos[ref_Bus]', '$asiento', '$datos[importepasajero]', '$datos[pagado]')

                                    // Cuantos registros hay en VIAJAR
                                    $numRegistrosViajar=(new ViajarRepositorio())->numRegistrosViajar();
                                    $ref_Viajar="VI" . intval($numRegistrosViajar[0]->numRegistros) +1;
                                    $info_Viajar['ref_Viajar']=$ref_Viajar;

                                    $info_Viajar['ref_Destino']=$_SESSION['info_Destino']['ref_Destino'];
                                    $obj_refBus=(new BusRepositorio())->refBus($ref_Destino);
                                    
                                    $info_Viajar['ref_Bus']=$obj_refBus[0]->ref_Bus;
                                    $info_Viajar['asientos']=$asientos;
                             

                                    // Saber cuantos Pasajeros hay registrados y meter el nº +1
                                    $numRegistros=(new PasajeroRepositorio())->numRegistrosPasajeros();
                                    $numRegistros = $numRegistros[0]->numRegistros;
                                    $ref_Pasajero=intval($numRegistros)+1;


                            if (!empty($_SESSION['perfil'])) { 

                                if ($_SESSION['perfil']['roll'] == 'cliente') {
                                    $info_Viajar['ref_Persona']=$_SESSION['perfil']['ref_Cliente'];
                                    $info_Viajar['importepasajero']=$precioBilleteNormal[0]->euros;  
                                    $info_Viajar['pagado']='NO';
                                    $obj = (new ViajarRepositorio())->ocuparPlazaBus($info_Viajar);
                                }


                                if ($_SESSION['perfil']['roll'] == 'agenciaviajes') { 
                                    
                                    if(!empty($datos['ref_ClientePlataforma'])){
                                        $info_Viajar['ref_Persona']=$datos['ref_ClientePlataforma'];
                                        $info_Viajar['importepasajero']=$precioBilleteNormal[0]->euros;     
                                        $info_Viajar['pagado']=$datos['pagado'];                 
                                        $obj = (new ViajarRepositorio())->ocuparPlazaBus($info_Viajar);

                                    }elseif(!empty($datos['ref_Socio'])){ ?><?php
                                        $info_Viajar['ref_Persona']=$datos['ref_Socio'];
                                        $info_Viajar['importepasajero']=$precioBilleteNormal[0]->euros;  
                                        $info_Viajar['pagado']=$datos['pagado'];
                                        $obj = (new ViajarRepositorio())->ocuparPlazaBus($info_Viajar);

                                    }else{ 
                                        // Inserta un PASAJERO que NO es CLIENTE 
                                            // Insertar Nueva PERSONA
                                            $ref_Persona='PAS' . $ref_Pasajero; //var_dump($ref_Persona);die();
                                            $insertPersona=(new PERSONAREPOSITORIO())->nuevaPersona($ref_Persona);

                                            // Insertar en la tabla PASAJERO
                                            $infoPasajero['ref_Pasajero']='PAS' . $ref_Pasajero;
                                            $infoPasajero['nombre']=$datos['nombre'];
                                            $infoPasajero['edadpasajero']=$datos['edadpasajero'];
                                            $infoPasajero['tlfno']= $datos['tlfno'];
                                            $infoPasajero['email']=$datos['email'];

                                            $nuevoPasajero=(new PasajeroRepositorio())->nuevoPasajero($infoPasajero);
                                            $ref_Pasajero=$ref_Persona;   
                                    
                                        $info_Viajar['ref_Persona']=$ref_Persona;
                                        $obj = (new ViajarRepositorio())->ocuparPlazaBus($info_Viajar);
                                    }
 
                                   

                                } 
                                if ($obj==true) {
                                        ?><script>//alert("BRAVO, plaza/s reservada/s \n BUÉN VIAJE!");</script><?php
                                    } else {
                                        ?><script>//alert("Lo sentimos, sus plazas no han sido reservadas!");</script><?php
                                    } ?>

                                    <script>window.location.href="index.php?ctl=motrarplantabus";</script><?php


                            } else {?><script>alert('No ha seleccionado asientos!');</script><?php
                                        
                                    //header('Location: index.php?ctl=logearCliente');
                            }
                        } else { ?><script>alert('Seleccione algún asiento!');</script><?php
                        //echo "vacios"; die();
                        }
                    }?><script>alert('Marque la casilla de xestar seguro!');</script><?php
                }
                         
                

        // Entra a los buses estandar, después si hay matricula en un Destino, se devuelve su Planta de Bus especial 
        if($plazasBusTotales==19){
            require __DIR__ . '/../../app/plantillas/bus/bus_19plazas.php';
        }elseif($plazasBusTotales==24){
            require __DIR__ . '/../../app/plantillas/bus/bus_24plazas.php';   
        }elseif($plazasBusTotales==28){
            require __DIR__ . '/../../app/plantillas/bus/bus_28plazas.php';     
        }elseif($plazasBusTotales==51){
            require __DIR__ . '/../../app/plantillas/bus/bus_51plazas.php';
        }elseif($plazasBusTotales==55){
            require __DIR__ . '/../../app/plantillas/bus/bus_55plazas.php';

        }elseif($plazasBusTotales==59){ 
                require __DIR__ . '/../../app/plantillas/bus/bus_59plazas.php';


        }elseif($plazasBusTotales==61){ 
            require __DIR__ . '/../../app/plantillas/bus/bus_61plazas.php';
        }elseif($plazasBusTotales==63){
            require __DIR__ . '/../../app/plantillas/bus/bus_63plazas.php';
        }


    


        if (isset($_POST['ocupaplarzas'])) { echo "entroo"; die();
                if (isset($_POST['asegura'])) { 

                  

                    if ($_SESSION['perfil']['roll'] == 'cliente') {
                   
                        $codCliente = $_SESSION['perfil']['cod_Cliente']; 
                        $plazasAocupar = $_POST['datos']; 
                        $info= $_POST['info'];
        
                        // Necesito saber si ese número de cuenta es el del Cliente                                                                                                                                     //var_dump($info);die(); 
                        require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ClienteRepositorio.inc';
                        $numCuentaCorrecto = (new ClienteRepositorio())->numCuentaCorrecto($codCliente);

                        // Si son iguales, que reserve la plaza
                            if($numCuentaCorrecto[0]->num_Cuenta==$info['numcuenta']){?>
                            <script>//alert("¡Número de cuenta CORRECTO!")</script><?php 

                            // Necesitamos saber si previamente está reservada un instante antes
                            $codBus=$codBus[0]->cod_Bus;
                            $comprobarPlazaBus=(new ViajarRepositorio())->comprobarPlazaBus($cod_Destino, $codCliente, $codBus, $plazasAocupar);

                            if($comprobarPlazaBus){
                                ?><script>//alert("¡Plaza libre!")</script><?php  

                                 $datos = (new ViajarRepositorio())->ocuparPlazaBus($cod_Destino, $codCliente, $codBus, $plazasAocupar);?>
                                <script>//alert("¡Plaza/s Reservada!")</script>
                                <script>window.location.href="index.php?ctl=inicio/";</script><?php
                                //header('Location: index.php?ctl=inicio');

                            }else{
                                ?><script>alert("¡Plaza ocupada!")</script><?php
                            }

                        }else{?>
                            <script>alert("¡Número de cuenta INCORRECTO!")</script><?php
                        }

                    } else {?>
                        <script>alert("¡Lo sentimos, debe logearse antes de apuntarse a un destino!")</script>
                        <?php
                             
                            //header('Location: index.php?ctl=logearCliente');
                    }
                    
                  
                } else { ?>
                    <pre>  
                        <script>alert("¡Debe seleccionar su cornsendfvbfgtimiento!")</script>
                    </pre><?php
    
                }
        }





    


    }

// Función que Modifica un Bus
    public function modificarBus(){

        $codBus=$_SESSION['codBus'];

        if (isset($_POST['modificacionbus'])) {
            if (isset($_POST['asegura'])) {  
                 $datos = $_POST['datos'];
                
                try {
                    require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Modelo/Bus.inc';    // Para el host
                    $bus = new Bus($datos);

                   // require __DIR__ . '/../../fuente/Repositorio/BusRepositorio.inc';
                    require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/BusRepositorio.inc';

                    $datos = (new BusRepositorio())->modificarBus($datos, $codBus);
                    ?><script>window.location.href="index.php?ctl=todosbusesdeunaagenciabuses";</script><?php
                    header('Location: index.php?ctl=inicio');

                } catch (\BusException$ex) {
                    $errores = $ex->getErrores();?>             <!--Para que marque cada error en la plantilla-->
              <pre>  <script>alert("    ¡LO SENTIMOS,\n Hay campos que no son correctos!")</script></pre>
              <?php //echo ("No ha pasado los filtros");
                }

            } else { ?>
                    <pre>   
                        <script>
                            alert("¡Debe seleccionar su consentimiento!");
                           // window.location.href="index.php?ctl=todosbusesdeunaagenciabuses";
                        </script>
                    </pre><?php
            }
        }

        require __DIR__ . '/../../app/plantillas/bus/modificarbus.php';
    }


// Función que busca todos los buses.
    public function todosBusesdeUnaAgenciaBuses(){
    
        $codAgenciaBuses = $_SESSION['perfil']["cod_AgenciaAutobus"];
        require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/BusRepositorio.inc';   // Para el host

        $buses = (new BusRepositorio())->todosBusesdeUnaAgenciaBuses($codAgenciaBuses);
      
        if (isset($_POST['modificarbus'])) {
            if(isset($_POST['asegura'])){

                $_SESSION['codBus']=$_POST['modificar'];
                    $this->modificarBus();?>
                <script>window.location.href="index.php?ctl=modificarbus";</script><?php

            }else{ ?>
                <pre><script>alert("¡Debe seleccionar su consentimiento!")</script></pre><?php
            }
        }

        if (isset($_POST['eliminarbus'])) {
            if (isset($_POST['asegura'])) {
                if (!empty($_POST['eliminar'])) { // Seguridad por si no se selecciona nada
                    
                        $datos = $_POST['eliminar'];
                        $matricula = $datos['matricula'];
                        $buses = (new BusRepositorio())->eliminarBusAgenciaBusesLogeada($matricula); ?><script>window.location.href="index.php?ctl=todosbusesdeunaagenciabuses";</script><?php
                
                } else {?>
                    <script>alert("¡Seleccione un Bus a eliminar, por favor!")</script><?php }

            }else{?>
                <pre>   
                    <script>alert("¡Debe seleccionar que está seguro de eliminar!");
                            window.location.href="index.php?ctl=todosbusesdeunaagenciabuses";
                    </script>
                </pre><?php
            }
        }
        require __DIR__ . '/../../app/plantillas/bus/todosBusesdeUnaAgenciaBuses.php';
    }


   
    // Función que devuelve la interface de la Información de un Bus que va a un Destino
    public function informacionBusDestino(){
        $ref_Destino=$_SESSION['ref_Destino']; //echo "Estoy"; die();
        require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ViajarRepositorio.inc';  
        if (isset($_POST['guardarcambiosbilletes'])) { 

            if(isset($_POST['asegura'])){  //var_dump($_POST); die();
                $datos = $_POST['datos']; 
                $obj = (new ViajarRepositorio())->cambiarEstadoReservas($ref_Destino, $datos);
                
                $datos=$_POST['preciobillete']; 
                //var_dump($datos); die();

                $obj = (new ViajarRepositorio())->cambiarPrecioReservas($ref_Destino, $datos);


            }else{?>
                <pre><script>alert("¡Marque la casilla de estar seguro!")</script></pre><?php

            }
        }

        if (isset($_POST['eliminarvariasreservas'])) { 
            $plazasEliminar=$_POST['plazaseliminar']; 
           // var_dump($plazasEliminar);

            // Recorrer todas las seleccionadas y eliminarlas en bloque
            //require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ViajarRepositorio.inc'; 

            $obj = (new ViajarRepositorio())->eliminarVariasReservasBus($ref_Destino, $plazasEliminar);
        }
        


        if(isset($_POST['generapdfocupacionbus'])){
            $datos=$_POST['datos']; ?>
            <script>window.location.href="index.php?ctl=generapdf_ocupacionbus";</script><?php 

        }

        if(isset($_POST['generaexcelocupacionbus'])){ ?><script>alert("Generando informe Excel");</script>
           <?php $datos=$_POST['datos']; ?>
            <script>window.location.href="index.php?ctl=generaexcel_ocupacionbus";</script>
            <script>//window.location.href="index.php?ctl=inicio/";</script>
            <?php 
            
        }

       



        require __DIR__ . '/../../app/plantillas/bus/informacionBusDestino.php';
    }

}



/*
        if (isset($_POST['eliminareservaaa'])) { 
            $datos = $_POST['datos']; 
          

            $datos['ref_Destino']=$datos['refdestino'];
            $datos['asiento']=$datos['asiento'];
            //var_dump($datos); die();
            $eliminarReserva = (new ViajarRepositorio())->desOcuparPlazaBus($datos);

            if($eliminarReserva==true){?><script>alert("Reserva Eliminada");</script><?php
               
            }else{?><script>alert("Reserva NO Eliminada");</script><?php
                
            }
        
            ?>
            <script>alert("Voya")</script><?php
        }  
*/ 

/* Esto es necesario en awardspace
        if(!empty($_SESSION['datosdestino'])){
            $cod_Destino = $_SESSION['datosdestino'];
        }else{
            $cod_Destino = $_SESSION['codigodestino'];
        }*/
