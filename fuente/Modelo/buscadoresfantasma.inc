
<?php /* <link rel="stylesheet" type="text/css" href="app/utilidades/scripts/css_buscadoresFantasma.inc">*/ ?>

<!--Inicio buscadodesfantasma.inc-->
<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades.inc';  ?>
    <div>
        <form action="" method="POST" <?php if(empty($bar_rest->e_menu)){?> style="margin-top: 0em;"<?php }?>>
            <div id="container_notepierdas" class="">

            <?php 
            if(!empty($_SESSION['perfil'])){

                if($_SESSION['perfil']['roll']=='cliente'){ ?>
                    <div class="col-xl-12 text-center">
                        <h5 style="text-align: center;">No te pierdas los <br> Próximos Viajes Programados</h5>
                    </div><?php
                }


            }else{ ?>
                <div class="col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-12" style="padding: 0em;">
                    <h5 style="text-align: center;">No te pierdas los <br> Próximos Viajes Programados</h5>
                </div><?php
            }
            
            ?>
                

                <div class="row" style="margin: auto;"><?php 
                    if(!empty($lugaresDondeComer)){ ?>
                        <?php // require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/barrestaurantesconsultados.inc'; ?> <?php 
                    }else{?>
                        <div class="col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-12" style="padding: 0em;">
                            <?php $menuSoloRotulo=1; ?>
                            <?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/destinos/destinosconsultados.inc';?>   
                        </div>
                    <?php }; ?>
                </div>
            </div>   
        </form>
    </div>
<!--Fín buscadodesfantasma.inc-->

<style>
    .w-100{height: 300px;}
</style>
