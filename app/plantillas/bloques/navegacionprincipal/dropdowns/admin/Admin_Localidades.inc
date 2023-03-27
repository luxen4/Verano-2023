<li class="nav-item dropdown">
        <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
        <i class="fas fa-users"></i> Localidades/Desarrollar)</a>

        <div class="dropdown-menu" aria-labelledby="navbarDropdown">
            <a class="dropdown-item" href="index.php?ctl=nuevopropietarionegocio"><i class="fas fa-utensils"></i> Nuevo Propietario</a>
            <div class="dropdown-divider"></div>
          <!--  <a class="dropdown-item" href="index.php?ctl=borrarcliente"><i class="fas fa-trash-alt"></i> Borrar Cliente</a>-->
            <a class="dropdown-item" href="index.php?ctl=mostrartodosclientes"><i class="fas fa-eye"></i> Todos los Propietarios</a>
            <div class="dropdown-divider"></div>
            <a class="dropdown-item" href="index.php?ctl=borrartodosclientes"><i class="fas fa-trash-alt"></i> Borrar un Propietario</a>
          <!--  <div class="dropdown-divider"></div>
            <a class="dropdown-item" href="#">Otros</a>-->
        </div>
</li>




 <!--Lo que se encuentra comentado, lo utilizaremos para insertar en Localidad nuevas tuplas por parte del administrador-->
 <div class="row">
              <!--  <div class="col-xl-12 col-lg-12 col-sm-12 col-md-12 col-12">
                    <div>
                        <label for="nombre">Destino</label>
                        <input type="text" name="datos[nombre]" id="nombre" value="<?php echo $datos['nombre'] ?? '' ?>" size="20" maxlength="50" placeholder="Alberite" required>
                        <?php if(isset($datos)){if(isset($errores['nombre'])){?><span class="error"><?="<br>". $errores['nombre'].'</span>'?><?php 
                              }else{?><span class="ok">OK</span><?php }};?>
                    </div>
                </div>
              -->

 
              <!--      
                <div class="col-xl-12"><!--Ejemplo de un select con persistencia de datos y validación-->
                    <div> <!--Recoger esto en la memoria, que persisten los datos https://stackoverflow.com/questions/39074077/echo-value-of-select-box
                      <label for="provDepart">Provincia</label>
                        <select id="" name="datos[provinciadepartamento]" >
                          <option value="" selected>Seleccione, por favor!</option>
                            <option <?php if(!empty($datos)){if(isset($datos["provinciadepartamento"])){echo ($datos["provinciadepartamento"] === "La Rioja")?"selected" : "";}}?>  value="Cantabria">La Rioja</option>
                            <option <?php if(!empty($datos)){if(isset($datos["provinciadepartamento"])){echo ($datos["provinciadepartamento"] === "Cantabria")?"selected" : "";}}?> value="Cantabria">Cantabria</option>
                            <option <?php if(!empty($datos)){if(isset($datos["provinciadepartamento"])){echo ($datos["provinciadepartamento"] === "Bizkaia")?"selected" : "";}}?>   value="Bizkaia">Bizkaia</option>
                            <option <?php if(!empty($datos)){if(isset($datos["provinciadepartamento"])){echo ($datos["provinciadepartamento"] === "Guipuzkoa")?"selected" : "";}}?> value="Guipuzkoa">Guipuzkoa</option>
                            <option <?php if(!empty($datos)){if(isset($datos["provinciadepartamento"])){echo ($datos["provinciadepartamento"] === "Aquitania")?"selected" : "";}}?> value="Aquitania">Aquitania</option>
                        </select><br>
                      <?php if(isset($datos)){if(isset($errores['provinciadepartamento'])){?><span class="error"><?="<br>". $errores['provinciadepartamento'].'</span>'?><?php 
                            }else{?><span class="ok">OK</span><?php }};?>
                    </div>
                </div>

                <div class="col-xl-12"> 
                    <div>
                    <label for="comunidadregion">Comunidad</label>
                        <select id="comunidadregion" name="datos[comunidadregion]" >
                        <option value="" selected>Seleccione!</option>
                            <option <?php if(!empty($datos)){if(isset($datos["comunidadregion"])){echo ($datos["comunidadregion"] === "La Rioja")?"selected" : ""; }}?>     value="La Rioja">La Rioja</option>
                            <option <?php if(!empty($datos)){if(isset($datos["comunidadregion"])){echo ($datos["comunidadregion"] === "Pais Vasco")?"selected" : "";}}?>    value="Pais Vasco">Pais Vasco</option>
                            <option <?php if(!empty($datos)){if(isset($datos["comunidadregion"])){echo ($datos["comunidadregion"] === "Navarra")?"selected" : "";}}?>       value="Navarra">Navarra</option>
                            <option <?php if(!empty($datos)){if(isset($datos["comunidadregion"])){echo ($datos["comunidadregion"] === "Cantabria")?"selected" : ""; }}?>    value="Cantabria">Cantabria</option>
                            <option <?php if(!empty($datos)){if(isset($datos["comunidadregion"])){echo ($datos["comunidadregion"] === "Aquitania")?"selected" : "";}} ?>    value="Aquitania">Aquitania</option>
                        </select><br>
                    <?php if(isset($datos)){if(isset($errores['comunidadregion'])){?><span class="error"><?="<br>". $errores['comunidadregion'].'</span>'?><?php 
                                              }else{?><span class="ok">OK</span><?php }};?>
                    </div>
                </div>


                <div class="col-xl-12">
                    <div>
                    <label for="pais">País</label>
                        <select id="pais" name="datos[pais]" >
                        <option value="" selected>Seleccione!</option>
                            <option <?php if(!empty($datos)){if(isset($datos["pais"])){echo ($datos["pais"] === "Francia")?"selected" : ""; }}?> value="Francia">Francia</option>
                            <option <?php if(!empty($datos)){if(isset($datos["pais"])){echo ($datos["pais"] === "España")?"selected" : "";}}?>   value="España">España</option>
                        </select><br>
                    <?php if(isset($datos)){if(isset($errores['pais'])){?><span class="error"><?="<br>". $errores['pais'].'</span>'?><?php 
                                            }else{?><span class="ok">OK</span><?php }};?>
                    </div>
                </div>
  
    </div>
  -->

<?php //var_dump($busesCompania);die();?>