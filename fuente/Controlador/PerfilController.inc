<?php
namespace miId\fuente\Controlador;
use miId\fuente\Repositorio\UsuarioRepositorio;

class PerfilController
{
    // Función que crea un nuevo username/password
    public function forgotYourpassword(){

        if (isset($_POST['recupera_contrasena'])) {
            $datos = $_POST['datos'];

            if (isset($datos['mandar_correo'])) { 
            // 1º Se verifica el correo electronico en RECUPERACONTRASENAe datos

            require __DIR__ . '/../../fuente/Repositorio/UsuarioRepositorio.inc';
            $ref_Usuario = (new UsuarioRepositorio())->recuperaContrasenaUsuario($datos);

            // 2º Si es válido se manda el token, etc a ese correo             
            if(!empty($ref_Usuario)){
                $token_Pasword=password_hash('', PASSWORD_DEFAULT);
                $ref_Usuario=$ref_Usuario[0]->ref_Usuario;

                    $url=$datos['correo'];
                    $nombre_Usuario = (new UsuarioRepositorio())->nombreUsuario($ref_Usuario);

                    // activación=1 y token_Password=
                    $datos['ref_Usuario']=$ref_Usuario;
                    $datos['activacion']=1;
                    $datos['token_Password']=$token_Pasword;
                    $activacion_tokenPassword = (new UsuarioRepositorio())->activacionYtokenPassword($datos);

                    // Datos del correo electronico
                    $nombre=$nombre_Usuario[0]->nombre_Agencia;
                    $asunto="Recuperar Password - Sistema Usuarios";
                    $cuerpo = 
                    "Hola" . $nombre . ": <br /><br />Se ha solicitado un reinicio de contraseña.
                    Para restaurar la contraseña, visita la siguiente dirección:
                    <a href='localhost/Verano-2022/archivorama.php?ref_Usuario=$ref_Usuario&token=$token_Pasword'>Restablecer Contraseña</a>
                    ";
                    ?>

                    <script>alert("Hemos enviado un correo electrónico a la direción $correo para restablecer su password");</script><?php
                    require __DIR__ . '/../../mail/modificarcontrasena.php';

                    ?>
                    <script>window.location.href="index.php?ctl=inicio/";</script><?php
                
            }else{ ?>
                <script>
                alert("El correo no se encuentra en Verano-2022");
                window.location.href="index.php?ctl=forgotyourpassword";
                </script><?php
            }

            }else {?><pre><script>alert("¡Seleccione la casilla!")</script></pre><?php }
        }

        require __DIR__ . '/../../app/plantillas/perfil/forgotyourpassword.php';
    }

        // Función que devuelve la plantilla de restablecer contraseña
        public function restablecerContrasena(){
            // Si el token es el de la base de datos, se presenta la plantilla
            //require __DIR__ . '/../../app/plantillas/perfil/archivorama.php';
        }

}