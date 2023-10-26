/**********************************************************************************************************************
Nombre del modulo:      Main.cpp
Nombre Aplicacion:      Sistema de farmacia
Autor:                  Carlos F. Roque
Lenguaje Desarrollo:    C++ Consola
Version:                1.0
Modulos externos:       Si
Estilo de codficacion:  Notacion Hungara, CamelCase
*
Descripcion:            Sistema de manejo de inventario y facturacion
*						de una farmacia en
*						consola escrito en C++ y Base de datos en MySQL
*
*
*
*
*
*
Fecha:                  21/08/2023
**********************************************************************************************************************/

// control de nombre cientifico, marca, laboratorio, generica y control bajo receta.

#include <iostream>
#include "inventario.h"
#include "clientes.h"
#include "Empleados.h"
#include "venta.h"
//#include "Menu.h"
using namespace std;


int main(void)
{
	//Iniciar_Sesion();
	//VerEmpleados();
	AgregarEmpleado();
	return 0;
}