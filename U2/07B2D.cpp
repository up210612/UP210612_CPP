/* Objetivo: Factorial
Debug
No se puede usar el for
*/

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int potencia, resultado;
    string bits;
    cout << "Ingrese un número binario" << endl;
    cin >> bits;
    int largo = bits.length();

    for (int i = (largo - 1); i >= 0; i--)
    {
        if (bits[i] = 1)
        {
          potencia= pow(2,(largo - 1) -i);
          resultado=resultado +potencia;

        }
    
    }

    cout<< "El valor en decimal del número binario ingresado es de " << resultado << endl;

}