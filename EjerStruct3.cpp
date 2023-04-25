#include <iostream>
#include <string>

using namespace std;

struct InfoPersonal
{
    string nombre;
    int edad;
    string pais;
};

struct InfoProfesional
{
    string deporte;
    int medallas_oro;
    int medallas_plata;
    int medallas_bronce;
};

struct Atleta
{
    InfoPersonal personal;
    InfoProfesional profesional;
};

void Struct3();

void Struct3()
{
    const int TAMANIO = 5;
    Atleta atletas[TAMANIO];

    for (int i = 0; i < TAMANIO; i++)
    {
        cout << "Ingrese los datos del atleta #" << i + 1 << endl;
        cout << "Nombre: ";
        getline(cin, atletas[i].personal.nombre);
        cout << "Edad: ";
        cin >> atletas[i].personal.edad;
        cin.ignore();
        cout << "País: ";
        getline(cin, atletas[i].personal.pais);
        cout << "Deporte: ";
        getline(cin, atletas[i].profesional.deporte);
        cout << "Medallas de oro: ";
        cin >> atletas[i].profesional.medallas_oro;
        cout << "Medallas de plata: ";
        cin >> atletas[i].profesional.medallas_plata;
        cout << "Medallas de bronce: ";
        cin >> atletas[i].profesional.medallas_bronce;
        cin.ignore();
        cout << endl;
    }

    for (int i = 0; i < TAMANIO; i++)
    {
        cout << "Atleta #" << i + 1 << endl;
        cout << "Nombre: " << atletas[i].personal.nombre << endl;
        cout << "Edad: " << atletas[i].personal.edad << endl;
        cout << "País: " << atletas[i].personal.pais << endl;
        cout << "Deporte: " << atletas[i].profesional.deporte << endl;
        cout << "Medallas de oro: " << atletas[i].profesional.medallas_oro << endl;
        cout << "Medallas de plata: " << atletas[i].profesional.medallas_plata << endl;
        cout << "Medallas de bronce: " << atletas[i].profesional.medallas_bronce << endl
             << endl;
    }
}