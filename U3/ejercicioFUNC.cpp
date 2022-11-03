#include <iostream>
#include <stdio.h>
//#include <math.h>
using namespace std;

int operacion (int a, int b){

    int suma= a+b; 
    int resta= a-b; 
    int mult= a*b;
    int div= a/b; 

    return suma, resta, mult, div;

}

int main(){

    int a, b;
    int x, y, z, w;
    cout<< "Ingrese la primer cantidad de sus operaciones" <<endl; 
    cin>> a;
    cout<<"ingrese la segunda cantidad"<<endl; 
    cin>>b; 
    cout<< a << b <<endl;
    x, y, z, w = operacion (a,b);

    cout << "La suma es de "<< x<< endl; 
    cout << "El resultado de la resta es de "<< y << endl; 
    cout << "El resultado de la multiplicación es de "<< z << endl; 
    cout << "El resultado de la división es de "<< w << endl; 
    return 0;

}