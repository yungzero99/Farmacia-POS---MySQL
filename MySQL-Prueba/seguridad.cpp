#include <iostream>
#include "prototipos.h"
#include <string>
using namespace std;

Empleado empleado;

void Iniciar_Sesion()
{
	string sUsuario, sContrasena;





		cout << "\nIngrese usuario: ";
		cin >> sUsuario;

		cout << "\nIngrese contrasena: ";
		cin >> sContrasena;

		/*while (1)
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
		*/
	
	cout << "Usuario o contrasena incorrectos" << endl;
	
	
	return;
}
/*
bool Cancelar(string sOpcion)
{
	if (sOpcion == "-1")
		return !0;
	return 0;
}
void VerEmpleados()
{

}
*/