#pragma once
#ifndef INVENTARIO_H
#define INVENTARIO_H

using namespace std;

struct Producto
{
	unsigned short int idProducto;
	unsigned short int iExistencia;
	string sNombre;
	string sLaboratorio;
	string sNombreCientifico;
	string sMarca;
	string sLote;
	string sFabricacion;
	string sVencimiento;
	char cControlado;

};



#endif