

#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int impar = 0;
    int par = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i %2 == 0)
        {
            par = par +i;
            
        } else {
            impar= impar+i;
            // Tambien se puede poner com suma+=i;
        }
        
    }

    printf("La suma de los pares es %d \n", par);
    printf ("La suma de los impares es %d \n", impar);
    int suma= par+impar;
    printf ("La suma total es de %d \n", suma);
    
    return 0;
}