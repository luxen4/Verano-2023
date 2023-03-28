<?php  use miId\fuente\Repositorio\AgenciaViajesRepositorio; ?>
  <div class="row">
        <div class="col-xl-12 text-center">
            <h4>Todas las Agencias de Viajes</h4>
        </div>
    </div>  
<table class="table table-striped table-bordered table-hover">
    <thead><th style="vertical-align: middle;">Agencia <br><?php
            if(empty($_SESSION['perfil'])){ ?> 
               <?php /* <a style="text-decoration: underline;" class="nav-link" href="index.php?ctl=loginusuarios" ><i class="fas fa-users"></i> Haga Loguin para hacerse Socio!</a>*/?><?php
            } ?>
   
</th></thead>

    <tbody><?php 

        $numAgencias=count($agenciaViajes);

        for($i=0; $i<$numAgencias; $i++){ $cod_AgenciaViajes=$agenciaViajes[$i]->cod_AgenciaViajes; $ref_AgenciaViajes=$agenciaViajes[$i]->ref_AgenciaViajes; ?>
        </tr> 



        
        <td style="vertical-align: middle;">

        <div style="margin-top: 1em;" > 
            <?php include_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/AgenciaViajesRepositorio.inc'; ?>
            <?php $ruta_LogoAgenciaViajes = (new AgenciaViajesRepositorio())->rutaLogoAgenciaViajes($ref_AgenciaViajes); 
            //var_dump($ruta_LogoAgenciaViajes);
            if($ruta_LogoAgenciaViajes[0]->logo_AgenciaViajes != NULL){ ?>
            <img  onclick="qwert()" style="width:100px; height: 50px;" src="web/imagenes/AgenciasViajes/<?= $ruta_LogoAgenciaViajes[0]->logo_AgenciaViajes; ?>" alt="Logo Agencia de Viajes"><?php

            }else{ ?>
                <span class="nombre_AgenciaViajes">  <?= pasarUtf8($agenciaViajes[$i]->nombre_Agencia);?>
                                
                               
                        
                        </span><?php
            } ?>      
        </div>

            <div style="margin-top: 0.5em;"><?php
                    if(!empty($_SESSION['perfil'])){ 
                        if($_SESSION['perfil']['roll']=="cliente"){ 
                            // Preguntar si se es socio o no para cambiar el botón a No ser socio ?>
                        <input class="boton_VerHorario" type="button" name="hecerse_socio" onclick="hacerseSocio('<?php echo ($ref_AgenciaViajes); ?>','<?php echo $_SESSION['perfil']['ref_Cliente']; ?>')" value="Hacerse Socio">
                        <input class="boton_VerHorario" type="button" name="hecerse_socio" onclick="hacerseSociovvvvvvvv('<?php echo ($ref_AgenciaViajes); ?>','<?php echo $_SESSION['perfil']['ref_Cliente']; ?>')" value="No ser Socio(desarrollar)">
                        
                        <?php 
                        
                    }else{ 
                        }
                    }else{ ?>
                        <?php
                
                    }?>
                            
                <a class="boton_VerHorario" href="#Pop_UP_horario_AgenciaViajes" onclick="seleccionaRefAgenciaViajes2(<?php echo $ref_AgenciaViajes; ?>,'<?php echo ($agenciaViajes[$i]->nombre_Agencia); ?>')" data-toggle="modal" > Ver Horario</a><?php 
                    include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/popups/Pop_UP_horario_AgenciaViajes.inc'; // Tabla grande ?>                    
                    <input id="<?php echo ($ref_AgenciaViajes); ?>" type="checkbox" name="datos[ref_AgenciaViajes]" hidden value="<?= $ref_AgenciaViajes; ?>">
                    <input class="boton_VerHorario" type="submit" name="ver_folleto" onclick="seleccionaRefAgenciaViajes(<?php echo ($ref_AgenciaViajes); ?>)" value="Ver Folleto">
                    <!-- #B3A299 #D5BAA9 #B6A498 -->
            </div>
            
            <div style="margin-top: 1em;">
                <h6><?= pasarUtf8($agenciaViajes[$i]->direcion) . "<br>" . pasarUtf8($agenciaViajes[$i]->localidad);?></h6>
                <h6><?= "Tel: " . pasarUtf8($agenciaViajes[$i]->telefono_Agencia); ?></h6>   
                <h6><?= "Salida desde:<br>" . pasarUtf8($agenciaViajes[$i]->lugar_SalidaPredeterminado); ?></h6>
            </div>
        
    </td>



        



    <script>
    function qwert(){
        alert ("desarrollar los destinos");
    }
</script>

<script>
// Función que selecciona el checkbox Agencia de Viajes e inserta nombre y horario en el Pop_Up
function hacerseSocio(ref_AgenciaViajes,ref_Cliente){
    var parametros = {"ref_AgenciaViajes":ref_AgenciaViajes,"ref_Cliente":ref_Cliente};                // Hago un Ajax para meterlo en su id dentro del Pop-up 

  $.ajax({
    data: parametros, 
    url: "/Verano-2023/app/ajax/hacerse_Socio.php",
    type: "POST",

    beforesend:function(){
        $('#mostrar_mensaje').html("Mensaje antes de enviar!");
    },

    success: function(mensaje)
    {

  //  var mensaje= mensaje.replace(/ /g, "");          // Elimina los espacios
   var mensaje= mensaje.replace(/[\n\r]/g, '');              // Eliminar el retorno de carro
    alert(mensaje);
  //  window.location.href="index.php?ctl=mostraragenciaviajes";
//  window.location.href="index.php?ctl=inicio/#situarprimerarticulo";
    //  $('#horario_AgenciaViajes').html(mensaje);
    }
   });

}


</script>






     
        <?php

        if (!empty($_SESSION['perfil'])) {
            if ($_SESSION['perfil']['roll']=="admin") {?>

        <td>
            <label for="<?=$cod_AgenciaViajes;?>">
            <input type="checkbox" id="<?=$cod_AgenciaViajes;?>" name="datos[<?=$cod_AgenciaViajes;?>]" value="<?=$cod_AgenciaViajes;?>"> Selecionar</label>
        </td>

        </tr> 
        <?php };

        }

        } ?>
    </tbody>
  
</table>



<style>
h4{text-decoration: underline; margin: 0.5em;}
table{max-width: 1000px; margin: auto;}

th{   vertical-align: middle;}

.boton_VerHorario{
    color:#203866; text-decoration: underline;  
    border-radius: 0.5em; font-weight:bold;
    margin: 0 4px 5px 0;
    padding: 4px 8px;
    background: #E7FAFE;
    border: 1px solid black;
}

.boton_VerHorario:hover{background-color: black; color:white;  transition: background 2s, color 0.3s, left 0.5s}


@media only screen and (min-width: 300px) and (max-width: 4000px) {
   .nombre_AgenciaViajes{
    color: #006293; font-size: 2em; font-weight: bold; text-decoration: underline;
   }
   th{font-size: 1em; color: #006293;}
}

@media only screen and (min-width: 330px) and (max-width: 4000px){
td {
  
    vertical-align: middle;
    
}
}


@media only screen and (min-width: 310px) and (max-width: 510px){
td input {
    transform: scale(1);
}





}


@media only screen and (min-width: 513px) and (max-width: 809px){
.boton_VerHorario {
    font-size: 1em;
}
}
</style>