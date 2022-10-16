/* Sara Itzel Garcia Vidal
UP210612
ISC03A
"Switch case para realizar operaciones básicas"
*/

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{

    char seleccion, repeat;
    int a, b;
    int result;

    do{
        cout << "Seleccione que tipo de operación desea realizar" << endl;
        cout << "a) Suma" << endl;
        cout << "b) Resta" << endl;
        cout << "c) Multiplicación" << endl;
        cout << "d) División" << endl;
        cout << "0) Salir" << endl;
        cin >> seleccion;


        switch (seleccion)
        {
        case 'a':
            cout << "Ingrese la primer cifra" << endl;
            cin >> a;
            cout << "Ingrese la segunda cifra" << endl;
            cin >> b;
            result = a + b;
            cout << "El resultado de la operación seleccionada es de " << result << endl;

            break;
        case 'b':
            cout << "Ingrese la primer cifra" << endl;
            cin >> a;
            cout << "Ingrese la segunda cifra" << endl;
            cin >> b;
            result = a - b;
            cout << "El resultado de la operación seleccionada es de " << result << endl;

            break;

        case 'c':
            cout << "Ingrese la primer cifra" << endl;
            cin >> a;
            cout << "Ingrese la segunda cifra" << endl;
            cin >> b;
            result = a * b;
            cout << "El resultado de la operación seleccionada es de " << result << endl;
            break;

        case 'd':

            cout << "Ingrese la primer cifra" << endl;
            cin >> a;
            cout << "Ingrese la segunda cifra" << endl;
            cin >> b;

            if (b != 0)
            {
                
                result = a / b;
                cout << "El resultado de la operación seleccionada es de " << result << endl;
            }
            else
            {
                cout << "No se puede dividir entre cero" << endl;
            }

            break;

        default:
            break;
        }

        cout<< "¿Desea realizar otra operación? (y/n)"<<endl;
        cin>> repeat;

    } while (repeat=='y'||repeat=='Y');
    
    return 0;
}


