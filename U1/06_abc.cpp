/* Unidad 1. Tipos de datos
Autor: Sara Itzel Garcia Vidal
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

    
    for (int i = 1; i < 11; i++)
    {
        cout << i << "\t";
        
    }
    return 0;
}