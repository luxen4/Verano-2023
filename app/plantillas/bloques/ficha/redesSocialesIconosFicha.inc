<!--Redes Sociales Ficha/Negocio -->

<div id="redes_ficha" >
 <?php
 
    if($bar_rest[0]->e_tripadvisor=="#"){
    }else{?>
        <a target="blanc" class="tripadvisor_img" href=<?php echo pasarUtf8($bar_rest[0]->e_tripadvisor);?>></a><?php } 

    if($bar_rest[0]->e_facebook=="#"){
    }else{?>
        <a target="blanc" class="facebook_img" href=<?php echo pasarUtf8($bar_rest[0]->e_facebook);?>></a><?php } 

    if($bar_rest[0]->e_restaurantGuru=="#"){
    }else{?>

        <a class="restaurantguru_img" target="blanc" href=<?php echo pasarUtf8($bar_rest[0]->e_restaurantGuru);?>></a>  
            
    <?php } 

    if($bar_rest[0]->e_theFork=="#"){
    }else{?>
    <a target="blanc" class="thefork_img" href=<?php echo pasarUtf8($bar_rest[0]->e_theFork);?>></a><?php } ?>

</div>



<style>
.tripadvisor_img, .facebook_img, .restaurantguru_img,  .thefork_img{
    /*float: left; background-image: url(//www.kerico.es/kerico/assets/css/../images/sprite-valoraciones-low.png); */  
        float: left; background-image: url(web/imagenes/iconosrestaurantes.png);   
    /* margin-top: -5px; */
    margin-right: 10px; width: 26px;
}

.tripadvisor_img{ height: 27px; background-position: 1px 0; margin-top: 0.5em;}
.facebook_img{ height: 24px; background-position: 1px -220px; margin-top: 0.5em;}
.restaurantguru_img{ height: 29px; background-position: 1px -1152px;}
.thefork_img{ height: 29px; background-position: 1px -80px;}

a {margin: auto!important;}

@media only screen and (min-width: 280px) and (max-width: 430px) {
    #redes_ficha{padding-left: 2em;}
}

@media only screen and (min-width: 431px) and (max-width: 556px) {
    #redes_ficha{padding-left: 2.5em;}
}

@media only screen and (min-width: 557px) and (max-width: 710px) {
    #redes_ficha{padding-left: 4em;}
}

@media only screen and (min-width: 711px) and (max-width: 1000px) {
    #redes_ficha{padding-left: 6.5em;}
}

@media only screen and (min-width: 1001px) and (max-width: 1200px) {
    #redes_ficha{padding-left: 9em;}
}

@media only screen and (min-width: 1201px) and (max-width: 1300px) {
    #redes_ficha{padding-left: 11em;}
}


@media only screen and (min-width: 1301px) and (max-width: 1500px) {
    #redes_ficha{padding-left: 12em;}
}

@media only screen and (min-width: 1501px) and (max-width: 1700px) {
    #redes_ficha{padding-left: 14em;}
}

@media only screen and (min-width: 1701px) and (max-width: 2000px) {
    #redes_ficha{padding-left: 16em;}
}
</style>


           