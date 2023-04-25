#include "Ejer1arr.cpp"
#include "Ejer2arr.cpp"
#include "Ejer3arr.cpp"
#include "EjerStruckt1.cpp"
#include "EjerStruct2.cpp"
#include "EjerStruct3.cpp"
#include <iostream>

using namespace std;

void MenuArreglos();
void MenuEstruct();

int main()

{

    int opc;
    do
    {
        cout << "----- MENÚ PRINCIPAL -----" << endl;
        cout << "1. Arreglos" << endl;
        cout << "2. Estructuras" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese su opción: ";
        cin >> opc;
        switch (opc)
        {
        case 1:
            MenuArreglos();
            cout << "hola mundo";
            break;
        case 2:
            MenuEstruct();
            break;
        case 3:
            cout << "¡Hasta luego!" << endl;
            break;
        default:
            cout << "Opción inválida. Intente nuevamente." << endl;
            break;
        }
    } while (opc != 3);

    return 0;
}

void MenuArreglos()
{
    int opc;
    do
    {
        cout << "-MENÚ DE ESTRUCTURAS-" << endl;
        cout << "1. Ejercicio 1" << endl;
        cout << "2. Ejercicio 2" << endl;
        cout << "3. Ejercicio 3" << endl;
        cout << "4. Volver al menú principal" << endl;
        cout << "Ingrese su opción: ";
        cin >> opc;
        switch (opc)
        {
        case 1:
            Arr1();

            break;
        case 2:
            Arr2();

            break;
        case 3:
            Arr3();

            break;
        case 4:
            cout << "Regresó al menu principal" << endl;
            break;
        default:
            cout << "Opción inválida." << endl;
            break;
        }
    } while (opc != 4);
}

void MenuEstruct()
{
    int opc;
    do
    {
        cout << "-MENÚ-" << endl;
        cout << "1. Ejercicio 1" << endl;
        cout << "2. Ejercicio 2" << endl;
        cout << "3. Ejercicio 3" << endl;
        cout << "4. Volver al menú principal" << endl;
        cout << "Ingrese su opción: ";
        cin >> opc;
        switch (opc)
        {
        case 1:
            Struct1();

            break;
        case 2:
            Struct2();

            break;
        case 3:
            Struct3();

            break;
        case 4:
            cout << "Regresó al menu principal" << endl;
            break;
        default:
            cout << "Opción inválida." << endl;
            break;
        }
    } while (opc != 4);
}