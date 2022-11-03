/* Unidad 2. Impuestos
Autor: Sara Itzel Garcia Vidal
*/


#include<iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main ( ){
 
  char ev;
 do
 {

    char op;
    int valor=2400;

    cout<<"La puntuación de su empleado fue"<< endl<< "a) 0.0" << endl << "b) 0.4" << endl<< "c) 0.6"<<endl;
    cin>> op; 

    switch (op)
    {
    case 'a':
        cout<< "El nivel de rendimiento del empleado fue inaceptable, por lo que se le otorga un beneficio de $" << 0.0*valor << endl; 
        break;

    case 'b':
        cout<< "El nivel de rendimiento del empleado fue aceptable, por lo que se le otorga un beneficio de $" << 0.4*valor << endl; 
        break;

    case 'c':
        cout<< "El nivel de rendimiento del empleado fue meritorio, por lo que se le otorga un beneficio de $" << 0.6*valor << endl;
        break;

    default:
        cout<< "Opción ingresada no válida."<<endl; 
        break;
    }

    cout<< "¿Desea evaluar a otro empleado? (y/n)"<<endl;
    cin>> ev;
    
 }  while  (ev == 'y' || ev == 'Y');

}

