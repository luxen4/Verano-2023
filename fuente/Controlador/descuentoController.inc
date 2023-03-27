<?php ; 
namespace miId\fuente\Controlador;
use miId\fuente\Repositorio\ComerRepositorio;

class DescuentoController
{
 
// Función que crea un Menú del día
public function crearDescuento(){
    if (isset($_POST['creardescuento'])) { $datos=$_POST['datos']; 
        if (isset($_POST['asegura'])) {
            require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/ComerRepositorio.inc';
                $datos['ref_negocio'] = $_SESSION['perfil']['ref_negocio'];            
                $obj = (new ComerRepositorio())->crearDescuento($datos);

        } else {?><pre><script>alert("¿Está seguro de crear el descuento?")</script></pre><?php }
    }



    
    if (isset($_POST['eliminardescuento'])) { 
        if (isset($_POST['asegura_eliminar'])) {
            require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/ComerRepositorio.inc';
                $datos['ref_negocio'] = $_SESSION['perfil']['ref_negocio'];            
                $obj = (new ComerRepositorio())->eliminarDescuento($datos);

        } else {?><pre><script>alert("¿Está seguro de eliminar el descuento?")</script></pre><?php }
    }


    if (isset($_POST['modificardescuento'])) {  $datos=$_POST['datos'];  
        if (isset($_POST['asegura_modificar'])) {
            require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/ComerRepositorio.inc';
                
            
            $datos['ref_negocio'] = $_SESSION['perfil']['ref_negocio'];     
                    //var_dump($datos); die(); 
                $obj = (new ComerRepositorio())->crearDescuento($datos);

        } else {?><pre><script>alert("¿Está seguro de modificar el descuento?")</script></pre><?php }
    }















    require __DIR__ . '/../../app/plantillas/restaurantes/descuento/formNuevoDescuento.php';
}






}
