/* Objetivo: SUmatoria
Debug
No se puede usar el for
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    char respuesta;

    do
    {
        int n = 0;
        int a = 0;
        
        cout << "Ingrese hasta que número desea obtener la sumatoria" << endl;
        cin >> n;

        while (n != 0)
        {
            a = a + n;
            n--;
        }
        cout << "La sumatoria es igual a " << a << endl;
        cout << "¿Desea realizar otra sumatoria? (y/n)" << endl;
        cin >> respuesta;

    } while (respuesta == 'y' || respuesta == 'Y');

    return 0;
}
