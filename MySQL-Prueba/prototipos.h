#pragma once
#ifndef PROTOTIPOS_H
#define PROTOTIPOS_H

using namespace std;
#include <string>
using std::string;



struct Cliente
{
	unsigned short int	 ID_Cliente;
	string				 sNombre;
	string				 sApellido;
	string				 sTelefono;
	string				 sDireccion;
};

struct Lote
{
	unsigned short int	 ID_Lote;
	unsigned short int	 Unidades;
	string				 sFechaElaboracion;
	string				 sFechaVencimiento;

};

struct Producto
{
	unsigned short int idProducto;
	Lote			   Lote;
	int				   iExistencia;
	string			   sNombre;
	string			   sLaboratorio;
	string			   sNombreCientifico;
	char			   cControlado;


};

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

	Empleado();

	void AgregarEmpleado(FILE*);

	void getData();
	void ImprimirDatos();
};

void ListarEmpleados(FILE*);
void ImprimirLinea(ostream&, const Empleado&);
bool TieneNumero(string);



bool Cancelar(string);


#endif


