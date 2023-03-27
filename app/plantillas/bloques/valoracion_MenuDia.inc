<!--Valoración Menú del día-->
<div class="row"><?php 

if(!empty($_SESSION['perfil']['username'])){?>
    <input id="username"    type="checkbox" name=datos[username]    value="<?php echo ($_SESSION['perfil']['username']);?>"/><br>
    <input id="ref_negocio" type="checkbox" name=datos[ref_negocio]  value=""/> <!-- Para recoger la referencia del negocio-->
<?php
}else{?>

    <div class="row">
        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
            <p style="color:red; font-size:1.2em;">Haga login para comentar, gracias!</p>
        </div>
    </div>

<?php } 

if(!empty($_SESSION['perfil']['username'])){?>
   <div class="row" style="margin: 1em;">
        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
            <h6 class="modal-title">Valoración del menú del día</h6>
        </div>
    </div> 

    <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
        <i id="pesimo-1" class="fa-regular fa-face-angry fa-1x" <?php if(!empty($_SESSION['perfil']['username'])){?> onclick="satisfacionMenu(this)" <?php }?>></i>
        <i id="malo-2" class="fa-regular fa-face-frown fa-1x" <?php if(!empty($_SESSION['perfil']['username'])){?> onclick="satisfacionMenu(this)" <?php }?>></i>
        <i id="normal-3" class="fa-regular fa-face-meh fa-1x" <?php if(!empty($_SESSION['perfil']['username'])){?> onclick="satisfacionMenu(this)" <?php }?>></i>  
        <i id="muybueno-4" class="fa-regular fa-face-grin-wide fa-1x" <?php if(!empty($_SESSION['perfil']['username'])){?> onclick="satisfacionMenu(this)" <?php }?>></i>
        <i id="excelente-5" class="fa-regular fa-face-grin-hearts fa-1x" <?php if(!empty($_SESSION['perfil']['username'])){?> onclick="satisfacionMenu(this)" <?php }?>></i><h2 id="gh"></h2>
    </div>

    <p class="clasificacion">
        <input id="excelente-5" type="radio" name="estrellas" value="5" <?php if(!empty($_SESSION['perfil']['username'])){?> onclick="satisfacionMenu(this)" <?php }?> >
        <label for="excelente-5">★★★★★</label><br>
        <input id="muybueno-4" type="radio" name="estrellas" value="4" <?php if(!empty($_SESSION['perfil']['username'])){?> onclick="satisfacionMenu(this)" <?php }?> >
        <label for="muybueno-4">★★★★</label><br>
        <input id="normal-3" type="radio" name="estrellas" value="3" <?php if(!empty($_SESSION['perfil']['username'])){?> onclick="satisfacionMenu(this)" <?php }?> >
        <label for="normal-3">★★★</label><br>
        <input id="malo-2" type="radio" name="estrellas" value="2" <?php if(!empty($_SESSION['perfil']['username'])){?> onclick="satisfacionMenu(this)" <?php }?> >
        <label for="malo-2">★★</label><br>
        <input id="pesimo-1" type="radio" name="estrellas" value="1" <?php if(!empty($_SESSION['perfil']['username'])){?> onclick="satisfacionMenu(this)" <?php }?> >
        <label for="pesimo-1">★</label><br>
    </p>

    <div class="row" style="margin:auto;">
        <div class="col-xl-12 text-left col-lg-12 col-md-12 col-sm-12 col-12">
            <label style=" font-family: 'Satisfy', cursive; color: #006293;">Cuéntenos si le ha gustado el menú:<br/>
            <textarea style="" name=datos[cuestion] rows="5" cols="33" placeholder="..."></textarea></label><br>
        </div>
    </div>

    <div class="row">
        <div class="col-xl-12 text-center col-lg-12 col-md-12 col-sm-12 col-12">
            <h6 class="modal-title">Gracias por su opinión</h6><br>
        </div>
    </div>
    
    
    <div class="row">
        <div class="col-xl-2 text-center col-lg-2 col-md-2 col-sm-2 col-2"></div>

        <div class="col-xl-4 text-center col-lg-4 col-md-4 col-sm-4 col-4">
            <input class="btn btn-success" type="submit" name="opinion_negocio" value="Enviar" <?php
                if(empty($_SESSION['perfil']['username'])){?> disabled <?php }else{?> enabled <?php }?>
            />
        </div>

        <div class="col-xl-4 text-center col-lg-4 col-md-4 col-sm-4 col-4">
            <input class="btn btn-secondary" type="reset" value="Borrar" />
        </div>

        <div class="col-xl-2 text-center col-lg-2 col-md-2 col-sm-2 col-2"></div>
    </div>
    
    <?php } ?>
    
</div>