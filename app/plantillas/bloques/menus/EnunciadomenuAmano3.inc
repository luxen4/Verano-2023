<!-----------------------------------------------Inicio del Tipo de menu-1---//
    --- 5 Primeros, 5 Segundos, pan etc, precio y comentário -->

<?php

if(!empty($menuSoloPopup)){
    if($menuSoloPopup!=0){
        if(!empty($infoMenu[0])){?>

<div style="text-align:center">
  <div id="contenedor_menudeldia">
            <img src="web/imagenes/menu3.jpg" />
            <!-- <div class="texto-encima">Texto</div>-->
            <div class="centrado">
                <h6>Primeros</h6> 
                    <ul>
                        <li>Ensalada queso cabra</li>
                        <li>Ensalada Mixta</li>
                        <li>Crema de verduras</li>
                        <li>Croquetas Variadas</li>
                        <li>Marmitaco/Gazpacho</li>
                    </ul>

                <h6>Segundos</h6> 
                    <ul>
                        <li>Costilla Iberica</li>
                        <li>Cruceta Iberica</li>
                        <li>Entrecot de Buey</li>
                        <li>Pescado del día</li>
                    </ul>

                <h6>Postre, pan y vino</h6> 
         

                    <p id="precio" style="">16Є IVA INCLUIDO</p>
                   
            </div>

            <div class="centrado_variar">
                    <p style="color: white; text-decoration: underline; font-size: 0.6em; ">*Los platos pueden variar ligeramente*</p>
            </div>
        </div>
</div>

        

<?php }}} unset($menuSoloPopup); ?>

<style>
    .haga_login p{color:red; font-size:1.2em; text-align:center; margin: 0 auto;}
    #contenedor_menudeldia{
    position: relative;
    display: inline-block;
    text-align: center;
}
.texto-encima{
    position: absolute;
    top: 10px;
    left: 100px; 
}
.centrado{
    position: absolute;
    top: 50%; 
    left: 50%;
    transform: translate(-50%, -50%); width:100%; margin-top: 2em;
}

.centrado_variar{
    position: absolute;
    top: 90%;
    left: 50%;
    transform: translate(-50%, -50%); width:100%; margin-top: 1.3em;
}

#contenedor_menudeldia img{max-width: 350px;}
#contenedor_menudeldia h6{margin-bottom: 0.2em; color: #CFA87C;}
#contenedor_menudeldia ul{padding-left: 0rem;     margin-bottom: 0.5em;}
#contenedor_menudeldia li{font-size: 0.7em; color: white;}
#contenedor_menudeldia p{margin: 0em; color: white}
#precio{margin-left: 4.5em; margin-top: 2em; font-weight: bold; text-decoration: underline; font-size:0.6em; color: green}

</style>