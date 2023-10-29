#include "prototipos.h"
#include <iostream>
using namespace std;




void Empleado :: AgregarEmpleado()
{
	Empleado NuevoEmpleado;
    char cRol;
    char cLetra;
    bool bTieneNumero = false;
    int i = 0;

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

    cout << "--- Ingrese los datos del nuevo empleado    (-1) para cancelar ---\n";
    cout << "Apellido:    ";
    cin >> NuevoEmpleado.sApellido;


    bTieneNumero = TieneNumero(NuevoEmpleado.sApellido);


    if (Cancelar(NuevoEmpleado.sApellido) == !0)
        return;

    while (NuevoEmpleado.sApellido[0] == NULL || bTieneNumero)
    {
        bTieneNumero = TieneNumero(NuevoEmpleado.sApellido);
        system("cls");
        cout << "--- Ingrese los datos del nuevo empleado    (-1) para cancelar ---\n";
        cout << "Ingrese un apellido valido:    ";
        getline(cin, NuevoEmpleado.sApellido);


        if (Cancelar(NuevoEmpleado.sApellido) == !false)
            return;
    }


    cout << "--- Ingrese los datos del nuevo empleado    (-1) para cancelar ---\n";
    cout << "Cedula:    ";
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
        cout << "--- Ingrese los datos del nuevo empleado    (-1) para cancelar ---\n";
        cout << "Ingrese una cedula valida:    ";
        getline(cin, NuevoEmpleado.sCedula);


        if (Cancelar(NuevoEmpleado.sCedula) == !0)
            return;
    }


    cout << "--- Ingrese los datos del nuevo empleado    (-1) para cancelar ---\n";
    cout << "Telefono:    ";


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
        cout << "--- Ingrese los datos del nuevo empleado    (-1) para cancelar ---\n";
        cout << "Ingrese un telefono valido:    ";
        cin >> NuevoEmpleado.sTelefono;


        if (Cancelar(NuevoEmpleado.sTelefono) == !0)
            return;
    }


    cout << "--- Ingrese los datos del nuevo empleado    (-1) para cancelar ---\n";
    cout << "Direccion:     ";
    cin >> NuevoEmpleado.sDireccion;


    if (Cancelar(NuevoEmpleado.sDireccion) == 1)
        return;


    while (NuevoEmpleado.sDireccion[0] == NULL || NuevoEmpleado.sDireccion.length() < 10)
    {
        cout << "Ingrese una direccion Validad:    ";
        cin >> NuevoEmpleado.sDireccion;


        if (Cancelar(NuevoEmpleado.sDireccion) == !0) return;
    }

    cout << "--- Ingrese los datos del nuevo empleado    (-1) para cancelar ---\n";

    cout << "Usuario:    ";
    cin >> NuevoEmpleado.sUsuario;


    if (Cancelar(NuevoEmpleado.sUsuario) == !0)
        return;

    //Validacion de usuario
    /*
        while (NuevoEmpleado.sUsuario == fila[6])
        {
            cout << "El usuario ya existe. \n Ingrese un usuario valido:    ";
            cin >> NuevoEmpleado.sUsuario;


            if (Cancelar(NuevoEmpleado.sUsuario)) return;

        }
    }
    */


    cout << "--- Ingrese los datos del nuevo empleado    (-1) para cancelar ---\n";
    cout << "Contrasena:    ";
    cin >> NuevoEmpleado.sContrasena;


    if (Cancelar(NuevoEmpleado.sContrasena)) return;


    while (NuevoEmpleado.sContrasena.length() > 15)
    {
        cout << "Contrasena no valida.\n Ingrese una contrasena valida:        ";
        cin >> NuevoEmpleado.sContrasena;


        if (Cancelar(NuevoEmpleado.sContrasena)) return;


    }



    cout << "--- Ingrese los datos del nuevo empleado    (-1) para cancelar ---\n";
    cout << "A - Administrador\t V - Vendedor\n"
        << "Rol:    ";
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



void Empleado::getData()
{
	cout << "Ingrese el nombre del empleado: ";
	cin >> sNombre;
	cout << "Ingrese el apellido del empleado: ";
	cin >> sApellido;
}

void Empleado::ImprimirDatos()
{
	cout << "Nombre: " << sNombre << endl;
	cout << "Apellido: " << sApellido << endl;
}