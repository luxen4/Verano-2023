
    <link rel="stylesheet" type="text/css" href="web/css/bootstrap.min.css">
    <link rel="stylesheet" type="text/css" href="web/css/bootstrap-grid.min.css">
    <link rel="stylesheet" type="text/css" href="web/css/bootstrap-reboot.min.css">
    <link rel="stylesheet" type="text/css" href="bootstrap/css/bootstrap.min.css">
<script>


// Creating a cookie after the document is ready
/*
var lat = pos.coords.latitude; alert(latitud);
var lon = pos.coords.longitude; alert(longitud);

var latYlon=lat + '_' + lon ;
*/

/*
    createCookie("gfg", 'latYlonawwwa', "10");
    alert(document.cookie);
   
// Function to create the cookie
function createCookie(name, value, days) { 
    var expires;
      
    if (days) {
        var date = new Date();
        date.setTime(date.getTime() + (days * 24 * 60 * 60 * 1000));
        expires = "; expires=" + date.toGMTString();
    }
    else {
        expires = "";
    }
      
    document.cookie = escape(name) + "=" + 
        escape(value) + expires + "; path=/";
}
*/

    localize();
    //Función que insertará en las cajas
	function localize(){
        navigator.geolocation.getCurrentPosition(mapa,error);
    }
 
        function mapa(pos){
            var latitud = pos.coords.latitude; 
            var longitud = pos.coords.longitude; 
            
            $("#latitud").val(latitud); //alert(latitud);
            $("#longitud").val(longitud);
            var precision = pos.coords.accuracy;
        }
 
        function error(errorCode){
            if(errorCode.code == 1)
                alert("No has permitido buscar tu localizacion")
            else if (errorCode.code==2)
                alert("Posicion no disponible")
            else
                alert("Ha ocurrido un error")
        }
</script>

  
<script src="bootstrap/js/jquery-3.5.1.slim.min.js"></script>
    <script src="boostrap/js/popper.min.js"></script>
    <script src="bootstrap/js/bootstrap.min.js"></script>
    <script src="web/js/sweetAlert/libreria_sweetAlert.js"></script>
    <script
  src="https://code.jquery.com/jquery-3.4.1.min.js"
  integrity="sha256-CSXorXvZcTkaix6Yvo6HppcZGetbYMGWSFlBw8HfCJo="
  crossorigin="anonymous"></script>

  <script src="https://unpkg.com/sweetalert/dist/sweetalert.min.js"></script>