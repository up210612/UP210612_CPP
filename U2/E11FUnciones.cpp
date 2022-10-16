/* Objetivo: Factorial
Debug
No se puede usar el for
*/

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

//las funciones se hacen fuera del main

int doble(int a){

    int r; 
     
    r=a*2;
    //siempre debe ir un return
    return r;

}

int main (){

    int x = 5;
    //importa el orden en que ingreso las variables que va a leer mi funcion
    int r= doble (x);
    cout<< r << endl; 
    return 0;


}