<!-----------------------------------------------Inicio del Tipo de menu-1---//
    --- 5 Primeros, 5 Segundos, pan etc, precio y comentário -->
   
<div style="text-align:center">
        <div id="contenedor_menudeldia">
            <img src="web/imagenes/menu1.jpg" />
            <!-- <div class="texto-encima">Texto</div>-->
            <div class="centrado">
                <h6>Primeros</h6> 
                    <ul>
                        <li><?php echo $infoMenu[0]->primero1?></li>
                        <li><?php echo $infoMenu[0]->primero2?></li>
                        <li><?php echo $infoMenu[0]->primero3?></li>
                        <li><?php echo $infoMenu[0]->primero4?></li>
                        <li><?php echo $infoMenu[0]->primero5?></li>
                    </ul>

                <h6>Segundos</h6> 
                    <ul>
                        <li><?php echo $infoMenu[0]->segundo1?></li>
                        <li><?php echo $infoMenu[0]->segundo2?></li>
                        <li><?php echo $infoMenu[0]->segundo3?></li>
                        <li><?php echo $infoMenu[0]->segundo4?></li>
                        <li><?php echo $infoMenu[0]->segundo5?></li>
                    </ul>

                    <p><?php echo $infoMenu[0]->incluido?></p>
                    <P style="margin-left: 4.5em; font-weight: bold; text-decoration: underline;"><?php echo $infoMenu[0]->precio?>Є <br><?php echo $infoMenu[0]->iva_incluido?></P>
            </div>

            <div class="centrado_variar">
                    <p style="color: white; text-decoration: underline;"><?php echo $infoMenu[0]->comentario?></p>
            </div>
        </div>


<?php  unset($menuSoloPopup); ?>
</div>
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
    transform: translate(-50%, -50%); width:100%; margin-top: 1.8em;
}

.centrado_variar{
    position: absolute;
    top: 90%;
    left: 50%;
    transform: translate(-50%, -50%); width:100%; margin-top: 1.8em;
}

#contenedor_menudeldia img{max-width: 350px;}
#contenedor_menudeldia h6{margin-bottom: 0.2em; color: red;}
#contenedor_menudeldia ul{padding-left: 0rem;     margin-bottom: 0.5em;}
#contenedor_menudeldia li{font-size: 0.7em;}
#contenedor_menudeldia p{margin: 0em;}

</style>