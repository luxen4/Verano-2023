
<?php // use miId\fuente\Repositorio\DestinoRepositorio; ?>
<!--Viene de destinosconsultados.inc-->
<?php 
    if(!empty($_SESSION['perfil'])){
        if($_SESSION['perfil']['roll']=='agenciaviajes'){
            // Error!, está devolviendo todo y solo queremos los Destinos propios de su Agencia

            /* include_once $_SERVER['DOCUMENT_ROOT'] . DESTINOREPOSITORIO; 
            $ref_AgenciaViajes=$_SESSION['perfil']['ref_AgenciaViajes'];
            $destinosAgenciaViajesLogeada= (new DestinoRepositorio())->todosDestinosAgenciaViajesLogueada($ref_AgenciaViajes);
            */
           // var_dump($destinosAgenciaViajesLogeada);

           //$destinos=$destinosAgenciaViajesLogeada;?>
            <div class="col-xl-6 text-left col-lg-6 col-md-12 col-sm-12 col-12 destinos_cards"><?php
                include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/cardDestinoHome.inc'; ?>
            </div>

            <?php 
            if($_SESSION['perfil']['name']==$nombreAgenciaViajes){
                // Solo de la Agencia logueada ?>
                <div class="col-xl-6 text-left col-lg-6 col-md-12 col-sm-12 col-12 destinos_cards"><?php
                    include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/cardDestinoHome.inc'; ?>
                </div><?php
            }

        }elseif($_SESSION['perfil']['roll']=='cliente' || $_SESSION['perfil']['roll']=='admin'){
            // Todo
            include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/cardDestinoHome.inc'; 
        }

    }else{ 
        // Todo
        include $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/app/plantillas/bloques/cards/cardDestinoHome.inc'; 
    }
?>

