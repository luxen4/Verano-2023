<!--Inicio Cupón Descuento-->
<?php 

    if(!empty($bar_rest->dto)){?>
        <p class="texto-vertical-3">
            <div style="margin: 0.8em;">
                <input class="boton_cupon" style="border: none; border-radius:0.3em" id="<?php echo $bar_rest->ref_negocio; ?>" type="submit" name="hacercupon" 
                value="Descuento <?php echo $bar_rest->dto  ?> %" onclick="marcarReferencia(this)">                              
            </div>
        </p><?php
    } 

?>
<!--Fín Cupón Descuento-->
 
<style>
.container{padding: 1em;}

.texto-vertical-1 {
writing-mode: vertical-lr;
}
 
/*.texto-vertical-2 {
writing-mode: vertical-lr;
transform: rotate(180deg);
}*/
.texto-vertical-3{
width:50px;
word-wrap: break-word;
text-align:center;


}
.boton_cupon{
border: none; /*padding-left: 2em;*/
transform: rotate(-90deg);

background-color: #641451;
color:white;}

.boton_cupon:hover{
color: #212721;
background-color: green;
}

@media only screen and (min-width: 200px) and (max-width: 451px) {
    .boton_cupon{margin: 3.5em -4.2em;}
}

@media only screen and (min-width: 452px) and (max-width: 3000px) {
    .boton_cupon{margin: 3.5em -6em;}
}


</style>