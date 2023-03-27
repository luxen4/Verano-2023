<!-- Todos los negocios de una Localidad al 100%-->
<?php 
use miId\fuente\Repositorio\OpinionesRepositorio;
ob_start(); 
include_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/utilidades/utilidades.inc'; ?>

<?php $arrayRestaurantesPintar=array(); ?>

<form action="" method="POST">   
<?php $negocios_Localidad =$_SESSION['negocios_Localidad'];  $referencia_negocio="";

if(empty($negocios_Localidad)){ ?><script>window.location.href="index.php?ctl=inicio/";</script><?php }?>

    <div class="container" style="max-width: 1200px;"><?php

        if(!empty($negocios_Localidad)){
            $ref_Localidad=$negocios_Localidad[0]->ref_Localidad; ?>

            <div class="row">
                <?php require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/tituloPagina.inc';?>
            </div>

            <?php require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/general/negociosLocalidad.inc';?>         

            
  
                    <?php 
        }else{?>
            <p id="nohay"><?php echo ("¡En espera de Sponsors!");?></p><?php 
        }?>

    </div>
 
</form>

<?php $contenido = ob_get_clean() ?>
<?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/basefantasma.php';?>



<style>
.row>*{padding: 0em;}
h5{ color: #006293; text-decoration: underline; text-align: center; margin: 0.5em;}  
h6{color: #006293; margin-bottom: 0em;}
.container{max-width: 5000px;}


@media only screen and (max-width: 580px) {
    .row .articulo{padding-left: 0em; padding-top: 0.8em; max-width: 400px; margin:0.7em auto; } 
}
@media only screen and (min-width: 581px) and (max-width: 2500px) {
.row .articulo{padding-left: 0em; padding-top: 0.8em; max-width: 400px;margin-right: 0.1em;}  
}


p{font-size: 1em; margin-top: -0.5em; margin-bottom: 0.3em;}

#carrusel_restaurantes .carousel-item img{width: 100%;}

#nohay{color:red; font: 1em sans-serif; text-align: center; margin-top: 1em;}
@media only screen and (min-width: 400px) and (max-width: 1500px) {
    .descrip_negocio p{font-size: 0.65em; font-weight: 600; color: #212721;}
}
@media only screen and (min-width: 771px) and (max-width: 1000px) {
    #carrusel_restaurantes .carousel-item img{ height: 152px;}
}
@media only screen and (min-width: 561px) and (max-width: 770px) {
    #carrusel_restaurantes .carousel-item img{ height: 121px;}
    
}

@media only screen and (min-width: 494px) and (max-width: 614px) {
    #carrusel_restaurantes .carousel-item img{ height: 106px;}
}

@media only screen and (min-width: 450px) and (max-width: 776px) {
    #carrusel_restaurantes .carousel-item img{ height: 142px;}
}

@media only screen and (min-width: 400px) and (max-width: 450px) {
    #carrusel_restaurantes .carousel-item img{ height: 112px;}
}

@media only screen and (min-width: 1000px) and (max-width: 1500px) {
    #carrusel_restaurantes .carousel-item img{ height: 171px;}
    .redes{/*margin-top: 2em;*/}
}
@media only screen and (min-width: 1500px) {
    #carrusel_restaurantes .carousel-item img{ height: 150px;}
    p{font-size: 1em; color: #212721; margin-top: 1em;}
    .redes{/*margin-left: 6em; margin-top: 2em;*/}
}
@media only screen and (max-width: 400px) {
    #carrusel_restaurantes .carousel-item img{ height: 115px;}
}
.articulo {
    text-align: left;
    border: 1px solid #006293;
    border-radius: 0.2em;
    padding: 0.5em;
    background-color: #f6f6f6;
    box-shadow: inset 0px 0px 20px 4px #c1c1c1; margin-top:0.3em; margin-bottom:0.3em;

  
     /* background-image: url("	https://cdn.pixabay.com/photo/2018/10/27/06/10/wood-3775893__340.jpg");
      background-size: cover;*/

}


@media only screen and (min-width: 452px) and (max-width: 3000px) {
    .boton_cupon{margin: 3.5em -3em;}
}



</style>




<style>
.fa-solid, .fas {
    /*font-family: "Font Awesome 6 Free";
    font-weight: 400; font-size: 0.9em; */
}

.redes_sociales a{/*font-size: 0.8em;*/}
.info_negocio{/* margin-top: 0.5em;*/}
.info_negocio a{/*font-size: 0.7em;*/}

.articulo:hover{/*box-shadow: 1px 1px 10px 1px #888888; border-radius:  0.2em;*/}
.facebook{/*padding-left: 0em;*/}
.info_negocio h6 a{/*font-size: 0.95em; color: #006293;*/}
.carousel-item {/*transition: none;*/}
i{/*color: #006293;*/}
.descrip_negocio{/*margin-top: 0.5em;*/}
#recomendamos{/*margin-bottom: 0.5em;*/}
.tarjeta_barrestaurante_localidad{/*margin-top: 0.5em;*/}
p{/*font-size: 1em; color: #212721; margin-top: 1em;*/}
</style>





















   
