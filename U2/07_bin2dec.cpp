#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std; 

int main (){

    string bin; 
    int largo,i, sum=0;
    cout<< "Ingrese número binario a convertir. Sin espacios."<<endl; 
    cin>>bin; 
    largo= bin.length();
  
    for (i = largo-1; i>=0; i--)
    {
        if (bin[i]== '1')
        {
            sum=  sum + pow(2,((largo-1)-i));
        }
     
    }

    cout << "EL número ingresado, en decimal es igual a "<< sum<<endl;
    

}
