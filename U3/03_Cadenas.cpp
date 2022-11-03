#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std; 

int main (){

    string word;
    cout<< "Ingrese su texto. No agregue espacios."<<endl; 
    cin>> word; 

    // Para saber el largo de mi string
    int largo= word.length();

    for ( int i=0; i <= largo; i++)
    {
        if (islower(word[i])){
            word[i]= toupper(word[i]);

        } else {
             word[i]= tolower(word[i]);

        }
    }

    cout << word << endl;
    return 0;


}

//al hacer cadena, para ubicar cuando dejan de haber caracteres, usas '\0' que significa nulo.