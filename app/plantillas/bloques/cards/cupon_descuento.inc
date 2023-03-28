<!--Inicio Cupón Descuento-->
<?php 

    if(!empty($bar_rest->dto)){?>
        <p class="texto-vertical-3">
            <div>
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
/*writing-mode: vertical-lr;*/
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
border: none; 
margin: 0.5em;
background-color: #641451;
color:white;}

.boton_cupon:hover{
color: #212721;
background-color: green;
}



</style>