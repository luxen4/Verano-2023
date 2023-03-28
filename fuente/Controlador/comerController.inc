<?php
namespace miId\fuente\Controlador;
use miId\fuente\Repositorio\DestinoRepositorio;
use miId\fuente\Repositorio\ComerRepositorio;
use Phar;

class comerController
{


// Función que devuelve los BaresRestaurantes de una Localidad
    public function comerDestinoOK()
    {
        $cod_Destino=$_SESSION['datosdestino'];

        if (isset($_POST['dondecomerlugar'])) {
            $datos=$_POST['datos'];
            die();
            $cod_Destino=$datos['dondecomerlugar'];
            /* var_dump($datos); var_dump($datos['diasemana']); var_dump($datos['lugardestino']); var_dump($datos['agenciaviajes']);*/
        }

        require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ComerRepositorio.inc';
  
        $lugaresDondeComer=(new ComerRepositorio())->dondeComer($cod_Destino);

        require __DIR__ . '/../../app/plantillas/inicio.php';
    }


    // Función que devuelve los todos los Bares y Restaurantes de una Localidad para tarjetas
    public function comerDestino()
    {
        // die();
        require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ComerRepositorio.inc';
        $cod_Localidad=$_SESSION['datosdestino'];
 
        $negocios_localidad=(new ComerRepositorio())->todosNegociosLocalidad($cod_Localidad);
        // var_dump($negocios_localidad);die();
        //require __DIR__ . '/../../app/plantillas/bloques/todosNegociosLocalidad.inc';

        require __DIR__ . '/../../app/plantillas/bloques/todosNegociosLocalidad8.inc';
    }


    // Función que devuelve los BaresRestaurantes para mostrar en una tabla
    // "All Bars & Restaurants" y el administrador puede activarlos o borrarlos
    public function mostrarTodosBaresRestaurantes()
    {
        require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ComerRepositorio.inc';
        $_TodosBarRestaurantes=(new ComerRepositorio())->TodosBaresRestaurantes();
        //var_dump($_TodosBarRestaurantes);die();

  
        if (isset($_POST['modificar'])) {
            if (isset($_POST['estaseguro'])) {
                $datosPosiciones=$_POST['posiciones'];  // var_dump($datosPosiciones);die();
                $datosEstados=$_POST['datos'];

                /*    var_dump($datosPosiciones); echo"<br><br>";
                    var_dump($datosEstados); echo"<br><br>";
                */
                $numEstados=count($datosEstados);
              
                for ($i=1; $i<=$numEstados; $i++) {
                    $ref_negocio=$_TodosBarRestaurantes[$i-1]->ref_negocio;
                    $valor="habilita_" . $ref_negocio;
                    $posicion="posicion_" . $ref_negocio;

                
                
                    $posicionNegocio=$datosPosiciones[$posicion];
                    $estado=$datosEstados[$valor];

                    /* var_dump($ref_negocio);
                     var_dump($posicionNegocio);
                     var_dump($estado);
                     var_dump($valor);
                     var_dump($posicion);
                     echo"<br>";
                     */

                    $_PosicionarDesabilitarNegocios=(new ComerRepositorio())->posicionarDesabilitarNegocios($ref_negocio, $posicionNegocio, $estado);
                }//die();

              ?><script>window.location.href="index.php?ctl=mostrartodosbaresrestaurantes";</script><?php
            } else { ?>          
          <pre><script>alert("No ha seleccionado la casilla de seguridad!")</script></pre><?php
      }
        }
  
        require __DIR__ . '/../../app/plantillas/barrestaurantes/mostrarTablaTodosBaresRestaurantes.php';
    }

  
    // Función que crea y carga las tablas de los Bares y Restaurantes predeterminados
    public function cargarBarRestaurantes()
    {
        require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/poblarbarrestaurantes.php';
    }


    // Función prueba
    public function mostrarWrap(){
        ?><script>alert("ooooooh");</script> <?php
        require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/poblarbarrestaurantes.php';
    }


// Función que muestra la ficha de un negocio
        public function fichaNegocio(){
        $bar_rest = $_SESSION['datos_negocio']; 
        $menuSoloPopup=0; 
        require __DIR__ . '/../../app/plantillas/barrestaurantes/mostrarFichaNegocio.php';
    }
}








 // Enlaces de facebook https://www.facebook.com/pages/category/Restaurant/El-Fig%C3%B3n-de-San-Mam%C3%A9s-102157554534177/ Para coger la información
  // Otros enlaces