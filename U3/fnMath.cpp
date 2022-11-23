#include <iostream>
#include <cmath>
#include <math.h> 
#include "sara.h"
using namespace std; 

bool esBisiesto(int year){
    
    bool r= true;
    r = year%400==0||(year==0 && year%100!=0);
    return r; 
}


int main()
{
    double a= 45;
    cout<< seno(a)<<endl; 
    cout<< suma(5,7)<<endl; 

    return 0; 
}

//atoi y atof
