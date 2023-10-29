#pragma once
#ifndef PROTOTIPOS_H
#define PROTOTIPOS_H

using namespace std;
#include <string>



struct Cliente
{
	unsigned short int ID_Cliente;
	string sNombre;
	string sApellido;
	string sTelefono;
	string sDireccion;
};

struct Lote
{
	unsigned short int ID_Lote;
	unsigned short int Unidades;
	string sFechaElaboracion;
	string sFechaVencimiento;

};

struct Producto
{
	unsigned short int ID_Producto;
	Lote Lote;
	string sNombre;
	string sPresentacion;
	string sLaboratorio;
	string sNombreGenerico;
	float fPrecio;
	int iexistenciaTotal;
	char cControlado;
};

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

	void AgregarEmpleado();
	void getData();
	void ImprimirDatos();
};

void Iniciar_Sesion();
bool Cancelar(string);
//void AgregarEmpleado();
void VerEmpleados();
void prueba1();


#endif
