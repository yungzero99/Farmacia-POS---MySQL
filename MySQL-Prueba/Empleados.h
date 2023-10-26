#pragma once
#ifndef EMPLEADOS_H
#define EMPLEADOS_H

using namespace std;

struct Empleado
{
	unsigned short int ID_Empleado;
	string sNombre;
	string sApellido;
	string sCedula;
	string sTelefono;
	string sDireccion;
	string sUsuario;
	string sContrasena;
	char   sRol;
};

void Iniciar_Sesion();
bool Cancelar(string);
void AgregarEmpleado();
void VerEmpleados();
#endif