<!--Tabla Negra-->
    <div style="text-align:center">
            <div id="contenedor_menudeldia">
                <img src="web/imagenes/menu6.jpg" />
                <!-- <div class="texto-encima">Texto</div>-->
                <div class="centrado">
                    <h6>PRIMEROS PLATOS (a elegir entre):</h6> 
                        <ul>
                            <li><?php echo $infoMenu[0]->primero1; ?></li>
                            <li><?php echo $infoMenu[0]->primero2; ?></li>
                            <li><?php echo $infoMenu[0]->primero3; ?></li>
                            <li><?php echo $infoMenu[0]->primero4; ?></li>
                            <li><?php echo $infoMenu[0]->primero5; ?></li>
                        </ul>

                    <h6>SEGUNDOS PLATOS (a elegir entre):</h6> 
                        <ul>
                            <li><?php echo $infoMenu[0]->segundo1; ?></li>
                            <li><?php echo $infoMenu[0]->segundo2; ?></li>
                            <li><?php echo $infoMenu[0]->segundo3; ?></li>
                            <li><?php echo $infoMenu[0]->segundo4; ?></li>
                            <li><?php echo $infoMenu[0]->segundo5; ?></li>
                        </ul>

                 <!--   <h6>Postres Caseros</h6> 
                    <ul>
                        <li><?php echo $infoMenu[0]->postre1; ?></li>
                        <li><?php echo $infoMenu[0]->postre2; ?></li>
                        <li><?php echo $infoMenu[0]->postre3; ?></li>
                    </ul> 
-->

                    <hr style="color: white; margin:0em; height:2px">

                    <p id="precio" style=""><?php echo $infoMenu[0]->precio; ?>Є <?php echo $infoMenu[0]->iva_incluido; ?></p>
                        <p id="incluido" style=" font-size:0.9em;"><?php echo $infoMenu[0]->incluido; ?></p>
                   


                        <!--<p style="font-size: 0.6em; margin-top:0.5em;">Bebida, pan y café incluido <br>(Tinto, Blancoe, Rosado, Sidra o Agua)</p>-->
                </div>

                <div class="centrado_variar">
                        <p style="color: white; text-decoration: underline; font-size: 0.6em; margin-top:1em;">*Los platos pueden variar ligeramente*</p>
                </div>
            </div>
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
    transform: translate(-50%, -50%); width:100%; margin-top: -0.4em;
}

.centrado_variar{
    position: absolute;
    top: 90%;
    left: 50%;
    transform: translate(-50%, -50%); width:100%; margin-top: 1.5em;
}

#contenedor_menudeldia img{max-width: 350px;}
#contenedor_menudeldia h6{margin-bottom: 0.2em; color:#C3A371;}
#contenedor_menudeldia ul{padding-left: 0rem;     margin-bottom: 0.1em;}
#contenedor_menudeldia li{font-size: 0.68em; color: white;}
#contenedor_menudeldia p{margin: 0em; color: white}
#precio{margin-left: 4.5em; margin-top: 2em; font-weight: bold; text-decoration: underline; font-size:0.6em;}
hr{margin-bottom: 5em;}
</style>