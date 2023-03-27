<?php 
use miId\fuente\Repositorio\ComerRepositorio;

$ref_Localidad=$bar_rest->ref_Localidad;
require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/ComerRepositorio.inc';
$nombreLocalidad = (new ComerRepositorio())->nombreLocalidad($ref_Localidad);

$nombreLocalidad=$nombreLocalidad[0]->nombre_Localidad;?>


<!--https://www.youtube.com/watch?v=MQFHfFyssH4 Buenísimo-->
<!--<a href="#ventana1" class="btn btn-primary btn-lg" data-toggle="modal">Boton #1</a>-->

<div class="modal fade" id="ventana1" style="margin: 0 auto;">
    <div class="modal-dialog">
        <div class="modal-content" style="max-width: 380px;" >

        <!-- Header de la ventana-->
            <div class="modal-header">   
                <h6 class="modal-title">Opinión de un establecimiento: </h6>  
                <button type="button" class="close" data-dismiss="modal" aria-hiddden="true">&times;</button>
            </div>       
            
        <!-- Contenido de la ventana-->

        <div class="row">
                <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                    <h6 id="nombre_negocio_tuopinion" style="margin-left: 0.5em;"></h6>
                </div>
        </div>  


<div class="row">
    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
        <h6 class="modal-title">Valoración</h6>
    </div>
</div>
 

<div class="row">
    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
        <i id="pesimo-1" class="fa-regular fa-face-angry fa-1x" <?php if(!empty($_SESSION['perfil']['username'])){?> onclick="satisfacion(this)" <?php }?>></i>
        <i id="malo-2" class="fa-regular fa-face-frown fa-1x" <?php if(!empty($_SESSION['perfil']['username'])){?> onclick="satisfacion(this)" <?php }?>></i>
        <i id="normal-3" class="fa-regular fa-face-meh fa-1x" <?php if(!empty($_SESSION['perfil']['username'])){?> onclick="satisfacion(this)" <?php }?>></i>  
        <i id="muybueno-4" class="fa-regular fa-face-grin-wide fa-1x" <?php if(!empty($_SESSION['perfil']['username'])){?> onclick="satisfacion(this)" <?php }?>></i>
        <i id="excelente-5" class="fa-regular fa-face-grin-hearts fa-1x" <?php if(!empty($_SESSION['perfil']['username'])){?> onclick="satisfacion(this)" <?php }?>></i><h2 id="gh"></h2>
    </div>
</div>


            <div class="modal-body">
                <form method="post" action="/Verano-2022/app/plantillas/bloques/opinionnegocio.php">
                   <!-- <label>Nombre:<input type="text" name="nombre" size="60" /></label><br />
                    <label>Dirección:<input type="text" name="direccion" size="60" /></label><br />
                    <label>E-mail:<input type="text" name="email" size="60" /></label><br />-->

                   <!--<label>Username:</label>-->
                        <input id="refnegociocaritas" type="checkbox" name=datos[ref_negocio]  value="<?php echo $ref_negocio;?>"/><?php // echo $ref_negocio;?> 
                        <input id="refnegocio2" type="checkbox" name=datos[ref_negocio2]  value="<?php echo $ref_negocio;?>"/>er
                

                            <?php 

                            if(!empty($_SESSION['perfil']['username'])){?>
                            <input type="text" name=datos[username] size="30" hidden value="<?php echo ($_SESSION['perfil']['username']);?>"/><?php
                            }else{?>

                            <div class="row">
                                <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                    <p style="color:red; font-size:1.2em;">Haga login para comentar, gracias!</p>
                                </div>
                            </div>

                            <?php } ?>


                        <div class="row">
                            <div class="col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-8">
                                <label style=" font-family: 'Satisfy', cursive; color: #006293;">Cuéntenos:<br/>
                                <textarea name=datos[cuestion] rows="5" cols="33" placeholder="..."></textarea></label>
                            </div>

                            <div class="col-xl-2 text-center col-lg-2 col-md-2 col-sm-2 col-2">
                            </div>
                        </div>


                        <div class="row">
                            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                <h6 class="modal-title">Gracias por su opinión</h6><br>
                            </div>
                        </div>


                        <div class="row">
                                <div class="col-xl-2 text-center col-lg-2 col-md-2 col-sm-2 col-2"></div>

                                <div class="col-xl-4 text-center col-lg-4 col-md-4 col-sm-4 col-4">
                                    <input class="btn btn-success" type="submit" name="opinion_negocio" value="Enviar" <?php
                                    
                                    if(empty($_SESSION['perfil']['username'])){?>
                                        disabled <?php
                                    }else{?>
                                        enabled <?php
                                    } ?> />
                                </div>

                                <div class="col-xl-4 text-center col-lg-4 col-md-4 col-sm-4 col-4">
                                    <input class="btn btn-secondary" type="reset" value="Borrar" />
                                </div>

                                <div class="col-xl-2 text-center col-lg-2 col-md-2 col-sm-2 col-2"></div>
                        </div>

                </form>
            </div>

        <!-- Footer de la ventana-->
           <!--  <div class="modal-footer">
               <button type="button" class="btn btn-default" data-dismiss="modal">Cerrar</button>-->
               <!-- <button type="button" class="btn btn-primary" >Guardar cambios</button> 
            </div>-->

            
        </div>
    </div>
</div>

<!--
<p class="clasificacion">
    <input id="radio1" type="radio" name="estrellas" value="5">
    <label for="radio1">★</label>
    <input id="radio2" type="radio" name="estrellas" value="4">
    <label for="radio2">★</label>
    <input id="radio3" type="radio" name="estrellas" value="3">
    <label for="radio3">★</label>
    <input id="radio4" type="radio" name="estrellas" value="2">
    <label for="radio4">★</label>
    <input id="radio5" type="radio" name="estrellas" value="1">
    <label for="radio5">★</label>
</p>
-->


<style>
    #nombre_negocio_tuopinion{margin: 1em; color: #006293;}
    .fa-regular:hover{color:green;}

</style>