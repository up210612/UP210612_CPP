#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{

    int datos = 0, i = 1, acumular = 0, media = 0, Z = 0;
    int vector[100];
    float DE,DP, A = 0;
    cout << "Desviación Estandar Poblacional" << endl;
    cout << "Nota: coloque 0 cuando NO deseé agregar más datos" << endl;
    cout << endl;

    do
    {

        cout << "Ingrese el dato " << i << endl;
        cin >> datos;
        vector[i] = datos;
        i++;

    } while (datos != 0);

    for (int j = 1; j <= i; j++)
    {
        acumular = acumular + vector[j];
    }
    media = acumular / (i - 2);
    cout << endl;
    cout << "La media de los datos es igual a " << media << endl;
    cout << endl;

    for (int j = 1; j <= i - 2; j++)
    {
        Z = pow((vector[j] - media), 2);
        // cout << Z << endl;
        A = A + Z;
    }
    // out << A << endl;
    DE = A / (i - 2);
    DE = sqrt(DE);
    cout << "La desviación Estandar poblacional de los datos ingresados es igual a " << DE << endl;
    cout << endl;

    DP = A / (i - 3);
    DP = sqrt(DP);
    cout << "La desviación Estandar de la muestra es igual a " << DP << endl;
    cout << endl;



    return 0;
}