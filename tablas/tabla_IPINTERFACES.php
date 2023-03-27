<?php

  $creaIPREMOTA="CREATE TABLE IPREMOTA(
    cod_IpRemota  INT NOT NULL AUTO_INCREMENT,
    ref_IpRemota  VARCHAR (9) NOT NULL,
    ip_Remota     VARCHAR (9) NOT NULL,	

    PRIMARY KEY (cod_IpRemota),
    CONSTRAINT UNIQUE_ref_IpRemota UNIQUE (ref_IpRemota),
    CONSTRAINT UNIQUE_IpRemota UNIQUE (ip_Remota)
  );";
  
  if (mysqli_query($conn, $creaIPREMOTA)) { echo "Table IPREMOTA created successfully <br>";} else { echo "Error al crear la tabla IPREMOTA: " . mysqli_error($conn) . "<br>";}
  
  $pueblaIPREMOTA="INSERT INTO IPREMOTA(/*cod_IpRemota,*/ref_IpRemota, iP_Remota)
        VALUES ('IP::1','::1');";
  
  if (mysqli_query($conn, $pueblaIPREMOTA)) { echo "Inserción en la tabla IPREMOTA exitosa <br>"; } else { echo "Error al insertar en la tabla IPREMOTA: " . mysqli_error($conn) . "<br>";}

  $creaINTERFACE="CREATE TABLE INTERFACE(
    cod_Interface  INT NOT NULL AUTO_INCREMENT,
    ref_Interface  VARCHAR (9) NOT NULL,
    direccion_Interface     VARCHAR (30) NOT NULL,	
       
    PRIMARY KEY (cod_Interface),
    CONSTRAINT UNIQUE_direccion_Interface UNIQUE (direccion_interface),
    CONSTRAINT UNIQUE_ref_Interface UNIQUE (ref_interface)
  
  );";
  
  if (mysqli_query($conn, $creaINTERFACE)) { echo "Table INTERFACE created successfully <br>"; } else { echo "Error al crear la tabla INTERFACE: " . mysqli_error($conn) . "<br>";}
  
  $pueblaINTERFACE="INSERT INTO INTERFACE(/*cod_IpRemota,*/ref_Interface, direccion_Interface)
        VALUES ('IF001','mostrarFormulariosPremium');";
  
  if (mysqli_query($conn, $pueblaINTERFACE)) { echo "Inserción en la tabla INTERFACE exitosa <br>"; } else { echo "Error al insertar en la tabla INTERFACE: " . mysqli_error($conn) . "<br>";}


  $creaRELACIONIPREMOTAINTERFACE="CREATE TABLE RELACIONIPREMOTAINTERFACE(
    cod_RelacionInterfaceRemota  INT NOT NULL AUTO_INCREMENT,
    ref_RelacionInterfaceRemota  VARCHAR (9) NOT NULL,
    ref_IpRemota     VARCHAR (9) NOT NULL,	
    ref_Interface     VARCHAR (9) NOT NULL,
    fecha            datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,

    PRIMARY KEY (cod_RelacionInterfaceRemota),
    CONSTRAINT UNIQUE_relacionInterfaceRemota UNIQUE (ref_RelacionInterfaceRemota),

    FOREIGN KEY (ref_IpRemota) REFERENCES IPREMOTA (ref_IpRemota) ON DELETE CASCADE ON UPDATE CASCADE,
    FOREIGN KEY (ref_Interface) REFERENCES INTERFACE (ref_Interface) ON DELETE CASCADE ON UPDATE CASCADE
  );";
  
  if (mysqli_query($conn, $creaRELACIONIPREMOTAINTERFACE)) { echo "Table IPREMOTA created successfully <br>"; } else { echo "Error al crear la tabla RELACIONIPREMOTAINTERFACE: " . mysqli_error($conn) . "<br>";}
  
  $pueblaRELACIONIPREMOTAINTERFACE="INSERT INTO RELACIONIPREMOTAINTERFACE(/*cod_IpRemota,*/ref_IpRemota, ref_Interface, fecha)
        VALUES ('IP::1','IF001',default);";
  
  if (mysqli_query($conn, $pueblaRELACIONIPREMOTAINTERFACE)) {echo "Inserción en la tabla RELACIONIPREMOTAINTERFACE exitosa <br>";} else { echo "Error al insertar en la tabla RELACIONIPREMOTAINTERFACE: " . mysqli_error($conn) . "<br>";}

?>


