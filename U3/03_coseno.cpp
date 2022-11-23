#include <iostream>
#include <stdio.h>
#include <math.h>
#include "sara.h"
using namespace std;

int main (){
    
    double signo=-1, rad,coseno,acumular=0; 
    int expo=0; 
    cout<< "Coseno de que grado desea obtener"<<endl; 
    cin>> rad;
    rad= G2R(rad); 
    
    for(int i=0; i<=5; i++){
      double fact=  factorial(expo);
      signo=signo*-1;
      coseno=signo*((pow(rad,expo))/factorial(expo)); 
      acumular=acumular+coseno;
      expo=expo+2; 

    }

    cout<< "Resultado= "<< acumular<<endl; 
    
    
}