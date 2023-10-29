#include <iostream>
#include "prototipos.h"
#include <string>
#include <fstream>
using namespace std;

void prueba1()
{
	ofstream archivo;
	Empleado empleado1;

	archivo.open("prueba.txt");

	empleado1.ID_Empleado = 1;
	empleado1.sNombre = "Juan";
	empleado1.sApellido = "Perez";
	
	// write this empleado1 into archivo



}