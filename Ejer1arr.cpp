#include <iostream>

using namespace std;

void Arr1();

void Arr1()
{
    char valores[] = {'0', '1', '5', '7', '-', 'M', 'P', '2', '0', '2', '3'};

    for (int i = 0; i < sizeof(valores) / sizeof(char); i++)
    {
        cout << valores[i] << " ";
    }
    cout << endl;

}