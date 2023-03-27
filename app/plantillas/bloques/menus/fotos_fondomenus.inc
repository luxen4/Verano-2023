<?php
use miId\fuente\Repositorio\MenuRepositorio;
use miId\fuente\Repositorio\IpremotainterfaceRepositorio;

require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/MenuRepositorio.inc'; 
$todosModelosMenus = (new MenuRepositorio())->todosModelosMenus2("Premium");//  var_dump($todosModelosMenus); ?>

<!--Necesito distinguir los de pago y los de no pago, 
en la tabla meter el atributo pago y ya después de ahí que filtre y saque unos u otros -->

<div id="menus_premium">
    <h4 id="">Seleccione el fondo!</h4>
 
    <?php 
    
    echo $_SERVER['REMOTE_ADDR'] . "<br>";
    // Meter la ip en la base de datos
    require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Repositorio/IpremotainterfaceRepositorio.inc'; 

// Extraer la última y configurar la siguiente     IPIF001 última  
$ultima_ref_IpRemota = (new IpremotainterfaceRepositorio())->ultimaRelacionInterfaceRemota();
//var_dump($ultima_ref_IpRemota[0]->maxima_ref);die();

if($ultima_ref_IpRemota[0]->maxima_ref==null){
$num="1";
$ref_RelacionInterfaceRemota="IPIF" . $num;
}else{
$num= explode( 'IPIF', $ultima_ref_IpRemota[0]->maxima_ref );
$ref_RelacionInterfaceRemota="IPIF" . intval($num[1])+1;
}


$datos['ref_RelacionInterfaceRemota']=$ref_RelacionInterfaceRemota;                                 // OK

$datos['ref_IpRemota']="IP" . $_SERVER['REMOTE_ADDR'];                                              // OK
$link = $_SERVER['REQUEST_SCHEME'] . '://' . $_SERVER['HTTP_HOST'].$_SERVER['REQUEST_URI'];         // OK
$arrayLink= explode( '=', $link );
$datos['direccion_Interface']=$arrayLink[1];  // Nombre

$ref_interface = (new IpremotainterfaceRepositorio())->refInterface($datos['direccion_Interface']); 
$datos['ref_Interface']=$ref_interface;

$insertarRelacion = (new IpremotainterfaceRepositorio())->insertRelacion($datos);


var_dump($menu_premium);

?>
        <div style="" class="row"><?php 
            $posicionMenu=1;
            foreach($todosModelosMenus as $modeloMenu){
                    $clase="MOD-".$posicionMenu;?>

                <div id="<?php echo $clase; ?>" style="padding: 0em;" class="col-xl-3 text-center col-lg-3 col-md-3 col-sm-3 col-4">

                    <div>
                        
                  


                    <img id="<?php echo $clase?>" class='foto_fondomenu <?php if($menu_premium=="SI"){?>MOD-7<?php } ?>'   
                        onmouseover="fotoEjemplo(this)"
                        onclick="<?php 
                        if($menu_premium!='SI'){ ?> 

                        mostrar2(),<?php  } ?> 
                        
                        marcarModeloFormulario(this)" 
                        src="web/imagenes/<?php echo $modeloMenu->nombre_modelomenu ?>" alt="Fondo menue">
                    </div>

                    <div>
                    <!-- 
                        <input style="width: 2em;" id="<?= $modeloMenu->ref_modelomenu?>" type="checkbox" checked name="datos[ref_modelomenu]"
                        value="<?= $modeloMenu->ref_modelomenu;?>" > 
                        <br>-->

                        <div class="" style="margin-top: -1.5em; margin-left:-5em; ">
                            <a href="../Verano-2022/web/imagenes/<?php echo $modeloMenu->nombre_modelomenu; ?>"><i style="color:white;" class="fa-solid fa-magnifying-glass"></i></a>
                        </div>
                        <label style="margin: 1em;" for="<?= $modeloMenu->ref_modelomenu?>"> <?php echo $modeloMenu->ref_modelomenu?></label>
                       
                    </div>
                    

                </div> 
                
                <?php $posicionMenu++;
            }?>
        </div>
</div>        
<!--<div class="g" style='background-image:url("/Verano-2022/app/plantillas/bloques/menus/logo.jpg"); background-size: cover;'>d</div>-->




<script>


  function mostrar2(){
    alert("Debe hacerse Premium para seleccionar uno de estos diseños a medida!");
  }

// Función que inserta en la casilla el modelo de formulario a rellenar
function marcarModeloFormulario(e){
   $("#menu_MOD-7").toggle();
   var modeloFormulario=e.id;
var seleccionar=document.getElementById('modelomenu'); 
seleccionar.value=modeloFormulario;

var primero_plato4=document.getElementById('primero_plato4');
var primero_plato5=document.getElementById('primero_plato5');

var segundo_plato4=document.getElementById('segundo_plato4');
var segundo_plato5=document.getElementById('segundo_plato5');

var postres_postre1=document.getElementById("postres_postre1");
var postres_postre2=document.getElementById("postres_postre2");
var postres_postre3=document.getElementById("postres_postre3");


//9864321
if(modeloFormulario=="MOD-9" || modeloFormulario=="MOD-8" || modeloFormulario=="MOD-6" || modeloFormulario=="MOD-4" 
|| modeloFormulario=="MOD-3" || modeloFormulario=="MOD-2" || modeloFormulario=="MOD-1"){ primero_plato4.style.display="block";
}else{ primero_plato4.style.display="none";}

//6421
if(modeloFormulario=="MOD-6" || modeloFormulario=="MOD-4" || modeloFormulario=="MOD-2" || modeloFormulario=="MOD-1"){ primero_plato5.style.display="block";
}else{ primero_plato5.style.display="none";}

//!=0
if(modeloFormulario=="MOD-0" ||  modeloFormulario=="MOD-7" ){ segundo_plato4.style.display="none";
}else{ segundo_plato4.style.display="block";}

//97621
if(modeloFormulario=="MOD-9" || modeloFormulario=="MOD-6" || modeloFormulario=="MOD-2" || modeloFormulario=="MOD-1"){
    segundo_plato5.style.display="block"; }else{segundo_plato5.style.display="none";}

//982 ok
if(modeloFormulario=="MOD-9" || modeloFormulario=="MOD-8" || modeloFormulario=="MOD-2"){ 
    postres_postre1.style.display="block"; }else{ postres_postre1.style.display="none";}

//982 ok
if(modeloFormulario=="MOD-9" || modeloFormulario=="MOD-8" || modeloFormulario=="MOD-2"){ postres_postre2.style.display="block";
}else{ postres_postre2.style.display="none";}

//82 OK 
if(modeloFormulario=="MOD-8" || modeloFormulario=="MOD-2"){ postres_postre3.style.display="block";
}else{ postres_postre3.style.display="none";}

}

</script>

<style>
#menus_premium h6{margin: 2em;}
 
</style>


<style>
  #menu_MOD-7{display: none;}    
</style>

<script>
function pruebita(){
    $("#menu_MOD-7").toggle(); 
}
</script> 
 