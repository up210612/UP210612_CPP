#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    int i=1;
    int precio, sum=0; 

    cout<< "Sumador de productos indefinidos. "<<endl<<"Nota: En caso de ya no querer agregar más productos, ingrese 0"<< endl;

    do
    {  
        
       cout << "Ingrese el precio de su producto "<< i << endl;
       cin>> precio; 
       sum=sum+precio;
       i++;
    } while (precio != 0);
    
    cout<< "Usted compró "<<i-2<<" productos. Con costo total de $"<< sum<<endl;
}