<?php
namespace miId\fuente\Controlador;
use miId\fuente\Repositorio\ComerRepositorio;
use miId\fuente\Repositorio\DestinoRepositorio;
use miId\fuente\Repositorio\BuscadoresRepositorio;

class BuscadoresController
{
    // Función que devuelve Destinos Filtrados.
    public function cuadroBuscadoresDestinos(){ 
        // Va a Inicio y sale toda la publicidad
            /*if (isset($_POST['consultardestinos'])) {
                $datos = $_POST['datos'];
                require __DIR__ . '/../../fuente/Repositorio/BuscadoresRepositorio.inc'; 
                $destinos = (new BuscadoresRepositorio())->filtrarDestinos($datos);

                if(empty($destinos)){
                    ?><script>alert("Lo sentimos, no hay ningún Viaje con esos datos!")
                    window.location.href="index.php?ctl=cuadrobuscadoresdestinos"</script><?php
                }else{
                    $_SESSION['destinosfiltrados']=$destinos;
                    $_SESSION['destinos']=$_SESSION['destinosfiltrados']; 
                    $_SESSION['publicidad1vez']=1;
                ?><script>window.location.href="index.php?ctl=inicio";</script><?php
                }
            }*/


        // Va a la tabla simplificada
        if (isset($_POST['consultardestinos'])) {
            $datos = $_POST['datos'];
            $ref_Localidad=$datos['lugardestino']; //var_dump($datos);die();
            require __DIR__ . '/../../fuente/Repositorio/DestinoRepositorio.inc'; 
            //Para el buscador de Destinos
            $destinos = (new DestinoRepositorio())->todosDestinosEnTablaFiltrados($datos);

            //var_dump($destinos);die();

            if(empty($destinos)){
                ?><script>alert("Lo sentimos, no hay ningún Viaje con esos datos!")
                window.location.href="index.php?ctl=cuadrobuscadoresdestinos"</script><?php
            }else{ 
                $_SESSION['destinosfiltrados']=$destinos; //echo("ehhhhh"); die();
                $_SESSION['destinos']=$_SESSION['destinosfiltrados']; 
            ?><script>window.location.href="index.php?ctl=mostrartodosdestinossimple";</script><?php

            }
        }

                require __DIR__ . '/../../app/plantillas/buscadores/cuadrobuscadores.php';
}


// Función que devuelve Negocios Filtrados desde el Cuadro/Buscador.
public function cuadrobuscadoresnegocios(){ 
    if (isset($_POST['dondecomerlugar'])){

        $datos = $_POST['datos']; $ref_Localidad=$datos['lugardestino']; 
        require __DIR__ . '/../../fuente/Repositorio/BuscadoresRepositorio.inc'; 
        
        $negocios_localidad = (new BuscadoresRepositorio())->filtrarNegociosLocalidad($ref_Localidad); 
        if(empty($negocios_localidad)){?>
                <script>alert("Lo sentimosr, no hay Sponsor en esta Localidad!");
                window.location.href="index.php?ctl=cuadrobuscadoresnegocios";</script><?php

        }else{ $_SESSION['negocios_Localidad']=$negocios_localidad; 
        }
        // Si no da problemas en un futuro, borrar uno de los 2 archivos.
        ?><script>window.location.href="index.php?ctl=todosNegociosLocalidad";</script><?php
    }
    require __DIR__ . '/../../app/plantillas/buscadores/cuadrobuscadoresnegocios.php';
}





// Función que devuelve Destinos Filtrados después del Buscador. 
public function todosNegociosLocalidad(){
      include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/partesControladores/verFicha.inc';
  
      $rotulo=1;
      require __DIR__ . '/../../app/plantillas/bloques/general/todosNegociosLocalidad.inc';
}



// Función que devuelve Destinos filtrados por Localidad para la tabla de toda la programación Verano 2022.
public function mostrarTodosDestinosSimple(){ $destinos =$_SESSION['destinos'];
   // var_dump($destinos);
    if (isset($_POST['comer'])){
        $datos = $_POST['datos']; var_dump($datos); $ref_Localidad=$datos['ref_Localidad']; 
        require __DIR__ . '/../../fuente/Repositorio/BuscadoresRepositorio.inc'; 
        
        $negocios_localidad = (new BuscadoresRepositorio())->filtrarNegociosLocalidad($ref_Localidad); 
       // var_dump($negocios_localidad);die();

        if(empty($negocios_localidad)){?>
            <script>alert("Lo sentimose, no hay Sponsor en esta Localidad!");
            window.location.href="index.php?ctl=mostrartodosdestinossimple";</script><?php

        }else{ 
            $_SESSION['negocios_Localidad']=$negocios_localidad; 
            ?><script>window.location.href="index.php?ctl=todosNegociosLocalidad";</script><?php
        }
    }
    require __DIR__ . '/../../app/plantillas/destino/mostrarTodosDestinosSimple.php';
}

}


//   //require __DIR__ . '/../../app/plantillas/bloques/todosNegociosLocalidad8bis.inc';  /* Necesita más espacio */ 