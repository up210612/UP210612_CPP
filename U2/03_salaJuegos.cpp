#include <iostream>
#include <stdio.h>
using namespace std;

int main (){
    
    int e;
    cout << "¿Qué edad tiene?" << endl;
    cin>>e;

    if (e>=4)
    {
        if (e>18){

            cout<< "Precio de su entrada es de $10"<<endl;

        }else

            cout<<"Precio de su entrada  es de $5"<<endl;

    } else 

        cout<< "Puede entrar gratis"<<endl;


}