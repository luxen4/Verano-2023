<?php ob_start();
//var_dump($destinos);die();
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Todos los Destinos</title>
    <link rel="stylesheet" type="text/css" href="web/css/bootstrap.min.css">
    <link rel="stylesheet" type="text/css" href="web/css/bootstrap-grid.min.css">
    <link rel="stylesheet" type="text/css" href="web/css/bootstrap-reboot.min.css">

</head>

<body>
    <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades2.inc'; ?>
<div class="toda_programacion">
    <div class="container-fluid ">

            <div class="row destinos_filtrados">
                <div class="col-xl-12 text-center">
                    <h4 >Agenda Verano 2022</h4><br>
                </div>
            </div> <?php

            if (empty($destinos)) {
                echo "No tiene Destinos programados para su Agencia de Viajes";
            } else {

                $i = 0; ?>

                <form action="" method="post">
                    <div class="table-responsive">
                        <table class="table table-striped table-bordered table-hover">
                            <thead>
                                <th>Destino</th><th>Agencia</th><th>Precio</th><th>Restaurantes</th>
                                <?php
                                if (!empty($_SESSION['perfil'])) {
                                    if ($_SESSION['perfil']['roll']=='cliente') { ?>
                                <th>Info Restaurantes</th><?php }
                                } ?>

                            </thead>

                            <tbody><?php 
                                foreach ($destinos as $destino) { //var_dump($destino)?>
                                              <?php // Solo vea sus Destinos después de filtrar, si escoges una localidad, salen los de otras Agencias
                                              if (!empty($_SESSION['perfil'])) {

                                                  if($_SESSION['perfil']['roll']=='agenciaviajes'){
                                                      if ($_SESSION['perfil']['name']==$destino->nombre_Agencia) { ?>
                                                        <tr>
                                                          <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/programaciontabla/destinofechaprecio.inc'; ?>
                                                        </tr> <?php
                                                      }

                                                  }elseif($_SESSION['perfil']['roll']=='cliente'){ ?>
                                                        <tr>
                                                          <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/programaciontabla/destinofechaprecio.inc'; ?>
                                                          <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/programaciontabla/destinoinforestaurantes.inc'; ?>
                                                        </tr><?php
                                                  }

                                              }else{ ?>
                                                        <tr>
                                                          <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/programaciontabla/destinofechaprecio.inc'; ?>
                                                          <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/programaciontabla/destinoinforestaurantes.inc'; ?>
                                                        </tr><?php 
                                              } 
                                }?>

                            </tbody>

                        </table>
                    </div>
                </form>

    <?php }; ?>

</div>
</div>
    <script type="text/javascript" src="js/jquery-3-5.1.min.js"></script>
    <script type="text/javascript" src="js/boostrap.min.js"></script>
    <script type="text/javascript" src="js/boostrap-bundle.min.js"></script>

</body>

</html>
<?php unset($_SESSION['destinosfiltrados']);?>

<?php $contenido = ob_get_clean() ?>

<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/basefantasma.php'; ?>


<style>
    /*General*/ 
.destinos_filtrados{margin-top: 1em;}
.destinos_filtrados h4{text-align: center; padding: 0em; margin-bottom: -1rem;}

#nohay{color:red; font: 4em sans-serif; text-align: center;}

#ningun_destino h3{color: red; margin: 1em; text-decoration: underline;}


/*Table*/
th, td{border:1px solid #006293; text-align: center;}
tbody tr,thead tr{background-color:  #F6f6f6;}
thead tr{color:#006293}
tbody tr:hover{background-color:#E7E4D0;}
thead tr:hover{background-color: #AFB2B9; color:#212721;}

  
.table>:not(caption)>*>* {padding: 0.2rem 0.2rem;  font-size: 0.7em;}


h4{ /*text-decoration: underline; margin-top: 1em;*/ /*margin-bottom: -0.6em;*/
    color: #006293;
    border-bottom: 1px solid #006293;
    text-align: left;}

td{vertical-align: middle; }
 /*MEDIAQUERYS*/
  
 @media only screen and (min-width: 1200px) and (max-width: 4000px) {
  th, td{font-size: 0.8em; }
}

@media only screen and (min-width: 1001px) and (max-width: 1200px) {
 /* th, td{font-size: 1.2em;} */
  th, td{font-size: 0.7em;}
}

@media only screen and (min-width: 770px) and (max-width: 1000px) { 
  th, td{font-size: 0.7em;}
}


@media only screen and (min-width: 770px) and (max-width: 989px) { 
  /* th, td{font-size: 0.9em;} */
  th, td{font-size: 0.5em;} 
}

@media only screen and (min-width: 650px) and (max-width: 769px) { 
  /* th, td{font-size: 0.6em;} */
  th, td{font-size: 0.4em;} 
  .table>:not(caption)>*>* {padding: 0rem 0rem;}
  td input{transform: scale(0.6);}
}

@media only screen and (min-width: 430px) and (max-width: 650px) {
  th, td{ font-size: 0.5em;} 
  .table>:not(caption)>*>* {padding: 0rem 0rem;  /*font-size: 0.31em;*/   line-height: 20px;}
 }


@media only screen and (min-width: 360px) and (max-width: 430px) {
  th, td{ font-size: 1em;} 
  .table>:not(caption)>*>* {padding: 0.2rem 0.2rem;  /*font-size: 0.24em;*/}
 }

@media only screen and (min-width: 513px) and (max-width: 809px) {
  .letra{font-size: 1em;}
  td input{transform: scale(0.6);}
}

@media only screen and (min-width: 511px) and (max-width: 512px) {
  #tus_destinos, .letra{font-size: 1em; } 
  
}

/* Código para Móvil */
@media only screen and (min-width: 310px) and (max-width: 510px){
  .letra{font-size: 1em; margin-top: 1em;} 
  .btn-danger{transform: scale(0.5);}
  td input{transform: scale(0.6);}
}


@media only screen and (min-width: 100px) and (max-width: 309px) {
  .letra{font-size: 0.5em; margin-top: 1em;} 
  
 
}
.toda_programacion
 .container-fluid, .toda_programacion .container{padding-left: 0.5em; padding-right: 0.5em;}
</style>