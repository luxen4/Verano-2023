<?php ob_start(); ?>

                <div class="row">
                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                        <h2>Tourist offices</h2>
                    </div>
                </div>

                <div class="row">
                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                        <hr class="letra">
                    </div>
                </div>


                <div class="row"> 
                        <div class="col-xl-3 text-center col-lg-3 col-md-3 col-sm-3 col-6">
                        <h4>Cantabria</h4>
                            <h6><a href="https://turismo.santander.es/oficinas-de-turismo">Santander</a></h6>
                            <h6><a href="https://www.cylex.es/somo/oficina-de-turismo-de-somo-11456114.html">Somo</a></h6>
                            <h6><a href="https://www.islacantabria.com/inicio">Isla</a></h6>
                            <h6><a href="http://nojaturismo.com/">Noja</a></h6>   
                            <h6><a href="https://www.laredo.es/09/oficina_turismo.php">Laredo</a></h6>
                            <h6><a href="http://turismo.castro-urdiales.net/turcastro/planifica-tu-viaje/oficina-de-turismo">Castro-Urdiales</a></h6> 
                        </div>

                        <div class="col-xl-3 text-center col-lg-3 col-md-3 col-sm-3 col-6">
                        <h4>Vizcaya</h4>
                        <h6><a href="https://turismo.euskadi.eus/es/oficinas-turismo/oficina-de-turismo-de-san-sebastian/aa30-12375/es/">San Sebastián</a></h6>
                        <h6><a href="https://hondarribiaturismo.com/">Fuenterrabía</a></h6>
                        <h6><a href="https://lekeitioturismo.eus/es/">Lekeitio</a></h6>
                        <h6><a href="https://visitplentzia.com/">Plentzia</a></h6>
                        <h6><a href="http://lekeitioturismo.eus/">Lekeitio</a></h6>
                        </div>

                        <div class="col-xl-3 text-center col-lg-3 col-md-3 col-sm-3 col-6">
                        <h4>Guipúzcoa</h4>
                        <h6><a href="https://zumaia.eus/es/turismo/zumaia-turismo/oficina-de-turismo">Zumaia</a></h6>
                        <h6><a href="https://www.getariaturismo.eus/es">Getaria</a></h6>
                        <h6><a href="https://www.turismozarautz.eus/es/">Zarautz</a></h6>
                        <h6><a href="http://turismo.orio.eus/es/">Orio</a></h6>
                        </div>

                        

                        <div class="col-xl-3 text-center col-lg-3 col-md-3 col-sm-3 col-6">
                        <h4>Francia</h4>
                        <h6><a href="https://www.hendaye-tourisme.fr/es/">Hendaya</a></h6>
                        <h6><a href="https://www.saint-jean-de-luz.com/homepage-es/">San Juan de Luz</a></h6>
                        <h6><a href="https://tourisme.biarritz.fr/es">Biarritz</a></h6>
                        </div>
                </div>

                <div class="row">
                    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
                        <hr class="letra">
                    </div>
                </div>
    </div>
</div>

<?php $contenido = ob_get_clean() ?>

<?php require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA .  BASE;?>


