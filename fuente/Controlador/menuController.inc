<?php 
namespace miId\fuente\Controlador;
use miId\fuente\Repositorio\MenuRepositorio;
use miId\fuente\Repositorio\MenuPersonalRepositorio;
use miId\fuente\Repositorio\MenuBASICOSRepositorio;
use miId\fuente\Repositorio\MenuMODRepositorio;


class MenuController
{
  
// Función que crea un Menú del día
public function crearMenu(){
    include_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades.inc'; 

    if (isset($_POST['nuevomenu'])) { $datos=$_POST['datos'];
        if (isset($_POST['asegura'])) {
            if (empty($datos['p_plato1'])) { $datos['p_plato1']=""; }
            if (empty($datos['p_plato2'])) { $datos['p_plato2']=""; }
            if (empty($datos['p_plato3'])) { $datos['p_plato3']=""; }
            if (empty($datos['p_plato4'])) { $datos['p_plato4']=""; }
            if (empty($datos['p_plato5'])) { $datos['p_plato5']=""; }
            if (empty($datos['s_plato1'])) { $datos['s_plato1']=""; }
            if (empty($datos['s_plato2'])) { $datos['s_plato2']=""; }
            if (empty($datos['s_plato3'])) { $datos['s_plato3']=""; }
            if (empty($datos['s_plato4'])) { $datos['s_plato4']=""; }
            if (empty($datos['s_plato5'])) { $datos['s_plato5']=""; }

            if (empty($datos['p_postre1'])) { $datos['p_postre1']=""; }
            if (empty($datos['p_postre2'])) { $datos['p_postre2']=""; }
            if (empty($datos['p_postre3'])) { $datos['p_postre3']=""; }

            if(!empty($datos['incluidootros'])){ $datos['incluido']=$datos['incluidootros'];
            }else{ if (empty($datos['incluido'])) { $datos['incluido']=""; } }

            if (empty($datos['precio'])) { $datos['precio']=""; }
            if (empty($datos['iva_incluido'])) { $datos['iva_incluido']="IVA INCLUIDO"; }

            if (empty($datos['comentario'])) {  $datos['comentario']=""; }

           // require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/MenuRepositorio.inc';
           require_once $_SERVER['DOCUMENT_ROOT'] . MENUREPOSITORIO;

            // Antes de crear, debe borrar el anterior (podría borrarse y no hacer el nuevo menú)
            $ref_negocio=$datos['ref_negocio'];
            $obj = (new MenuRepositorio())->eliminarMenu($ref_negocio);
                
            $obj = (new MenuRepositorio())->nuevoMenu($datos); ?>
                <pre><script>//alert("¡Enhorabuena, ya forma parte de nosotros!")</script></pre>
                <script>//window.location.href="index.php?ctl=inicio";</script><?php

            // Insertar en RELACIONMENUSNEGOCIOS
            //var_dump($datos);
            $ref_menu=$datos['ref_menu'];
                $obj = (new MenuRepositorio())->nuevaRelacionMenusNegocios($ref_negocio,$ref_menu); 

        } else {?>      
            <pre><script>alert("¡Debe seleccionar su consentimiento!")</script></pre><?php
        }
    }



    if(isset($_POST['envia-foto'])){
        $nombre=$_FILES['archivo']['name'];
        $guardado=$_FILES['archivo']['tmp_name'];

        $datos=$_POST['datos']; 
        
            $uploadedfileload="true";
            $uploadedfile_size=$_FILES['archivo']['size'];
    
            /*
            echo $_FILES['archivo']['name'];
            echo $_FILES['archivo']['tmp_name'];
            echo $_FILES['archivo']['type'];
            echo $_FILES['archivo']['size'];
            echo $_FILES['archivo']['error'];
    */
            
          //Capacidad
          if ($_FILES['archivo']['size']>200000){
                $msg="El archivo es mayor que 200KB(>200000), debes reduzcirlo antes de subirlo<BR>";
                $uploadedfileload="false";
          }
    
         // var_dump($_FILES['archivo']);
         // Extensión
          if ($_FILES['archivo']['type'] =="image/jpeg" || $_FILES['archivo']['type'] =="image/gif" || $_FILES['archivo']['type'] =="image/png"){
                $msg="<br>La Extensión del archivo es permitida";
              //  echo $msg; 
          }else{
                $msg="<br>Tu archivo tiene que ser JPG o GIF. Otros archivos no son permitidos<BR>";
              //  echo $msg;
                $uploadedfileload="false";
          }
    

          $nombre_fichero = $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/web/imagenes/archivos/rguru.png';

          if (file_exists($nombre_fichero)) {
              echo "El fichero $nombre_fichero existe";?>
              <script>alert('Existe');</script><?php
          } else {
              echo "El fichero $nombre_fichero no existe";?>
              <script>alert('No existe');</script><?php
          }


$rutaRelativaCarpeta='./web/imagenes/archivos_MenusPersonalizados';

    
        // Creación de carpeta temporal y guardado
        if(!file_exists($rutaRelativaCarpeta)){
            mkdir($rutaRelativaCarpeta,777,true);
            if(file_exists($rutaRelativaCarpeta)){
                if(move_uploaded_file($guardado, $rutaRelativaCarpeta . '/' . $nombre)){
                    echo "<br>Archivo guardado con exito";
                }else{
                    echo "Archivo no se pudo guardar";
                }
            }

        }else{
            if(move_uploaded_file($guardado, './web/imagenes/archivos_MenusPersonalizados/' . $nombre)){
                echo "<br>Archivo guardado con exito";
 
                $datos['ref_MenuPersonal']='MP' . $datos['ref_negocio'] . "/1";
                $datos['nombre_MenuPersonal']=$nombre;
                $datos['ref_Negocio']=$datos['ref_negocio'];
                $datos['habilitado']='SI';


    // require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/MenuPersonalRepositorio.inc';
     require_once $_SERVER['DOCUMENT_ROOT'] . MENUPERSONALREPOSITORIO;
// Si de esa referencia está habilitado un Menú Personal, debe habilitar a 'NO'
$inhabilitarMenuPersonal = (new MenuPersonalRepositorio())->inhabilitarMenuPersonal($datos);


        // Comprobar si existe ya una referencia de ref_MenuPersonal
       
            $comprobar_ref_MenuPersonal = (new MenuPersonalRepositorio())->comprobarMenuPersonal($datos);
            
       //     var_dump($comprobar_ref_MenuPersonal[0]->ref_MenuPersonal); 

            if(!empty($comprobar_ref_MenuPersonal[0]->ref_MenuPersonal)){
               // substr("abcdef", -3, 1);
                $partir = explode( '/', $comprobar_ref_MenuPersonal[0]->ref_MenuPersonal );
                $parte1 = "MP" . $datos['ref_negocio'] . "/";
                $parte2 = $partir[1] + 1;
                $datos['ref_MenuPersonal']=$parte1 . $parte2; 
            }


           
        //    require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/MenuRepositorio.inc';
            require_once $_SERVER['DOCUMENT_ROOT'] . MENUREPOSITORIO;


            $datitos['ref_menu'] = $datos['ref_MenuPersonal'];
            $datitos['ref_negocio']=$datos['ref_negocio'];
            $obj = (new MenuRepositorio())->nuevoMenu($datitos);


            $datos['ref_MenuPersonal']=$datos['ref_MenuPersonal'];
            $obj = (new MenuPersonalRepositorio())->nuevoMenuPersonal($datos);

            //Hacer la Relación
            $ref_RelacionMenusNegocios='RMP' . $datos['ref_negocio'] . '/' . $parte2;
            $ref_negocio=$datos['ref_negocio'];
            $ref_menu = $parte1 . $parte2;  
            $habilitado="NO";
          
            $obj = (new MenuRepositorio())->nuevaRelacionMenusNegocios($ref_RelacionMenusNegocios, $ref_negocio,$ref_menu,$habilitado);

            }else{
                echo "Archivo no se pudo guardar";
            }
        }
    
    
    
    /*
    $uploadedfileload="true";
    $uploadedfile_size=$_FILES['uploadedfile'][size];
    echo $_FILES[uploadedfile][name];
    if ($_FILES[uploadedfile][size]>200000)
    {$msg=$msg."El archivo es mayor que 200KB, debes reduzcirlo antes de subirlo<BR>";
    $uploadedfileload="false";}
    
    if (!($_FILES[uploadedfile][type] =="image/pjpeg" OR $_FILES[uploadedfile][type] =="image/gif" OR $_FILES[uploadedfile][type] =="image/png"))
    {$msg=$msg." Tu archivo tiene que ser JPG o GIF. Otros archivos no son permitidos<BR>";
    $uploadedfileload="false";}
    
    $file_name=$_FILES[uploadedfile][name];
    $add="uploads/$file_name";
    if($uploadedfileload=="true"){
    
    if(move_uploaded_file ($_FILES[uploadedfile][tmp_name], $add)){
    echo " Ha sido subido satisfactoriamente";
    }else{echo "Error al subir el archivo";}
    
    }else{echo $msg;}
    
    
    
    var_dump($_FILES);
    
    
    //die();
    $target_path = "uploads/";
    $target_path = $target_path . basename( $_FILES['uploadedfile']['name']); 
    if(move_uploaded_file($_FILES['uploadedfile']['tmp_name'], $target_path)) {
        echo "El archivo ".  basename( $_FILES['uploadedfile']['name']). 
        " ha sido subido";
    } else{
        echo "Ha ocurrido un error, trate de nuevo!";
    }
    
    
    
      var_dump($_POST);
    
    if(isset($_POST['subir-imagen'])){?>
      <script>alert("Premio");</script><?php
    
      
      echo $_FILES['imagen1']['name'];
      echo $_FILES['imagen1']['tmp_name'];
      echo $_FILES['imagen1']['type'];
      echo $_FILES['imagen1']['size'];
      echo $_FILES['imagen1']['error'];
    
    
    $extensiones = array(0=>'image/jpg',1=>'image/jpeg',2=>'image/png');
    $max_tamanyo = 1024 * 1024 * 8;
    if ( in_array($_FILES['imagen1']['type'], $extensiones) ) {
         echo 'Es una imagen';
         if ( $_FILES['imagen1']['size']< $max_tamanyo ) {
              echo 'Pesa menos de 1 MB';
         }
    }
    
    
    
    
    $ruta_indexphp = dirname(realpath(__FILE__));
    $ruta_fichero_origen = $_FILES['imagen1']['tmp_name'];
    $ruta_nuevo_destino = $ruta_indexphp . '/imagenes/' . $_FI_MenusPersonalizadosLES['imagen1']['name'];
    if ( in_array($_FILES['imagen1']['type'], $extensiones) ) {
         echo 'Es una imagen';
         if ( $_FILES['imagen1']['size']< $max_tamanyo ) {
              echo 'Pesa menos de 1 MB';
              if( move_uploaded_file ( $ruta_fichero_origen, $ruta_nuevo_destino ) ) {
                   echo 'Fichero guardado con éxito';
              }
         }
    }
    
    */
    
      }
    require __DIR__ . '/../../app/plantillas/restaurantes/menu/formNuevoMenu2.php';
}



// Función que muestra las Agencias de Viajes disponibles 
public function seleccionarMenu(){ $ref_negocio=$_SESSION['perfil']['ref_negocio'];
    require_once $_SERVER['DOCUMENT_ROOT'] . MENUREPOSITORIO;
    require_once $_SERVER['DOCUMENT_ROOT'] . MENUBASICOREPOSITORIO;
    require_once $_SERVER['DOCUMENT_ROOT'] . MENUMODREPOSITORIO;
    require_once $_SERVER['DOCUMENT_ROOT'] . MENUPERSONALREPOSITORIO;

    //require __DIR__ . '/../../fuente/Repositorio/MenuBASICORepositorio.inc';
    $todosMenusBASICOS = (new MenuBASICOSRepositorio())->todosMenusBASICOS($ref_negocio);
    $todosMenusMOD = (new MenuMODRepositorio())->todosMenusMOD($ref_negocio);
    $todosMenusPremium = (new MenuPersonalRepositorio())->todosMenusPersonales($ref_negocio);

    if (isset($_POST['selecciona_menu'])) {
        if (isset($_POST['asegura'])) { $datos=$_POST['datos'];
           
           
                $ref_negocio=$_SESSION['perfil']['ref_negocio'];
                $obj= (new MenuRepositorio())->inhabilitarRelacionMenus($ref_negocio);

                $ref_menu=$datos['ref_MenuPersonal'];
                $obj= (new MenuRepositorio())->habilitarRelacionMenus($ref_menu);
                ?><script>window.location.href="index.php?ctl=seleccionar_menu";</script><?php

        } else {?><pre><script>alert("¡Debe seleccionar si está seguro de ello!");</script></pre><?php }
    }
         require __DIR__ . '/../../app/plantillas/restaurantes/menu/mostrarTodosMenus.php';
}

}

 //require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/MenuRepositorio.inc';