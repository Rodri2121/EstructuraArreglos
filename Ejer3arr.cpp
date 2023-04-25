#include <iostream>
#include <string>

using namespace std;

void Arr3();

void Arr3()
{

    const int TAMANIO = 3;
    string valores[TAMANIO];

    cout << "Introduzca las palabras a almacenar: ";
    for (int i = 0; i < TAMANIO; i++)
    {
        cin >> valores[i];
    }

    for (int i = 0; i < TAMANIO; i++)
    {
        for (int j = 0; j < valores[i].length(); j++)
        {
            cout << "'" << valores[i][j] << "' ";
        }
        cout << endl;
    }
}