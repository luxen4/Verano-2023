





<div class="table-responsive"> 
    <table class="table table-bordered table-hover">
        <div style="background-color: white; width: 1600px;">
            <div style="display: flex;"><?php
                $filaIzdaVentana=array(59,55,51,47,43,39,35,33,29,25,21,17,13,9,5,1);
                $numFilaIzdaVentana=count($filaIzdaVentana);
                    for($k=0; $k<$numFilaIzdaVentana; $k++){ ?>
                        <?php $i=$filaIzdaVentana[$k]; ?>
                        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/plantaBusAMedida/butacacompleta2.php' ?><?php } ?>
            </div>

            <div style="display: flex;"><?php
                $filaIzdaPasillo=array(60,56,52,48,44,40,36,34,30,26,22,18,14,10,6,2); $numFilaIzdaPasillo=count($filaIzdaPasillo);
                    for($k=0; $k<$numFilaIzdaPasillo; $k++){ ?>
                        <?php $i=$filaIzdaPasillo[$k]; ?>
                        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/plantaBusAMedida/butacacompleta2.php' ?><?php } ?>
            </div>

            <div style="display: flex;"><?php
                $filaCentral=array(61,'pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo'); $numFilaCentral=count($filaCentral);
                    for($k=0; $k<$numFilaCentral; $k++){ ?>
                        <?php $i=$filaCentral[$k]; ?>
                        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/plantaBusAMedida/butacacompleta2.php' ?><?php } ?>
            </div>

            <div style="display: flex;"><?php 
                $filaDrchaVentana=array(62,57,53,49,45,41,37,'escalera','bano',31,27,23,19,15,11,7,3); $numFilaDrchaVentana=count($filaDrchaVentana);
                    for($k=0; $k<$numFilaDrchaVentana; $k++){ ?>
                        <?php $i=$filaDrchaVentana[$k]; ?>
                        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/plantaBusAMedida/butacacompleta2.php' ?><?php } ?>
            </div>

            <div style="display: flex;"><?php
                $filaDrchaPasillo=array(63,58,54,50,46,42,38,'escalera','bano',32,28,24,20,16,10,8,4); $numFilaDrchaPasillo=count($filaDrchaPasillo);
                    for($k=0; $k<$numFilaDrchaPasillo; $k++){ ?>
                        <?php $i=$filaDrchaPasillo[$k]; ?>
                        <?php include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/plantabus/plantaBusAMedida/butacacompleta2.php' ?><?php } ?>
            </div>

            
        </div>
    </table>
</div>