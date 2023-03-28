<?php use miId\fuente\Repositorio\OpinionesRepositorio;?>

<div class="row">
    <div class="col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-12" style="text-align: left; "  >
        <?php 

        $veces_Votado=$bar_rest->veces_Votado;          //var_dump($veces_Votado); 
        $veces_Positivo=$bar_rest->veces_Positivo;      //$veces_Positivo=11;
        $veces_Negativo=$bar_rest->veces_Negativo;

        $num_EstrellasLLenas=($veces_Positivo * 5) / $veces_Votado;
        //var_dump($num_EstrellasLLenas);         // Con decimales
        //var_dump((int)$num_EstrellasLLenas);    // Sin decimales

        $valorDecimal=$num_EstrellasLLenas-(int)$num_EstrellasLLenas;
        //var_dump($valorDecimal);

        $veces=0;


        for($i=1; $i<$num_EstrellasLLenas; $i++){?><!--Parta la Estrella entera-->
            <svg class="zds-icon RC794g X9n9TI DlJ4rT pVrzNP H3jvU7" height="1em" width="1em" focusable="false" fill="currentColor" viewBox="0 0 24 24" aria-hidden="true">
            <path d="m12.441 18.984-5.75 4.178a1.74 1.74 0 0 1-1.028.34 1.737 1.737 0 0 1-1.025-.34 1.72 1.72 0 0 1-.636-1.954l2.028-6.241L.72 11.11a1.748 1.748 0 
            0 1 1.027-3.162H8.31l2.028-6.24a.75.75 0 0 1 .948-.476c.39.129 1.491 17.508 1.156 17.752z">
            </path>
            
            <path d="M22.253 7.948h-6.562l-2.028-6.242a1.749 1.749 0 0 0-3.326 0c-.127.394.887 17.034 1.222 17.278l5.75 4.178c.298.22.658.339 1.028.34.369 
            0 .728-.12 1.025-.34.621-.438.88-1.233.636-1.953l-2.028-6.242 5.31-3.857a1.748 1.748 0 0 0-1.027-3.162z">
            </path>
            
            </svg><?php $veces++;
        }

        if( $valorDecimal>0 && $valorDecimal<0.5){?> <!--Para la media estrella-->
            <svg class="zds-icon RC794g X9n9TI DlJ4rT pVrzNP H3jvU7" height="1em" width="1em" focusable="false" fill="currentColor" viewBox="0 0 24 24" aria-hidden="true">
            <path d="m12.441 18.984-5.75 4.178a1.74 1.74 0 0 1-1.028.34 1.737 1.737 0 0 1-1.025-.34 1.72 1.72 0 0 1-.636-1.954l2.028-6.241L.72 11.11a1.748 1.748 0 
            0 1 1.027-3.162H8.31l2.028-6.24a.75.75 0 0 1 .948-.476c.39.129 1.491 17.508 1.156 17.752z">
            </path>
            
            <path d="M18.337 23.502c-.37-.001-.73-.12-1.028-.34l-5.75-4.178a.75.75 0 0 1 .882-1.213l5.75 4.178a.235.235 0 0 0 
            .291 0 .23.23 0 0 0 .09-.277l-2.196-6.76a.749.749 0 0 1 .272-.838l5.75-4.177a.248.248 0 0 0-.146-.449h-7.107a.75.75 0 0 1-.714-.518l-2.196-6.76c-.092
            -.282-.378-.282-.47 0a.75.75 0 0 1-1.427-.463 1.748 1.748 0 0 1 3.324 0l2.028 6.24h6.562a1.748 1.748 0 0 1 1.028 3.163l-5.309 3.857L20 21.209a1.72 1.72 0 0 
            1-.635 1.953c-.297.22-.657.339-1.027.34z">
            </path>
            
            
            </svg><?php $veces++;

        }else{?><!--Parta la Estrella vacia-->
            <svg class="zds-icon RC794g X9n9TI DlJ4rT pVrzNP H3jvU7" height="1em" width="1em" focusable="false" fill="currentColor" viewBox="0 0 24 24" aria-hidden="true">
            <path d="m12.441 18.984-5.75 4.178a1.74 1.74 0 0 1-1.028.34 1.737 1.737 0 0 1-1.025-.34 1.72 1.72 0 0 1-.636-1.954l2.028-6.241L.72 11.11a1.748 1.748 0 
            0 1 1.027-3.162H8.31l2.028-6.24a.75.75 0 0 1 .948-.476c.39.129 1.491 17.508 1.156 17.752z">
            </path>
            
            <path d="M22.253 7.948h-6.562l-2.028-6.242a1.749 1.749 0 0 0-3.326 0c-.127.394.887 17.034 1.222 17.278l5.75 4.178c.298.22.658.339 1.028.34.369 
            0 .728-.12 1.025-.34.621-.438.88-1.233.636-1.953l-2.028-6.242 5.31-3.857a1.748 1.748 0 0 0-1.027-3.162z">
            </path>
            
            </svg><?php $veces++;

        }


        $estrellasVacias=5-$veces;

        for($i=0; $i<$estrellasVacias; $i++){?><!-- Estrellas vacias -->

            <svg class="zds-icon RC794g X9n9TI DlJ4rT nXkCf3 pVrzNP H3jvU7" height="1em" width="1em" focusable="false" fill="currentColor" viewBox="0 0 24 24" aria-hidden="true">
                    <path d="M5.663 23.502c-.37-.001-.73-.12-1.027-.34A1.722 1.722 0 0 1 4 21.208l2.028-6.241L.72 11.11a1.748 1.748 0 0 1 1.028-3.162H8.31l2.028-6.24a.75.75 0 0 1 1.427.462L9.569 8.93a.75.75 0 0 1-.714.518H1.748a.248.248 0 0 0-.146.449l5.75 4.177c.263.19.373.529.272.838l-2.196 6.76a.247.247 0 0 0 .381.277l5.75-4.178a.75.75 0 0 1 .882 1.213l-5.75 4.178c-.298.22-.657.339-1.028.34z"></path>
                    
                    <path d="M18.337 23.502c-.37-.001-.73-.12-1.028-.34l-5.75-4.178a.75.75 0 0 1 .882-1.213l5.75 4.178a.235.235 0 0 0 
                    .291 0 .23.23 0 0 0 .09-.277l-2.196-6.76a.749.749 0 0 1 .272-.838l5.75-4.177a.248.248 0 0 0-.146-.449h-7.107a.75.75 0 0 1-.714-.518l-2.196-6.76c-.092
                    -.282-.378-.282-.47 0a.75.75 0 0 1-1.427-.463 1.748 1.748 0 0 1 3.324 0l2.028 6.24h6.562a1.748 1.748 0 0 1 1.028 3.163l-5.309 3.857L20 21.209a1.72 1.72 0 0 
                    1-.635 1.953c-.297.22-.657.339-1.027.34z">
                    </path>
            </svg><?php
        } ?>


        <?php  
            require_once $_SERVER['DOCUMENT_ROOT']   . TEMPORADA . '/fuente/Repositorio/OpinionesRepositorio.inc'; 
            $ref_negocio= $bar_rest->ref_negocio;
                                                                                                              
            $relacion_Votos = (new OpinionesRepositorio())->votos1Negocio($ref_negocio);
        ?>

      

        <i id="<?php echo $bar_rest->ref_negocio;?>" type="button" style="color:#EABE00; font-size:0.95em" class="fa-solid fa-thumbs-up" onclick="sumarVoto(this)">
        <span class="mostrar_mensaje<?php echo $ref_negocio;?>" ><?php echo($relacion_Votos[0]->veces_Positivo); ?></span>
        </i>


        <i id="<?php echo $bar_rest->ref_negocio;?>" type="button" style="color:#EABE00; font-size:0.95em" class="fa-solid fa-thumbs-down" onclick="restarVoto(this)">
        <!--<span class="mostrar_mensaje<?php echo $ref_negocio;?>" ><?php echo($relacion_Votos[0]->veces_Negativo); ?></span>-->
        </i>

    </div>

</div>


    <style>
        svg{color: #006293;}
      
    </style>







