#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std; 

int main()
{
    int x = 0, y = 0, j = 0;

    cout << "Solo imprimir diagonal" << endl;
    cout << "Ingrese cantidad de filas" << endl;
    cin >> x;
    cout << "Ingrese columnas" << endl;
    cin >> y;
    cout << endl;
    //cout << endl;

    int ej[100][100];
    int valor = 1;

    for (int i = 0; i <= x - 1; i++)
    {
        
         ej[i][i] = valor;
         valor = valor +(x+1);
         cout << ej[i][i]<< " "; 
         
     }

        printf("\n");
          return 0;
    }

// tarea: suma por renglones y columnas



 /*valor = valor + 1;
            ej[i][j] = valor;
            if (i == j)
            {
                cout << ej[i][j]; // << "  ";
                
            }
            else
            {
                cout << " ";
            }*/