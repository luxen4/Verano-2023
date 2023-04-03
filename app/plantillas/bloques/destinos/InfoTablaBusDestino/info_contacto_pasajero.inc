<td><?php 

    if(!empty($infoPersona[0]->nombre)){ ?>
    <h6><?php echo(pasarUtf8($infoPersona[0]->nombre) .' '. pasarUtf8($infoPersona[0]->apellidos)); ?></h6><?php
    }else{ ?>
    <h6><?php echo(pasarUtf8($infoPersona[0]->nombreApellidos));?></h6><?php
    }

    
    if(!empty($infoPersona[0]->nombre)){
        $firstDate  = new DateTime();
        $secondDate = new DateTime($infoPersona[0]->fNacimiento);

        $intvl = $firstDate->diff($secondDate);
        echo '(' . $intvl->y . " Años) ";
        // echo $intvl->y . " year, " . $intvl->m." months and ".$intvl->d." day"; 
        // echo "\n";
        // Total amount of days
        // echo $intvl->days . " days "; 
    }?>

        <?php echo 'Tel: ' . pasarUtf8($infoPersona[0]->TlfnoParticular.'<br>email: '. pasarUtf8($infoPersona[0]->email));?>

</td>