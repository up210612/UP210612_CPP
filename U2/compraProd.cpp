#include <iostream>
#include <stdio.h>
using namespace std;

int main (){

    int precio;
    int total =0;
    int i=1;
    
    do
    {
        cout<< "Ingrese el precio del producto "<< i << endl<< "SI NO HAY MÁS, MARQUE 0" << endl;
        cin>> precio;
        

        total =total +precio; 
        i++;

    } while (precio != 0);

    cout<< "Usted compró " << i-1 << " productos. Con un total de $" << total<< endl;

    return 0; 
}