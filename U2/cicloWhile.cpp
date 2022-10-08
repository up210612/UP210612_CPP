#include <iostream>
#include <stdio.h>
using namespace std;

int main ( ){

    char d;
    int n;

    do
    {
        cout<< "¿Qué tabla de multiplicar desea ver?"<<endl;
        cin>> n;
        cout<< "La tabla del " << n << endl;
        for (int i=1; i<=10;i++){

    
            cout << n << " x " << i << " = " << n*i << endl;
            
        }
        cout << endl << "¿Desea ver otra tabla de multiplicar? (y/n)" << endl;
        cin>> d;

    } while (d== 'y' || d== 'Y');
    

}


