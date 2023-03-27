
<script>
	$(document).ready(function() {		// Necesário encerrar bajo .ready(function)
		// Función que esconde el contenido de "compañía de bus"


        $("#button_logeo_cliente").click(function() {
			$("#logeo_cliente").toggle();
		});


		$("#button_logeo_agenciasviajes").click(function() {
			$("#logeo_agenciaviajes").toggle();
		});

        $("#button_logeo_agenciasbuses").click(function() {
			$("#logeo_agenciabuses").toggle();
		});
 
	});
</script>