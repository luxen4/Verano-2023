<?php ob_start();?>

  <!--<link rel="stylesheet" type="text/css" href="web/css/stylesmostrar.css">-->
  <?php // require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/utilidades/utilidades2.inc'; ?>

  <link rel="stylesheet" type="text/css" href="web/css/stylesmostrarfiltrados.css">
<?php require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/fuente/Modelo/buscadoresfantasma.inc'; ?>

  <script>
        $(".flip").click(function(){
        $(this).parents(".card").toggleClass("flipped");
      });
      $(".clickcard").click(function(){
        $(this).toggleClass("flipped"); 
      });
  </script>
 
  <?php // <div class="flex"> require_once $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/bloques/navegacionprincipal/saludoIzda.inc';  </div>?>


 <?php $contenido = ob_get_clean() ?>
 
 <?php include $_SERVER['DOCUMENT_ROOT'] . '/Verano-2022/app/plantillas/basefantasma.php' ?>
      


 <style>
.front{
  background-image:url('https://i.imgur.com/W3tra4F.gif');
  z-index:1;
  box-shadow: 5px 5px 5px #aaa;
}
</style>


 






