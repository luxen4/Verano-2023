<?php

use PHPUnit\Framework\TestCase;

use App\Classes\ComerRepositorio;

class ComerTest extends TestCase
{

    public $precio = null;

    public function setUp(): void
    {
        $this->precio = new ComerRepositorio();
    }




    public function test_precio()
    {

        $obj = new stdClass;
        $obj->cod_menu="2";
        $obj->ref_menu="MB08001/2";
        $obj->precio= "19";
        $obj->ref_negocio="08001";

        $calc = new ComerRepositorio();
        $result = $calc->infoMenu2('MB08001/2');
        $this->assertEquals($obj, $result);
       // $this->assertIsInt($result);
    }

/*  
    public function test_precio()
    {
        $result = $this->calc->res(2, 1);
        $this->assertEquals(1, $result);
        $this->assertIsInt($result);
    }
*/



}