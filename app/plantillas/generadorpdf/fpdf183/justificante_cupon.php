<?php ob_start();
//var_dump($_SESSION);die();
//echo "entro"; //die();
//var_dump($_SESSION['dest']); die();
//var_dump($_SESSION['perfil']);die();

/*
$nombre=utf8_decode($_SESSION['perfil']['nombre']);
$codigoDestino=$_SESSION['dest'][0]->cod_Destino;
$desti=utf8_decode($_SESSION['dest'][0]->nombre_Lugar);
$fecha=$_SESSION['dest'][0]->fecha_Viaje;
$salida=utf8_decode($_SESSION['dest'][0]->lugar_SalidaPredeterminado);
$vuelta="Punto en el destino";
$bus=$_SESSION['dest'][0]->cod_Bus;
$asiento=$_SESSION['dest'][0]->plaza_Bus;
$precio="12 euros";
$telefono=$_SESSION['dest'][0]->telefono_Reserva;
*/



require('fpdf.php');



 
$pdf=new FPDF();
$pdf->AddPage();

$pdf->SetFillColor(232,232,232);
$pdf->SetFont('Arial','B',20);
//convertimos el texto a utf8
//$texto = utf8_decode('Lorem Ipsum …...');
                //$pdf->Cell(190,10, utf8_decode('Información de su viaje a ' .  utf8_encode($desti) ),1,0,'C',1) ;

/*
$pdf->SetFont('Arial','B',16);
$pdf->Cell(-100,20,'Hello World!');
*/
$pdf->SetFont('Arial','B',9); // SetFont('Helvetica','I',13);
//$pdf->Cell(10,10,'<input type="text">');
//$pdf->Write(200,588);

/*
                if (in_array($desti, $_SESSION['fotosLugares'])) {
                
                $pdf->Image('web/imagenes/destinos/' . utf8_decode($desti) . '.jpg', 10, 40, 40, 40, 'JPG','www.plus2net.com');

                }else{
                $pdf->Image('web/imagenes/destinos/predeterminada.jpg', 10, 40, 40, 40, 'JPG','www.plus2net.com');
                }
*/







$pdf->SetTextColor(0, 54, 99);
$pdf->Cell(10,10,'****');

$pdf->SetY(20); // $pdf->SetXY(20, 180);
$text = date('F j, Y');
        $pdf->MultiCell(260, 22, $text, 0, 'C');

$pdf->Ln(15);

$pdf->Cell(10,10,'********************************************************************************************************************************************************',0,1);
$pdf->Ln(5);
$pdf->SetFont('Arial','B',10);

$pdf->MultiCell(190,-8,'Abajo le mostramos todos los detalles de su compra:');
$pdf->Ln(10);




$pdf->SetTextColor(0,0,0);
$pdf->SetFont('Arial','B');
$pdf->SetXY(50,40);

/*
$pdf->MultiCell(195,5,utf8_decode(  "Codigo de Viaje: " . utf8_encode($codigoDestino) .
                                    "\n Nombre: " .  utf8_encode($nombre) .
                                    "\n Destino: " .  utf8_encode($desti) .
                                    "\n Fecha: " .  utf8_encode($fecha) .
                                    "\n Salida: " .  utf8_encode($salida) .
                                    "\n Vuelta: " .  utf8_encode($vuelta) .
                                    "\n Bus nº: " .  utf8_encode($bus) .
                                    "\n Asiento nº: " .  utf8_encode($asiento) .
                                    "\n Precio: " .  utf8_encode($precio) 
                                    )

);*/

$pdf->SetXY(10,72);
            //$pdf->Cell(10,23,   "imagen de: " . $desti,0,0,'D');     $pdf->Ln(5);


$pdf->Ln(5);

$pdf->SetFont('Arial','b',12);
//$pdf->SetTextColor(0,0,0);
$pdf->Ln(7);
$pdf->SetTextColor(194,8,8);
        //$pdf->Write(7,utf8_decode('En caso de algún tipo de incidencia, puede llamar al número de teléfono: ' . $telefono));
$pdf->Ln(7);

$pdf->SetFont('Arial','b',12);
$pdf->SetTextColor(153,0,153);
$pdf->Write(7,utf8_decode('Muchísimas gracias por su confianza y le deseamos tenga buen viaje con nosotros.'));

$pdf->Ln(7);
$pdf->SetTextColor(0,0,0);
$pdf->Cell(10,10,'*********************************************************************************************************************',0,1);



/*
//$pdf->SetXY($coordXbase,$coordY);
$pdf->SetTextColor(194,8,8);
$pdf->MultiCell(100,100,"sss");

//Setting the text color to black
$pdf->SetTextColor(0,0,0);

//Printing my cell      
$pdf->SetFont('Arial','B');
$pdf->Cell(55,5,"Black Text ",1,0,'C');
//$pdf->SetXY($coordXbase,$coordY);

//Setting the text color to red
$pdf->SetTextColor(194,8,8);

//Printing another cell, over the other
$pdf->SetFont('Arial','B');
//Give some space from the left border, and print the red text after the black text that is in the cell behind this one.
$pdf->Cell(55,5,"                        Red Text",0,0,'C');
//$pdf->SetXY($coordXbase,$coordY);

//Setting the text color back to back, in the next cells.
$pdf->SetTextColor(0,0,0);

$pdf->Cell(200,20,'Probando FPDF',0,1,'L');




//Seteamos el inicio del margen superior en 25 pixeles

$y_axis_initial = 25;

$pdf->SetFont('Arial','B',12);

$pdf->Cell(40,6,'',0,0,'C');
$pdf->Cell(100,6,'LISTA DE PRODUCTOS',1,0,'C');


//Creamos las celdas para los titulo de cada columna y le asignamos un fondo gris y el tipo de letra
$pdf->SetFillColor(232,232,232);

$pdf->SetFont('Arial','B',10);
$pdf->Cell(1025,6,'Titulo',1,0,'C',1);

$pdf->Cell(30,6,'Precio',1,0,'C',1);
$pdf->Cell(30,6,'Foto',1,0,'C',1);



$pdf->Cell(50,5,'78878',0,1);






$pdf->SetFont('Arial','B',16);
$pdf->Cell(500,10,'Probando FPDF',1,1,'L');




              $pdf->SetTextColor(255,255,255);
           $pdf->Text(90,90,"Holaaaaaaaaaa");
$pdf = new FPDF();
$pdf->AddPage();

$pdf->Output($nuevoNombreDelPDF, "F");



*/
require('../librerias/fpdf.php');

class PDF extends FPDF
{
    //Cabecera de página
    function Header()
    {
    //Logo
    $this->Image("web/imagenes/destinos/Alberite.jpg" , 10 ,8, 35 , 38 , "JPG" );
    //Arial bold 15
    $this->SetFont('Arial','B',15);
    //Movernos a la derecha
    $this->Cell(80);
    //Título
    $this->Cell(60,10,'Titulo del archivo',1,0,'C');
    //Salto de línea
    $this->Ln(20);
       
    }
    
    //Pie de página
    function Footer()
    {
    //Posición: a 1,5 cm del final
    $this->SetY(-15);
    //Arial italic 8
    $this->SetFont('Arial','I',8);
    //Número de página
    $this->Cell(0,10,'Page '.$this->PageNo().'/{nb}',0,0,'C');
    }
}

//Creación del objeto de la clase heredada
$pdf=new PDF();
$pdf->AliasNbPages();
//Primera página
$pdf->AddPage();
$pdf->SetFont('Arial','',15);
$pdf->Link(10,8,10,10,"http://www.recetasparatodos.com.es");
$pdf->Output();
?>


class PDF extends FPDF
{
//Cabecera de página
   function Header()
   {
    //Logo
    $this->Image("web/imagenes/destinos/Alberite.jpg" , 10 ,8, 35 , 38 , "JPG" ,"http://www.mipagina.com");
    //Arial bold 15
    $this->SetFont('Arial','B',15);
    //Movernos a la derecha
    $this->Cell(80);
    //Título
    $this->Cell(60,10,'Titulo del archivo',1,0,'C');
    //Salto de línea
    $this->Ln(20);
      
   }
   
   //Pie de página
   function Footer()
   {
    //Posición: a 1,5 cm del final
    $this->SetY(-15);
    //Arial italic 8
    $this->SetFont('Arial','I',8);
    //Número de página
    $this->Cell(0,10,'Page '.$this->PageNo().'/{nb}',0,0,'C');
   }
   //Tabla simple
   function TablaSimple($header)
   {
    //Cabecera
    foreach($header as $col)
    $this->Cell(40,7,$col,1);
    $this->Ln();
   
      $this->Cell(40,5,"hola",1);
      $this->Cell(40,5,"hola2",1);
      $this->Cell(40,5,"hola3",1);
      $this->Cell(40,5,"hola4",1);
      $this->Ln();
      $this->Cell(40,5,"linea ",1);
      $this->Cell(40,5,"linea 2",1);
      $this->Cell(40,5,"linea 3",1);
      $this->Cell(40,5,"linea 4",1);
   }
   
   //Tabla coloreada
function TablaColores($header)
{
//Colores, ancho de línea y fuente en negrita
$this->SetFillColor(255,0,0);
$this->SetTextColor(255);
$this->SetDrawColor(128,0,0);
$this->SetLineWidth(.3);
$this->SetFont('','B');
//Cabecera

for($i=0;$i<count($header);$i++)
$this->Cell(40,7,$header[$i],1,0,'C',1);
$this->Ln();
//Restauración de colores y fuentes
$this->SetFillColor(224,235,255);
$this->SetTextColor(0);
$this->SetFont('');
//Datos
   $fill=false;
$this->Cell(40,6,"hola",'LR',0,'L',$fill);
$this->Cell(40,6,"hola2",'LR',0,'L',$fill);
$this->Cell(40,6,"hola3",'LR',0,'R',$fill);
$this->Cell(40,6,"hola4",'LR',0,'R',$fill);
$this->Ln();
      $fill=!$fill;
      $this->Cell(40,6,"col",'LR',0,'L',$fill);
$this->Cell(40,6,"col2",'LR',0,'L',$fill);
$this->Cell(40,6,"col3",'LR',0,'R',$fill);
$this->Cell(40,6,"col4",'LR',0,'R',$fill);
$fill=true;
   $this->Ln();
   $this->Cell(160,0,'','T');
}

   
   
}

$pdf=new PDF();
//Títulos de las columnas
$header=array('Columna 1','Columna 2','Columna 3','Columna 4');
$pdf->AliasNbPages();
//Primera página
$pdf->AddPage();
$pdf->SetY(65);
//$pdf->AddPage();
$pdf->TablaSimple($header);
//Segunda página
$pdf->AddPage();
$pdf->SetY(65);
$pdf->TablaColores($header);
$pdf->Output();
?>


class PDF extends FPDF
{
    //Columna actual
    var $col=0;
    //Ordenada de comienzo de la columna
    var $y=0;
    //Cabecera de página
    
    function Header()
    {
        //Logo
  $this->Image("web/imagenes/destinos/Alberite.jpg" , 10 ,8, 35 , 38 , "JPG" );
        //Arial bold 15
        $this->SetFont('Arial','B',15);
        //Movernos a la derecha
        $this->Cell(80);
        //Título
        $this->Cell(60,10,'Titulo del archivo',1,0,'C');
        //Salto de línea
        $this->Ln(20);
       
    }

    //Pie de página
    function Footer()
    {
        //Posición: a 1,5 cm del final
        $this->SetY(-15);
        //Arial italic 8
        $this->SetFont('Arial','I',8);
        //Número de página
        $this->Cell(0,10,'Page '.$this->PageNo(),0,0,'C');
    }

    function SetCol($col)
   {
      //Establecer la posición de una columna dada
      $this->col=$col;
      $x=10+$col*75;
      $this->SetLeftMargin($x);
      $this->SetX($x);
   }
   
   function AcceptPageBreak()
   {
      //Método que acepta o no el salto automático de página
      if($this->col<2)
      {
          //Ir a la siguiente columna
           $this->SetCol($this->col+1);
          //Establecer la ordenada al principio
          $this->SetY($this->y0);
          //Seguir en esta página
          return false;
      }
      else
      {
          //Volver a la primera columna
          $this->SetCol(0);
          //Salto de página
          return true;
      }
   }
    
    function TituloArchivo($num,$label)
    {
        $this->SetY(55);
        $this->SetFont('Arial','',12);
        $this->SetFillColor(200,220,255);
        $this->Cell(0,6,"Archivo $num : $label",0,1,'L',true);
        $this->Ln(4);
        //Guardar ordenada
        $this->y0=$this->GetY();
    }

    function CuerpoArchivo($file)
    {
        //Leemos el fichero
    //    $f=fopen($file,'r');
    //    $txt=fread($f,filesize($file));
    //    fclose($f);
        //Times 12
        $this->SetFont('Times','',12);
        //Imprimimos el texto justificado
    //    $this->MultiCell(60,5,$txt);
        //Salto de línea
        $this->Ln();
        //Volver a la primera columna
        $this->SetCol(0);
    }

    function ImprimirArchivo($num,$title,$file)
    {
        $this->AddPage();
        $this->TituloArchivo($num,$title);
        $this->CuerpoArchivo($file);
    }
}

$pdf=new PDF();
$title='Mostramos un archivo txt';
$pdf->SetTitle($title);
$pdf->SetY(65);
$pdf->ImprimirArchivo(1,'Archivo de prueba ','prueba1.txt');
$pdf->ImprimirArchivo(2,'Otro archivo','prueba2.txt');
$pdf->Output();


$pdf->Cell(10,10,'Estamos viendo',1,1,'C');
$pdf->Output('prueba','I');
//$pdf->Output();

 







?>

<!--https://www.solvetic.com/tutoriales/article/1501-dise%c3%b1o-de-reportes-en-pdf-con-fpdf-y-php/
https://www.solvetic.com/tutoriales/article/1501-dise%c3%b1o-de-reportes-en-pdf-con-fpdf-y-php/
-->


<input type="file" name="pic" id="pic" accept="image/gif, image/jpeg" />


<!--
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <iframe src="your.pdf" width="100%" height="500px">aaa
    </iframe>
</body>
</html>-->




<!--https://www.codegrepper.com/code-examples/html/show+pdf+in+html PARA LOS PDF iframe-->
<!--https://desarrolloweb.com/articulos/columnas-fpdf.html-->