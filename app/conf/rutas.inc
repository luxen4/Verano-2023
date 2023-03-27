<?php

// Vector multidimensional con rutas a controlador y método que debe
// atender cada enlace
/* formato:
    Primera dimensaión: nombre del enlace pasado mediante variable GET 'ctl'
     'nombreEnlace' => array() segunda dimesion con información del controlador
                       que atiende esa petición, clave 'controller', y del
                       método concreto que está especializado en su tratamiento,
                       clave 'action'
  Se debe agregar una ruta por cada valor diferente que tome la variable 'ctl'.
  La clave 'inicio' referencia la página home de la aplicación y especifica
    el controlador que debe decidir cuál es la vista que se debe mostrar
*/

//use miId\fuente\Controlador\AgenciaViajesController;

$mapeoRutas =
  array(
    
      //-----------------------------------------------------------------------------------------------------------------defaultController.inc
          'inicio/' =>
          array('controller' =>'miId\fuente\Controlador\defaultController', 'action' =>'inicio'),

      //----------------------------

    
    'forgotyourpassword' =>
    array('controller' => 'miId\fuente\Controlador\PerfilController', 'action' => 'forgotYourPassword'),
  
    

    'restablecercontrasena' =>
    array('controller' => 'miId\fuente\Controlador\PerfilController', 'action' => 'restablecerContrasena'),
  
       
          

   //-----------------------------------------------------------------------------------------------------------------agenciaBusesController.inc
   'nuevaagenciabuses' =>
   array('controller' => 'miId\fuente\Controlador\AgenciaBusesController', 'action' => 'nuevaAgenciaBuses' ),

   'mostrartodasagenciabuses' =>
   array('controller' => 'miId\fuente\Controlador\AgenciaBusesController', 'action' => 'mostrarTodasAgenciaBuses' ),

   'infoagenciabuses' =>
   array('controller' => 'miId\fuente\Controlador\AgenciaBusesController', 'action' => 'mostrarInfoAgenciaBusesLogeada' ),

   'modificacioninfoagenciabuseslogeada' =>
   array('controller' => 'miId\fuente\Controlador\AgenciaBusesController', 'action' => 'modificacionInfoAgenciaBusesLogeada' ),

   'eliminaragenciabuseslogeada' =>
   array('controller' => 'miId\fuente\Controlador\AgenciaBusesController', 'action' => 'eliminarAgenciaBusesLogeada' ),



      //-----------------------------------------------------------------------------------------------------------------agenciaViajesController.inc
    'nuevaAgenciaViajes' =>
    array('controller' => 'miId\fuente\Controlador\AgenciaViajesController', 'action' => 'nuevaAgenciaViajes' ),

    'infoagenciaviajes'  =>
    array('controller' => 'miId\fuente\Controlador\AgenciaViajesController', 'action' => 'mostrarInfoAgenciaViajesLogeada'),      // Permite a un usuario/Cliente ver las agencias donde no está como socio.



    'cambiousernamecontrasenaagenciaviajes'  =>
    array('controller' => 'miId\fuente\Controlador\AgenciaViajesController', 'action' => 'cambioUsernameContrasenaAgenciaViajes'),      // Permite a un usuario/Cliente ver las agencias donde no está como socio.


    /*'modificacioninfoagenciaviajeslogeada' =>
    array('controller' => 'miId\fuente\Controlador\AgenciaBusesController', 'action' => 'modificacionInfoAgenciaViajesLogeada' ),*/
 

    /*'modificarAgenciaviajes' =>*/
    'modificacioninfoagenciaviajeslogeada' =>
    array('controller' => 'miId\fuente\Controlador\AgenciaViajesController', 'action' => 'modificarAgenciaviajesLogeada' ),

    'mostraragenciaviajes' =>
    array('controller' => 'miId\fuente\Controlador\AgenciaViajesController', 'action' => 'mostrarTodasLasAgenciasDeViajes' ),

    
    'mostraragenciaviajesdondeessocio' =>
    array('controller' => 'miId\fuente\Controlador\AgenciaViajesController', 'action' => 'mostrarTodasLasAgenciasDeViajesDondeSeEsSocio' ),


    'tepuedeninteresar'  =>
    array('controller' => 'miId\fuente\Controlador\AgenciaViajesController', 'action' => 'tePuedenInteresar'),      // Permite a un usuario/Cliente ver las agencias donde no está como socio.


          
      //-----------------------------------------------------------------------------------------------------------------autobusesController.inc
          'nuevobus' =>
          array('controller' => 'miId\fuente\Controlador\busController', 'action' => 'nuevoBus' ),

        
          'motrarplantabus' =>
          array('controller' => 'miId\fuente\Controlador\busController', 'action' => 'motrarPlantaBus' ),

      
          'modificarbus' =>
          array('controller' => 'miId\fuente\Controlador\busController', 'action' => 'modificarBus' ),

          'todosbusesdeunaagenciabuses' =>
          array('controller' => 'miId\fuente\Controlador\busController', 'action' => 'todosBusesdeUnaAgenciaBuses' ),

          'plazasdeunbus' =>
          array('controller' => 'miId\fuente\Controlador\busController', 'action' => 'plazasDeUnBus' ),

          'informacionbusdestino' =>
          array('controller' => 'miId\fuente\Controlador\busController', 'action' => 'informacionBusDestino' ),


          

           
      //-----------------------------------------------------------------------------------------------------------------clienteController.inc
    'nuevacuentacliente' =>
    array('controller' => 'miId\fuente\Controlador\clienteController', 'action' => 'nuevaCuentaCliente'),

    'nuevocliente' =>
    array('controller' => 'miId\fuente\Controlador\clienteController', 'action' => 'nuevoClienteDatos'),

    'perfilcliente'  =>
    array('controller' => 'miId\fuente\Controlador\clienteController', 'action' => 'mostrarInfoClienteLogeado'),    // Permite dar de baja un usuario/Cliente de una Agencia de Viajes.

    'modificacliente'  =>
    array('controller' => 'miId\fuente\Controlador\clienteController', 'action' => 'modificarCliente'),             // Permite modificar los datos de un cliente

    'autobajacliente'  =>
    array('controller' => 'miId\fuente\Controlador\clienteController', 'action' => 'autobajaCliente'),              // Permite dar de baja un Cliente

    'borrartodosclientes'  =>
    array('controller' => 'miId\fuente\Controlador\clienteController', 'action' => 'borrarTodosClientes'),          // Permite dar de baja un usuario/Cliente de una Agencia de Viajes.

    'darsedebajadenagenciaviajes'  =>
    array('controller' => 'miId\fuente\Controlador\clienteController', 'action' => 'darseDeBajaDenAgenciaViajes'),  // Permite dar de baja un usuario/Cliente de una Agencia de Viajes.

   
    'cancelarbillete' =>
    array('controller' => 'miId\fuente\Controlador\clienteController', 'action' => 'cancelarBillete' ),

    'mostrartodosclientes'  =>
    array('controller' => 'miId\fuente\Controlador\clienteController', 'action' => 'mostrarTodosClientes'),         // Permite dar de baja un usuario/Cliente de una Agencia de Viajes.



      //-----------------------------------------------------------------------------------------------------------------destinoController.inc
          'nuevodestino' =>
          array('controller' => 'miId\fuente\Controlador\destinoController', 'action' => 'nuevoDestino' ),

          'modificardestino' =>
          array('controller' => 'miId\fuente\Controlador\destinoController', 'action' => 'modificarUnDestino' ),
        

          'mostrartodosdestinos' =>
          array('controller' => 'miId\fuente\Controlador\destinoController', 'action' => 'mostrarTodosDestinos' ), /* En tabla */


          'destinosporfecha' =>
          array('controller' => 'miId\fuente\Controlador\destinoController', 'action' => 'destinosPorFecha' ),

          'destinosporfechafiltrados' =>
          array('controller' => 'miId\fuente\Controlador\destinoController', 'action' => 'destinosPorFechaFiltrados' ),

          'destinospordestino' =>
          array('controller' => 'miId\fuente\Controlador\destinoController', 'action' => 'destinosPorDestino' ),

          'destinospordestinofiltrados' =>
          array('controller' => 'miId\fuente\Controlador\destinoController', 'action' => 'destinosPorDestinoFiltrados' ),

          'destinosporagenciaviajes' =>
          array('controller' => 'miId\fuente\Controlador\destinoController', 'action' => 'destinosPorAgenciaViajes' ),

        'destinosporagenciaviajesfiltrados' =>
          array('controller' => 'miId\fuente\Controlador\destinoController', 'action' => 'destinosPorAgenciaViajesFiltrados' ),
        
          'destinospordia' =>
          array('controller' => 'miId\fuente\Controlador\destinoController', 'action' => 'destinosPorDia' ),
        
          'destinospordiafiltrados' =>
          array('controller' => 'miId\fuente\Controlador\destinoController', 'action' => 'destinosPorDiafiltrados' ),

          'tusdestinoscontratados' => // Muestra todos los destinos a los que se ha apuntado un Cliente.
          array('controller' => 'miId\fuente\Controlador\destinoController', 'action' => 'tusDestinosContratados' ), 

          'mostrartodosdestinosdeunaagenciaviajeslogeada' =>
           array('controller' => 'miId\fuente\Controlador\destinoController', 'action' =>'mostrarTodosDestinosDeAgenciaViajesLogeada' ),

          'motrartodosdestinosdeagenciaviajeslogeada' =>
          array('controller' => 'miId\fuente\Controlador\destinoController', 'action' => 'mostrarTodosDestinosDeAgenciaViajesLogeada' ),  /* Tabla */
          
          'mostrartodosdestinosquevaunaagenciabuseslogeada' =>
          array('controller' => 'miId\fuente\Controlador\destinoController', 'action' => 'mostrarTodosDestinosQueVaUnaAgenciaBusesLogeada' ),

          'destinosMasVendidos' =>
          array('controller' => 'miId\fuente\Controlador\destinoController', 'action' => 'destinosMasVendidos' ),

          'destinosmaseconomicosencards' =>
          array('controller' => 'miId\fuente\Controlador\destinoController', 'action' => 'destinosMasEconomicosEnCards' ),


            //-----------------------------------------------------------------------------------------------------------------pdfController.inc
            'generarpdf' =>
            array('controller' => 'miId\fuente\Controlador\pdfController', 'action' => 'generarPdf' ),

            'generarpdf_cuponDescuento' =>
            array('controller' => 'miId\fuente\Controlador\pdfController', 'action' => 'generarPdfCuponDescuento' ),

            
            'generapdf_ocupacionbus' =>
            array('controller' => 'miId\fuente\Controlador\pdfController', 'action' => 'generaPdfOcupacionBus' ),


            'generaexcel_ocupacionbus' =>
            array('controller' => 'miId\fuente\Controlador\excelController', 'action' => 'generaExcelOcupacionBus' ),



//-----------------------------------------------------------------------------------------------------------------comerController.inc
'comerdestino' =>
array('controller' => 'miId\fuente\Controlador\comerController', 'action' => 'comerDestino'),

'mostrartodosbaresrestaurantes' =>
array('controller' => 'miId\fuente\Controlador\comerController', 'action' => 'mostrarTodosBaresRestaurantes'),


'cargarbarrestaurantes' =>
array('controller' => 'miId\fuente\Controlador\comerController', 'action' => 'cargarBarRestaurantes'),

'mostrarwrap' =>
array('controller' => 'miId\fuente\Controlador\comerController', 'action' => 'mostrarWrap'),

'fichanegocio' =>
array('controller' => 'miId\fuente\Controlador\comerController', 'action' => 'fichaNegocio'),


            
//-----------------------------------------------------------------------------------------------------------------buscadoresController.inc
'cuadrobuscadoresdestinos' =>
array('controller' => 'miId\fuente\Controlador\buscadoresController', 'action' => 'cuadroBuscadoresDestinos'),


'cuadrobuscadoresnegocios' =>
array('controller' => 'miId\fuente\Controlador\buscadoresController', 'action' => 'cuadrobuscadoresnegocios'),


'todosNegociosLocalidad' =>
array('controller' => 'miId\fuente\Controlador\buscadoresController', 'action' => 'todosNegociosLocalidad'),

'todosNegociosLocalidad8' =>
array('controller' => 'miId\fuente\Controlador\buscadoresController', 'action' => 'todosNegociosLocalidad'),

'mostrartodosdestinossimple' =>
array('controller' => 'miId\fuente\Controlador\buscadoresController', 'action' => 'mostrarTodosDestinosSimple'),

'sudoku' =>
array('controller' => 'miId\fuente\Controlador\juegosController', 'action' => 'sudoku'),



//-----------------------------------------------------------------------------------------------------------------menuController.inc
'crear_menu' =>
array('controller' => 'miId\fuente\Controlador\menuController', 'action' => 'crearMenu'),

'seleccionar_menu' =>
array('controller' => 'miId\fuente\Controlador\menuController', 'action' => 'seleccionarMenu'),





//-----------------------------------------------------------------------------------------------------------------descuentoController.inc
'creardescuento' =>
array('controller' => 'miId\fuente\Controlador\descuentoController', 'action' => 'crearDescuento'),




//-----------------------------------------------------------------------------------------------------------------propietarioController.inc
'nuevopropietarionegocio' =>
array('controller' => 'miId\fuente\Controlador\propietarioController', 'action' => 'nuevoPropietarioNegocio'),

'logearpropietarios' =>
array('controller' => 'miId\fuente\Controlador\propietarioController', 'action' => 'logearPropietarios'),

//-----------------------------------------------------------------------------------------------------------------propietarioController.inc
'loginusuarios' =>
array('controller' => 'miId\fuente\Controlador\usuariosController', 'action' => 'loginusuarios'),

'deslogearCliente' =>
array('controller' =>'miId\fuente\Controlador\usuariosController', 'action' =>'deslogearCliente'),



'hoteleslocalidad' =>
array('controller' =>'miId\fuente\Controlador\hotelesController', 'action' =>'hotelesLocalidad')



       );





       // https://www.lawebdelprogramador.com/foros/MySQL/959323-Relacion-1N.html   PARA COPIAR imagen