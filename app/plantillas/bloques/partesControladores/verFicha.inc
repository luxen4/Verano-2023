
<?php 
use miId\fuente\Repositorio\ComerRepositorio;

    if(isset($_POST['verficha'])){ //var_dump($_POST); die();
      $ref_negocio=$_POST['datos']['ref_negocio'];
      require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ComerRepositorio.inc'; 
      $datosNegocio = (new ComerRepositorio())->datosNegocio($ref_negocio); 
      $_SESSION['datos_negocio']=$datosNegocio; //var_dump( $_SESSION['datos_negocio']);die();
      $_SESSION['vengodeficha']=1;
      ?><script>window.location.href="index.php?ctl=fichanegocio";</script><?php
    }

    if(isset($_POST['hacercupon'])){ 
      $ref_negocio=$_POST['datos']['ref_negocio'];  //var_dump($_POST); die();
      require $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ComerRepositorio.inc'; 
      var_dump($ref_negocio);
      $datosNegocio = (new ComerRepositorio())->datosNegocio($ref_negocio);
      $_SESSION['datos_negocio']=$datosNegocio;  //var_dump($_SESSION['datos_negocio']);die();
      ?><script>window.location.href="index.php?ctl=generarpdf_cuponDescuento";</script><?php
    }

?>
<style>
  /*p{text-align: center; width: 2px; height: 3px;}*/
</style>

<!--

if(isset($_POST['generapdf'])){
      $datos=$_POST['datos'];   

      $cod_destino=$datos['destinoselecionado'];

      $plaza_bus=$datos['plaza'];
      $dest = (new DestinoRepositorio())-> destinosContratado($cod_destino,$plaza_bus);

      $_SESSION['dest']=$dest;?>

      https://www.gruposarea.com/wp-content/uploads/2019/12/CARTA-BALEA.pdf   para generar un pdf
}-->