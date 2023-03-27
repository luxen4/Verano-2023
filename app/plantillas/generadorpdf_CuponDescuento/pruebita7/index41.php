<?php
use Dompdf\Dompdf;
USE Dompdf\Options;
 

require_once 'dompdf/autoload.inc.php';
$Options=new Options();
$Options->set('chroot',realpath(''));

//$Options->setIsHtml5ParserEnabled(true);

$dompdf= new Dompdf($Options);

//var_dump($_SESSION['datos_negocio']);

$descuento='Vale Descuento por: 
<img style="width: 50px; height: 30px;" 
src="C:\xampp\htdocs\Verano-2022\app\plantillas\generadorpdf_CuponDescuento\pruebita7\dompdf\images\100dto.jpg"/>';



$info='<br/>
<h1 style="text-align: center;">' .$descuento. '</h1>
<h1>¡Hola Adrián!</h1>
<h2>Bienvenido a ' . $_SESSION['datos_negocio'][0]->nombre .'
, en '.$_SESSION['datos_negocio'][0]->direccion . '<br><br>' .
'Disfrute del descuento que le ofrecemos por ser usuario de nuestra aplicación!</h2>
<h2>No dude en ponerse en contacto con nosotros, estamos a su disposición en el '.$_SESSION['datos_negocio'][0]->telefono . '</h2>
<h2>Le deseamos que pase un buén dia y Gracias por confiar en nosotros.</h2>





<div style="text-align:center;">
<p>Puede consultar en nuestras Redes Sociales</p>'


. // $redes .




'</div>';


$red_tripadvisor='<a target="blanc" class="tripadvisor_img" href=<?php echo pasarUtf8($_SESSION["datos_negocio"][0]->e_tripadvisor);?>></a>';



$red_tripadvisor=$_SESSION["datos_negocio"][0]->e_tripadvisor;
$pie_tripadvisor = "<span><a href=\"$red_tripadvisor\">Tripadvisor</a></span><br>";

$red_facebook=$_SESSION["datos_negocio"][0]->e_facebook;
$pie_facebook = "<span><a href=\"$red_facebook\">Facebook</a></span><br>";

$red_restaurantGuru=$_SESSION["datos_negocio"][0]->e_restaurantGuru;
$pie_restaurantGuru = "<span><a href=\"$red_restaurantGuru\">RestaurantGuru</a></span>";


$redes=$pie_tripadvisor.$pie_facebook.$pie_restaurantGuru;


$content = '<html>';

$cabecera = "<head><span><b></b></span></head>";
$tabla = '<div>
<p>A continuación mostramos algunos <u>datos</u></p>
<table style="width:200px;text-align:center;">
<thead>
<tr>
<th>A</th>
<th>B</th>
</tr>
</thead>
<tbody>
<tr>
<td>1</td>
<td>2</td>                      
</tr>
<tr>
<td>3</td>
<td>4</td>                      
</tr>
</tbody>
</table>
</div>';

/*$ruta = __FILE__;*/
/*$ruta =basename( __FILE__ );*/

//var_dump($_SESSION['datos_negocio'][0]);die();
//var_dump($_SESSION['perfil']['nombre']);die();


if(!empty($_SESSION['perfil']['nombre'])){
$nombreUsuario=$_SESSION['perfil']['nombre'];
}else{
    $nombreUsuario="";
}




if($_SESSION['datos_negocio'][0]->dto==10){
$rutaDescuento='10dto.jpg';
}

if($_SESSION['datos_negocio'][0]->dto==15){
    $rutaDescuento='15dto.jpg';
    }


$cuerpo = '<html>
<body>


<div class="targetadescuento">
<h1 style="color:#A70008; text-decoration: underline;">¡ Hola '   . $nombreUsuario .    '! ...Esperamos que disfrutes de este regalo.</h1>


<img style="width: 900px; height: 600px;" 
src="C:\xampp\htdocs\Verano-2022\app\plantillas\generadorpdf_CuponDescuento\pruebita7\dompdf\images\tarjetadescuento.jpg"/>

<div class="centrado" style="margin-top:-29em; margin-left:35em">

<h3 style="margin-left:-5em; color:#781617">Queremos tener un detalle contigo y <br>te obsequiamos con un descuento de:</h3>

<img style="width: 120px; height: 100px; margin-top:0em;" 
src="C:\xampp\htdocs\Verano-2022\app\plantillas\generadorpdf_CuponDescuento\pruebita7\dompdf\images\\'  . $rutaDescuento . '"/>

<h1 style=" width:60%; text-align: center; margin-left:-2.8em; color:#A70008">' . $_SESSION['datos_negocio'][0]->nombre .'</h1>
<p style="margin-top:-1em; margin-left:-5.5em;  width:60%; text-align: center; color:#A70008"><span style="text-decoration: underline;">' .
$_SESSION['datos_negocio'][0]->direccion .'<br>Tel: ' . $_SESSION['datos_negocio'][0]->telefono .'</span></p>


<h4 style="margin-top:0.5em; margin-left:-5.5em; width:60%; text-align: center; color:#DDAE60" ">Válido hasta: 30 de Septiembre 2022</h4>
<div>



</div>

</body>
</html>';




$pie = "<span>
<a href=\"http://www.imaginanet.com\">Diseño y Programación Web: Imaginanet</a>
 - <i>Creado ".date("d/m/Y")."</i>
</span>";










$content=/*$content.*/$cabecera /*. $tabla */. $cuerpo . $pie;



/*
$ejemplo='
<style>
@font-face{font-family: "Ubuntu";
src: url("Ubuntu-Regular.ttf");
}
body{
    font:normal 15 px/20px Ubuntu;

}

</style>
<p>Hello</p>

<img style="width: 50px; height: 30px;" 
src="C:\xampp\htdocs\Verano-2022\app\plantillas\generadorpdf_CuponDescuento\pruebita7\dompdf\images\100dto.jpg"
     
/>


';
*/

$dompdf->loadHtml($content );

$dompdf->setPaper('A4','landscape');



$dompdf->render();
$pdf = $dompdf->output();
$dompdf->stream("re");


$dompdf->render();
$dompdf->stream("a.pdf", ['Attachment' => false]);
exit(0);


?>
<style>
.targetadescuento{
    position: relative; 
    display: inline-block;
    text-align: center;
}

.centrado{
    position: absolute;
    top: 50%; 
    left: 50%;
    transform: translate(-50%, -50%); width:100%; margin-top: 1.8em;
}

.centrado_variar{
    position: absolute;
    top: 90%;
    left: 50%;
    transform: translate(-50%, -50%); width:100%; margin-top: 1.8em; 
}

</style>



