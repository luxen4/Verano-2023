<?php 
use miId\fuente\Repositorio\ComerRepositorio;
ob_start() ?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>All Bars & Restaurants</title>
   <!-- <link rel="stylesheet" type="text/css" href="web/css/bootstrap.min.css">
    <link rel="stylesheet" type="text/css" href="web/css/bootstrap-grid.min.css">
    <link rel="stylesheet" type="text/css" href="web/css/bootstrap-reboot.min.css">
    <link rel="stylesheet" type="text/css" href="web/css/stylesmostrar.css">-->
</head>
<body>
<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/utilidades.inc'; ?>
    <div class="container">
        <div class="row">
            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                <h1>All Bars & Restaurants</h1>              
            </div>
        </div>
    </div>

    <div class="container">
            <?php   if(!empty($_TodosBarRestaurantes)){?>
                <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                        <form action="" method="post">

                            <div class="table-responsive"> 
                            <table class="table table-striped table-bordered table-hover">
                                    <thead>
                                        <th>Localidad</th><th>Posición</th><th>Datos</th>
                                    </thead>

                                    <tbody>
                                                    
                                    <?php

                                        $numTodosBarRestaurantes=count($_TodosBarRestaurantes);
                                        
                                        for($i=0; $i<$numTodosBarRestaurantes; $i++){
                                            
                                            $cod_Localidad=$_TodosBarRestaurantes[$i]->ref_Localidad;
                                           require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/ComerRepositorio.inc';
                                            $_vecesDestino=(new ComerRepositorio())->numeroVecesDestino($cod_Localidad);
                                            
                                            ?>
                                        <tr> 
                                                <td>
                                                    <?= pasarUtf8($_TodosBarRestaurantes[$i]->localidad);?><br>
                                                    <?= pasarUtf8($_TodosBarRestaurantes[$i]->nombre);?><br>
                                                    <?= pasarUtf8($_TodosBarRestaurantes[$i]->direccion);?><br>
                                                    <?= pasarUtf8($_TodosBarRestaurantes[$i]->telefono);?><br>
                                                </td>
                                              

                                            <!--<td><?= pasarUtf8($_TodosBarRestaurantes[$i]->f_inicio);?></td>
                                                <td><?= pasarUtf8($_TodosBarRestaurantes[$i]->f_final);?></td>-->



                                            <td>

                                            <?= 
                                                    $ref_negocio = $_TodosBarRestaurantes[$i]->ref_negocio;
                                                        //pasarUtf8($_TodosBarRestaurantes[$i]->cod_posiciones);?> 

                                                       <label for="negpos<?php echo $ref_negocio?>_1">
                                                        <input type="radio" id="negpos<?php echo $ref_negocio?>_1" name="posiciones[posicion_<?php echo $ref_negocio?>]" value="1" 

                                                        <?php if($_TodosBarRestaurantes[$i]->cod_posiciones==1){?>
                                                            checked 
                                                        <?php }  ?>>1</label>
                                                
                                                

                                                        <label for="negpos<?php echo $ref_negocio?>_2" style="margin-left:2em">
                                                        <input type="radio" id="negpos<?php echo $ref_negocio?>_2" name="posiciones[posicion_<?php echo $ref_negocio?>]"  value="2"

                                                        <?php if($_TodosBarRestaurantes[$i]->cod_posiciones==2){?>
                                                            checked 
                                                        <?php }  ?> > 2</label>

                                                        <label for="negpos<?php echo $ref_negocio?>_3" style="margin-left:2em">
                                                        <input type="radio" id="negpos<?php echo $ref_negocio?>_3" name="posiciones[posicion_<?php echo $ref_negocio?>]"  value="3"

                                                        <?php if($_TodosBarRestaurantes[$i]->cod_posiciones==3){?>
                                                            checked 
                                                        <?php }  ?> > 3</label>


                                                        <label for="negpos<?php echo $ref_negocio?>_4" style="margin-left:2em">
                                                        <input type="radio" id="negpos<?php echo $ref_negocio?>_4" name="posiciones[posicion_<?php echo $ref_negocio?>]"  value="4"

                                                        <?php if($_TodosBarRestaurantes[$i]->cod_posiciones==4){?>
                                                            checked 
                                                        <?php }  ?> > 4</label>
                                            
                                            
                                          <br><br>
                                                   Habilitar: <br>
                                                        
                                                        <label for="habilitasi_<?php echo $ref_negocio?>">
                                                        <input type="radio" id="habilitasi_<?php echo $ref_negocio?>" name="datos[habilita_<?php echo $ref_negocio?>]" value="SI" 

                                                        <?php if($_TodosBarRestaurantes[$i]->habilitado=="SI"){?>
                                                            checked 
                                                        <?php }  ?>> Si</label>

                                                        
                                                
                                                        <label for="habilitano_<?php echo $ref_negocio?>" style="margin-left:2em">
                                                        <input type="radio" id="habilitano_<?php echo $ref_negocio?>" name="datos[habilita_<?php echo $ref_negocio?>]"  value="NO"

                                                        <?php if($_TodosBarRestaurantes[$i]->habilitado=="NO"){?>
                                                            checked 
                                                        <?php }  ?> > No</label>

                                                </td>

                                                <td>
                                                   <?php echo "Nº Destinos: " . $_vecesDestino[0]->numveces;?> <br>
                                                
                                                    <?php echo "Cuantia: " . $_TodosBarRestaurantes[$i]->cuantia_dia . "€/Destino";?><br>
                                                
                                                    <?php echo "Total: " . $_vecesDestino[0]->numveces * 
                                                    $_TodosBarRestaurantes[$i]->cuantia_dia . "€";?>
                                                </td>

                                                
                                        </tr> 
                                        <?php };?>
                                        
                                    </tbody>
                                </table>
                            </div>
                            
                            <!--Radios-->
                            <div class="row">
                                <label for="estaseguro">
                                <input id="estaseguro" type="checkbox" name="estaseguro"> I'm sure to modify</label>
                            </div>
                            
                            <div id="botones">
                                <input type="submit" name="modificar" value="Modify">
                                <!--<input type="reset" value="Limpiar">-->
                            </div>

                        </form>
                    </div>

            <?php   }else{?><p id="nohay"><?php echo ("¡No hay ningun Bar/Restaurante disponible en este momento!");?></p><?php   }?>
    </div>

</div>

<!--<script type="text/javascript" src="js/jquery-3-5.1.min.js"></script>
    <script type="text/javascript" src="js/boostrap.min.js"></script>
    <script type="text/javascript" src="js/boostrap-bundle.min.js"></script>-->
</body>
</html>

<?php $contenido = ob_get_clean() ?>

<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA .  BASE;?>



<style>
    /*General*/
label{/*font-weight: bolder; font-size: 1em;*/ color: #006293;} 
li{ list-style:none;} 

/* Perfil Agencias y Cliente */
.infoperfil{/*font-size: 1.5em;*/ color: #212721; /*font-weight: bolder;*/ text-decoration: underline;}
.s{text-decoration: none; color: #006293;}
.infoperfil{
  color:#212721;
  /*font-weight: bolder;*/
  text-decoration: underline;}
#nohay{color:red; font: 4em sans-serif; text-align: center;}

#ningun_destino h3{color: red; margin: 1em; text-decoration: underline;}


/*Table*/
th, td{border:1px solid #006293; text-align: center;}
tbody tr,thead tr{background-color:  #F6f6f6;}
thead tr{color:#006293}
tbody tr:hover{background-color:#E7E4D0;}
thead tr:hover{background-color: #AFB2B9; color:#212721;}

  
input:focus
{ -webkit-transition: 0.8s;
transition: 0.8s;
background-color: #eee;
border: 2px solid #555;
}


h1{margin-bottom: 0.5em; text-decoration: underline; margin-top: 0.5em;}
h5{color:#006293; border-bottom: 1px solid #006293; text-align: left;}


 /*MEDIAQUERYS*/
  </style>