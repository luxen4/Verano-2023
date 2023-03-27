<!-----------------------------------------------Inicio del Tipo de menu-1---//
    --- 4 Primeros, 3 Segundos, 3 postres, precio, el cosas Incluidas, y comentário -->


<div style="text-align:center">
  <div id="contenedor_menudeldia">
            <img src="web/imagenes/menu5.jpg" />
            <!-- <div class="texto-encima">Texto</div>-->
            <div class="centrado">
                <h6>Primeros</h6> 
                    <ul>
                        <li><?php echo $infoMenu[0]->primero1?></li>
                        <li><?php echo $infoMenu[0]->primero2?></li>
                        <li><?php echo $infoMenu[0]->primero3?></li>
                    </ul>

                <h6>Segundos</h6> 
                    <ul>
                        <li><?php echo $infoMenu[0]->segundo1?></li>
                        <li><?php echo $infoMenu[0]->segundo2?></li>
                        <li><?php echo $infoMenu[0]->segundo3?></li>
                    </ul>

                <h6>Postres Caseros</h6> 
                <ul>
                        <li><?php echo $infoMenu[0]->postre1?></li>
                        <li><?php echo $infoMenu[0]->postre2?></li>
                        <li><?php echo $infoMenu[0]->postre3?></li>
                </ul> 

                    <p id="precio" style="margin-top:1.5em; font-weight: bold; color:#FFE42E">19.80Є <br> IVA INCLUIDO</p>
                    <p style="margin-top:0.5em; color:#23F0FF; font-size: 0.7em;">Bebida, pan y café incluido</p>
            </div>

            <div class="centrado_variar">
                    <p style="color:white; text-decoration: underline; font-size: 0.5em; margin-top:-4em; font-weight: bold;">*Los platos pueden variar ligeramente*</p>
            </div>
        </div>
</div>

<?php unset($_SESSION['segundaVuelta']);?>

        

<?php  unset($menuSoloPopup); ?>

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
    transform: translate(-50%, -50%); width:100%; margin-top: -0.5em;
}

.centrado_variar{
    position: absolute;
    top: 90%;
    left: 50%;
    transform: translate(-50%, -50%); width:100%; margin-top: 0.5em;
}

#contenedor_menudeldia img{max-width: 350px;}
#contenedor_menudeldia h6{margin-bottom: 0em; color: #23F0FF;}
#contenedor_menudeldia ul{padding-left: 0rem; margin-bottom: 0.1em;}
#contenedor_menudeldia li{font-size: 0.6em; color: #F0EE11;}
#contenedor_menudeldia p{margin: 0em; color: #212721}
#precio{margin-left: 4.5em; margin-top: 2em; font-weight: bold; text-decoration: underline; font-size:0.6em; }

</style>