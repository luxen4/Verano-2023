<?php ob_start(); ?>

<?php use miId\fuente\Repositorio\UsuarioRepositorio; ?>
<?php
    $ref_Usuario=$_GET['ref_Usuario'];
    require __DIR__ . '/fuente/Repositorio/UsuarioRepositorio.inc'; 
    $tokenBasedatos = (new UsuarioRepositorio())->tokenBaseDatos($ref_Usuario);


// Se compara los token, el de la base de datos con el del GET()
if($_GET['token']==$tokenBasedatos[0]->token_Password){

    if(isset($_POST['recupera_contrasena'])){
        $datos=$_POST['datos'];
        $datos['ref_Usuario']=$_POST['ref_Usuario'];
        $datos['token']=$_POST['token'];  
        $datos['hash']= password_hash($datos['contrasenanueva'], PASSWORD_DEFAULT);

    if($datos['contrasenanueva']==$datos['contrasenarepetida']){
        $result = (new UsuarioRepositorio())->cambioContrasenaUsuario($datos);
        $result = (new UsuarioRepositorio())->desActivacionYtokenPassword($datos);
    }else{ ?>
        <script>alert("Las contraseñas no son iguales");</script><?php
    }
} ?>

<div class="container-fluid" style="margin: 1em;"> 
    <div class="row">
        <div id="wrap" class="col-xl-3 text-left col-lg-4 col-md-4 col-sm-6 col-10">
            <form action="" method="post">

                <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                    <h5>Cambiar Contraseña</h5>
                </div>  

                    <input type="hidden" id="ref_Usuario" name="ref_Usuario" value="<?php echo $_GET['ref_Usuario']; ?>">
                    <input type="hidden" id="token" name="token" value="<?php echo $_GET['token']; ?>">
                    
                <div class="row">
                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                        <label for="pwd">Nueva Contraseña<br>
                        <input type="password" name="datos[contrasenanueva]" id="pwd" value="<?php echo $datos['pwd'] ?? '' ?>" required size="10"><br>
                        <?php //isset($errores['pwd'])?'<span class="error">'.$errores['pwd'].'</span>':'OK' ?></label>
                    </div>

                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                        <label for="">Repita Contraseña</label><br>
                        <input type="text" name="datos[contrasenarepetida]" size="10" required>
                            <?php if(isset($datos)){
                                if(isset($errores['contrasenarepetida'])){?><span class="error"><?="<br>". $errores['contrasenarepetida'].'</span>'?><?php 
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
                        <input type="submit" name="recupera_contrasena" value="Cambiar Contraseña">
                        <input type="reset" value="Limpiar">
                    </div>
                </div>
            </form>
        </div>
    </div>
</div><?php
} ?>

<style>
    h6{text-align: left; margin-top: 1em;}
    #wrap{border:2px solid #006293; margin: auto; padding: 0.5em; 
            box-shadow: inset 0px 0px 20px 4px #c1c1c1; border-radius: 0.25em;} 
    #asegura{margin-top: 1em;}
    #controles{margin-bottom: 0.5em;}
</style>


<?php $contenido = ob_get_clean() ?>
<?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/basefantasma.php';?>


