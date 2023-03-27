<!--Redes Sociales tarjetas Negocios Simple y Complejos -->

<?php $numRedes=0;

if($bar_rest->e_tripadvisor=="#"){}else{$numRedes++;}
if($bar_rest->e_facebook=="#"){}else{$numRedes++;}
if($bar_rest->e_restaurantGuru=="#"){}else{$numRedes++;}
if($bar_rest->e_theFork=="#"){}else{$numRedes++;}?>
          
            <div class="row redes_sociales" style=""><?php 
            if($bar_rest->e_tripadvisor=="#"){
            }else{?>

               
                        <?php   
                            if($numRedes==1){?>
                              <div class='col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12'>
                            <?php
                                    
                            }else{?>
                                <div class='col-xl-3 text-left col-lg-3 col-md-3 col-sm-3 col-3'><?php
                            }
                        
                        ?>

                        <div class="row">

                       
                            <div class='col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12' 
                         
                            <?php  

                                if($numRedes==2){?>
                                style="padding-left: 0.6em;"<?php
                                }elseif($numRedes==4){?>
                                    style="margin-top: -0.2em; margin-left: -0.5em;" <?php 
                                }?> >
                                
                                <a target="blanc" style="font-size: 1rem;" class="tripadvisor_img" href=<?php echo pasarUtf8($bar_rest->e_tripadvisor);?>></a>    
                            </div>
                        </div>
            
                </div><?php } 
        
            if($bar_rest->e_facebook=="#"){
            }else{

                if($numRedes==4){?><div class='col-xl-3 text-center col-lg-3 col-md-3 col-sm-3 col-3'><?php
                }elseif($numRedes==3){?><div class='col-xl-4 text-center col-lg-4 col-md-4 col-sm-4 col-4'><?php
                }elseif($numRedes==2){?><div class='col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6'><?php
                }?>

                        <div class="row">
                            <div class='col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12'>
                                <a class="facebook_img"  target="blanc" 
                                
                            <?php    
                            if($numRedes==4){?>
                                style="margin-left: -3.5em;" <?php
                            }elseif($numRedes==3 || $numRedes==2){?>
                                style="margin-left:1.5em;  transform: scale(0.9);" <?php
                            }?>
                                
                                
                                
                                href=<?php echo pasarUtf8($bar_rest->e_facebook);?>></a>    
                            </div>
                        </div>

                </div><?php }

        
            if($bar_rest->e_restaurantGuru=="#"){
            }else{

                if($numRedes==4){?><div class='col-xl-3 text-center col-lg-3 col-md-3 col-sm-3 col-3'><?php
                }elseif($numRedes==3){?><div class='col-xl-4 text-left col-lg-4 col-md-4 col-sm-4 col-4' style="margin-top: -0.5em; margin-left: -1em;"><?php
                }elseif($numRedes==2){?><div class='col-xl-6 text-center col-lg-6 col-md-9 col-sm-9 col-9'><?php
                }elseif($numRedes==1){?><div class='col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12' style="margin-top: -0.6em;"><?php
                }?>
                        <div class="row">
                            <div class='col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-12'>
                               <a class=""  target="blanc"  href=<?php echo pasarUtf8($bar_rest->e_restaurantGuru);?>>
                                    <img 
                                    
<?php  
if($numRedes==2){?>
style="margin-top:-0.5em; margin-left:5.5em; transform: scale(0.9);"<?php
}elseif($numRedes==3){?>
style="margin-top: 0.5em; margin-left:2.3em; transform: scale(2);" <?php
}elseif($numRedes==1){?>
style=" transform: scale(0.4); " <?php
}elseif($numRedes==4){?>
    style="margin-top: -0.2em; margin-left: -7em; transform: scale(0.9);" <?php                              
}?>        
                                    src="https://10619-1.s.cdn12.com/img/logo_restaurantguru.svg" alt="Restaurant Guru" class="mobile_logo">
                                </a>    
                            </div>
                        </div>

                </div><?php }
                
            if($bar_rest->e_theFork=="#"){
            }else{

                if($numRedes==4){?><div class='col-xl-3 text-center col-lg-3 col-md-3 col-sm-3 col-3'><?php
                }elseif($numRedes==3){?><div class='col-xl-4 text-center col-lg-4 col-md-4 col-sm-4 col-4' style="margin-top: -1em; margin-left: -2em; margin-bottom:-1em;"><?php
                }elseif($numRedes==2){?><div class='col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6'><?php
                }?>    
               
                       
                            <div class='col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-12'>
                               <a class=""  target="blanc"  href=<?php echo pasarUtf8($bar_rest->e_theFork);?>>
                                    <img 
                                
                                    <?php
                                        if($numRedes==4){?> style="transform: scale(0.5); margin-left: -4.5em; margin-top: -1em;"
                                             <?php    
                           
                                        }else{?>style="margin-top: 0.1em; margin-left: 0em; transform: scale(0.5);"
                                            <?php
                                        }?>

                                    src="https://mobile.thefork.com/blog/themes/custom/thefork_theme/thefork.svg" alt="Restaurant Guru" class="mobile_logo">
                                </a>    
                            </div>
                       

                </div><?php }?>      
    </div>


<style>
    .redes_sociales{margin-top: 0.4em; margin-left:0.5em;}
    .tripadvisor_img, .facebook_img, .restaurantguru_img{
        float: left;    
        background-image: url(//www.kerico.es/kerico/assets/css/../images/sprite-valoraciones-low.png);    
     /*   margin-top: -5px; */
        margin-right: 10px;width: 26px;
    }

    .tripadvisor_img{
        height: 27px;
        background-position: 1px 0;
    }

    .facebook_img{
        height: 24px; 
        background-position: 1px -220px;
    }

</style>