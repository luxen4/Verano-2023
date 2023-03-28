<?php
namespace miId\fuente\Controlador;
use miId\fuente\Modelo\Destino;
use miId\fuente\Repositorio\BusRepositorio;
use miId\fuente\Repositorio\LocalidadRepositorio; 
use miId\fuente\Repositorio\DestinoRepositorio;
use miId\fuente\Repositorio\AgenciaBusesRepositorio;
use miId\fuente\Repositorio\BuscadoresRepositorio;
use miId\fuente\Repositorio\EventoRepositorio;


use function PHPUnit\Framework\once;

class EventoController
{
    // Función que crea un nuevo destino
    public function nuevoEvento()
    {
        // Necesito la consulta de todos Buses de las compañías de Buses asociadas a una Agencia de Viajes
        //require __DIR__ . '/../../fuente/Repositorio/BusRepositorio.inc';
        include_once $_SERVER['DOCUMENT_ROOT'] . BUSREPOSITORIO;

        // Tengo el código de la Agencia de Viajes, con esto ahora saco el código de la agencia de buses asociada
        $ref_AgenciaViajes=$_SESSION['perfil']['ref_AgenciaViajes'];
        $busesCompania = (new BusRepositorio())-> todosBusesdeUnaAgenciaBusesCodAgenciaViajes($ref_AgenciaViajes);
        $busesOtrasCompanias = (new BusRepositorio())-> todosBusesDisponiblesParaUnaAgenciaViajes($ref_AgenciaViajes);

        require __DIR__ . '/../../fuente/Repositorio/LocalidadRepositorio.inc';
        $todasLocalidades = (new LocalidadRepositorio())-> todasLocalidades();

        if (isset($_POST['nuevoevento'])) {
            $datos=$_POST['datos'];

           // var_dump($datos); //die(); 

                if (isset($datos['estaseguro'])) {
                    try {
                        require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/EventoRepositorio.inc';

                        // Hay que darle una referencia al DestinoEvento
                        // Saber cuantos registros hay en la tabla DestinoEvento
                        $numRegistros = (new EventoRepositorio())->numRegistros();
                        $numRegistros = $numRegistros[0]->numRegistros; 
                        $num_ref_DestinoEventos=intval($numRegistros)+1;
                        $siglas_AgenciaViajes = $_SESSION['perfil']['siglas_AgenciaViajes'];
                        
                        
                        $datos['ref_DestinoEvento']= 'D_' . $siglas_AgenciaViajes . $num_ref_DestinoEventos;
                        $obj = (new EventoRepositorio())->nuevoEvento($datos);

                        ?><script>window.location.href="index.php?ctl=inicio/";</script><?php

                    } catch (\DestinoException $ex) {
                        $errores=$ex->getErrores();
                        echo("No ha pasado los filtros para crear el evento");
                    }
                } else { ?>          
                  <pre>
                    <script>alert("No ha seleccionado si está seguro de agregar este nuevo Evento.!")</script>
                  </pre><?php
                }
            
        }
        require __DIR__ . '/../../app/plantillas/evento/formNuevoEvento.php';
    }
}

/*
  
  // Función que muestra todos los destinos de una Agencia de Buses Logueada
  public function mostrarTodosDestinosQueVaUnaAgenciaBusesLogeada(){

    ;
    $ref_AgenciaBuses=$_SESSION['perfil']['ref_AgenciaBuses'];

  //var_dump($ref_AgenciaBuses);die();
    include $_SERVER['DOCUMENT_ROOT'] . DESTINOREPOSITORIO;
    $destinos = (new DestinoRepositorio())->todosDestinosPorAgenciaBuses($ref_AgenciaBuses);  

    // Para buscar las plazas
    $plazasTotalesCadaBus=[];  $plazasQuedanCadaBus=[];     $plazasOcupadas=[];
    require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/BusRepositorio.inc';

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

        $infoDestino=[];
        if (isset($_POST['cancelardestino'])) {
                $datos=$_POST['datos']; 
                $obj=(new DestinoRepositorio())->borrarUnDestino($datos['destinoseleccionado']);
            if ($obj==true) {
                ?><script>window.location.href="index.php?ctl=mostrartodosdestinosquevaunaagenciabuseslogeada";</script><?php
            } else {
                ?><script>alert("No se ha podido eliminar el destino seleccionado!");</script><?php
            }
        }

        if (isset($_POST['modificardestino'])) {  // Hace falta la info del destino a modificar
            $datos=$_POST['datos'];
            if (isset($datos['estaseguro'])) {
                $codDestino=$datos['destinoseleccionado'];
          
                $infoDestino=(new DestinoRepositorio())->infoDestino($codDestino);
                $_SESSION['infoDestino']=$infoDestino;
                //var_dump($infoDestino);die();

            ?><script>window.location.href="index.php?ctl=modificardestino";</script><?php
            } else {?>          
              <pre><script>alert("No ha seleccionado si está seguro de modificar el destino.!")</script></pre><?php

            }
        }


       
        




    require __DIR__ . '/../../app/plantillas/destino/mostrartodosdestinosdeunaagenciabuseslogeada.php';
  } 

  // Función que módifica un destino
  public function modificarUnDestino(){
    require __DIR__ . '/../../fuente/Repositorio/BusRepositorio.inc';
    //var_dump($_SESSION['perfil']);die();

    if(isset($_SESSION['perfil'])){
      if ($_SESSION['perfil']['roll']=="agenciabuses") {
          $codAgenciaBuses=$_SESSION['perfil']['cod_AgenciaAutobus']; // Tengo el código de la Agencia de Viajes, con esto ahora saco el código de la agencia de buses asociada
          $busesCompania = (new BusRepositorio())-> todosBusesdeUnaAgenciaBuses($codAgenciaBuses);
          
      }}
        require __DIR__ . '/../../fuente/Repositorio/AgenciaBusesRepositorio.inc'; // Necesito todas las Agencias de Buses y extraer datos para el Select
        $agenciasBuses = (new AgenciaBusesRepositorio())->todasAgenciasDeBuses();

        //var_dump($agenciasBuses);die();


    /*    if(isset($_SESSION['perfil'])){
            if ($_SESSION['perfil']['roll']=="agenciaviajes") {
              require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/AgenciaBusesRepositorio.inc';
              $agenciaViajes= (new AgenciaBusesRepositorio())->codigoAgenciaBuses();
              $codAgenciaBuses=$agenciaViajes[0]->cod_CompaniaBusHabitual;
              //var_dump($agenciaViajes[0]->cod_CompaniaBusHabitual);die();
              $busesCompania =  (new BusRepositorio())-> todosBusesdeUnaAgenciaBuses($codAgenciaBuses);
            }
        }

        if(isset($_SESSION['perfil'])){
          if ($_SESSION['perfil']['roll']=="agenciaviajes") {
            $codAgenciaViajes=$_SESSION['perfil']['cod_AgenciaViajes']; 
            require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/AgenciaBusesRepositorio.inc';
            $busesCompania = (new BusRepositorio())-> todosBusesdeUnaAgenciaBusesCodAgenciaViajes($codAgenciaViajes);
            $todosBusesCompanias =  (new BusRepositorio())->  todosBusesDisponiblesParaUnaAgenciaViajes($codAgenciaViajes);
          }
      }

    if (isset($_POST['modificardestino'])) { 
        $datos=$_POST['datos']; //var_dump($datos); die();
        $ref_Destino=$_SESSION['infoDestino'][0]->ref_Destino;
 
        if(isset($datos['estaseguro'])){
          try {
             // require __DIR__ . '/../../fuente/Modelo/Destino.inc';  
             // $destino =  new Destino ($datos);
  
            // var_dump($datos); 

            
             $datos['ref_Destino']= $ref_Destino; //var_dump($datos['ref_Destino']); die();
             $datos['ref_AgenciaViajes']=$_SESSION['perfil']['ref_AgenciaViajes'];
            //die(); 
              require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/DestinoRepositorio.inc';
              $obj=(new DestinoRepositorio())->modificarUnDestino($datos,$ref_Destino);

              if ($obj==true) {

                    ?><script>window.location.href="index.php?ctl=inicio/";</script><?php
              }else{
                ?><script>alert("No se ha podido modificar el destino seleccionado!");</script><?php
              }
          }catch (\DestinoException $ex) {
              $errores=$ex->getErrores();
              echo("No ha pasado los filtros");
          }
        }else{ ?>          
            <pre><script>alert("No ha seleccionado si está seguro de agregar este nuevo destino.!")</script></pre><?php
          }  
    }


  


      require __DIR__ . '/../../app/plantillas/destino/formModificarDestino.php';
    } 


  // Función que muestra todos los destinos de una Agencia de Viajes Logueada
  public function mostrarTodosDestinosDeAgenciaViajesLogeada(){ 
        require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/DestinoRepositorio.inc';
            $ref_AgenciaViajes=$_SESSION['perfil']['ref_AgenciaViajes'];
        // $destinos = (new DestinoRepositorio())->todosDestinosPorAgenciaViajes($cod_AgenciaViajesLogeada);  //var_dump($destinos);die();

            $destinos = (new DestinoRepositorio())->todosDestinosAgenciaViajesLogueada($ref_AgenciaViajes);

            //var_dump($destinos);die();//  €; ?>

             
    <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/estadoasientosbus.inc'; ?>

    <?php //include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/cancelarasientosbus.inc'; ?>

<?php
          
          require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/LocalidadRepositorio.inc';
          $todasLocalidades = (new LocalidadRepositorio())-> todasLocalidades(); 
          $_SESSION['todaslocalidades']= $todasLocalidades;



          require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/BusRepositorio.inc';
          $busesAgenciaPredeterminada = (new BusRepositorio())-> todosBusesdeUnaAgenciaBusesCodAgenciaViajes($ref_AgenciaViajes);
         //var_dump($busesAgenciaPredeterminada); die();
          $_SESSION['busesAgenciaPredeterminada']= $busesAgenciaPredeterminada;


          require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/BusRepositorio.inc';
          $todosBusesAgenciaViajes = (new BusRepositorio())-> todosBusesDisponiblesParaUnaAgenciaViajes($ref_AgenciaViajes);
         // var_dump($todosBusesAgenciaViajes); die();
          $_SESSION['todosbusesagenciaviajes']= $todosBusesAgenciaViajes;
      

if(isset($_POST['contratar']) ){ 
    $datos=$_POST['datos']; 
    $_SESSION['datos']=$datos; 
    
    $ref_Destino=$datos['destinoseleccionado'];

    /* Hacer una sesión con los datos del Destino que se solicita. 
    include_once __DIR__ . '/../../fuente/Repositorio/destinoRepositorio.inc';
    $info_Destino = (new DestinoRepositorio())->infoDestino($ref_Destino); 
    $_SESSION['info_Destino']['ref_Destino']=$info_Destino[0]->ref_Destino;
    $_SESSION['info_Destino']['nombre_Localidad']=$info_Destino[0]->nombre_Localidad; // var_dump($_SESSION['info_Destino']); 
    $_SESSION['info_Destino']['provincia']=$info_Destino[0]->provincia;
    $_SESSION['info_Destino']['comunidad']=$info_Destino[0]->comunidad;
    $_SESSION['info_Destino']['pais']=$info_Destino[0]->pais;
    $_SESSION['info_Destino']['dia_Semana']=$info_Destino[0]->dia_Semana;
    $_SESSION['info_Destino']['fecha_Viaje']=$info_Destino[0]->fecha_Viaje;


    /* Hacer una consulta con la ref_Destino y devuelva el nombre de la agencia de Viajes 
    $nombre_AgenciaViajes = (new DestinoRepositorio())->nombreAgenciaViajes($ref_Destino); 
    //var_dump($nombre_AgenciaViajes);die();



    $_SESSION['info_Destino']['nombre_AgenciaViajes']=$nombre_AgenciaViajes[0]->nombre_Agencia;

    $_SESSION['info_Destino']['kilometrosIdaVuelta']=$info_Destino[0]->kilometrosIdaVuelta;
    $_SESSION['info_Destino']['euros']=$info_Destino[0]->euros;
    $_SESSION['info_Destino']['matricula']=$info_Destino[0]->matricula;
   // var_dump($info_Destino);  //die();

   // header('Location: index.php?ctl=motrarplantabus');
 
   $_SESSION['info_Destino']['ref_Destino']=$ref_Destino;   
   //var_dump($_SESSION['info_Destino']['ref_Destino']);die();
    ?><script>window.location.href="index.php?ctl=motrarplantabus";</script><?php

  }


     if (isset($_POST['modificardestino'])) {  ?><script>alert("jhbkjbkj");</script> <?php
            $datos=$_POST['datos'];//var_dump($datos);die();
            $ref_Destino=$datos['destinoseleccionado'];
            $infoDestino=(new DestinoRepositorio())->infoDestino($ref_Destino);
            $_SESSION['infoDestino']=$infoDestino;
            

        ?><script>window.location.href="index.php?ctl=modificardestino";</script><?php
    }

    if (isset($_POST['cancelardestino'])) { 
      
       // if(isset($_POST['asegura'])){
            $datos=$_POST['datos']; 
            $ref_Destino=$datos['destinoseleccionado'];
            $obj=(new DestinoRepositorio())->borrarUnDestino($ref_Destino);

        if ($obj==true) {
          ?><script>alert ("Destino Eliminado!");</script>
          <script>window.location.href="index.php?ctl=motrartodosdestinosdeagenciaviajeslogeada";</script><?php
        } else {
            ?><script>alert("No se ha podido eliminar el destino seleccionado!");</script><?php
        }

       // }else{ ?><script>alert("Are you sure!");</script> <?php

       // }

    
    } 
    

    
    if (isset($_POST['cerrarviaje'])) { 
      
      // if(isset($_POST['asegura'])){
           $datos=$_POST['datos']; 
           //var_dump($datos);//die();
           $ref_Destino=$datos['destinoseleccionado'];
           $obj=(new DestinoRepositorio())->noMasPlazas($ref_Destino);

       if ($obj==true) {
         ?><script>window.location.href="index.php?ctl=motrartodosdestinosdeagenciaviajeslogeada";</script><?php
       } else {
           ?><script>alert("No se ha podido MODIFICAR el destino seleccionado!");</script><?php
       }

      // }else{ ?><script>//alert("Are you sure!");</script> <?php

      // }

   
   } 

   if (isset($_POST['abrirviaje'])) { 
         $datos=$_POST['datos']; 
         $ref_Destino=$datos['destinoseleccionado'];
         $obj=(new DestinoRepositorio())->noMasPlazasNoDisponible($ref_Destino);

     if ($obj==true) {
       ?><script>window.location.href="index.php?ctl=motrartodosdestinosdeagenciaviajeslogeada";</script><?php
     } else {
         ?><script>alert("No se ha podido MODIFICAR el destino seleccionado!");</script><?php
     }

 
 } 
    
 
    
    
    
    
    ?>

















<?php //include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques\partesControladores\contratar_modificar_cancelar.inc'; ?>
<?php require __DIR__ . '/../../app/plantillas/destino/mostrartodosdestinosdeunaagenciaviajeslogeada.php';
  } 


// Función que muestra los destinos a los que se ha apuntado un cliente.
public function tusDestinosContratados(){
      require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/DestinoRepositorio.inc';
              $cod_Cliente=$_SESSION['perfil']["ref_Cliente"];
              $destinosContratados = (new DestinoRepositorio())->destinosDeUnClienteLogueado($cod_Cliente);  

      if (isset($_POST['cancelarbillete'])) {
              $datos=$_POST['datos'];
            
                
          if (isset($datos['estaseguro'])) { 
              $codigoDestino=$datos['destinoselecionado'];
              $plaza=$datos["plaza"];

              $obj = (new DestinoRepositorio())->cancelarBillete($codigoDestino,$cod_Cliente,$plaza);  
              ?><script>window.location.href="index.php?ctl=tusdestinoscontratados";</script><?php
            
          }else{ ?>
              <script>alert("¡LO SENTIMOS:\nDebe marcar la casilla de verificación!")</script><?php
          }
      }


      if(isset($_POST['generapdf'])){
              $datos=$_POST['datos'];   

              $cod_destino=$datos['destinoselecionado'];

              $plaza_bus=$datos['plaza'];
              $dest = (new DestinoRepositorio())-> destinosContratado($cod_destino,$plaza_bus);

              $_SESSION['dest']=$dest;?>
              <script>window.location.href="index.php?ctl=generarpdf";</script><?php
          
    }
      require __DIR__ . '/../../app/plantillas/destino/tusDestinosContratadoss.php';
    
    }


// Función que muestra todos los destinos más vendidos                           
public function destinosMasVendidos(){
  require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/DestinoRepositorio.inc';

    // Saber el número de plazas mayor en 3 buses
     $destinosMasVendidos=(new DestinoRepositorio())->numPlazasBusesMasLlenos();
     

    $destinos=array();
     foreach($destinosMasVendidos as $destino){
       $destino=$destino->cod_Destino;

     array_push($destinos,$destino);

     }


    // var_dump($destinos);
// formar el and
$datos='';
     for($i=0; $i< count($destinos); $i++){

        $datos=$datos . ' d.cod_Destino=' . $destinos[$i];
        $datos=$datos . ' or ';
     }
     $datos = substr($datos, 0, -3);
     // var_dump($datos);die();


    //var_dump($numPlazasVendidasMin);die();
      $destinos = (new DestinoRepositorio())->todosDestinosMasVendidos($datos);  
      //var_dump($destinos);die();

   


    // Para buscar las plazas
    $plazasTotalesCadaBus=[];  $plazasQuedanCadaBus=[];     $plazasDisponibles=[];
    require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/BusRepositorio.inc';

    for($i=0; $i<count($destinos); $i++){

        $codDestino=$destinos[$i]->cod_Destino;
        $plazasBusTotales = (new BusRepositorio())->plazasTotalesBus($codDestino);
        array_push($plazasTotalesCadaBus, $plazasBusTotales[0]->plazas);

        $totalPlazas=$plazasBusTotales[0]->plazas;

        $plazasQuedanBus = (new BusRepositorio())-> plazasQuedanEnUnBus($codDestino);

        $plaz=($totalPlazas - count($plazasQuedanBus)); 
        array_push($plazasQuedanCadaBus, $plaz);

        $disp=$totalPlazas - $plaz;
        array_push($plazasDisponibles, $disp);

    }
    //---------------Si se apunta-----------------//
    if(isset($_POST['apuntar'])){ 
      $datos=$_POST['datos'];
        if(isset($_POST['asegura'])){
            $codigoDestino=$datos;                                    // Sacar el código de destino
                      $key=array_keys($datos);
                      
                      $codigoDestino=$codigoDestino[$key[0]]; 
                      $_SESSION['codigodestino']=$codigoDestino;
                      
                      $codCliente=$_SESSION['perfil']['cod_Cliente'];           //var_dump($codCliente);die();          // Sacar el código del cliente
                      
                      $plazasAocupar=$_POST['datos'];                           // Sacar las plazas a ocupar
                    // Necesito la planta del bus
                      ?><script>window.location.href="index.php?ctl=motrarplantabus";</script><?php
                      
                      require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ViajarRepositorio.inc';
                      
                      $datos = (new ViajarRepositorio())->ocuparPlazaBus($codigoDestino,$codCliente,$plazasAocupar);
        }else{?>          
          <pre><script>alert("No ha seleccionado si está seguro de agregar este nuevo destino.!")</script></pre><?php
        }
    }
    require __DIR__ . '/../../app/plantillas/destino/mostrarDestinosMasVendidos.php';
}



// Función que devuelve los Destinos más económicos de menos de 15euros 
public function destinosMasEconomicosEnCards(){
require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/DestinoRepositorio.inc';
  $destinosMasEconómicos=(new DestinoRepositorio())->destinosMasEconómicosEnCards();
  $_SESSION['destinos']=$destinosMasEconómicos;
require __DIR__ . '/../../app/plantillas/inicio.php';
}






// TABLAS //

  // Función que muestra todos los destinos en la "Tabla Agenda Verano 2022"
  public function mostrarTodosDestinos(){
   
    require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/DestinoRepositorio.inc';
    $destinos = (new DestinoRepositorio())->todosDestinosEnTabla();  

    // Para buscar las plazas
   // $plazasTotalesCadaBus=[];  $plazasQuedanCadaBus=[];     $plazasDisponibles=[];
   // require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/BusRepositorio.inc';

    /* for($i=0; $i<count($destinos); $i++){

       $codDestino=$destinos[$i]->cod_Destino;
        $plazasBusTotales = (new BusRepositorio())->plazasTotalesBus($codDestino);
        array_push($plazasTotalesCadaBus, $plazasBusTotales[0]->plazas);

        $totalPlazas=$plazasBusTotales[0]->plazas;

        $plazasQuedanBus = (new BusRepositorio())-> plazasQuedanEnUnBus($codDestino);

        $plaz=($totalPlazas - count($plazasQuedanBus)); 
        array_push($plazasQuedanCadaBus, $plaz);

        $disp=$totalPlazas - $plaz;
        array_push($plazasDisponibles, $disp);

    }
    //---------------Si se apunta-----------------//
    if(isset($_POST['apuntar'])){
      $datos=$_POST['datos'];
        if(isset($_POST['asegura'])){
            $codigoDestino=$datos;                                    // Sacar el código de destino
                      $key=array_keys($datos);
                      
                      $codigoDestino=$codigoDestino[$key[0]]; 
                      $_SESSION['codigodestino']=$codigoDestino;
                      
                      $codCliente=$_SESSION['perfil']['cod_Cliente'];           //var_dump($codCliente);die();          // Sacar el código del cliente
                      
                      $plazasAocupar=$_POST['datos'];                           // Sacar las plazas a ocupar
                    // Necesito la planta del bus
                      ?><script>window.location.href="index.php?ctl=motrarplantabus";</script><?php
                      
                      require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ViajarRepositorio.inc';
                      
                      $datos = (new ViajarRepositorio())->ocuparPlazaBus($codigoDestino,$codCliente,$plazasAocupar);
        }else{?>          
          <pre><script>alert("No ha seleccionado si está seguro de agregar este nuevo destino.!")</script></pre><?php
        }
    }
    //require __DIR__ . '/../../app/plantillas/destino/mostrarTodosDestinos.php';


    
    if (isset($_POST['comer'])) { $datos=$_POST['datos']; $ref_Localidad=$datos['ref_Localidad'];
        require __DIR__ . '/../../fuente/Repositorio/BuscadoresRepositorio.inc'; 
        $_SESSION['negocios_Localidad'] = (new BuscadoresRepositorio())->filtrarNegociosLocalidad($ref_Localidad); 
        
            if(empty($_SESSION['negocios_Localidad'])){?>
              <script>alert("Lo sentimosa, no hay Sponsor en esta Localidad!");
              window.location.href="index.php?ctl=mostrartodosdestinos";</script><?php
            }else{?><script>window.location.href="index.php?ctl=todosNegociosLocalidad8";</script><?php }
    }
    require __DIR__ . '/../../app/plantillas/destino/mostrarTodosDestinosSimple.php';
  } 

*/
              











































































































/*

// Función que muestra todos los destinos por fecha
public function destinosPorFechaFiltrados(){
  //unset($_SESSION['destinos']);

  require __DIR__ . '/../../fuente/Modelo/busquedas.inc';
  $fecha_Viaje=$_SESSION['destinosfiltr'][0]->fecha_Viaje;
  require __DIR__ . '/../../fuente/Repositorio/DestinoRepositorio.inc';
  $_SESSION['destinos'] = (new DestinoRepositorio())->todosDestinosPorFecha($fecha_Viaje);
  require __DIR__ . '/../../app/plantillas/inicio.php';
}

// Función que muestra todos los destinos por Dia de la Semana
public function destinosPorDiafiltrados(){

  require __DIR__ . '/../../fuente/Modelo/busquedas.inc';
  $dia_Semana=$_SESSION['destinosfiltr'][0]->dia_Semana;

  require __DIR__ . '/../../fuente/Repositorio/DestinoRepositorio.inc';
  $_SESSION['destinos'] = (new DestinoRepositorio())->todosDestinosPorDia($dia_Semana);
  require __DIR__ . '/../../app/plantillas/inicio.php';
}


// Función que muestra todos los destinos por localidad del Destino filtrados 
public function destinosPorDestinoFiltrados(){

  require __DIR__ . '/../../fuente/Modelo/busquedas.inc';
  $ref_Localidad=$_SESSION['destinosfiltr'][0]->ref_Localidad;
  require __DIR__ . '/../../fuente/Repositorio/DestinoRepositorio.inc';
  $_SESSION['destinos'] = (new DestinoRepositorio())->todosDestinosPorDestino($ref_Localidad);

  require __DIR__ . '/../../app/plantillas/inicio.php';

  //require __DIR__ . '/../../app/plantillas/bloques/destinos/tarjetasarticulossimplificados.inc';

}

// Función que muestra todos los destinos por Agencia de Viajes seleccionada
public function destinosPorAgenciaViajesFiltrados(){ 
  require __DIR__ . '/../../fuente/Modelo/busquedas.inc';
  $ref_AgenciaViajes=$_SESSION['destinosfiltr'][0]->ref_AgenciaViajes;
  require __DIR__ . '/../../fuente/Repositorio/DestinoRepositorio.inc';
  $_SESSION['destinos'] = (new DestinoRepositorio())->todosDestinosPorAgenciaViajes($ref_AgenciaViajes);
  //var_dump($_SESSION['destinos']); die();
  require __DIR__ . '/../../app/plantillas/inicio.php';
}

*/



//header('Location: index.php?ctl=motrarplantabus');
//header('Location: index.php?ctl=tusdestinoscontratados');   
//header('Location: index.php?ctl=generarpdf');

//require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/destino/tusDestinosContratadoss.php';




/*
// Función que modifica los datos de un destino
public function modificarDestino(){}

*/


//Destinos económicos ordenados en tabla y en cards