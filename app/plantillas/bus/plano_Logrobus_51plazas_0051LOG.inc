<div class="table-responsive"> 
    <table class="table table-bordered table-hover">
        <div style="background-color: white; width: 1600px;">
            <div style="display: flex;"><?php
                $filaIzdaVentana=array(47,43,39,35,31,27,23,21,19,17,13,9,5,1);
                $numFilaIzdaVentana=count($filaIzdaVentana);
                    for($k=0; $k<$numFilaIzdaVentana; $k++){ ?>
                        <?php $i=$filaIzdaVentana[$k]; ?>
                        <?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/plantabus/plantaBusAMedida/butacacompleta2.php' ?><?php } ?>
            </div>

            <div style="display: flex;"><?php
                $filaIzdaPasillo=array(48,44,40,36,32,28,24,22,20,18,14,10,6,2); $numFilaIzdaPasillo=count($filaIzdaPasillo);
                    for($k=0; $k<$numFilaIzdaPasillo; $k++){ ?>
                        <?php $i=$filaIzdaPasillo[$k]; ?>
                        <?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/plantabus/plantaBusAMedida/butacacompleta2.php' ?><?php } ?>
            </div>

            <div style="display: flex;"><?php
                $filaCentral=array(49,'pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo','pasillo'); $numFilaCentral=count($filaCentral);
                    for($k=0; $k<$numFilaCentral; $k++){ ?>
                        <?php $i=$filaCentral[$k]; ?>
                        <?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/plantabus/plantaBusAMedida/butacacompleta2.php' ?><?php } ?>
            </div>

            <div style="display: flex;"><?php
                $filaDrchaPasillo=array(50,45,41,37,33,29,25,'escalera','bano',15,11,7,3); $numFilaDrchaPasillo=count($filaDrchaPasillo);
                    for($k=0; $k<$numFilaDrchaPasillo; $k++){ ?>
                        <?php $i=$filaDrchaPasillo[$k]; ?>
                        <?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/plantabus/plantaBusAMedida/butacacompleta2.php' ?><?php } ?>
            </div>

            <div style="display: flex;"><?php
                $filaDrchaVentana=array(51,46,42,38,34,30,26,'escalera','bano',16,12,8,4);
                $numFilaDrchaVentana=count($filaDrchaVentana);
                    for($k=0; $k<$numFilaDrchaVentana; $k++){ ?>
                        <?php $i=$filaDrchaVentana[$k]; ?>
                        <?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/plantabus/plantaBusAMedida/butacacompleta2.php' ?><?php } ?>
            </div>
        </div>
    </table>
</div>