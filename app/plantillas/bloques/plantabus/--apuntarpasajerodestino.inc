<?php
use miId\fuente\Repositorio\ViajarRepositorio;

    if(isset($_POST['apuntar'])){
        $datos=$_POST['datos'];

        $codigoDestino=$datos;                                 // Sacar el código de destino
        $key=array_keys($datos);
        
        $codigoDestino=$codigoDestino[$key[0]]; 
        
        $codCliente=$_SESSION['perfil']['cod_Cliente'];       // Necesito el código del cliente
        $plazasAocupar=$_POST['datos'];                       // Necesito la planta del bus
        
        ?><script>window.location.href="index.php?ctl=motrarplantabus";</script><?php
        header('Location: index.php?ctl=motrarplantabus');

        require __DIR__ . '/../../fuente/Repositorio/ViajarRepositorio.inc';
        $datos = (new ViajarRepositorio())->ocuparPlazaBus($codigoDestino,$codCliente,$plazasAocupar);

    }

?>