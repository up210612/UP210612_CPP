#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{

    int billete[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int vect[10] = {0};
    int cantidad = 0;
    cout << "Ingrese cantidad requerida" << endl;
    cin >> cantidad;

    for (int j = 0; j <= 9; j++)
    {
        while (cantidad >= billete[j])
        {
            vect[j] = vect[j] + 1;
            cantidad = cantidad - billete[j];
        }

        cout << vect[j] << " billetes de " << billete[j] << endl;
    }

    cout<<endl;

    return 0;
}