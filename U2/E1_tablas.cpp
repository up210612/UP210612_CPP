#include <iostream>
#include <stdio.h>
using namespace std;

int main ( )
{   

    //Tabla ascendente    
    int n=5;
    for (int i=1; i<=10;i++){

        int r= n *i;
        cout << n << " x " << i << " = " << r << endl;

    }

    cout<<endl;

    //Tabla descendiente 
    
    for (int i=10; i>=1;i--){

        int r= n *i;
        cout << n << " x " << i << " = " << r << endl;

    }

    cout<<endl;

    //while ascendente 
    
    int i=1;
    while ((i>=1) && (i <= 10)){

        int r= n *i;
        cout << n << " x " << i << " = " << r << endl;
        i++;
    }

    cout<<endl;
    
    //while descendente
    i--;
    while ((i<=10) && (i >= 1)){

        int r= n *i;
        cout << n << " x " << i << " = " << r << endl;
        i--;
    }

    cout<<endl;
    //Do while ascendete
    i++;
    do
    {
        
        int r= n *i;
        cout << n << " x " << i << " = " << r << endl;
        i++;

    } while ((i>=1) && (i <= 10));
     
     cout<<endl;

     //DO while descendente

     do
     {
        int r= n *i;
        cout << n << " x " << i << " = " << r << endl;
        i--;
     } while ((i<=10) && (i >= 1));
     


    return 0;

}

