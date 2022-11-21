#include <iostream>
#include <cmath>
#include <cstring>
using namespace std; 

int main( ){

    char a[]= "sida";
    string texto= "Universidad UPA";
    string texto2("HolA");

    cout<< "contenido:  "<< texto << endl; 
    cout<< "length:  "<< texto.length() << endl; 
    cout<< "compare:  "<< texto.compare ("universidad") << endl; 
    cout<< "find:  "<< texto.find(a) << endl; 
    cout<< "substr:  "<< texto.substr(6,4) << endl; 
    cout<< "find_last:  "<< texto.find_last_of("i") << endl; 
    cout<< "replace:  "<< texto.replace(6,5, "vih")<< endl; 
    texto=texto + ".";
    cout<< "Concatenar: " << texto << endl; 
    texto.clear();
    cout<< "Clear:  "<< texto<< endl;

    texto.swap(texto2);    
    cout<< "swap:   "<< texto<<endl; 

    return 0;
}