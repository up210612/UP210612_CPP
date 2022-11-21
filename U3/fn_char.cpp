#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cstring> //para c++
#include<string.h> // para C nativo


using namespace std;

int main()
{

    char texto[20] = "u6n62i0vers0id0ad92";
    char letra = 'A';
    char texto2 =('A','D','I','O','S', '\0');

    for (int i = 0; texto[i] != '\0'; i++)
    {
        cout << texto[i] << "  ";
    }

    cout << endl;
    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] != 'a' && texto[i] != 'e' && texto[i] != 'c' && texto[i] != 'i' && texto[i] != 'o' && texto[i] != 'u')
        {
            cout << texto[i] << " ";
        }
    }

    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (int islower(texto[i]))
        {
            int toupper(texto[i]);
            cout << texto[i] << " ";
        }
    }

    return 0;
}

/*if (int i =0; texto[i]=isdigit){

        }*/