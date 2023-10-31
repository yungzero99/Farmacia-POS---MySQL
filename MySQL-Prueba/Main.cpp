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
*						consola escrito en C++ y archivos de texto.
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
#include "prototipos.h"
#include "venta.h"
#include <fstream>
#include <string>
using std::string;


//#include "Menu.h"
using namespace std;



int main(void)
{
	FILE* ArchivoEmpleados;
	fopen_s(&ArchivoEmpleados, "Empleados.txt", "w");

	if (ArchivoEmpleados == NULL)
	{
		cout << "\nError al abrir el archivo\n";
		exit(0);
	}



	/*CODIGO FSTREAM
	fstream ArchivoEmpleados("empleados.txt", ios::in | ios::out | ios::binary);
	//fstream ArchivoEmpleados("empleados.dat", ios::in | ios::out);

	if (!ArchivoEmpleados)
	{
		cout << "\nError al abrir el archivo\n";
		exit(0);
	}
	else

	{
	cout << "\nArchivo abierto correctamente\n";

	}

	ListarEmpleados(ArchivoEmpleados);

	//ArchivoEmpleados.clear();

	*/



	Empleado Empleado1 = Empleado();

	cout << sizeof(Empleado1);
	Empleado1.AgregarEmpleado(ArchivoEmpleados);


	//while (1)
	//{
		//Empleado1.AgregarEmpleado(ArchivoEmpleados);
		//Empleado1.ListarEmpleados(ArchivoEmpleados);
		//Iniciar_Sesion();
		//VerEmpleados();
		//AgregarEmpleado();
		//ArchivoEmpleados.clear();


	//}

	return 0;
}