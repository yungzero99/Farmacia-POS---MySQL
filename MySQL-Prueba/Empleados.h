#pragma once
#ifndef EMPLEADOS_H
#define EMPLEADOS_H

using namespace std;


void Iniciar_Sesion();
bool Cancelar(string);
bool TieneNumero(string);
void AgregarEmpleado();
void VerEmpleados();

struct Empleado
{
	unsigned short int  ID_Empleado;
	string				sNombre;
	string				sApellido;
	string				sCedula;
	string				sTelefono;
	string				sDireccion;
	string				sUsuario;
	string				sContrasena;
	string				sRol;
}; 



#endif