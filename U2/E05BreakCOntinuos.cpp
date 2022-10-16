/*

Falta agregar datos del archivo

*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    int n = 5;
    for (int i = 0; i <= 10; i++)
    {
        if (i == 6)
        {
            continue;
        }
        else
        {
            cout << i << endl;
        }
        cout << "Siguiente número" << endl;
    }
    cout << ". . . Hecho" << endl;
    return 0;
}

// continue se regresa al inicio del for sin ver más instrucciones.
// Break se salta la instrucción del ciclo. Se sale por completo del ciclo y ya no repite. Continua con lo que va después