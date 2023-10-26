/**********************************************************************************************************************
Nombre del modulo:      Main.cpp
Nombre Aplicacion:      Sistema de farmacia
Autor:                  Carlos F. Roque
Lenguaje Desarrollo:    C++ Consola
Version:                1.0
Modulos externos:       Si
Estilo de codficacion:  Notacion Hungara, CamelCase
*
Descripcion:            Sistema de manejo de inventario y facturacion
*						de una farmacia en
*						consola escrito en C++ y Base de datos en MySQL
*
*
*
*
*
*
Fecha:                  21/08/2023
**********************************************************************************************************************/

// control de nombre cientifico, marca, laboratorio, generica y control bajo receta.

/*

#include <iostream>
#include <mysql.h>
#include "inventario.h"
#include "clientes.h"
#include "Empleados.h"
#include "venta.h"
//#include "Menu.h"

bool bQueryState;


using namespace std;

int main(void)
{
    MYSQL* Conexion;


    Conexion = mysql_init(0);
    Conexion = mysql_real_connect(Conexion, "localhost", "root", "root", "farmaciapos", 3306, NULL, 0);

    cout << "Valor de conexio: " << Conexion;

    if (Conexion)
    {
        cout << "Conexion exitosa" << endl;
        //insert into table tblempleado the next values: nombre, apellido, cedula, telefono, direccion, usuario, passwd, rol
        string nombre = "Carlos", apellido = "Roque", cedula = "001-190705-1046P", telefono = "1234-5678", direccion = "col CA", usuario = "admin123", passwd = "admin123";
        char rol = 'A';

        //string insertar = "insert into tblprueba (nombre, apellido, cedula, telefono, direccion, usuario, contrasena, rol) values ('" + nombre + "', '" + apellido + "')";
        string insertar = "insert into tblempleado (nombre, apellido, cedula, telefono, direccion, usuario, contrasena, rol) values ('" + nombre + "', '" + apellido + "', '" + cedula + "', '" + telefono + "', '" + direccion + "', '" + usuario + "', '" + passwd + "', '" + rol + "')";
        const char* querry = insertar.c_str();
        bQueryState = mysql_query(Conexion, querry);

        if (!bQueryState)
        {
            cout << "Insercion exitosa" << endl;

        }
        else
        {
            Iniciar_Sesion();
            VerEmpleados();
            cout << "Insercion fallida" << endl;
        }
    }
    else
    {
        cout << "Conexion fallida" << endl;
    }

    return 0;
}

*/