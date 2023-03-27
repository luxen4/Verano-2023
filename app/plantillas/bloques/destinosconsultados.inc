<?php $destinos = $_SESSION['destinos']; ?>

<style>
    h4{margin: 0.5em;}
    .agencia{margin-top: 0em;}
    .fecha{color:green; margin-top: 0px!important}
</style>

<style>
.previous, .next{color:white; background-color:#006293;}
.button_aparecernegocios{padding-top: 0.3em; text-align:center; border-top:1px solid #006293;}
.deseleciona{font-size: 0.8em; border: 1px solid #006293; border-radius:1em; padding-left:1em; color:#006293;
                        padding-right:1em; width: 120px;}

    .botones_mostrarFotosLocalidad input{height: 16px; margin: 0.5em; border-radius: 1em;}
/*#ab{ background-image: url("web/imagenes/localidades/imgLaredo1.jpg");}*/
.fa-solid{
    margin: 0.25em;
}

</style>



<style>
/* Para ambos archivos */

h5, h6, i{text-align: center; color: #006293; border-bottom: none; margin: 0em;}
h5{border-bottom: 1px solid #006293; margin-top: 1em; padding-bottom: 0.1em;}
h6{text-decoration: underline; margin-bottom: 0em;}
p{font-size: 1em; margin-top: -0.5em; margin-bottom: 0.3em;}

.tarjeta_barrestaurante_localidad{margin-top: 0.5em; padding:0em;}
#recomendamos{/*margin-bottom: 0.5em;*/}

#nohay{color:red; font: 1em sans-serif; text-align: center; margin-top: 1em;}

.fa-solid, .fas {
    /*font-family: "Font Awesome 6 Free";
    font-weight: 400; font-size: 0.9em; */
}




.articuloconboton {
    text-align: left;
    border: 1px solid #006293; border-radius: 3px; margin: auto; padding: 0.2em;
    box-shadow: inset 0px 0px 20px 4px #c1c1c1;
}

.tarjeta_ancha .destino{margin-top: 0.5em;}
.tar .w-100{border-radius: 0.2em;}
#redes_sociales a{margin-right: 0.5em;}

/* Cards */
.comunidad,.destino,.fecha,.info_plazas,.precio,.agencia {text-align: center;}
.articulo, .publicidad{
  background-color: #F8F9FA; border-radius: 0.4em; border: 2px solid #c1c1c1; padding: 0.1em 0.3em 0.3em; 
  /*box-shadow: 5px 5px 5px #888888;*/ 
  box-shadow: inset 0px 0px 20px 4px #c1c1c1;}

  .articulo:hover{ box-shadow: 1px 1px 10px 1px #888888; border-radius:  0.2em;}


.descripcion{padding: 1em;}
.descrip_negocio{margin-top: 0.5em;}

.comunidad{color: #006293; font-weight: bold; margin-bottom: 0.5em; font-size: 0.8em;}
.destino{color: #212721; text-decoration: underline; font-weight: bold; margin-top: 0em; margin-bottom: 0em;}

.destino a {/*font-size: 0.5em;*/ text-decoration: underline; }
.destino p{padding: 0em;}

.info_plazas{font-size: 0.7em; margin-top: -1.4em;}
.precio{margin-top: -1em; margin-bottom: -0.1em; } 
.textoprecio{font-size: 1.3em; float: right; text-align: right; }
.apuntar, .apuntar2{ border-radius:0.3em;}
.apuntar{ border: 1px solid #006293;}
.apuntar2{ color: red; border: 1px solid red;}
#boton_apuntar{ padding-top: -2em; border-radius: 0.5em; margin: auto;}

@media only screen and (min-width: 1400px) and (max-width: 3000px) {
.precio{font-size: 1.5em; margin-top: -0.6em; margin-bottom: 0.05em;}
}

@media only screen and (min-width: 970px) and (max-width: 1400px) {
.comunidad{ font-size: 0.8em; margin: auto;}
.destino a {/*font-size: 0.49em;*/ text-decoration: underline;}
.fecha{ font-size: 0.6em;}
.info_plazas{font-size: 0.7em; text-align: center; margin-top: -1.4em;} 
}

@media only screen and (min-width: 970px) and (max-width: 1400px) {
.comunidad{ font-size: 0.8em; margin: auto;}
.destino a {/*font-size: 0.45em;*/ text-decoration: underline;}
.fecha{ font-size: 0.6em;}
.info_plazas{font-size: 0.7em; text-align: center; margin-top: -1.4em;} 

.container{max-width: 2000px;}
}

@media only screen and (min-width: 740px) and (max-width: 999px) {

header img{padding: 0px; height: 550px; }
.fecha, .agencia{font-size: 0.55em;}
.a{width: 375px; height:140px; margin-top: 7.5em;}
.plaza{font-size: 1em;} 
h2{font-size: 1.3em;}
header img{height:200px;}
.fotoplantabus{margin-top: 6em; }

.fotodestino{height: 120px;}

.info_plazas {font-size: 0.6em;}
}
/*--------------------------------*/

@media only screen and (min-width: 600px) and (max-width: 790px) {
    .fotodestino{border-radius: 0.3em; z-index: -1; width: 100%; height: 120px; }
}
 </style>


<style>

@media only screen and (max-width: 420px){
    .modal-content{ max-width: 380px; margin:auto;}
}

@media only screen and (min-width: 421px) and (max-width: 4000px) {
.modal-content{max-width: 700px; margin:auto;}
}
</style>


<!--<link rel="stylesheet" type="text/css" href="web/css/styles.css">-->

<?php include_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/utilidades/scripts/js_cardDestinoHome.inc'; ?>    



<div class="container"> 
    <div class="row"><?php 
        $arrayRestaurantesPintar=array();

        foreach ($destinos as $destino) { ?>

        <div class="col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-12 destinos_cards"><?php
            include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/info_busDestino.inc';     // Info del bus que va a un Destino
            include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/info_tipoPublicidad.inc'; // Este archivo es para los "Donde Comer desplegable"

           // var_dump($vistaPublicidadGeneral);

            if ($vistaPublicidadGeneral=="derecha") {?><?php

                if (!empty($lugaresDondeComer)) {?> 
                    <div class="row">
                        <?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/publicidad/publicidadderecha.inc'; ?>
                    </div><?php
                } else {
                    include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/sinhuecos.inc'; ?>
                    
                    <?php
                    if (empty($tipoPublicidadHome)) {?>

                        <div><?php
                                /*  if($tipoPublicidadHome[0]->modo_Apariencia==1){
                                    include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/negociovacio1.inc';
                                } */ ?>
                        </div>

                        <div >
                            <?php
                                /* if($tipoPublicidadHome[0]->modo_Apariencia==2){
                                        include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/negociovacio3.inc';
                                } */?>
                        </div><?php
                    } else {} ;
                }
            } elseif ($vistaPublicidadGeneral=="abajo") {
                        if (empty($lugaresDondeComer)) {
                            //echo "Lugares donde Comer Vacio";
                        } else {}
                    
                        include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/sinhuecos.inc'; 
            } ?>                         
                            
        </div><?php
        }?>

    </div>
</div>

<style>



/* Cards */
.destinos_cards{padding-top:1em}
.modelo_publicitario1 h6{text-align: center; margin-bottom: 0.5em;}

.comunidad,.destino,.fecha,.info_plazas,.precio,.agencia {text-align: center;}
.fecha{margin-top: 0.5em;}



.articulo, .publicidad{
 /* background-color: #F8F9FA; */
  border-radius: 0.4em; border: 2px solid #c1c1c1; 
 /* padding: 0.5em 0.3em 0.3em; */
  /*box-shadow: 5px 5px 5px #888888;*/ 
  box-shadow: inset 0px 0px 20px 4px #c1c1c1;}


.comunidad{color: #006293; font-weight: bold; margin-bottom: 0.5em; font-size: 0.8em;}

.destino{color: #212721; font-weight: bold;}  
.destino a {/*font-size: 0.36em;*/ text-decoration: underline; }


.info_plazas{font-size: 0.7em; margin-top: -1.4em;}
.precio{margin-top: -1em; margin-bottom: -0.1em; } 
.textoprecio{font-size: 1.3em; float: right; text-align: right; }
.apuntar, .apuntar2{ border-radius:0.3em;}
.apuntar{ border: 1px solid #006293;}
.apuntar2{ color: red; border: 1px solid red;}
#boton_apuntar{ padding-top: -2em; border-radius: 0.5em; margin: auto;}


@media only screen and (min-width: 1400px) and (max-width: 3000px) {
.precio{font-size: 1.5em; margin-top: -0.6em; margin-bottom: 0.05em;}
}
 

@media only screen and (min-width: 970px) and (max-width: 1400px) {
.comunidad{ font-size: 0.8em; margin: auto;}
.destino a {font-size: 0.3em; text-decoration: underline;}
.fecha{ font-size: 0.6em;}
.info_plazas{font-size: 0.7em; text-align: center; margin-top: -1.4em;} 
}

@media only screen and (min-width: 970px) and (max-width: 1400px) {
.comunidad{ font-size: 0.8em; margin: auto;}
.destino a {/*font-size: 0.45em; */text-decoration: underline;}
.fecha{ font-size: 0.6em;}
.info_plazas{font-size: 0.7em; text-align: center; margin-top: -1.4em;} 
}


.fotodestino{border-radius: 0.3em; z-index: -1; width: 100%; height: 120px; }
@media only screen and (min-width: 740px) and (max-width: 2000px) {
.destino a{font-size: 1em;}
header img{padding: 0px; height: 550px; }
.a{width: 375px; height:140px; margin-top: 7.5em;}
.plaza{font-size: 1em;} 
h2{font-size: 1.3em;}
header img{height:402px;}
.fotoplantabus{margin-top: 6em; }
.fecha, .agencia{font-size: 1.5em;}
.info_plazas {font-size: 0.6em;}
}

@media only screen and (min-width: 740px) and (max-width: 1000px) {
    .fotodestino{height: 140px;}
}

@media only screen and (min-width: 1000px) and (max-width: 1200px) {
    .fotodestino{height: 160px;}
}

@media only screen and (min-width: 1201px) and (max-width: 2900px) {
    .fotodestino{height: 141px;}
}
/*--------------------------------*/

@media (min-width: 576px){}
.container, .container-sm {/*max-width: 800px;*/}

.row>*{}
 </style>












