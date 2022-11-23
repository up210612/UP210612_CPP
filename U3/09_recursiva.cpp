#include<iostream>
using namespace std;

int factorial(int n);

int main(){
   int n, r;
   cout << "FACTORIAL : Escribe un numero : ";
   cin >> n;
   r=factorial(n);
   cout << n << "! = " << r << endl;
}

int factorial(int n) {
   if(n < 0) return 0;
   else if(n > 1) return n*factorial(n-1); // Recursividad: n>1
   return 1; // Condición para n == 1 y n == 0 
}