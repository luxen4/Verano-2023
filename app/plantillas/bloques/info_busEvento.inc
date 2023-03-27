<?php
    $ref_Evento = $evento->ref_Evento;
    $cod_Evento=$evento->ref_Evento; 
    $localidad=$evento->nombre_Localidad;
   // $comunidad = $destino->comunidad; 
    $fechaDestino = $evento->fecha_Viaje;
    $diaSemana = $evento->dia_Semana;
    $euros = $evento->euros; $urloficial = $evento->ruta_imagen1;
    $nombreAgenciaViajes = $evento->nombre_Agencia;
 
    try {    
        include $_SERVER['DOCUMENT_ROOT'] . CONEXIONBASEDEDATOS;
        $sqlCodigoBus = "SELECT distinct ref_Bus FROM DESTINOEVENTO WHERE ref_Evento='$ref_Evento'";

        $result0 = $gbd->query($sqlCodigoBus);
        $results0 = $result0->fetchAll(\PDO::FETCH_OBJ);

        if (!empty($results0)) {
            // Necesito el codigo del Viaje y sacar el bus que lo hace
            $ref_Bus = "SELECT ref_Bus FROM DESTINOEVENTO WHERE ref_Evento='$ref_Evento'";

            $result1 = $gbd->query($ref_Bus);
            $results1 = $result1->fetchAll(\PDO::FETCH_OBJ);
            $ref_Bus=$results1[0]->ref_Bus;  

            // Con el Bus que lo hace saco las plazas totales 
            $sql1PlazasTotalesDelBus = "SELECT plazas FROM BUS WHERE ref_Bus='$ref_Bus'";

            $result1 = $gbd->query($sql1PlazasTotalesDelBus);
            $numPlazasTotalesBus = $result1->fetchAll(\PDO::FETCH_OBJ);
            $numPlazasTotalesBus=$numPlazasTotalesBus[0]->plazas; 

            // Saco el nº de plazas ocupadas
            $sql2PlazasOcupadasDelBus = "SELECT count(plaza_Bus) as 'plazas' FROM VIAJAR WHERE ref_Destino='$ref_Evento'";
            $result2 = $gbd->query($sql2PlazasOcupadasDelBus);
            $numPlazasOcupadasBus = $result2->fetchAll(\PDO::FETCH_OBJ);
            $numPlazasOcupadasBus= $numPlazasOcupadasBus[0]->plazas;
        } else { }

    } catch (\PDOException$e) { echo $e->getMessage();
    } catch (\Exception$ex) { throw $ex;
    } finally { $gbd = null; }
    
    if (intval($numPlazasTotalesBus) == $numPlazasOcupadasBus) { $estado = "Completo"; } else { $estado = "DISPONIBLE";}
?>

