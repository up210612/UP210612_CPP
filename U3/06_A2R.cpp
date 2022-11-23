#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{

    int n, v;
    int valor[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string sigla[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string num = "";
    int i = 0;

    cout << "Ingrese número arábigo a convertir" << endl;
    cin >> n;
    while (n > 0)
    {
        if (n >= valor[i])
        {
            v = n / valor[i];
            n = n % valor[i];
            for (int j = 0; j < v; j++)
            {
                num = num + sigla[i];
            }
        }
        i++;
    }
    cout << num << endl;
    return 0;
}