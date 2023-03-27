<?php 
use miId\fuente\Repositorio\PropietarioRepositorio;
use miId\fuente\Repositorio\MenuRepositorio;
use miId\fuente\Repositorio\ComerRepositorio;

?>

<form action="" method="POST">

<div id="menu_MOD-7" class="menu_MOD-7 menu_MOD">

    <div class="row">
        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12 contenedor_partemenu">
        </div>
    </div>

<div class="row">

    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12 contenedor_partemenu">

    <h4><?php echo ( '"'. $nombreNegocio[0]->nombre) . '"<br>Rellene su Menú del día!'; ?></h4>
        
        <input id="<?= $_SESSION['perfil']['ref_negocio'];?>" type="checkbox" hidden checked name="datos[ref_negocio]" value="<?= $_SESSION['perfil']['ref_negocio'];?>" >
        
        <?php 

        // Si no ha pagado, se le asigna el modelo de pizarra básico

        if($menu_premium=="NO"){?>
            <input id="modelomenu" type="checkbox" hidden checked name="datos[ref_modelomenu]" value="MOD-0"><?php // echo ($menu_premium . " tiene Premium");
        }else{?>
            <input id="modelomenu" type="checkbox" hidden checked name="datos[ref_modelomenu]" value=""><?php // echo ($menu_premium . " tiene Premium");?>
        <?php } ?>
        

        <?php 
        // Si no tiene memú del día, se le asigna una ref_menu
        if(empty($info_menu)){?>
            <input id="ref_menu" type="checkbox" hidden checked name="datos[ref_menu]" value="<?php echo "M" . $ref_negocio; ?>"><?php
        }else{?>
            <input id="ref_menu" type="checkbox" hidden checked name="datos[ref_menu]" value="<?php echo $ref_menu; ?>">
        <?php }?>
       

        <h5>Primeros</h5>
            <div class="row">
                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                        <label for="p_plato1">Primeros-Plato1</label>
                        <input type="text" name="datos[p_plato1]" id="p_plato1" value="<?php echo $datos['p_plato1'] ?? '' ?>"
                        placeholder="..." size="10" >
                        <!--isset($errores['nombre'])?'<span class="error">'.$errores['nombre'].'</span>':'<span class="ok">OK</span>'?></label>-->
                        <!--<?php if (isset($datos)) {if (isset($errores['p_plato1'])) {?><span class="error"><?="<br>" . $errores['p_plato1'] . '</span>'?><?php } else {?><span class="ok">OK</span><?php }};?>-->
                    </div>

                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                        <label for="p_plato2">Primeros-Plato2</label>
                        <input type="text" name="datos[p_plato2]" id="p_plato2" value="<?php echo $datos['p_plato2'] ?? '' ?>"
                        placeholder="..." size="12" >

                    </div>

                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                        <label for="p_plato3">Primeros-Plato3</label>
                        <input type="text" name="datos[p_plato3]" id="p_plato3" value="<?php echo $datos['p_plato3'] ?? '' ?>" placeholder="..." size="10" >
                    </div>

                    <div id="primero_plato4" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                        <label for="p_plato4">Primeros-Plato4</label>
                        <input type="text" name="datos[p_plato4]" id="p_plato4" value="<?php echo $datos['p_plato4'] ?? '' ?>"
                        placeholder="..." size="12" >

                    </div>

                    <div id="primero_plato5" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                        <label for="p_plato5">Primeros-Plato5</label>
                        <input type="text" name="datos[p_plato5]" id="p_plato5" value="<?php echo $datos['p_plato5'] ?? '' ?>" placeholder="..." size="10" >
                    </div>

                   
            </div>
    </div>

    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12 contenedor_partemenu">
        <h5>Segundos</h5>
            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                <label for="s_plato1">Segundos-Plato1</label>
                <input type="text" name="datos[s_plato1]" id="s_plato2" value="<?php echo $datos['s_plato1'] ?? '' ?>" placeholder="..." size="10" >

            </div>

            <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">
                <label for="s_plato2">Segundos-Plato2</label>
                <input type="text" name="datos[s_plato2]" id="s_plato2" value="<?php echo $datos['s_plato2'] ?? '' ?>"
                placeholder="..." size="12" >

            </div>

            <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                <label for="s_plato3">Segundos-Plato3</label>
                <input type="text" name="datos[s_plato3]" id="s_plato3" value="<?php echo $datos['s_plato3'] ?? '' ?>" placeholder="..." size="10" >
            </div>


           
            
            
            <div id="segundo_plato4" class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">
                <label for="p_plato4">Segundos-Plato4</label>
                <input type="text" name="datos[s_plato4]" id="s_plato4" value="<?php echo $datos['s_plato4'] ?? '' ?>"
                placeholder="..." size="12" >

            </div>

            <div id="segundo_plato5" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                <label for="s_plato5">Segundos-Plato5</label>
                <input type="text" name="datos[s_plato5]" id="s_plato5" value="<?php echo $datos['s_plato5'] ?? '' ?>" placeholder="..." size="10" >
            </div>


                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12 contenedor_partemenu">
                        <h5>Postres Caseros</h5> 
                            <div id="postres_postre1" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                <label for="p_postre">Postre-1</label>
                                <input type="text" name="datos[p_postre1]" id="p_postre2" value="<?php echo $datos['p_postre2'] ?? '' ?>" placeholder="..." size="10" >

                            </div>

                            <div id="postres_postre2" class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">
                                <label for="p_postre2">Postre-2</label>
                                <input type="text" name="datos[p_postre2]" id="p_postre2" value="<?php echo $datos['p_postre2'] ?? '' ?>"
                                placeholder="..." size="12" >

                            </div>

                            <div id="postres_postre3" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                                <label for="p_postre3">Postre-3</label>
                                <input type="text" name="datos[p_postre3]" id="p_postre3" value="<?php echo $datos['p_postre3'] ?? '' ?>" placeholder="..." size="10" >

                            </div>
                    </div>
            
          

    </div>

</div>

<div class="row">
    <div class="col-xl-6 text-left col-lg-12 col-md-12 col-sm-12 col-12 contenedor_partemenu">
        <h5>Precio</h5>
        <div class="row">
        <div class="">
                <input style="width: 5em;" id="precio" step="0.5" type="number" name="datos[precio]">
                <label for="precio">IVA INCLUIDO (euros)</label>
            </div>
        </div>
    </div>


    <div class="col-xl-6 text-left col-lg-12 col-md-12 col-sm-12 col-12 contenedor_partemenu">
        <h5> Rótulo de "IVA INCLUIDO"</h5>
        <div class="row">
            <div class="">
                    <input style="width: 1em;" id="iva_incluido7" type="checkbox" name="datos[iva_incluido]" value="IVA INCLUIDO">
                    <label for="iva_incluido7">IVA INCLUIDO.</label>
            </div>
        </div>
    </div>
</div>









<div class="row">
  

    <div  class="contenedor_partemenu">

        

        <h5>INCLUIDO</h5>   
            <div id="a" class="row">
                
                <div class="col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-12">
                    <input style="width: 1em;" id="postrepanvino7" type="radio" checked name="datos[incluido]" value="POSTRE, PAN Y VINO" >
                    <label for="postrepanvino7">POSTRE, PAN Y VINO</label>
                </div>

                <div class="col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-12">
                    <input style="width: 1em;" id="bebidapancafe7" type="radio" name="datos[incluido]" value="Bebida, pan y café incluido (Tinto, Blanco, Rosado, Sidra o Agua)">
                    <label for="bebidapancafe7">Bebida, pan y café incluido (Tinto, Blanco, Rosado, Sidra o Agua)</label>
                </div>
                
                <div class="col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-12">
                    <input style="width: 1em;" id="vinopanpostrecafe7" type="radio" name="datos[incluido]" value="Vino de la Casa, Pan, Postre o Café">
                    <label for="vinopanpostrecafe7"> Vino de la Casa, Pan, Postre o Café</label>
                </div>

                <div class="col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-12">
                    <input style="width: 1em;" id="panyvino7" type="radio" name="datos[incluido]" value="PAN Y VINO">
                    <label for="panyvino7"> Pan y Vino</label>
                </div>
               

            </div>

            <input type="button" value="Otros" onclick="eleccion(), borrartexto()">

                <div id="b">
                    <input style="width: 15em;" id="otrosincluido" type="text" name="datos[incluidootros]" placeholder="...">
                            <label for="otrosincluido"></label>
                </div>
    </div>


    

</div>











<div class="row">
    <div class="contenedor_partemenu">
        <h5>Comentario final</h5>
            <div class="row">
                <div class="col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-12">
                    <input style="width: 1em;" id="variarprecios7" type="radio" checked name="datos[comentario]" value="*Los Platos pueden variar ligeramente*">
                    <label for="variarprecios7">Los Plates pueden variar ligeramente.</label>
                </div>

                <div class="col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-12">
                    <input style="width: 1em;" id="menuinfantil7" type="radio" name="datos[comentario]" value="*Tenemos Menú infantil*">
                    <label for="menuinfantil7">Tenemos Menú Infantil.</label>
                </div>

            </div>
    </div>
</div>

    <br>

<div class="row">
    <h5>Finalizar</h5>
        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
            <input style="width: 1em;" id="asegura7" type="checkbox" name="asegura">
            <label for="asegura7">Estoy seguro de crear este menú del día.</label>
        </div>
</div>

<div class="row">
    <div class="col-xl-6 text-center col-lg-12 col-md-12 col-sm-6 col-12">
        <input style="padding: 0.2em 0.2em 0.2em 0.2em;" type="submit" name="nuevomenu" value="Crear Menú">
    </div>

    <div class="col-xl-6 text-center col-lg-12 col-md-12 col-sm-6 col-12">
        <input type="reset" name="limpiar" value="Limpiar Campos">
    </div>
</div>


</div>


</form>




<script>
    function eleccion(){
        $('#a').toggle();
        $('#b').toggle();
    }

    function borrartexto(){ alert("entroi");
        var otrosincluido=document.getElementById('otrosincluido');
        otrosincluido.value="";
    }
</script>



<style>

#b{display: none;}



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
    transform: translate(-50%, -50%); width:100%; margin-top: 2.8em;
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
#contenedor_menudeldia li{font-size: 0.6em; color: white;}
#contenedor_menudeldia p{margin: 0em; color: white}
#precio{margin-left: 4.5em; margin-top: 2em; font-weight: bold; text-decoration: underline; font-size:0.6em; color: green}

h5{border: none; text-decoration: underline;}

</style>

<!--Menu7
        3 Primeros
        3 Segundos
        Precio
        Rótulo de IVA INCLUIDO
        INCLUIDO
        COMENTARIO FINAL

    Menu8
        3 Primeros
        3 Segundos
        Precio
        Rótulo de IVA INCLUIDO
        INCLUIDO
        COMENTARIO FINAL







        (/*cod_menu* Amayuela, Santoña OK*/ 'M16004','MOD-8','16004',
                      'Ostras Gratinadas','Alubias con Almejas','Ensalada de Queso de Cabra, Foie,<br>Frutos Secos y Cebola Caramelizada','Pasta con Marisco',null,
                      'Jibiones (Calamares) Encebollados','Pimientos Rellenos de Atún con Salsa','Solomillo de Cerdo al Pedro Ximenez','Filetes de Pollo, Salsa de Mostaza y Miel',null,
                      'Tarta de Chocolate','Flan de Queso','Tarta de Queso',
                      'Pan y Vino','12','I.V.A INCLUIDO','*Los Platos Pueden Variar Ligeramente*'),


-->


