<!--Información del Negocio-->
<div class="col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-6 info_negocio">

    <div class="row">



        <div class="col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-12">
                <h6><?php

                    if($bar_rest->e_web=="#"){    // Si no va después, quitar el 0
                        echo pasarUtf8($bar_rest->nombre);
                    }else{?>
                    <a href="<?php echo pasarUtf8($bar_rest->e_web); ?>"><?php  echo pasarUtf8($bar_rest->nombre) ;?></a><?php
                    }?>
                
                </h6>
        </div>

    </div>                                         


    <?php require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/estrellas1negocioderecha.inc';?>                                    
    
    <div class="descrip_negocio">
        <p><?php echo pasarUtf8($bar_rest->descripcion); ?></p>
        <p><?php echo pasarUtf8($bar_rest->direccion); ?></p>
        <p><?php echo pasarUtf8("Tel: " . $bar_rest->telefono); ?></p> 
    </div>

    <div class="row tuopinion" >
        <div class='col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6'>

            <div class='col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-12'>
                <i class="fas fa-comments"></i>
            </div>

            <div class='col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-12 comentar'>
                <a id="<?php echo $ref_negocio; ?>" href="#ventana1" onclick="nombreNegocio(this)" data-toggle="modal" > Comentar!</a>
            </div>
        </div>
        <?php  require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/tuopinion.php';?>


        <div class='col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6'>
            <div class='col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-12'>
                <i class="fa-solid fa-list-check"></i>
            </div>

            <div class='col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-12 ref_negocio'>
                <a id="<?php echo $ref_negocio; ?>" href="#ventana2" onclick="nombreNegocio(this), refNegocioOpiniones(this)" data-toggle="modal" > Opiniones:</a>
            </div>

        </div>
        <?php 
        // $_SESSION['ref_negocioPopUp']= $ref_negocio;
        /* $ip_add = $_SERVER['REMOTE_ADDR'];
        var_dump($ip_add);*/

        require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/Pop-Up_todasopiniones.inc';?>

    </div>                                    

</div>


<style>
i{color: #006293;}
    @media only screen and (min-width: 240px) and (max-width: 400px) {
    .descrip_negocio{margin-top: 0.2em;}
    .descrip_negocio p{font-size: 0.7em; font-weight: 600; color: #212721;}
    #carrusel_restaurantes .carousel-item img{width: 100%; height: 115px; border-radius: 0.15em;}}
    @media only screen and (min-width: 400px) and (max-width: 4000px) {
    .descrip_negocio p{font-size: 0.65em; font-weight: 600; color: #212721;}
    #carrusel_restaurantes .carousel-item img{width: 100%; height: 125px; border-radius: 0.15em;}
}

.tarjeta_barrestaurante_localidad .articulo{margin-top: 0em;}
.redes_sociales a{font-size: 0.8em;}
.row .articulo{padding-left: 0em;}

.info_negocio h6 a{font-size: 0.95em; color: #006293;}

#nohay{color:red; font: 1em sans-serif; text-align: center; margin-top: 1em;}
.facebook{padding-left: 0em;}
.articulo {
    text-align: left; /*max-width:380px;*/ margin: auto;
    border: 1px solid #006293;
    border-radius: 0.2em;
    padding: 0.5em;
    background-color: #f6f6f6;
    box-shadow: inset 0px 0px 20px 4px #c1c1c1; margin-top:0.3em; margin-bottom:0.3em;

  
     /* background-image: url("	https://cdn.pixabay.com/photo/2018/10/27/06/10/wood-3775893__340.jpg");
      background-size: cover;*/
}

.info_negocio{padding-right: 0em;}
.descrip_negocio{margin-top: 0.5em;}
.ref_negocio{margin-top: -0.5em; font-size:0.7em;}
.comentar{margin-top: -0.5em; font-size:0.7em;}

</style>
