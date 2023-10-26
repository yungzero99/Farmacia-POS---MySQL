#pragma once
#ifndef VENTA_H
#define VENTA_H

#include <string>

using namespace std;

struct Factura
{
	int id_factura;
	int id_cliente;
	int id_producto;
	string sFecha;
	string sNombre;
	string sApellido;
	string sDescripcion;
	float fPrecio;

};

void ListarFacturas();

#endif