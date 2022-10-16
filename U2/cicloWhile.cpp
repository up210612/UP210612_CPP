#include <iostream>
#include <stdio.h>
using namespace std;

int main (){

    
    int i;
    int n;
    // Impresion de tablas de multiplicar solicitada por el usuario
    char d;
    
    do
    {
        cout<< "¿Qué tabla de multiplicar desea ver?"<<endl;
        cin>> n;
        cout<< "La tabla del " << n << endl;
        for (i=1; i<=10;i++){

    
            cout << n << " x " << i << " = " << n*i << endl;
            
        }
        cout << endl << "¿Desea ver otra tabla de multiplicar? (y/n)" << endl;
        cin>> d;

    } while (d== 'y' || d== 'Y');
    

        

//Impresion de tablas hasta determinado numero

int y;
cout  << "¿Hasta que tabla de multiplicar desea ver?" << endl;
cin>> y;
for (i = 1; i <= y; i++)
    {
    
        for (n = 1; n <=10; n++)
        {
        cout << n << " x " << i << " = " << n*i << endl;

        }
    
        cout<<endl;
    
    }

    return 0;

}