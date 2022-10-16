#include <iostream>
#include <stdio.h>
using namespace std;

int main ( ){

int r;
cout<<"¿Cuánto paga usted de renta?" << endl;
cin>> r;    

if (r>10000)
    {
        if (r<= 20000){

            cout<< "El impuesto a pagar de renta es de "<< r*.15 << " pesos. Por ende, usted debe pagar "<< r*.15 + r << endl;

        }else if (r<=35000){

            cout<< "El impuesto a pagar de renta es de "<< r*.20 << ". Por ende, usted debe pagar "<< r*.20 + r << endl;

        }else if(r<=60000){
            
            cout<< "El impuesto a pagar de renta es de "<< r*.30 << ". Por ende, usted debe pagar "<< r*.30 + r << endl;

        }else 
             cout<< "El impuesto a pagar de renta es de "<< r*.45 << ". Por ende, usted debe pagar "<< r*.45 + r << endl;

    } else 
        cout<< "El impuesto a pagar de renta es de "<< r*.05 << ". Por ende, usted debe pagar "<< r*.05 +r << endl;

return 0;

}