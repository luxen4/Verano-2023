<!--Redes Sociales tarjetas Negocios Simple y Complejos -->

<?php $numRedes=0;

if($bar_rest->e_tripadvisor=="#"){}else{$numRedes++;}
if($bar_rest->e_facebook=="#"){}else{$numRedes++;}
if($bar_rest->e_restaurantGuru=="#"){}else{$numRedes++;}
if($bar_rest->e_theFork=="#"){}else{$numRedes++;}?>
          
            <div class="row redes_sociales" 
            
            <?php 
            
            if(!empty($bar_rest->e_menu)){?>
                 style="margin-top:-0.1em" <?php
            }
            ?>>
            
            <?php 
            
            
            
            if($bar_rest->e_tripadvisor=="#"){
            }else{?>
                        <?php   
                            if($numRedes==1){?>
                              <div class='col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12'>
                            <?php
                            }elseif($numRedes==2){?>
                              <div class='col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6'><?php
                            }else{?>
                                <div class='col-xl-4 text-center col-lg-4 col-md-4 col-sm-4 col-4'><?php
                            }
                        ?>

                        <div class="row">
                       
                            <div class='col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12' 
                         
                            <?php  

                                if($numRedes==2){?>
                                style="margin-left: 1em;"<?php
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
                            }elseif($numRedes==3){?>
                                style="margin-left:0.5em;  transform: scale(0.9);" <?php
                            }elseif($numRedes==2){?>
                                style="margin-left:3em;  transform: scale(0.9);" <?php
                            }?>
                                
                                href=<?php echo pasarUtf8($bar_rest->e_facebook);?>></a>    
                            </div>
                        </div>

                </div><?php }

        
            if($bar_rest->e_restaurantGuru=="#"){
            }else{

                if($numRedes==4){?><div class='col-xl-3 text-center col-lg-3 col-md-3 col-sm-3 col-3'><?php
                }elseif($numRedes==3){?><div class='col-xl-4 text-center col-lg-4 col-md-4 col-sm-4 col-4' style="margin-top: -0.5em; "><?php
                }elseif($numRedes==2){?><div class='col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6'><?php
                }elseif($numRedes==1){?><div class='col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12' style="margin-top: -0.6em;"><?php
                }?>

                <a class="restaurantguru_img"  target="blanc"  href=<?php echo pasarUtf8($bar_rest->e_restaurantGuru);?>>
                    <img 
                                
                            <?php  
                            if($numRedes==2){?>
                            style="margin-top:-3.5em;  transform: scale(0.25);"<?php
                            }elseif($numRedes==3){?>
                            style="margin-top: -3em; margin-left:-2em; transform: scale(0.25);" <?php
                            }elseif($numRedes==1){?>
                            style=" transform: scale(0.25); margin-top: -2.7em;" <?php
                            }elseif($numRedes==4){?>
                                style="margin-top: -0.2em; margin-left: -7em; transform: scale(0.9);" <?php                              
                            }?>       

                            src="web/imagenes/rguru.png" alt="Restaurant Guru" class="mobile_logo">
                </a>                                 


                </div><?php }
                
            if($bar_rest->e_theFork=="#"){
            }else{

                if($numRedes==4){?><div class='col-xl-3 text-center col-lg-3 col-md-3 col-sm-3 col-3'><?php
                }elseif($numRedes==3){?><div class='col-xl-4 text-center col-lg-4 col-md-4 col-sm-4 col-4' style="margin-top: -0.4em;"><?php
                }elseif($numRedes==2){?><div class='col-xl-6 text-center col-lg-6 col-md-6 col-sm-6 col-6'><?php
                }?>    
               
                       
                            <div class='col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-12'>
                                    <a class="thefork_img"  target="blanc"  href=<?php echo pasarUtf8($bar_rest->e_theFork);?>
                                            <?php    
                                            if($numRedes==4){?>
                                                style="margin-left: -3.5em;" <?php
                                            }elseif($numRedes==3){?>
                                                style="margin-left:0em;  transform: scale(1);" <?php
                                            }elseif($numRedes==2){?>
                                                style="margin-left:-3em;  transform: scale(1);" <?php
                                            }?>
                                                href=<?php echo pasarUtf8($bar_rest->e_theFork);?>>
                                    </a>  
                            </div>

                </div><?php }?>      
    </div>


<style>

.tripadvisor_img, .facebook_img, .thefork_img{
    float: left; background-image: url(//www.kerico.es/kerico/assets/css/../images/sprite-valoraciones-low.png);    
    /* margin-top: -5px; */
    margin-right: 10px;width: 26px;
}

.tripadvisor_img{ height: 27px; background-position: 1px 0;}
.facebook_img{ height: 24px; background-position: 1px -220px;}
.thefork_img{ height: 29px; background-position: 1px -80px;}



@media only screen and (min-width: 400px) and (max-width: 782px) {
   .redes_sociales{margin-top: -0em; margin-left: 0.5em; max-height: 1.5em;} 
   
}

@media only screen and (min-width: 783px) and (max-width: 2000px) {
   .redes_sociales{margin-top: -0em; margin-left: 3em; max-height: 1.5em;} 
   
}
</style>


           