// avarage o
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std; 

int main (){

    /*int cal [5];
    cal[0]=10;
    cal[1]=9;
    cal[2]=8;
    cal[3]=7;
    cal[4]=8;*/

    int cal2[] = {10, 5, 6, 8,9};
    int n=5;
    int total=0;

    for (int i=0; i<n; i++)
    {
       total+= cal2[i];
    }
    cout<<total<<endl;
    cout << total/n << endl;

    //int meses[]={0, 31, 28}
    return 0;
}