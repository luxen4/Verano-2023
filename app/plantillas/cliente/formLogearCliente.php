<?php ob_start(); ?>

<link rel="stylesheet" type="text/css" href="web/css/formlogin.css">



<link rel="stylesheet" type="text/css" href="app/utilidades/scripts/css_formLogearCliente.inc">
<?php include_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/utilidades/scripts/js_formLogearCliente.inc'; ?>

<?php // include_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/general/actores_predeterminados.inc'; ?>





<div id="contenido_login" class="container"> 
    <div id="boton_login" class="col-xl-12 text-center col-lg-4 col-md-12 col-sm-12 col-12">
 
    <form id="login" action="" method="post" class="caja">
        <div class="row">
            <div class="col-xl-12 text-center col-lg-4 col-md-12 col-sm-12 col-12">
                <div class="row">
                    <div class="col-xl-12 text-center col-lg-4 col-md-12 col-sm-12 col-12 text-center">
                        <h4>Wellcome !</h4>
                    </div>
                </div>

                <div class="row">
                    <div class="col-xl-12 text-center col-lg-4 col-md-12 col-sm-12 col-12 inputs_login">
                        <label for="usuario"></label> <i class="fas fa-user"></i> 
                            <input type="text" 
                            name="datos[username]" id="usuario" 
                            value="<?php echo $datos['usuario'] ?? '' ?>" 
                            placeholder="@username" 
                            required size="20">
                    </div>
                </div>

                <div class="row">
                    <div class="col-xl-12 text-center col-lg-4 col-md-12 col-sm-12 col-12 inputs_login">
                        <label for="pwd"></label> <i class="fas fa-lock"></i>
                            <input type="password" 
                            name="datos[contrasenaactual]" id="pwd" 
                            value="<?php echo $datos['pwd'] ?? '' ?>" 
                            placeholder="Password" 
                            required>
                    </div>
                </div>

    
                <div class="row inputs_login">
                    <div id="boton_login" class="col-xl-12 text-center col-lg-4 col-md-12 col-sm-12 col-12">
                        <input type="submit" style=""  name="logincliente" value="Login">
                    </div>
                </div>

                    
                <div id="register_password">
                    <div class="row" >
                        <div id="register" class="col-xl-12 text-center col-lg-4 col-md-12 col-sm-12 col-12">
                            <a class="" href="index.php?ctl=nuevacuentacliente"><i class="fas fa-sign-in-alt"></i> Register</a> <br>
                        </div>
                    </div>

                    <div class="row">
                        <div id="password" class="col-xl-12 text-center col-lg-4 col-md-12 col-sm-12 col-12">
                            <a href="index.php?ctl=forgotyourpassword">Forgot your Password ?</a> 
                        </div>
                        
                    </div>
                </div>
            </div>
        </div>
    </form>   
</div> 
</div>
           

<?php $contenido = ob_get_clean()?>
<?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA .  BASE;?>

<style>
#register_password{
    margin-top: 1em;
}

    #boton_login input{    padding: 0.1em 2em;
    border-radius: 5px;

    }
</style>

<!--<div>
        <label for="url">Perfil en Linkendin:</label>
        <input type="url" name="url" id="url" class="fa fa-user" placeholder="&#xf007; https://example.com"
            pattern="https://.*" required>
    </div>
-->
