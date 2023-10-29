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
	MYSQL* Conexion;
	MYSQL_ROW fila;
	MYSQL_RES* resultado;
	Empleado NuevoEmpleado;
	int i = 0;
	char cRol;
	char cLetra;
	bool bTieneNumero = false;
	// insert the next values into the table tblempleado: nombre, apellido, cedula, telefono, direccion, usuario, contrasena, rol

	 
	cout << "--- Ingrese los datos del nuevo empleado	(-1) para cancelar ---\n";

	cout << "Nombre:	";
	cin >> NuevoEmpleado.sNombre;

	bTieneNumero = TieneNumero(NuevoEmpleado.sNombre);

	if (Cancelar(NuevoEmpleado.sNombre) == !0)
		return;

	while (bTieneNumero || NuevoEmpleado.sNombre.length() < 4)
	{
		system("cls");
		cout << "--- Ingrese los datos del nuevo empleado	(-1) para cancelar ---\n";
		cout << "Ingrese un nombre valido:	";
		getline(cin, NuevoEmpleado.sNombre);

		bTieneNumero = TieneNumero(NuevoEmpleado.sNombre);

		if (Cancelar(NuevoEmpleado.sNombre) == !false)
			return;
	}

	cout << "--- Ingrese los datos del nuevo empleado	(-1) para cancelar ---\n";
	cout << "Apellido:	";
	cin >> NuevoEmpleado.sApellido;

	bTieneNumero = TieneNumero(NuevoEmpleado.sApellido);

	if (Cancelar(NuevoEmpleado.sApellido) == !0)
		return;
	
	while (NuevoEmpleado.sApellido[0] == NULL || bTieneNumero)
	{
		bTieneNumero = TieneNumero(NuevoEmpleado.sApellido);
		system("cls");
		cout << "--- Ingrese los datos del nuevo empleado	(-1) para cancelar ---\n";
		cout << "Ingrese un apellido valido:	";
		getline(cin, NuevoEmpleado.sApellido);

		if (Cancelar(NuevoEmpleado.sApellido) == !false)
			return;
	}

	cout << "--- Ingrese los datos del nuevo empleado	(-1) para cancelar ---\n";
	cout << "Cedula:	";
	cin >> NuevoEmpleado.sCedula;



	if (Cancelar(NuevoEmpleado.sCedula) == !0)
		return;
	
	while 
		(
			NuevoEmpleado.sCedula[0] == NULL || !isdigit(NuevoEmpleado.sCedula[0]) || !isdigit(NuevoEmpleado.sCedula[1]) 
			|| !isdigit(NuevoEmpleado.sCedula[2]) || !isdigit(NuevoEmpleado.sCedula[4]) || !isdigit(NuevoEmpleado.sCedula[5]) ||
		!isdigit(NuevoEmpleado.sCedula[6]) || !isdigit(NuevoEmpleado.sCedula[7]) || !isdigit(NuevoEmpleado.sCedula[8]) || 
		!isdigit(NuevoEmpleado.sCedula[9]) || !isdigit(NuevoEmpleado.sCedula[11]) || !isdigit(NuevoEmpleado.sCedula[12]) ||
		!isdigit(NuevoEmpleado.sCedula[13]) || !isdigit(NuevoEmpleado.sCedula[14]) || NuevoEmpleado.sCedula.length() != 16 ||
		NuevoEmpleado.sCedula[3] != '-' || NuevoEmpleado.sCedula[10] != '-'
		)
	{
		system("Cls");
		cout << "--- Ingrese los datos del nuevo empleado	(-1) para cancelar ---\n";
		cout << "Ingrese una cedula valida:	";
		getline(cin, NuevoEmpleado.sCedula);


		if (Cancelar(NuevoEmpleado.sCedula) == !0)
			return;
	}

	cout << "--- Ingrese los datos del nuevo empleado	(-1) para cancelar ---\n";
	cout << "Telefono:	";

	cin >> NuevoEmpleado.sTelefono;

	if (Cancelar(NuevoEmpleado.sTelefono) == !0)
		return;

	while
		(
		NuevoEmpleado.sTelefono[0] == NULL || NuevoEmpleado.sTelefono.length() != 9 
		|| NuevoEmpleado.sTelefono[4] != '-' || !isdigit(NuevoEmpleado.sTelefono[0]) 
		|| !isdigit(NuevoEmpleado.sTelefono[1]) || !isdigit(NuevoEmpleado.sTelefono[2])
		|| !isdigit(NuevoEmpleado.sTelefono[3]) || !isdigit(NuevoEmpleado.sTelefono[5])
		|| !isdigit(NuevoEmpleado.sTelefono[6]) || !isdigit(NuevoEmpleado.sTelefono[7]) 
		|| !isdigit(NuevoEmpleado.sTelefono[8])
		)
	{
		system("cls");
		cout << "--- Ingrese los datos del nuevo empleado	(-1) para cancelar ---\n";
		cout << "Ingrese un telefono valido:	";
		cin >> NuevoEmpleado.sTelefono;

		if (Cancelar(NuevoEmpleado.sTelefono) == !0)
			return;
	}

	cout << "--- Ingrese los datos del nuevo empleado	(-1) para cancelar ---\n";
	cout << "Direccion:	 ";
	cin >> NuevoEmpleado.sDireccion;

	if (Cancelar(NuevoEmpleado.sDireccion) == 1)
		return;

	while (NuevoEmpleado.sDireccion[0] == NULL || NuevoEmpleado.sDireccion.length() < 10)
	{
		cout << "Ingrese una direccion Validad:	";
		cin >> NuevoEmpleado.sDireccion;

		if (Cancelar(NuevoEmpleado.sDireccion) == !0) return;
	}
	
	cout << "--- Ingrese los datos del nuevo empleado	(-1) para cancelar ---\n";
	
	cout << "Usuario:	";
	cin >> NuevoEmpleado.sUsuario;

	if (Cancelar(NuevoEmpleado.sUsuario) == !0)
		return;


	Conexion = mysql_init(0);
	Conexion = mysql_real_connect(Conexion, "localhost", "root", "root", "farmaciapos", 3306, NULL, 0);

	string sConsulta = "select * from tblempleado";
	const char* querry = sConsulta.c_str();
	bool bQueryState = mysql_query(Conexion, querry);

	//the username is unique, so we need to check if it already exists in the database
	resultado = mysql_store_result(Conexion);

	while (fila = mysql_fetch_row(resultado))
	{
		while (NuevoEmpleado.sUsuario == fila[6])
		{
			cout << "El usuario ya existe. \n Ingrese un usuario valido:	";
			cin >> NuevoEmpleado.sUsuario;

			if (Cancelar(NuevoEmpleado.sUsuario)) return;
			
		}
	}

	cout << "--- Ingrese los datos del nuevo empleado	(-1) para cancelar ---\n";
	cout << "Contrasena:	";
	cin >> NuevoEmpleado.sContrasena;

	if (Cancelar(NuevoEmpleado.sContrasena)) return;

	while (NuevoEmpleado.sContrasena.length() > 15)
	{
		cout << "Contrasena no valida.\n Ingrese una contrasena valida:		";
		cin >> NuevoEmpleado.sContrasena;

		if (Cancelar(NuevoEmpleado.sContrasena)) return;

	}
	

	cout << "--- Ingrese los datos del nuevo empleado	(-1) para cancelar ---\n";
	cout << "A - Administrador\t V - Vendedor\n"
		<<"Rol:	";
	cin >> NuevoEmpleado.sRol;

	if (Cancelar(NuevoEmpleado.sRol)) return;
	cRol = toupper(NuevoEmpleado.sRol[0]);

	while (cRol != 'A' && cRol != 'V')
	{
		system("cls");
		cout << "A - Administrador\t V - Vendedor\n"
			<< "Rol no valido.\n Ingrese un rol valido:";
		cin >> NuevoEmpleado.sRol;
		

		if (Cancelar(NuevoEmpleado.sRol)) return;
		cRol = toupper(NuevoEmpleado.sRol[0]);
	}

	
	cLetra = toupper(NuevoEmpleado.sCedula[15]);
	NuevoEmpleado.sCedula[15] = cLetra;

	sConsulta= "Insert into tblempleado (nombre, apellido, cedula, telefono, direccion, usuario, contrasena, rol) values('" + NuevoEmpleado.sNombre + "', '" + NuevoEmpleado.sApellido + "', '" + NuevoEmpleado.sCedula + "', '" + NuevoEmpleado.sTelefono + "', '" + NuevoEmpleado.sDireccion + "', '" + NuevoEmpleado.sUsuario + "', '" + NuevoEmpleado.sContrasena + "', '" + cRol + "')";
	querry = sConsulta.c_str();
	bQueryState = mysql_query(Conexion, querry);
}

bool TieneNumero(string sOpcion)
{ 
	unsigned short int i = 0;

	for (i = sOpcion.length(); i > 0; i--)
	{
		if (isdigit(sOpcion[i]))
			return true;
	}
	return false;
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