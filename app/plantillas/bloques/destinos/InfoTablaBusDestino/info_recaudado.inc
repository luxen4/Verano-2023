<div class="row">
    <div id="plazas_totales" class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
        <?php echo "Plazas Totales " . $plazasBusTotales; ?><br>
        <?php echo "Plazas Libres " . $plazasBusTotales-$plazasCobradas-$plazasSinCobrar; ?>
    </div>



        <div id="recaudado" class="col-xl-6 text-center col-lg-12 col-md-12 col-sm-6 col-6">
            <h6>Recaudado: <?php echo $total . '€'; ?></h6>
            <h6>Cobradas: <?php echo $plazasCobradas . 'plaza/s'; ?></h6>
        </div>

        <div id="norecaudado" class="col-xl-6 text-center col-lg-12 col-md-12 col-sm-6 col-6">
            <h6>Por Recaudar: <?php echo $pendienteRecaudar . '€'; ?></h6>
            <h6>Sin Cobrar: <?php echo $plazasSinCobrar . ' plazas/s'; ?></h6>
        </div>
</div>