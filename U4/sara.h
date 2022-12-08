#include <iostream>
using namespace std;

int suma(int x, int y)
{
    return (x + y);
}



int factorial(int i)
{

    int Z = 1;
    if (i != 0)
    {
        do
        {
            Z = i * Z;
            i--;

        } while (i != 0);
    }
    else
    {
        Z = 1;
    }

    return Z;
}

bool esBisiesto(int year)
{

    bool r = true;
    r = year % 400 == 0 || (year == 0 && year % 100 != 0);

    return r;
}


void gotoxy(int x, int y) {
    // Coloca el cursor en la posicion (x,y)
    cout << "\033[" << y << ";" << x << "f";
}