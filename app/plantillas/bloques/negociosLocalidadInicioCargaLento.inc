<!-- Todos los negocios de una Localidad para la pantalla de Inicio 
negociosLocalidadInicio.inc
-->
as 
<?php 

        foreach ($negocios_Localidad as $bar_rest) { ?>
   <!--   <form action="" method="POST" <?php if(empty($bar_rest->e_menu)){?> style="margin-top: 0em;"<?php }?>>-->
                     <div class="row articulo" style="padding-top: 0.8em;">

                            <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">
                                <?php require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/cards/carruselFotosNegocio.inc';?>

                                <div class="row">
                                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12 mas_fotos">
                                        <?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/redesSocialesIconosPrincipal.inc'; ?>
                                        <?php //require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/redes_sociales.inc';?>
                                        <?php // include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/redesSocialesIconos.inc'; ?>
                                    </div>     
                                </div>

                            </div>
                            
                            

                            <?php 
                            
                            if(empty($bar_rest->dto)){?>
                                <div class="col-xl-6 text-left col-lg-6 col-md-6 col-sm-6 col-6 mas_fotos"><?php
                            }else{?>
                                <div class="col-xl-5 text-left col-lg-5 col-md-5 col-sm-5 col-5 mas_fotos"><?php
                            }?>

                            
                                <?php    require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/info_negocioSimple.inc';?><!--Este es el definitivo-->
                                <?php // require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/info_negocio.inc';?>
                            </div>

                           

                            <div class="col-xl-1 text-left col-lg-1 col-md-1 col-sm-1 col-1">
                                <?php  require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/cards/cupon_descuento.inc';?>
                            </div>

                        </div>
               
                    <?php   
        }; ?> 

 <!--</form>-->


    
<style>
    form{text-align: center; margin-bottom: 0em;}
</style> 
        



<!--
https://www.bufa.es/css3-texto-vertical/ Para iconos
 <a href="https://www.bufa.es/instagram-obtener-id-usuario/" title="ID user Instagram" id="id-user-instragram">
                        <svg width="27" height="27" viewBox="0 0 56.693 56.693" xmlns="http://www.w3.org/2000/svg"><path d="M43.414 4.831H13c-5.283 0-9.581 4.297-9.581 9.58v30.415c0 5.283 4.298 9.58 9.581 9.58h30.415c5.283 0 9.58-4.297 9.58-9.58V14.41c-.001-5.283-4.298-9.579-9.581-9.579zm2.748 5.713l1.096-.004v8.403l-8.375.027-.029-8.402 7.308-.024zM21.131 24.53c1.588-2.197 4.164-3.638 7.076-3.638s5.488 1.441 7.074 3.638a8.677 8.677 0 0 1 1.652 5.088c0 4.811-3.918 8.725-8.727 8.725-4.812 0-8.726-3.914-8.726-8.725a8.683 8.683 0 0 1 1.651-5.088zm27.033 20.295a4.754 4.754 0 0 1-4.75 4.75H13a4.755 4.755 0 0 1-4.751-4.75V24.53h7.4a13.483 13.483 0 0 0-.998 5.088c0 7.473 6.08 13.557 13.556 13.557 7.475 0 13.555-6.084 13.555-13.557 0-1.799-.361-3.516-1-5.088h7.402v20.295z"></path></svg>
                        Obtener el <strong>«ID»</strong> de un <strong>usuario de Instagram</strong>
                    </a>
    -->

    <!--https://www.bufa.es/web/css/ para scroll vertical-->