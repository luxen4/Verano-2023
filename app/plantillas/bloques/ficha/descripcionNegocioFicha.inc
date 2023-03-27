<!--Descripción de un Negocio para la Ficha-->

<div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12 descrip_negocio">
    <p><i class="fa-solid fa-utensils"></i> <?php echo pasarUtf8($bar_rest[0]->descripcion); ?></p>
    <p><svg viewBox="0 0 24 24" width="20px" height="20px" class=""><path d="M12 2C7.745 2 4.27 5.475 4.27 9.73c0 4.539 4.539 9.056 6.971 11.486L12 22l.759-.761c2.433-2.453 6.972-6.97 6.972-11.509C19.73 5.475 16.256 2 12 2zm0 10.986c-1.93 0-3.5-1.569-3.5-3.5 0-1.93 1.57-3.5 3.5-3.5s3.5 1.57 3.5 3.5c0 1.931-1.57 3.5-3.5 3.5z"></path></svg>    
        <?php echo pasarUtf8($bar_rest[0]->direccion); ?>
    </p>
    
    <p><svg viewBox="0 0 24 24" width="20px" height="20px" class="bDFSd d Vb XHxQa"><path d="M17.543 21.992c-1.619 0-6.085-.45-10.573-4.926C1.485 11.561 2.014 6.055 2.014 5.825l.06-.48 4.497-3.336 5.436 5.466-1.818 2.717a7.522 7.522 0 003.688 3.667l3.155-1.358L22 17.445l-3.348 4.456-.471.051a4.847 4.847 0 01-.638.04zM4.233 6.524c0 1.279.409 5.065 4.317 8.993 3.907 3.927 7.655 4.275 8.934 4.275l1.589-2.107-2.519-2.518-2.548 1.068-.399-.141a9.748 9.748 0 01-5.677-5.666l-.17-.518 1.409-2.159-2.808-2.806-2.128 1.579z"></path></svg>
        <?php echo pasarUtf8("Tel: " . $bar_rest[0]->telefono); ?>
    </p>          
</div>










<style>
.descrip_negocio{margin: 1em 0em 1em 0em;}
.descrip_negocio p{font-weight: 600; color: #212721; font-size: 1em; margin: 0.3em;}
</style>