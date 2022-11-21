#include <iostream>
#include <cmath>
#include <cstring>
using namespace std; 

int main(){

    char *apt;
    char texto [100]="UPA ";
    strcat (texto, "La mejor"); 
    apt=strchr (texto, 'm');
    cout<< apt <<endl; 
    

    return 0; 

}