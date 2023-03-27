<!--?php</codesnippet-->
<?php
use PHPMailer\PHPMailer\PHPMailer;
use PHPMailer\PHPMailer\SMTP;
use PHPMailer\PHPMailer\Exception;
require_once "vendor/autoload.php";
try { 
/*
    // Intentar crear una nueva instancia de la clase PHPMailer
    $mail = new PHPMailer ();
    $mail->isSMTP();

$mail->SMTPAuth = true;
// Datos personales
$mail->Host = "smtp.gmail.com";
$mail->Port = 587;
$mail->Username = "superlaya50@gmail.es";
$mail->Password = "khdeyyokjwrhpozf";
//$mail->SMTPSecure = PHPMailer::ENCRYPTION_STARTTLS;
//$mail->SMTPSecure = PHPMailer::ENCRYPTION_SMTPS;


// (…)


// Remitente
$mail->setFrom('superlaya50@gmail.com', 'name');
// Destinatario, opcionalmente también se puede especificar el nombre
$mail->addAddress('superlaya50@gmail.com', 'name');
// Copia
$mail->addCC('superlaya50@gmail.com');
// Copia oculta
$mail->addBCC('superlaya50@gmail.com', 'name');



$mail->isHTML(true);
// Asunto
$mail->Subject = 'Asunto de tu correo electrónico';
// Contenido HTML
$mail->Body = 'El contenido de tu correo en HTML. Los elementos en <b>negrita</b> también están permitidos.';
$mail->AltBody = 'El texto como elemento de texto simple';
// Agregar archivo adjunto
$mail->addAttachment("ejemplodeimagen.jpg", "ejemplodeimagen.png");

$mail->send();
*/




$mail = new PHPMailer();

$mail->isSMTP();// Set mailer to use SMTP
$mail->CharSet = "utf-8";// set charset to utf8
$mail->SMTPAuth = true;// Enable SMTP authentication
$mail->SMTPSecure = 'tls';// Enable TLS encryption, `ssl` also accepted

$mail->SMTPSecure = PHPMailer::ENCRYPTION_STARTTLS;


$mail->Host = 'smtp.gmail.com';// Specify main and backup SMTP servers
$mail->Port = 587;// TCP port to connect to

$mail->isHTML(true);// Set email format to HTML

$mail->Username = 'superlaya50@gmail.com';// SMTP username
$mail->Password = 'khdeyyokjwrhpozf';// SMTP password

$mail->setFrom('superlaya50@gmail.com', 'John Smith');//Your application NAME and EMAIL
$mail->Subject = 'Test';//Message subject
$mail->MsgHTML('HTML <br><span style="color:red";>ojooooo</span><br> code');// Message body
//$mail->Body = 'El contenido de tu correo en HTML. Los elementos en <b>negrita</b> también están permitidos.';
//$mail->AltBody = 'El texto como elemento de texto simple';
$mail->addAttachment("ejemplodeimagen.jpg", "ejemplodeimagen.png");
$mail->addAddress('superlaya51@gmail.com', 'User Name');// Target email
$mail->addCC('superlaya51@gmail.com');




$mail->send();


/*

  $Correo = new PHPMailer();
  $Correo->IsSMTP();
  $Correo->SMTPAuth = true;
  $Correo->SMTPSecure = PHPMailer::ENCRYPTION_SMTPS;
  $Correo->SMTPSecure = "tls";
  $Correo->Host = "smtp.gmail.com";
  $Correo->Port = 465;
  $Correo->UserName = "superlaya50@gmail.com";
  $Correo->Password = "khdeyyokjwrhpozf";
  $Correo->SetFrom('superlaya50@gmail.com','De Yo');
  $Correo->FromName = "From";
  $Correo->AddAddress("superlaya50@gmail.com.com");
  $Correo->Subject = "Prueba con PHPMailer";
  $Correo->Body = "<H3>Bienvenido! Esto Funciona!</H3>";
  $Correo->IsHTML (true);
  $Correo->send();
*/
  if (!$mail->Send())
  {
    echo "Error: $Correo->ErrorInfo";
  }
  else
  {
    echo "Message Sent!";
  }









} catch (Exception $e) {
        echo "Mailer Error: ".$mail->ErrorInfo;
}


















?>