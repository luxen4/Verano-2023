<?php use miId\fuente\Repositorio\ViajarRepositorio;  ?>

<div style="margin:0.5em" class="row">
    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
        <?php $_SESSION['ref_Destino']=$ref_Destino;?>
    
        <div>
            <a style="border:1px solid black; background-color:F6F6F6" class="dropdown-item" href="index.php?ctl=informacionbusdestino">Información Bus</a> 
        </div>
  
       <!-- input id="" type="button" value="Información del Bus" onclick="asd2(), apareceInfoBus()">-->
    </div>
</div>




<input id="ref_Destino" type="checkbox" name="datos[refdestino]" value="<?php echo ($ref_Destino); ?>" checked hidden >   



