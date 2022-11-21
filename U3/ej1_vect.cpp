// avarage o
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std; 

int menorV (int x[], int n){

    int menor = x[0]; 
    
        for (int i = 0; i< n;i++)
    {
        if (x[i]<menor){
            menor = x[i];
        }
    }
    
    return menor; 
}

int mayor2(int x, int y){
    int mayor;
    mayor= (x>y)? x: y;
    // If TERNARIO mayor= ()? true: false;

    return mayor; 
}

int main (){

    /*int cal [5];
    cal[0]=10;
    cal[1]=9;
    cal[2]=8;
    cal[3]=7;
    cal[4]=8;*/
    
     

    int cal2[] = {10, 9, 8, 7, 6};
    int n=5;
    int total=0;

    int menor= menorV(cal2, 5);
    cout<< "El menor es igual a "<< menor<<endl;


    /*for (int i=0; i<n; i++)
    {
       total+= cal2[i];
    }
    cout<<total<<endl;
    cout << total/n << endl;

    
    */ 

    //int meses[]={0, 31, 28}
    return 0;
}