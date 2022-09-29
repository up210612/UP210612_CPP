/* Unidad 1. Tipos de datos
Autor: Sara Itzel Garcia Vidal
Fechas: 27/09/2022
Descripción: resolución del ejercicio 1 "Impuestos"
*/

#include<iostream>
#include <stdio.h>
using namespace std;

int main ( )
{

   int renta;
    printf ("¿De cuánto es su renta anual? ");
    scanf("%d", &renta);

    if (renta> 10000)
{
        if (renta <= 20000)
        {
            printf("Le corresponde un importe del 15%");
        }else if (renta<= 35000)
            {
                printf("Le corresponde un impuesto del 20%");
            }else if (renta <= 60000)
               { printf("EL impuesto que le corresponde es del 30%");

                 }else printf("El impuesto que le corresponde es del 45%");

}else printf("Le corresponde un impuesto del 5%");

return 0;

}