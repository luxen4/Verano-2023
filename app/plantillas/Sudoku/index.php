<?php 
use miId\fuente\Repositorio\JuegosRepositorio;
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Sudoku by Laya</title>
  <!--  <link rel="stylesheet" href="css/styles.css">-->
</head>

<body>
    <!--
<pre>
    Generador de Sudokus:
    El usuario a la vez que se divierte, genera un Sudoku, cuando ya ha conseguido formar un sudoku válido 
    añadiendo y también borrando algún número, se podrá hacer desaparecer unos cuantos números 
    y enviar a la base de datos para que en un futuro pueda realizarse tal y como conocemos el juego por otro usuario.
</p>

</pre>
    generado por: <br> 
    <input style="font-size: 0.8em; width: 64px;" type="button" onclick="rellenarInicio()" value="Empezar">
    <input style="font-size: 0.8em; width: 64px;" type="button" onclick="solucion()" value="Limpiar">
--> 

        <div id="wrapper">
            <nav id="botonerasuperior" class="row">
                <div class="col-xl-6 text-left col-lg-12 col-md-12 col-sm-12 col-12">
               <!-- <input style="padding:0.5em" type="button" onclick="" value="Env, base de datos">-->

                    <div style="display: flex;">
                    <div id="number"></div> puntos
                    </div>
                </div>
            </nav>
                

            
       

 <?php      
 $numcasillasrellenadas=0;
 require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/JuegosRepositorio.inc';
            $numSudoKus=(new JuegosRepositorio())->numSudokus();

$numSudoKus= $numSudoKus[0]->numeroSudokus;

            $ref_Sudoku= random_int( 1, $numSudoKus);
            

            require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/JuegosRepositorio.inc';
            $sudoku=(new JuegosRepositorio())->extraerSudoku($ref_Sudoku);

            $numeros=$sudoku[$ref_Sudoku-1]->numeros;

            $casillas=$numeros;
           
             $array = array();
            for($i=0; $i<=80; $i++){

                $numerito= substr($casillas, $i, 1); 

                if($numerito=="*"){
                    $numerito="";
                   
                }else{
                     $numcasillasrellenadas=$numcasillasrellenadas+1; 
                }
              
                array_push($array, $numerito,);
            }
          // var_dump($numcasillasrellenadas);
            ?>

<input id="numcasillasrellenadas" type="text" name="numcasillasrellenadas" value="<?php echo $numcasillasrellenadas; ?>" hidden>
            <div class="columna">
               <input class="casilla arriba izquierda"  type="button" id="_1_1" name="_1_1" value="<?php echo $array[0];?>" onclick="cambiaNumero(this)">
               <input class="casilla arriba"            type="button" id="_1_2" name="_1_2" value="<?php echo $array[1];?>" onclick="cambiaNumero(this)">
               <input class="casilla arriba"            type="button" id="_1_3" name="_1_3" value="<?php echo $array[2];?>" onclick="cambiaNumero(this)">
               <input class="casilla arriba izquierda"  type="button" id="_1_4" name="_1_4" value="<?php echo $array[3];?>" onclick="cambiaNumero(this)">
               <input class="casilla arriba"            type="button" id="_1_5" name="_1_5" value="<?php echo $array[4];?>" onclick="cambiaNumero(this)">
               <input class="casilla arriba"            type="button" id="_1_6" name="_1_6" value="<?php echo $array[5];?>" onclick="cambiaNumero(this)">
               <input class="casilla arriba izquierda"  type="button" id="_1_7" name="_1_7" value="<?php echo $array[6];?>" onclick="cambiaNumero(this)">
               <input class="casilla arriba"            type="button" id="_1_8" name="_1_8" value="<?php echo $array[7];?>" onclick="cambiaNumero(this)">
               <input class="casilla arriba derecha"    type="button" id="_1_9" name="_1_9" value="<?php echo $array[8];?>" onclick="cambiaNumero(this)">
            </div>

            <div class="columna">
                <input class="casilla izquierda"        type="button" id="_2_1" name="_2_1" value="<?php echo $array[9];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_2_2" name="_2_2" value="<?php echo $array[10];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_2_3" name="_2_3" value="<?php echo $array[11];?>" onclick="cambiaNumero(this)">
                <input class="casilla izquierda"        type="button" id="_2_4" name="_2_4" value="<?php echo $array[12];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_2_5" name="_2_5" value="<?php echo $array[13];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_2_6" name="_2_6" value="<?php echo $array[14];?>" onclick="cambiaNumero(this)">
                <input class="casilla izquierda"        type="button" id="_2_7" name="_2_7" value="<?php echo $array[15];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_2_8" name="_2_8" value="<?php echo $array[16];?>" onclick="cambiaNumero(this)">
                <input class="casilla derecha"          type="button" id="_2_9" name="_2_9" value="<?php echo $array[17];?>" onclick="cambiaNumero(this)">
             </div>

             <div class="columna">
                <input class="casilla izquierda"        type="button" id="_3_1" name="_3_1" value="<?php echo $array[18];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_3_2" name="_3_2" value="<?php echo $array[19];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_3_3" name="_3_3" value="<?php echo $array[20];?>" onclick="cambiaNumero(this)">
                <input class="casilla izquierda"        type="button" id="_3_4" name="_3_4" value="<?php echo $array[21];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_3_5" name="_3_5" value="<?php echo $array[22];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_3_6" name="_3_6" value="<?php echo $array[23];?>" onclick="cambiaNumero(this)">
                <input class="casilla izquierda"        type="button" id="_3_7" name="_3_7" value="<?php echo $array[24];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_3_8" name="_3_8" value="<?php echo $array[25];?>" onclick="cambiaNumero(this)">
                <input class="casilla derecha"          type="button" id="_3_9" name="_3_9" value="<?php echo $array[26];?>" onclick="cambiaNumero(this)">
             </div>

             <div class="columna">
                <input class="casilla arriba izquierda" type="button" id="_4_1" name="_4_1" value="<?php echo $array[27];?>" onclick="cambiaNumero(this)">
                <input class="casilla arriba"           type="button" id="_4_2" name="_4_2" value="<?php echo $array[28];?>" onclick="cambiaNumero(this)">
                <input class="casilla arriba"           type="button" id="_4_3" name="_4_3" value="<?php echo $array[29];?>" onclick="cambiaNumero(this)">
                <input class="casilla arriba izquierda" type="button" id="_4_4" name="_4_4" value="<?php echo $array[30];?>" onclick="cambiaNumero(this)">
                <input class="casilla arriba"           type="button" id="_4_5" name="_4_5" value="<?php echo $array[31];?>" onclick="cambiaNumero(this)">
                <input class="casilla arriba"           type="button" id="_4_6" name="_4_6" value="<?php echo $array[32];?>" onclick="cambiaNumero(this)">
                <input class="casilla arriba izquierda" type="button" id="_4_7" name="_4_7" value="<?php echo $array[33];?>" onclick="cambiaNumero(this)">
                <input class="casilla arriba"           type="button" id="_4_8" name="_4_8" value="<?php echo $array[34];?>" onclick="cambiaNumero(this)">
                <input class="casilla arriba derecha"   type="button" id="_4_9" name="_4_9" value="<?php echo $array[35];?>" onclick="cambiaNumero(this)">
             </div>

             <div class="columna">
                <input class="casilla izquierda"        type="button" id="_5_1" name="_5_1" value="<?php echo $array[36];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_5_2" name="_5_2" value="<?php echo $array[37];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_5_3" name="_5_3" value="<?php echo $array[38];?>" onclick="cambiaNumero(this)">
                <input class="casilla izquierda"        type="button" id="_5_4" name="_5_4" value="<?php echo $array[39];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_5_5" name="_5_5" value="<?php echo $array[40];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_5_6" name="_5_6" value="<?php echo $array[41];?>" onclick="cambiaNumero(this)">
                <input class="casilla izquierda"        type="button" id="_5_7" name="_5_7" value="<?php echo $array[42];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_5_8" name="_5_8" value="<?php echo $array[43];?>" onclick="cambiaNumero(this)">
                <input class="casilla derecha"          type="button" id="_5_9" name="_5_9" value="<?php echo $array[44];?>" onclick="cambiaNumero(this)">
             </div>

             <div class="columna">
                <input class="casilla izquierda"        type="button" id="_6_1" name="_6_1" value="<?php echo $array[45];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_6_2" name="_6_2" value="<?php echo $array[46];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_6_3" name="_6_3" value="<?php echo $array[47];?>" onclick="cambiaNumero(this)">
                <input class="casilla izquierda"        type="button" id="_6_4" name="_6_4" value="<?php echo $array[48];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_6_5" name="_6_5" value="<?php echo $array[49];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_6_6" name="_6_6" value="<?php echo $array[50];?>" onclick="cambiaNumero(this)">
                <input class="casilla izquierda"        type="button" id="_6_7" name="_6_7" value="<?php echo $array[51];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_6_8" name="_6_8" value="<?php echo $array[52];?>" onclick="cambiaNumero(this)">
                <input class="casilla derecha"          type="button" id="_6_9" name="_6_9" value="<?php echo $array[53];?>" onclick="cambiaNumero(this)">
             </div>

             <div class="columna">
                <input class="casilla arriba izquierda" type="button" id="_7_1" name="_7_1" value="<?php echo $array[54];?>" onclick="cambiaNumero(this)">
                <input class="casilla arriba"           type="button" id="_7_2" name="_7_2" value="<?php echo $array[55];?>" onclick="cambiaNumero(this)">
                <input class="casilla arriba"           type="button" id="_7_3" name="_7_3" value="<?php echo $array[56];?>" onclick="cambiaNumero(this)">
                <input class="casilla arriba izquierda" type="button" id="_7_4" name="_7_4" value="<?php echo $array[57];?>" onclick="cambiaNumero(this)">
                <input class="casilla arriba"           type="button" id="_7_5" name="_7_5" value="<?php echo $array[58];?>" onclick="cambiaNumero(this)">
                <input class="casilla arriba"           type="button" id="_7_6" name="_7_6" value="<?php echo $array[59];?>" onclick="cambiaNumero(this)">
                <input class="casilla arriba izquierda" type="button" id="_7_7" name="_7_7" value="<?php echo $array[60];?>" onclick="cambiaNumero(this)">
                <input class="casilla arriba"           type="button" id="_7_8" name="_7_8" value="<?php echo $array[61];?>" onclick="cambiaNumero(this)">
                <input class="casilla arriba derecha"   type="button" id="_7_9" name="_7_9" value="<?php echo $array[62];?>" onclick="cambiaNumero(this)">
             </div>

             <div class="columna">
                <input class="casilla izquierda"        type="button" id="_8_1" name="_8_1" value="<?php echo $array[63];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_8_2" name="_8_2" value="<?php echo $array[64];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_8_3" name="_8_3" value="<?php echo $array[65];?>" onclick="cambiaNumero(this)">
                <input class="casilla izquierda"        type="button" id="_8_4" name="_8_4" value="<?php echo $array[66];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_8_5" name="_8_5" value="<?php echo $array[67];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_8_6" name="_8_6" value="<?php echo $array[68];?>" onclick="cambiaNumero(this)">
                <input class="casilla izquierda"        type="button" id="_8_7" name="_8_7" value="<?php echo $array[69];?>" onclick="cambiaNumero(this)">
                <input class="casilla"                  type="button" id="_8_8" name="_8_8" value="<?php echo $array[70];?>" onclick="cambiaNumero(this)">
                <input class="casilla derecha"          type="button" id="_8_9" name="_8_9" value="<?php echo $array[71];?>" onclick="cambiaNumero(this)">
             </div>

             <div class="columna">
               <input class="casilla abajo izquierda"   type="button" id="_9_1" name="_9_1" value="<?php echo $array[72];?>" onclick="cambiaNumero(this)">
               <input class="casilla abajo"             type="button" id="_9_2" name="_9_2" value="<?php echo $array[73];?>" onclick="cambiaNumero(this)">
               <input class="casilla abajo"             type="button" id="_9_3" name="_9_3" value="<?php echo $array[74];?>" onclick="cambiaNumero(this)">
               <input class="casilla abajo izquierda"   type="button" id="_9_4" name="_9_4" value="<?php echo $array[75];?>" onclick="cambiaNumero(this)">
               <input class="casilla abajo"             type="button" id="_9_5" name="_9_5" value="<?php echo $array[76];?>" onclick="cambiaNumero(this)">
               <input class="casilla abajo"             type="button" id="_9_6" name="_9_6" value="<?php echo $array[77];?>" onclick="cambiaNumero(this)">
               <input class="casilla abajo izquierda"   type="button" id="_9_7" name="_9_7" value="<?php echo $array[78];?>" onclick="cambiaNumero(this)">
               <input class="casilla abajo"             type="button" id="_9_8" name="_9_8" value="<?php echo $array[79];?>" onclick="cambiaNumero(this)">
               <input class="casilla abajo derecha"     type="button" id="_9_9" name="_9_9" value="<?php echo $array[80];?>" onclick="cambiaNumero(this)">
            </div>


        <div class="columna numeros">
            <input  type="button" id="_1" name="_1" value="1" onclick="getValor(this)">
            <input  type="button" id="_2" name="_2" value="2" onclick="getValor(this)">
            <input  type="button" id="_3" name="_3" value="3" onclick="getValor(this)">
            <input  type="button" id="_4" name="_4" value="4" onclick="getValor(this)">
            <input  type="button" id="_5" name="_5" value="5" onclick="getValor(this)">
            <input  type="button" id="_6" name="_6" value="6" onclick="getValor(this)">
            <input  type="button" id="_7" name="_7" value="7" onclick="getValor(this)">
            <input  type="button" id="_8" name="_8" value="8" onclick="getValor(this)">
            <input  type="button" id="_9" name="_9" value="9" onclick="getValor(this)">
        </div>


<?php /* Cuando esté hecho
        require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/JuegosRepositorio.inc';
        $casillas=(new JuegosRepositorio())->introducirSudoku(); */ ?>




    </div>



</body>

</html>

<script>


var num=0;  
var numBorradas=0;
var casillasRellenadas=26;

var numcasillasrellenadas=document.getElementById('numcasillasrellenadas');
//alert(numcasillasrellenadas.value);

   
// Función que asigna 22 números a las casillas en modo random, comprueba horizontal, vertical y cuadro
function rellenarInicio(){
var escritos=0;

    while(escritos<25){

        var num=Math.floor(Math.random() * (10 - 1)) + 1;

        var celdaHorizontal=Math.floor(Math.random() * (10 - 1)) + 1;       //Horizontal
        var celdaVertical=Math.floor(Math.random() * (10 - 1)) + 1;         //Vertical

        var id= "_" + celdaHorizontal + "_" + celdaVertical ;
        var cont=document.getElementById(id);

        numAzar(num);

        if(compruebaHorizontal(num, celdaHorizontal) && compruebaVertical(num, celdaVertical) && compruebaCuadro(num, celdaHorizontal, celdaVertical)){
            cont.innerHTML=num;               
            cont.value=num;
            escritos++;
        }
    }
}


// Función que recoge un boton de número y extrae el value
function getValor(obj){
    var cont=document.getElementById(obj);
    num=obj.value;
}


// Función que asigna a núnero el número extraido con un random
function numAzar(numRandom){
num=numRandom;
}


// Función que modifica el valor de un botón, param el boton a modificar y el boton con el valor nuevo
function cambiaNumero(obj){
    var cont=document.getElementById(obj);
    
    var numFilaString= obj.id;
    var cascos=numFilaString.split("");
    numFila=cascos[1];
    numColumna=cascos[3];

    if(obj.value!=""){
        borrarNumero(obj);
        casillasRellenadas--;
            //alert(casillasRellenadas);

    }else{

        if(compruebaHorizontal(num, numFila) && compruebaVertical(num, numColumna) && compruebaCuadro(num, numColumna, numFila)){
            obj.innerHTML=num;               
            obj.value=num;  
            //alert("1 número menos");

            casillasRellenadas++;
            //alert(casillasRellenadas);
        }else{
            alert("No válido");
        }
    }

    if(casillasRellenadas==81){
        alert("Bravo, has ganado!");
    }
}



// Función que comprueba el cuadro
function compruebaCuadro(num, numColumna, numFila ){

var validez=true;
var vecesJ=0;


 if(numColumna<4){
    primeraI=1;
 }else if((numColumna<7)){
    primeraI=4;
 }else{
    primeraI=7
 }

 if(numFila<4){
    primeraJ=1;
 }else if((numFila<7)){
    primeraJ=4;
 }else{
    primeraJ=7
 }

for(var i=primeraI; i<primeraI+3; i++){
var vecesJ=0;
    for(var j=primeraJ; j<primeraJ+3; j++){

        var id= "_" + j + "_" + i ;

        var valor=document.getElementById(id);

        vecesJ++;
        if(vecesJ==3){
            vecesJ=0;
        }

        if(num==valor.value){
            validez= false;
        break;
        }
    }
 }
return validez;
}


// comprueba la horizontal
function compruebaHorizontal(num, numFila){

    var unaVez=0;
    var validez=true;

    for(var i=1; i<=9; i++){

    var id= "_" + numFila + "_" + i ;
    var valor=document.getElementById(id);
    

    if(num==valor.value){
        unaVez++;

if(unaVez==1){
    validez= false;
   // alert("Repetido");
    // vidas--
    break;
}
}

}
return validez;
}


// comprueba la vertical
function compruebaVertical(num, numColumna){
var unaVez=0;
var validez=true;

for(var i=1; i<=9; i++){

var id= "_" + i + "_" + numColumna ;

var valor=document.getElementById(id);

if(num==valor.value){
unaVez++;

if(unaVez==1){
    validez= false;
    // vidas--
    break;
}
   
}
}
return validez;

}







// Función que va a contabilizar el tiempo de juego de un jugador
var n = 10000;
var l = document.getElementById("number");
window.setInterval(function(){
  l.innerHTML = n;
  n--;
},1000);


var soluciones = new Array();
//var soluciones = [];
// Función que recoge toda la info del sudoku completado y lo guarda en un array
// https://tutobasico.com/asociativos-javascript/
function solucion(){
    /*var id= "_" + i + "_" + j ;
    var obj =  new Array();
    obj[id] = document.getElementById(id).value;
    soluciones.push(obj);
    alert(soluciones[0]["_1_1"]);
    */

    for(var i=1; i<10; i++){

    for(var j=1; j<10; j++){

        var id= "_" + i + "_" + j ;
        var obj = {};
        obj[id] = document.getElementById(id).value;
        soluciones.push(obj);
       
        }
    }
 /*alert(soluciones[0]["_1_1"]);*/
/*alert(soluciones[0][id]);
 2: {_1_3: "7"}*/


 prepararDefinitivo(soluciones);
 }

// Función que elimina numeros de casillas, recibe un array y el número de casillas a limpiar
function prepararDefinitivo(soluciones){

var numsBorrados=0;
var posi=0;


   while(numsBorrados<60){

        var celdaHorizontal=Math.floor(Math.random() * (10 - 1)) + 1;       //Horizontal
        var celdaVertical=Math.floor(Math.random() * (10 - 1)) + 1;         //Vertical

        var id= "_" + celdaHorizontal + "_" + celdaVertical ;
        var cont=document.getElementById(id);



        if(cont.value!=""){
            borrarNumero(cont); // borra el value pero no el dato en el array


            while(posi<81){
                delete (soluciones[posi][id]);          // Solo borra si hay uno que coincida
                posi++;
            }
          
        }
        numsBorrados++;         // si lo pongo arriba casca
    }
}

// Función que borra un valor
function borrarNumero(obj){
    obj.value="";
    numBorradas++;
}


//Enviar si se ha completado todo (variable=>Completo)
//En el momento de enviar se para la puntuación y se le agrega al usuario

//Parte derecha el que quiera solucionar el usuario

    </script>


<style>

#wrapper {
    width: 288px;
    margin:0 auto;
    text-align: center;
}

nav{
    display: flex;
    margin-bottom: 1em;
}

nav input{
    border-bottom:4px black solid;
    border-right:4px black solid;
    margin-right: 0.3em;
}


.columna {
    display: flex;
   
}

input{
    width: 32px;
    height: 32px;
    font-size: 2em;
    line-height: 1px;
    border: 1px solid black;
}

.arriba {
    border-top: black 3px solid;
}

.abajo {
    border-bottom: black 3px solid;
}

.izquierda {
    border-left: black 3px solid;
}

.derecha {
    border-right: black 3px solid;
}

.numeros {

    margin-top: 1em;
}


.numeros input {
    border: rebeccapurple 1px solid;
    font-size: 2em;
    line-height: 1px;
    width: 32px;
    height: 32px;
    margin: 0px;
}


#number {
    font-size: 16px;
    color: #434343;
    border-bottom: rebeccapurple 1px solid;
    margin-left: 1.2em;
    height: 16px;
}
</style>