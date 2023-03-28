 
<?php 
use miId\fuente\Repositorio\IpremotainterfaceRepositorio;

$link = $_SERVER['HTTP_HOST'].$_SERVER['REQUEST_URI']; 
$arrayLink= explode( '=', $link );
$datos['direccion_Interface']=$arrayLink[1];  // Nombre

if ($datos['direccion_Interface']=="fichanegocio") {
    $datos['ref_negocio']=$bar_rest[0]->ref_negocio;
    $datos['ref_IpRemota']="IP" . $_SERVER['REMOTE_ADDR'];

    require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/IpRemotaInterfaceRepositorio.inc';
    $ultima_ref_VisitaFichaNegocio = (new IpremotainterfaceRepositorio())->ultimaRefVisitaNegocio();
    
    if ($ultima_ref_VisitaFichaNegocio[0]->ref_VisitaFichaNegocio==null) {
        $num="1";
        $ref_VisitaFichaNegocio="VI" . $num;
    } else {
        $num= explode('VI', $ultima_ref_VisitaFichaNegocio[0]->ref_VisitaFichaNegocio);
        $ref_VisitaFichaNegocio="VI" . intval($num[1])+1;
    }

    $datos['ref_VisitaFichaNegocio']=$ref_VisitaFichaNegocio;
    $visitaIpNegocio = (new IpRemotaInterfaceRepositorio())->visitaIpNegocio($datos);
}
?>