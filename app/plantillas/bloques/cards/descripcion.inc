<!-- Descripcion de un Negocio -->
<div class="row descripcion_restaurante">
    <div class="col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-12 description" style="padding: 0em;">
        <p class="list-food" 
        <?php if(empty($hayMenuEnNegocio->e_menu)){  } ?>>
            <?php echo pasarUtf8($bar_rest->descripcion); ?>
        </p>
        <p class="calle"><?php echo pasarUtf8( $bar_rest->direccion); ?></p>
        <p class="telefono" 
        <?php 
            if(!empty($hayMenuEnNegocio->e_menu)){?>style=""<?php }else{?> style="margin:0em 0em;"<?php } ?>>
            <?php echo "Tel: " . $bar_rest->telefono; ?></p>
    </div>
</div>  


<style>
.list-food,.calle{margin: 0em;}
.row .descripcion_restaurante{margin-top: 0.2em; /*padding:0em 0.9em;*/}

.telefono{margin-top: 0.2em; text-align: center; text-decoration: underline; }



@media only screen and (max-width: 515px) {

    .list-food, .calle {text-align: center;
    text-transform: capitalize; color: #9E9E9E; display: block;
    text-overflow: ellipsis; font-size: 0.6em; white-space: nowrap; overflow: hidden;}
    .telefono{font-size: 0.9em;}
}
@media only screen and (min-width: 516px){
    .list-food, .calle {text-align: center;
    text-transform: capitalize; color: #9E9E9E; display: block;
  /*  text-overflow: ellipsis;*/ font-size: 0.8em; white-space: nowrap; overflow: hidden;}
    .telefono{font-size: 0.9em; }
}



@media only screen and (min-width: 700px){}

</style> 

<!--https://www.tiendeo.com/logrono/ofertas/estrella-->