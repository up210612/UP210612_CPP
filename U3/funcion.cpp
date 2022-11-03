#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

string change (string word ){

    int largo= word.length();
    for ( int i=0; i <= largo; i++)
    {
        if (islower(word[i])){
            word[i]= toupper(word[i]);

        } else {
             word[i]= tolower(word[i]);

        }
    }
    
    return word;
}

int main( ){

    string word; 
    cout<< "Ingrese su texto. No agregue espacios."<<endl; 
    cin>> word;
    string a= change(word);
   cout<< a <<endl;
    return 0;

}