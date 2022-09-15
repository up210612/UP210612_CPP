/* Unidad 1. Tipos de datos
Autor: Sara Itzel Garcia Vidal
Fechas: 15/09/2022
Descripción: Muestra los diferentes tipos de datos en c++
*/


/*  Librerías para manejo de entradas y salida de pantalla */
#include <iostream> 
/* Librería para el usp de printf y scanf <cstudio> también se puede usar */
#include <stdio.h>

//Uso del namescpace para evitar el std::
using namespace std; 

// FUnción principal de tipo entero
int main( )
{

    int unsigned entero = 2147483647;
    float flotante= 3.4e38;
    double grande =2.23585215828441;
    char caracter= 'A';

    cout<< "Este programa muestra los tipos de datos. \n";
    cout<< "EL numero entero es: " << entero << endl;
    cout<< "El tamaño del entero es: " <<sizeof (entero) << "bytes" << endl;
    cout<< "El caracter char es: " << caracter << endl; 
    getchar(); //Para correr en terminal

    /*
    cout<< 
    */
    return 0;
}