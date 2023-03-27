<!--Redes Sociales tarjetas Negocios Principal -->

<div class="redes_sociales" ><?php
            if($bar_rest->e_tripadvisor=="#"){
              }else{?><a target="blanc" class="tripadvisor_img" href=<?php echo pasarUtf8($bar_rest->e_tripadvisor);?>></a><?php } 

            if($bar_rest->e_facebook=="#"){
              }else{?><a target="blanc" class="facebook_img" href=<?php echo pasarUtf8($bar_rest->e_facebook);?>></a><?php } 

            if($bar_rest->e_restaurantGuru=="#"){
              }else{?><a class="restaurantguru_img" target="blanc" href=<?php echo pasarUtf8($bar_rest->e_restaurantGuru);?>></a><?php } 

            if($bar_rest->e_theFork=="#"){
              }else{?><a target="blanc" class="thefork_img" href=<?php echo pasarUtf8($bar_rest->e_theFork);?>></a><?php } ?>
</div>


<style>
.redes_sociales{margin-left: 0.5em;}
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

</style>


           