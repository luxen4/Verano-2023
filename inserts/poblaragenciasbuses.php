<?php

  $creaBUS="CREATE TABLE BUS(
    cod_Bus				      INT NOT NULL AUTO_INCREMENT,
    ref_Bus             VARCHAR (10) NOT NULL,
    tipo_Bus			      ENUM ('Grande', 'Mediano', 'Pequeño', 'Minibus') NOT NULL DEFAULT 'Grande' ,
    plazas				      SMALLINT NOT NULL,
    matricula			      VARCHAR (10)  NOT NULL unique,
    ano_Matriculacion	  INT NOT NULL,	
    ref_AgenciaBuses	   VARCHAR (10) NOT NULL,
  
    PRIMARY KEY (cod_Bus),
    CONSTRAINT UNIQUE_BUS UNIQUE (ref_Bus),
    FOREIGN KEY (ref_AgenciaBuses) REFERENCES AGENCIABUSES(ref_AgenciaBuses) ON DELETE CASCADE ON UPDATE CASCADE 
    /* https://qastack.mx/dba/74627/difference-between-on-delete-cascade-on-update-cascade-in-mysql */
  );";
  
  
    if (mysqli_query($conn, $creaBUS)) {
        echo "Table AGENCIABUSES created successfully <br>";
    } else {
        echo "Error al crear la tabla BUS: " . mysqli_error($conn) . "<br>";
    }
   
  /*2 MySql OK */
  $pueblaBUS="INSERT INTO BUS (ref_Bus,tipo_Bus,plazas,matricula,ano_Matriculacion,ref_AgenciaBuses) 
  VALUES  

        /*---YANGUAS---------------------------------------------------- */
          ('BUSYAN001','Grande','63','3652 JMP',2001,'AB001'), /* Real */ /*
          ('BUSYAN002','Mediano','54','0055 YAN',2002,'AB001'), 
          ('BUSYAN003','Mediano','51','0051 YAN',2002,'AB001'), 
          ('BUSYAN004','Pequeño','28','0028 YAN',2003,'AB001'), 
          ('BUSYAN005','Minibus','19','0019 YAN',2005,'AB001'),		
  
           /*---RIOJACAR---------------------------------------------------- */
        /*('BUSRIO001','Grande','63','0063 RIO',2005,'AB002'),
          ('BUSRIO002','Mediano','55','0055 RIO',2006,'AB002'),
          ('BUSRIO003','Pequeño','51','0051 RIO',2006,'AB002'),
          ('BUSRIO004','Minibus','28','0028 RIO',2006,'AB002'),
          ('BUSRIO005','Minibus','19','0019 RIO',2005,'AB002'),	*/  
          /*----------------------------------------------------------------- */
          
        /* ('BUSVIC001','Grande','63','0063 VIC',2008,'AB003'),
          ('BUSVIC002','Mediano','55','0055 VIC',2007,'AB003'), 
          ('BUSVIC003','Pequeño','51','0051 VIC',2010,'AB003'), 
          ('BUSVIC004','Minibus','28','0028 VIC',2015,'AB003'),	
          ('BUSVIC005','Minibus','19','0019 VIC',2005,'AB003'),	    /* Para Victor Bayo */
          

          
          /*---LOGROBUS---------------------------------------------------- */
          ('BUSLOG001','Grande','63','4729 HWW',2005,'AB005'),  /* Real */
          ('BUSLOG002','Grande','59','6664 CZT',2015,'AB005'),  /* Real */
          ('BUSLOG003','Grande','59','5358 LOG',2017,'AB005'),  /* Real */
          ('BUSLOG004','Grande','55','9438 JLX',2019,'AB005'),  /* Real */
          
          ('BUSLOG005','Pequeño','51','0051 LOG',2006,'AB005'),
          ('BUSLOG006','Minibus','28','0028 LOG',2008,'AB005'),	
          ('BUSLOG007','Minibus','24','0024 LOG',2008,'AB005'),
          ('BUSLOG008','Minibus','19','0019 LOG',2005,'AB005'),	   
          /*----------------------------------------------------------------- */

          /*---JIMENEZ---------------------------------------------------- */
          ('BUSJIM001','Grande','63','9476 JHH',2020,'AB002'),  /* Real con montacargas elevador sillas discapacitados */
          ('BUSJIM002','Grande','63','-',2020,'AB002'),
          ('BUSJIM003','Grande','63','--',2020,'AB002'),
          ('BUSJIM004','Grande','63','---',2020,'AB002'),
          
          
          ('BUSJIM011','Grande','59','7446 LYP',2018,'AB002'),  /* Real con PLM */
          ('BUSJIM022','Grande','55','4912 JSP',2020,'AB002'),  /* Real */ 
           /* ('BUSJIM003','Mediano','55','0055 JIM',2009,'AB002'), 
          ('BUSJIM004','Pequeño','51','0051 JIM',2012,'AB002'), 
          ('BUSJIM005','Minibus','28','0028 JIM',2005,'AB002'), 
          ('BUSJIM006','Minibus','19','0019 JIM',2005,'AB002'),	*/
          /*----------------------------------------------------------------- */
 
          /*---GURREA---------------------------------------------------- */
          ('BUSGUR001','Grande','59','9886 LGB',2017,'AB006'),  /* Real */
          ('BUSGUR002','Grande','55','3197 JJD',2019,'AB006')   /* Real */
          /*----------------------------------------------------------------- */
          
          ;";
           


  
  
  /* --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- */
  
  
  // Condicional PHP que creará la tabla
  if (mysqli_query($conn, $pueblaBUS)) {
        echo "Inserción en la tabla BUS exitosa <br>";
    } else {
        echo "Error al insertar en la tabla BUS: " . mysqli_error($conn) . "<br>";
    }

    ?>