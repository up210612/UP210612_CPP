/* Objetivo: Factorial
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
        int a = 1;
        
        cout << "Ingrese el numero del que desea su factorial" << endl;
        cin >> n;

        if (n != 0)
        {

            while (n != 0)
            {
                a = a * n;
                n--;
            }
            cout << "EL resultado del factorial pedido es de " << a << endl;
        }
        else
            cout << "EL resultado del factorial pedido es 1." << endl;
            cout << "¿Desea ver otro factorial? (y/n)" << endl;
            cin >> respuesta;

    } while (respuesta == 'y' || respuesta == 'Y');

    return 0;
}
