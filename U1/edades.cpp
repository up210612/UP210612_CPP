#include <iostream>
#include <stdio.h>
using namespace std;

int main ( )
{
    int edad;
    printf ("¿Cuántos años tiene? ");
    scanf ("%d",&edad);

    if (edad>= 1 && edad <=150)
    {
        if (edad >=1 && edad <= 30)
        {
            printf ("Primera edad");

        } else if (edad>= 31 && edad <=60)
                {
                    printf ("Segunda edad");

        } else if (edad>= 61 && edad <=90)
                {   
                    printf ("tercera edad");

        } else 
                printf ("Horas extras");

        
    } else printf ("Edad ingresada no válida");

      



}