<div id="recaudado_plazas" class="row">
    <div id="recaudado" class="col-xl-6 text-center col-lg-12 col-md-12 col-sm-12 col-12">
        <h6>Total Recaudado: <?php echo $total . '€'; ?></h6>
        <h6>Plazas Cobradas: <?php echo $plazasCobradas . 'plaza/s'; ?></h6>
    </div>

    <div id="norecaudado" class="col-xl-6 text-center col-lg-12 col-md-12 col-sm-12 col-12">
        <h6>Pendiente de Recaudar: <?php echo $pendienteRecaudar . '€'; ?></h6>
        <h6>Plazas sin Cobrar: <?php echo $plazasSinCobrar . ' plazas/s'; ?></h6>
    </div>
</div>

<style>
    #recaudado, #norecaudado{border:1px solid #006293; background-color:#F6F6F6; padding:0.5em}
    #recaudado_plazas{margin: 0.5em;}
    #recaudado_plazas, h6{color: #006293; text-decoration: underline;}
</style>