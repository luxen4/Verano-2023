<?php ob_start(); ?>
<?php use miId\fuente\Repositorio\AgenciaViajesRepositorio; ?>

<?php //include $_SERVER['DOCUMENT_ROOT'] . AGENCIAVIAJESREPOSITORIO; ?>
<?php
$ref_AgenciaViajes=$_SESSION['perfil']['ref_AgenciaViajes'];
$username_contrasena = (new AgenciaViajesRepositorio())-> usernameContrasena($ref_AgenciaViajes);

?>
<div class="container-fluid" style="margin: 1em;"> 
    <div class="row" style="">
        <div id="wrap" class="col-xl-4 text-center col-lg-12 col-md-12 col-sm-12 col-12">
            <form action="" method="post">

                
                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                        <h5>Modificar "Username/Password"</h5>
                    </div>
                

                <div class="row">
                    <div>
                        <h6>Username actual: <?= $username_contrasena[0]->username; ?></h6> 
                    </div>

                    
                </div>


                


                
                
                    <div class="row">
                        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                            <label for="usuario"> Nuevo Username <br>
                            <input type="text" name="datos[username]" id="usuario" value="<?php echo $datos['usuario'] ?? '' ?>" required size="10"><br>
                            <?php // echo isset($errores['usuario'])?'<span class="error">'.$errores['usuario'].'</span>':'OK' ?></label><br>
                        </div>
                    </div>




                    <div>
                        <h6>Contraseña actual: ***</h6>
                    </div>

                    <div class="row">
                        <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">
                            <label for="pwd">Nueva Contraseña: <br>
                            <input type="password" name="datos[contrasenanueva]" id="pwd" value="<?php echo $datos['pwd'] ?? '' ?>" required size="7"><br>
                            <?php //isset($errores['pwd'])?'<span class="error">'.$errores['pwd'].'</span>':'OK' ?></label>
                        </div>

                        <div class="col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6">
                            <label for="">Repita Contraseña</label><br>
                            <input type="text" name="datos[contrasenarepetida]" size="8" required>
                                <?php if(isset($datos)){if(isset($errores['contrasenarepetida'])){?><span class="error"><?="<br>". $errores['contrasenarepetida'].'</span>'?><?php 
                                                        }else{?><span class="ok">OK</span><?php }};?>
                        </div>
                    </div>

                    <div id="asegura" class="row">
                        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                            <label for="estaseguroo"class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12 ">
                            <input id="estaseguroo" type="checkbox" name="asegura"> Estoy seguro de hacer los cambios</label>
                        </div>
                    </div>

                    <div id="controles" class="row">
                        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                            <input type="submit" name="guardarcambios" value="Guardar Cambios">
                    
                            <input type="reset" value="Limpiar">
                        </div>
                    </div>   
                </div>

               
            </form>
        </div>
    </div>
</div>

<style>
    h6{text-align: left; margin-top: 1em;}
    #wrap{border:2px solid #006293; margin: auto; padding: 0.5em; 
        box-shadow: inset 0px 0px 20px 4px #c1c1c1; border-radius: 0.25em;} 
    #asegura{margin-top: 1em;}
    #controles{margin-bottom: 0.5em;}
</style>


<?php $contenido = ob_get_clean() ?>

<?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/basefantasma.php';?>









