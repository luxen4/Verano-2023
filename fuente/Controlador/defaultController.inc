<?php
namespace miId\fuente\Controlador;
use miId\fuente\Repositorio\DestinoRepositorio;
class DefaultController{
  
  // Función que situa en la pantalla principal de inicio y presenta todos los Destinos en forma de cards
  public function inicio(){ 
   
    if(empty($_SESSION['destinos'])){ unset($_SESSION['destinos']);}
      unset($_SESSION['destinos']);

  $_SESSION['fotosLugares']= array('Alberite','Santoña','Zarautz','Fuenterrabía','San Sebastián',
          'Noja','Biarritz','Laredo','Santander','Castro Urdiales','Hendaya','Saint-Jean-de-Luz','Getaria','Zumaia',
          'Orio','Somo','Plentzia','Lekeitio','Isla','Ajo','Bakio','Ondarroa','Deba','Somorrostro','Zaragoza','Getaria','Sopelana','Comillas');

  require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/DestinoRepositorio.inc';
          
  require __DIR__ . '/../../fuente/Modelo/busquedas.inc';

 
          if(!empty($_SESSION['destinosfiltrados'])){ echo"rtygpo"; die();
            $_SESSION['destinos']=$_SESSION['destinosfiltrados'];
          }else{
                  // Para los destinos en tarjetas de la home.
            $_SESSION['destinos']=(new DestinoRepositorio())->todosDestinos(); 
                  // var_dump($_SESSION['destinos']); //die();
                  //var_dump( $_SESSION['destinos'][0]->euros); die();
          }

          $soloLugares = (new DestinoRepositorio())->soloLugares(); 
          $_SESSION['sololugares']=$soloLugares;

          $soloLocalidades = (new DestinoRepositorio())->soloLocalidades(); 
          $_SESSION['sololocalidades']=$soloLocalidades;

          $soloAgenciasDeViajes= (new DestinoRepositorio())->soloAgenciasDeViajes();
          $_SESSION['soloagenciasdeviajes']=$soloAgenciasDeViajes;

    if(isset($_POST['apuntar'])){
      $datos=$_POST['datos'];  
      $_SESSION['datosdestino']=$datos['destinoseleccionado'];?>
      <script>
      alert("Por aquí");
      window.location.href="index.php?ctl=motrarplantabus";</script><?php
    }
  
    include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/partesControladores/verFicha.inc';

    require __DIR__ . '/../../app/plantillas/inicio.php';
  }
 //header('Location: https://www.youtube.com/watch?v=V-CYJ3wbWOQ');
}


    


    



