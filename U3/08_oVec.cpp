#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int i, j,n, temp, vector[100];
    cout << "¿Cuantos números deseas ingresar?" << endl;
    cin >> n;

    for (i = 0; i <= n; i++)
    {
        cout << "Ingresa un número" << endl;
        cin >> vector[i];
    }

    // método de la burbuja

    for (i = 0; i < n - 1; i++)
    {

        for (j = 0; j < n - 1; j++)
        {
            if (vector[j] > vector[j + 1])
            {
                temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }

    for (i = 0; i <= n; i++)
    {
        cout << vector[i] << endl;
    }
    return 0;
}