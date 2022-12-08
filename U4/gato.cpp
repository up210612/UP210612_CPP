
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cstring>
using namespace std;



int main()
{
    int i=1, resultado;
    string jugada;
    string mensaje("jugar");
    char select;
    char simbolo[1];
    string sector1("1    |   |   ");
    string sector2("2    |   |   ");
    string sector3("3    |   |   ");
    string separador("  ---|---|---");

    cout << "   A   B   C   " << endl;
    cout << sector1 << endl;
    cout << separador << endl;
    cout << sector2 << endl;
    cout << separador << endl;
    cout << sector3 << endl;
    cout << endl;

    cout << "Juego del gato" << endl;

    /*cout << "¿Desea " << mensaje << "? (y/n)" << endl;
    cin >> select;*/
    mensaje.replace(0, 5, "seguir");

    /*cout << "Ingrese su jugada (Tipo: A1)" << endl;
    cin >> jugada;
    int largo=jugada.length();
    cout<<jugada.substr(1,1)<<endl;*/

    do
    {
        if (i%2==0){
            simbolo[0]='X';
        }else{
            simbolo[0]='O';
        } 
        cout << "Ingrese su jugada (Tipo: A1)" << endl;
        cin >> jugada;

        if (jugada[0] == 'A')
        {

            if (jugada[1] == '1')
            {
                sector1.replace(3, 1, simbolo);
            }
            else if (jugada[1] == '2')
            {
                sector2.replace(3, 1, simbolo);
            }
            else
            {
                sector3.replace(3, 1, simbolo);
            }
        }

        if (jugada[0] == 'B')
        {

            if (jugada[1] == '1')
            {
                sector1.replace(7, 1, simbolo);
            }
            else if (jugada[1] == '2')
            {
                sector2.replace(7, 1, simbolo);
            }
            else
            {
                sector3.replace(7, 1, simbolo);
            }
        }

        if (jugada[0] == 'C')
        {

            if (jugada[1] == '1')
            {
                sector1.replace(11, 1, simbolo);
            }
            else if (jugada[1] == '2')
            {
                sector2.replace(11, 1, simbolo);
            }
            else
            {
                sector3.replace(11, 1, simbolo);
            }
        }

        cout << "   A   B   C   " << endl;
        cout << sector1 << endl;
        cout << separador << endl;
        cout << sector2 << endl;
        cout << separador << endl;
        cout << sector3 << endl;
        cout << endl;

        i++;
        if(i==10){
            break;
        }
        cout << "¿Desea " << mensaje << "? (y/n)" << endl;
        cin >> select;
        

    } while (select == 'Y' || select == 'y');

    return 0;
}


//si es impar es X, si es par, es O