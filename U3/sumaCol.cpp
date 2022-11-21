#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std; 


int main (){


    int ej [5][5];
    int valor=0, sum=0;

    for ( int i= 0 ; i<=5-1;i++ )
    {
        for (int j=0; j<=5-1 ;j++){
            valor=valor+1; 
            ej[i][j]= valor;
            cout<< ej[i][j]<<"  ";
            sum=sum +ej[j];
        }
        cout<<endl; 
        sum= sum +ej[i];
    }
    cout<<endl;

    return 0; 

}