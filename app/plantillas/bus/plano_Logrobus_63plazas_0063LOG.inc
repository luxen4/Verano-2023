<div class="table-responsive"> 
    <table class="table table-bordered table-hover"> 
        <div style="width: 1600px;">
            <div class="fila_asientos" style="display: flex;"><?php
                $filaIzdaVentana=array(59,55,51,47,43,39,35,33,29,25,21,17,13,9,5,1);
                $numFilaIzdaVentana=count($filaIzdaVentana);
                    for($k=0; $k<$numFilaIzdaVentana; $k++){ ?>
                        <?php $i=$filaIzdaVentana[$k]; ?>
                        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/plantaBusAMedida/butacacompleta2.php' ?><?php } ?>
            </div>

            <div class="fila_asientos" style="display: flex;"><?php
                $filaIzdaPasillo=array(60,56,52,48,44,40,36,34,30,26,22,18,14,10,6,2); $numFilaIzdaPasillo=count($filaIzdaPasillo);
                    for($k=0; $k<$numFilaIzdaPasillo; $k++){ ?>
                        <?php $i=$filaIzdaPasillo[$k]; ?>
                        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/plantaBusAMedida/butacacompleta2.php' ?><?php } ?>
            </div>

            <div class="fila_asientos" style="display: flex;"><?php
                $filaCentral=array(61,'pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo'); $numFilaCentral=count($filaCentral);
                    for($k=0; $k<$numFilaCentral; $k++){ ?>
                        <?php $i=$filaCentral[$k]; ?>
                        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/plantaBusAMedida/butacacompleta2.php' ?><?php } ?>
            </div>

            <div class="fila_asientos" style="display: flex;"><?php 
                $filaDrchaVentana=array(62,57,53,49,45,41,37,'escalera',31,27,23,19,15,11,7,3); $numFilaDrchaVentana=count($filaDrchaVentana);
                    for($k=0; $k<$numFilaDrchaVentana; $k++){ ?>
                        <?php $i=$filaDrchaVentana[$k]; ?>
                        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/plantaBusAMedida/butacacompleta2.php' ?><?php } ?>
            </div>

            <div class="fila_asientos" style="display: flex;"><?php
                $filaDrchaPasillo=array(63,58,54,50,46,42,38,'escalera',32,28,24,20,16,12,8,4); $numFilaDrchaPasillo=count($filaDrchaPasillo);
                    for($k=0; $k<$numFilaDrchaPasillo; $k++){ ?>
                        <?php $i=$filaDrchaPasillo[$k]; ?>
                        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/plantaBusAMedida/butacacompleta2.php' ?><?php } ?>
            </div>

            
        </div>
    </table>
</div>


<style> 
@media only screen and (max-width: 530px){
    .fondoplantabus{padding: 0em;}
    h1{font-size: 1em; color: #0D6EFD}
#ojo{    margin-top: -5em;
    width: 53em;
    margin-left: -18em;}
#ojo{transform: scale(0.5);}
.fila_asientos{margin-left: 3em; height: 32px;}

.butacacompleta2{transform: scale(0.15);
    margin-left: -4.5em;}

#fondo_tabla{ background-color: red; height: 346px;}
#info_viaje{margin-top: 0.5em; padding: 0em;}

}

@media only screen and (min-width: 531px) and (max-width: 700px) {
    .fondoplantabus{padding: 0em;}
    h1{font-size: 1em; color: #0D6EFD}
#ojo{    margin-top: -5em;
    width: 53em;
    margin-left: -18em;}
#ojo{transform: scale(0.5);}
.fila_asientos{margin-left: 2em; height: 32px;}

.butacacompleta2{transform: scale(0.18);
    margin-left: -4em;}

#fondo_tabla{ background-color: red; height: 346px;}
#info_viaje{margin-top: 0.5em; padding: 0em;}

}


@media only screen and (min-width: 701px) and (max-width: 1000px) {
    .fondoplantabus{padding: 0em;}
    h1{font-size: 1em; color: #0D6EFD}
#ojo{    margin-top: -5em;
    width: 53em;
    margin-left: -18em;}
#ojo{transform: scale(0.5);}
.fila_asientos{margin-left: 2em; height: 32px;}

.butacacompleta2{transform: scale(0.18);
    margin-left: -4em;}

#fondo_tabla{ background-color: red; height: 346px;}


}

#info_viaje{margin-top: 1em; padding: 0em;}

form{margin: 0em;}



</style>