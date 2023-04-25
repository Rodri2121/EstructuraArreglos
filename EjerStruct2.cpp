#include <iostream>
#include <string>

using namespace std;

struct Estudiante
{
    string nombre;
    int edad;
    string carnet;
    double promedio;
    int creditos_aprobados;
};

void Struct2();

void Struct2()
{
    const int TAMANIO = 2;
    Estudiante estudiantes[TAMANIO];

    for (int i = 0; i < TAMANIO; i++)
    {
        cout << "Ingrese los datos del estudiante #" << i + 1 << endl;
        cout << "Nombre: ";
        getline(cin, estudiantes[i].nombre);
        cout << "Edad: ";
        cin >> estudiantes[i].edad;
        cout << "Carnet: ";
        cin >> estudiantes[i].carnet;
        cout << "Promedio: ";
        cin >> estudiantes[i].promedio;
        cout << "Créditos aprobados: ";
        cin >> estudiantes[i].creditos_aprobados;
        cin.ignore();
        cout << endl;
    }

    for (int i = 0; i < TAMANIO; i++)
    {
        cout << "Estudiante #" << i + 1 << endl;
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Edad: " << estudiantes[i].edad << endl;
        cout << "Carnet: " << estudiantes[i].carnet << endl;
        cout << "Promedio: " << estudiantes[i].promedio << endl;
        cout << "Créditos aprobados: " << estudiantes[i].creditos_aprobados << endl
             << endl;
    }
}