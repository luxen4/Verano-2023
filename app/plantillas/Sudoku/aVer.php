<?php
function divisores(int $num):array
{

$div=[1];
for($i=2, $j=floor($num/2); $i<$j; $i++){
    if(!($num%$i)){
        $div[]=$i;
    }
}
$div[]=$num;
return $div;
}

if(isset($_GET["OK"])){
    // Expresiones regulares //


   if(empty($dato)){
       $error="El campo es obligatório";
   }else if(preg_match($exp,$dato)){
       include 'utilidades.inc';
       $div=divisores($dato);


   }else{
       $error="Debe introducir un número de 4 dígitos";
   }
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>

<h1>Divisores de:</h1>

   
<form action="<?=$_SERVER['PHP_SELF']?>" name="aceptaNum" method="get">   <!--aqui htmlentities(-->

<label>Introduce un número:
<input type="text" name="dato" value="<? isset($dato)?$dato:''?> <?= isset($error) ? '<span> style="color:red">'.$error.'</span>':''?>">



</label>
<br>

<input type="submit" name="ok" value="enviar">

</form>
    
</body>
</html>

<?php 
    if(isset($div)):?>
    <p>
        <?php foreach($div as $value): 
            echo $value;?><br>

        <?php endforeach;
         endif;
         
         ?>
    }