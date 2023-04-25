#include <iostream>
#include <string>

using namespace std;

struct Dispositivo
{
    string nombre;
    string marca;
    double precio;
    int cantidad;
};

void Struct1();

void Struct1()
{
    const int TAMANIO = 4;
    Dispositivo dispositivos[TAMANIO] = {
        {"Celular", "Samsung", 150.50, 20},
        {"Tablet", "Apple", 300.99, 10},
        {"Smart TV", "LG", 500.00, 5},
        {"Laptop", "Dell", 800.00, 8}};

    for (int i = 0; i < TAMANIO; i++)
    {
        cout << "Dispositivo #" << i + 1 << endl;
        cout << "Nombre: " << dispositivos[i].nombre << endl;
        cout << "Marca: " << dispositivos[i].marca << endl;
        cout << "Precio: $" << dispositivos[i].precio << endl;
        cout << "Cantidad: " << dispositivos[i].cantidad << endl
             << endl;
    }
}
