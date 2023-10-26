#include <iostream>
#include "Empleados.h"
#include <mysql.h>
#include <string>
using namespace std;

Empleado empleado;

void Iniciar_Sesion()
{
	//validate the login credentials with the database and table tbl empleados, use fields usuario and contrasena
	MYSQL* Conexion;
	MYSQL_ROW fila;
	MYSQL_RES* resultado;
	string sUsuario, sContrasena;

	Conexion = mysql_init(0);
	Conexion = mysql_real_connect(Conexion, "localhost", "root", "root", "farmaciapos", 3306, NULL, 0);

	string insertar = "select * from tblempleado";
	const char* querry = insertar.c_str();
	bool bQueryState = mysql_query(Conexion, querry);

	if (!bQueryState)
	{
		resultado = mysql_store_result(Conexion);

		cout << "\nIngrese usuario: ";
		cin >> sUsuario;

		cout << "\nIngrese contrasena: ";
		cin >> sContrasena;

		while (fila = mysql_fetch_row(resultado))
		{
			empleado.ID_Empleado = atoi(fila[0]);
			empleado.sNombre = fila[1];
			empleado.sApellido = fila[2];
			empleado.sCedula = fila[3];
			empleado.sTelefono = fila[4];
			empleado.sDireccion = fila[5];
			empleado.sUsuario = fila[6];
			empleado.sContrasena = fila[7];

			if (sUsuario == empleado.sUsuario && sContrasena == empleado.sContrasena)
			{
				cout << "Bienvenido " << fila[1] << " " << fila[2] << endl;
				mysql_close(Conexion);
				return;
			}
		}
	
	cout << "Usuario o contrasena incorrectos" << endl;
	
	}
	else
	{
		cout << "XXXX CONSULTA FALLIDA XXXX" << endl;
	}

	mysql_close(Conexion);
	return;
}

void AgregarEmpleado()
{
	Empleado NuevoEmpleado;

	cout << "--- Ingrese los datos del nuevo empleado	(-1) para cancelar ---\n";

	cin >> NuevoEmpleado.sNombre;

	if (Cancelar(NuevoEmpleado.sNombre) == !0)
		return;

	while (NuevoEmpleado.sNombre[0] == NULL || NuevoEmpleado.sNombre.length() < 4)
	{
		system("cls");

		cout << "Ingrese un nombre valido (-1) para cancelar:	";
		getline(cin, NuevoEmpleado.sNombre);

		if (Cancelar(NuevoEmpleado.sNombre) == !false)
			return;
	}
}
bool Cancelar(string sOpcion)
{
	if (sOpcion == "-1")
		return !0;
	return 0;
}
void VerEmpleados()
{
	MYSQL* Conexion;
	MYSQL_ROW fila;
	MYSQL_RES* resultado;
	bool bQueryState;
	Conexion = mysql_init(0);
	Conexion = mysql_real_connect(Conexion, "localhost", "root", "root", "farmaciapos", 3306, NULL, 0);

	if (Conexion)
	{
		string insertar = "select * from tblempleado";
		const char* querry = insertar.c_str();
		bQueryState = mysql_query(Conexion, querry);

		if (!bQueryState)
		{
			resultado = mysql_store_result(Conexion);
			cout << "ID_Empleado , Nombre , Apellido , Cedula , Telefono , Direccion , Usuario , Contrasena , Rol \n";
			while (fila = mysql_fetch_row(resultado))
			{
				cout << fila[0] << "  " << fila[1] << "  " << fila[2] << "  " << fila[3] << " " << fila[4] << " " << fila[5] << " " << fila[6] << " " << fila[7] << " " << fila[8] << " " << "\n";
			}
		}
		else
		{
			cout << "XXXX CONSULTA FALLIDA XXXX" << endl;
		}
	}
	else
	{
		cout << "Conexion fallida" << endl;
	}

	mysql_close(Conexion);
}