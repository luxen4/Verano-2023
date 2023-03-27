<?php ob_start() ?>

    <link rel="stylesheet" type="text/css" href="web/css/stylesmostrar.css">

    <?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/utilidades/utilidades.inc'; ?>



    <div class="container">
        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12"><?php   
                
            if(empty($todosMenusBASICOS)){?>
                <div class="row">
                    <div id="ningun_destino" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                        <h3>No tiene ningun Menú MOD, hasta ahora!</h3>
                    </div>
                </div> 
                <script>//alert("No tiene Destinos contratados")</script><?php
            }else{?>

                <div class="container">
                    <div class="row">
                        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                            <h5 onclick="esconder(), mostrarListaMenus('menus_basicos')">Todos sus Menús BASICOS</h5>
                        </div>
                    </div>
                </div>

        
                <form action="" method="post">
                    <div id="menus_basicos" class="table-responsive menus"> 
                        <table class="table table-striped table-bordered table-hover">
                            <thead>
                                <th>Referencia</th><th>Modelo</th><th>Habilitado</th><th>Seleccionar</th><th>info</th>
                            </thead>
                            <tbody><?php
                                foreach($todosMenusBASICOS as $menuMOD){?>
                                    <tr>
                                        <?php $veces=0;
                                        foreach($menuMOD as $atributo){ ?><?php //var_dump($atributo);?>
                                                <td><?= pasarUtf8($atributo);?></td><?php $veces++; 
                                                $veces++;

                                            if($veces==2){ $ref_MenuPersonal=pasarUtf8($atributo); }
                                        }?>

                                        <td>
                                            <label for="<?=$ref_MenuPersonal;?>">
                                            <input type="radio" id="<?=$ref_MenuPersonal;?>" name="datos[ref_MenuPersonal]" value="<?=$ref_MenuPersonal;?>"></label>
                                        </td>

                                       


                                    </tr><?php 
                                };?>
                            </tbody>
                        </table>
                    </div>


                <?php
            }?>



        </div>
    </div>








    <div class="container">
        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12"><?php   
                
            if(empty($todosMenusMOD)){?>
                <div class="row">
                    <div id="ningun_destino" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                        <h3>No tiene ningun Menú MOD, hasta ahora!</h3>
                    </div>
                </div> 
                <script>//alert("No tiene Destinos contratados")</script><?php
            }else{?>

                <div class="container">
                    <div class="row">
                        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                            <h5 onclick="esconder(), mostrarListaMenus('menus_mod')">Todos sus Menús MOD</h5>
                        </div>
                    </div>
                </div>


        
                
                    <div id="menus_mod" class="table-responsive menus"> 
                        <table class="table table-striped table-bordered table-hover">
                            <thead>
                                <th>Referencia</th><th>Modelo</th><th>Habilitado</th><th>Seleccionar</th><th>info</th>
                            </thead>
                            <tbody><?php
                                foreach($todosMenusMOD as $menuMOD){?>
                                    <tr>
                                        <?php $veces=0;
                                        foreach($menuMOD as $atributo){ ?><?php //var_dump($atributo);?>
                                                <td><?= pasarUtf8($atributo);?></td><?php $veces++; 
                                                $veces++;

                                            if($veces==2){ $ref_MenuPersonal=pasarUtf8($atributo); }
                                        }?>

                                        <td>
                                            <label for="<?=$ref_MenuPersonal;?>">
                                            <input type="radio" id="<?=$ref_MenuPersonal;?>" name="datos[ref_MenuPersonal]" value="<?=$ref_MenuPersonal;?>"></label>
                                        </td>

                                    </tr><?php 
                                };?>
                            </tbody>
                        </table>
                    </div>


                <?php
            }?>



        </div>
    </div>



    <div class="container">
        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12"><?php   
                
            if(empty($todosMenusPremium)){?>
                <div class="row">
                    <div id="ningun_destino" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                        <h3>No tiene ningun Menú Personalizado, hasta ahora!</h3>
                    </div>
                </div> 
                <script>//alert("No tiene Destinos contratados")</script><?php
            }else{?>

                <div class="container">
                    <div class="row">
                        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                            <h5 onclick="esconder(), mostrarListaMenus('menus_personalizados')">Todos sus Menús Personalizados </h5>
                        </div>
                    </div>
                </div>



               
                      <?php //require $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/menus/fotos_fondomenus.inc'; ?>

              

                            <div id="menus_personalizados" class="table-responsive menus"> 
                                <table class="table table-striped table-bordered table-hover">
                                    <thead>
                                        <th>Nombre Archivo</th><th>Habilitado</th><th>Seleccionar</th>
                                    </thead>
                                    <tbody><?php
                                        foreach($todosMenusPremium as $menuMOD){  ?>
                                            <tr>
                                                <?php $veces=0;
                                                foreach($menuMOD as $atributo){ ?>

                                                <?php if ($veces==0){ $ref_MenuPersonal=pasarUtf8($atributo);} ?><?php

                                                    if ($veces!=0) {?>
                                                        <td><?= pasarUtf8($atributo);?></td><?php $veces++;
                                                        
                                                    } else {
                                                        $veces++;
                                                    }
                                                }
                                                ?>
                                                
                                                
                                                
                                                
                                               

                                                <td><?php // var_dump($ref_MenuPersonal); ?>

                                                    <label for="<?=$ref_MenuPersonal;?>">
                                                    <input type="radio" id="<?=$ref_MenuPersonal;?>" name="datos[ref_MenuPersonal]" value="<?=$ref_MenuPersonal;?>"></label>
                                                </td>

                                                <td>
                                                  
                                                    <a id="<?php echo $ref_MenuPersonal;?>" href="#ventana18" onclick="imagen(this)" data-toggle="modal" > 
                                                            <i style="color:orange;" class="fa-solid fa-utensils"></i> &nbsp;Info Menú!  
                                                        <p class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12 menu_dia_precio"><?php 
                                                        //echo $hayMenuEnNegocio[0]->precio_menu . " Euros"; ?></p>
                                                    </a>
                                                </td>

                                                <?php $veces=0; ?>

                                                <div class="modal fade" id="ventana18">
                                                    <div class="modal-dialog">
                                                        <div class="modal-content">

                                                        <!-- Header de la ventana-->
                                                            <div class="modal-header">
                                                            
                                                                <button type="button" class="close" data-dismiss="modal" aria-hiddden="true">&times;</button>
                                                                <h4 class="modal-title">Encabezado de la ventana1</h4>
                                                            </div>    
                                                        <!-- Contenido de la ventana-->

                                                            <div class="modal-body">
                                                                    <p>Soy la ventana1</p>
                                                            </div>

                                                            <div id="aquui1">
Completar el menú
                                                            </div>
                                                            
                                                        <!-- Footer de la ventana-->
                                                            <div class="modal-footer">
                                                                <button type="button" class="btn btn-default" data-dismiss="modal">Cerrar</button>
                                                                <button type="button" class="btn btn-primary" >Guardar cambios</button>
                                                            </div>

                                                            
                                                        </div>
                                                    </div>
                                                </div>
                                            </tr><?php 
                                        };?>
                                    </tbody>
                                </table>
                            </div>

                            <div id="seguridad" class="row">
                                <div id="seg" class="col-xl-12 text-center">
                                    <label for="asegura">
                                    <input id="asegura" style="margin-right: 0.2em;" type="checkbox" name="asegura">Estoy seguro seleccionar este Menú.</label>
                                </div>
                            </div>

                                    
                            <div id="botones">
                                <input type="submit" name="selecciona_menu" value="Aceptar"> 
                                <input type="reset" value="Limpiar">
                            </div>

                        </form>

                

        
               <?php
            }?>



        </div>
    </div>



<?php $contenido = ob_get_clean() ?>

<?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/basefantasma.php';?>


<style>
    #menus_personalizados, #menus_mod, #menus_basicos{margin: 1em; display: none;}
    #aquui1 img{max-width: 400px;}
</style>



<script>

function esconder(){
    $(".menus").hide(); 
}
    
function mostrarListaMenus(e){

    var input = $( "input:radio" );


 for (var i = 0; i < input.length; i++) {
       input[i].checked=false;
}


   

    var selector="#"+e;
    $(selector).toggle();
}

</script>