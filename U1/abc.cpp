/* Unidad 1. Tipos de datos
Autor: Sara Itzel Garcia Vidal
Fechas: 27/09/2022
Descripción: Impresión del abecedario"*/

// Imprimir de la Z a la A

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    char letra = 'Z';
    for (int i = 0; i < 26; i++)
    {
        cout << letra << "\t";
        letra = letra - 1;
    }
    cout << endl;
    cout << endl;

    // Imprimir en mayúsculas y minúsculas

    letra = 'A';
    for (int i = 0; i < 26; i++)
    {
        cout << letra << "\t";
        letra = letra + 1;
    }
    cout << endl;
    cout << endl;

    char letra1 = 'a';
    for (int i = 0; i < 26; i++)
    {
        cout << letra1 << "\t";
        letra1 = letra1 + 1;
    }
    cout << endl;
    cout << endl;

    // Del 1 al 10

    int num = 1;
    for (int i = 0; i < 10; i++)
    {
        cout << num << "\t";
        num = num + 1;
    }
    return 0;
}