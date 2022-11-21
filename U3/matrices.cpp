#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std; 


int main (){

    /*int matriz [2][3];
    matriz [1][2]=6;
    */
    int x=0,y=0; 
    cout<< "ingrese cantidad de filas"<<endl;
    cin>>x;
    cout<<"ingrese columnas"<<endl;
    cin>>y;

    int ej [100][100];
    int valor=0;

    for ( int i= 0 ; i<=x-1;i++ )
    {
        for (int j=0; j<=y-1 ;j++){
            valor=valor+1; 
            ej[i][j]= valor;
            cout<< ej[i][j]<<"  ";
        }
        printf("\n");
       //cout<<endl; 
    }
    cout<<endl;


    cout<<"Traspuesta"<<endl; 
    cout<<endl; 
    for(int i =0;i<y;i++ ){

        for (int j =0; j<x; j++){
            cout<< ej[j][i]<<"  ";
        }
        cout<<endl; 
    }

    

    return 0;
}