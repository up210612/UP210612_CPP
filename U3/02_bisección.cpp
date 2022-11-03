#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std; 

double fnEcuacion1 (double x){  //x²-8x+15

    double y;
       return ((pow (x,2)) - 8*x + 15);
     //y = pow (x,2) - 8*x + 15;
    // return y;

}


int main()
{
    double x1=4;
    double x2=7;
    double xm;

    double errorAb = .001;  //Error absoluto /estandar. 
    double errorRe = abs(x2 - x1); //error relativo con valor avsoluto para descartar el signo 
    int i= 1;
    while (errorRe> errorAb){

        xm = (x1+x2)/2;
        //y1 = fnEcuacion1(x1);
        //y2 =fnEcuacion1 (xm);

        if (fnEcuacion1(x1)*fnEcuacion1 (xm) <0 ){
            x2 =xm;
        } else {
            x1=xm;
        }
        errorRe = abs ((x2 -x1));
        i = i+1;
    } 

    cout << "i= "<< i << " raiz= "<< xm << endl;
    cout << ". . . Terminado" << endl;

   /* double r = fnEcuacion1 (0);
    cout<< r<<endl; */

    return 0;
}
