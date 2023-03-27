<?php
use miId\fuente\Repositorio\DestinoRepositorio;

    if (isset($_POST['modificardestino'])) {  // Hace falta la info del destino a modificar
       // $datos=$_POST['datos']; //var_dump($datos); die();
        if(isset($_POST['asegura'])){ 
            $ref_Destino=$datos['destinoseleccionado'];
      
            $infoDestino=(new DestinoRepositorio())->infoDestino($ref_Destino);
            $_SESSION['infoDestino']=$infoDestino;
           // var_dump($infoDestino);die();

        ?><script>window.location.href="index.php?ctl=modificardestino";</script><?php
        } else {?>          
          <pre><script>alert("No ha seleccionado si está seguro de modificar el destino.!")</script></pre><?php

        }
    }
?>